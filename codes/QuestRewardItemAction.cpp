void QuestRewardItemAction___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct QuestRewardItemAction_StaticFields *static_fields; // x0
  int32_t v8; // w1

  if ( (byte_4CEB36C & 1) == 0 )
  {
    sub_1C7BAE8(&QuestRewardItemAction_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5904/*"Effect/Talk/GetTitleSprites/"*/);
    sub_1C7BAE8(&StringLiteral_16328/*"_MaskTex"*/);
    byte_4CEB36C = 1;
  }
  static_fields = QuestRewardItemAction_TypeInfo->static_fields;
  static_fields->ITEM_LABEL_MAX_WIDTH = 1024;
  v8 = StringLiteral_5904/*"Effect/Talk/GetTitleSprites/"*/;
  static_fields->GetSpritesTexturePath = (struct System_String_o *)StringLiteral_5904/*"Effect/Talk/GetTitleSprites/"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->GetSpritesTexturePath, v8, v1, v2, v3, v4, v5, v6);
  QuestRewardItemAction_TypeInfo->static_fields->MaskTex = UnityEngine_Shader__PropertyToID(
                                                             (System_String_o *)StringLiteral_16328/*"_MaskTex"*/,
                                                             0);
}


void QuestRewardItemAction___ctor(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_T__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  if ( (byte_4CEB36B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ValueTuple_UISprite__UITexture___TypeInfo);
    sub_1C7BAE8(&StringLiteral_17304/*"bit_item_get01_3"*/);
    sub_1C7BAE8(&StringLiteral_17305/*"bit_item_get01_4"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_17303/*"bit_item_get01_2"*/);
    byte_4CEB36B = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v9 = StringLiteral_17303/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17303/*"bit_item_get01_2"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17304/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17304/*"bit_item_get01_3"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_17305/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17305/*"bit_item_get01_4"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_17303/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17303/*"bit_item_get01_2"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = StringLiteral_17304/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17304/*"bit_item_get01_3"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = StringLiteral_17305/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17305/*"bit_item_get01_4"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_ValueTuple_UISprite__UITexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v45,
    (const MethodInfo_37EAF80 *)Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture____ctor__);
  this->fields.titleSpriteToTextureList = (struct System_Collections_Generic_List_ValueTuple_UISprite__UITexture___o *)v45;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.titleSpriteToTextureList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = StringLiteral_1/*""*/;
  this->fields.titleSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.titleSpriteName, v52, v53, v54, v55, v56, v57, v58);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *mFSM; // x21
  QuestRewardItemAction_StateNone_o *v12; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  QuestRewardItemAction_StateTitleSprite_o *v16; // x22
  CStateManager_T__o *v17; // x21
  QuestRewardItemAction_StatePlay_o *v18; // x22
  CStateManager_T__o *v19; // x21
  QuestRewardItemAction_StateItemLabel_o *v20; // x22
  CStateManager_T__o *v21; // x20
  QuestRewardItemAction_StateTouchWait_o *v22; // x21
  const MethodInfo *v23; // x2
  GrandQuestFolderBoardItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4CEB35F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardItemAction___ctor__);
    sub_1C7BAE8(&Method_CStateManager_QuestRewardItemAction__add__);
    sub_1C7BAE8(&CStateManager_QuestRewardItemAction__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&QuestRewardItemAction_StateItemLabel_TypeInfo);
    sub_1C7BAE8(&QuestRewardItemAction_StateNone_TypeInfo);
    sub_1C7BAE8(&QuestRewardItemAction_StatePlay_TypeInfo);
    sub_1C7BAE8(&QuestRewardItemAction_StateTitleSprite_TypeInfo);
    sub_1C7BAE8(&QuestRewardItemAction_StateTouchWait_TypeInfo);
    byte_4CEB35F = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C7BD34(CStateManager_QuestRewardItemAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_33B93F0 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (QuestRewardItemAction_StateNone_o *)sub_1C7BD34(QuestRewardItemAction_StateNone_TypeInfo);
    QuestRewardItemAction_StateNone___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardItemAction__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (QuestRewardItemAction_StateTitleSprite_o *)sub_1C7BD34(QuestRewardItemAction_StateTitleSprite_TypeInfo);
    QuestRewardItemAction_StateTitleSprite___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_25;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardItemAction__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (QuestRewardItemAction_StatePlay_o *)sub_1C7BD34(QuestRewardItemAction_StatePlay_TypeInfo);
    QuestRewardItemAction_StatePlay___ctor(v18, 0);
    if ( !v17 )
      goto LABEL_25;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardItemAction__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (QuestRewardItemAction_StateItemLabel_o *)sub_1C7BD34(QuestRewardItemAction_StateItemLabel_TypeInfo);
    QuestRewardItemAction_StateItemLabel___ctor(v20, 0);
    if ( !v19 )
      goto LABEL_25;
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardItemAction__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (QuestRewardItemAction_StateTouchWait_o *)sub_1C7BD34(QuestRewardItemAction_StateTouchWait_TypeInfo);
    QuestRewardItemAction_StateTouchWait___ctor(v22, 0);
    if ( !v21 )
      goto LABEL_25;
    CStateManager_object___add(
      v21,
      4,
      (IState_T__o *)v22,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v23);
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
      v27 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v28 = UnityEngine_Object__Instantiate_object_(
              v27,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v28, (UnityEngine_Component_o *)this, 0);
        if ( !byte_4CE7E59 )
        {
          sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E59 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v28,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v28 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v28,
                                         (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (GrandQuestFolderBoardItem_c *)v28;
            sub_1C7BA8C(p_particleObj, (int32_t)v28, v29, v30, v31, v32, v33, v34);
            return;
          }
        }
LABEL_25:
        sub_1C7BD40(ComponentInChildren_object, v14);
      }
    }
  }
}


void QuestRewardItemAction__CheckTutorial(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  struct System_Action_o *mTouchWaitAct; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CEB369 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardItemAction_TouchWaitEnd__);
    sub_1C7BAE8(&Method_QuestRewardItemAction__CheckTutorial_b__64_0__);
    byte_4CEB369 = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0) )
  {
    this->fields.forcePause = 1;
    v3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_QuestRewardItemAction__CheckTutorial_b__64_0__, 0);
    EventTutorialMaster__CheckTutorial(0, 75, v3, 0, 0, 0, 0, 0);
  }
  else
  {
    mTouchWaitAct = this->fields.mTouchWaitAct;
    this->fields.forcePause = 0;
    if ( !mTouchWaitAct )
    {
      mTouchWaitAct = (struct System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        mTouchWaitAct,
        (Il2CppObject *)this,
        (intptr_t)Method_QuestRewardItemAction_TouchWaitEnd__,
        0);
      if ( !mTouchWaitAct )
        sub_1C7BD40(v5, v6);
    }
    ((void (__fastcall *)(intptr_t, intptr_t))mTouchWaitAct->fields.invoke_impl)(
      mTouchWaitAct->fields.method_code,
      mTouchWaitAct->fields.method);
  }
}


void QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEB365 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidBackKeyManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEB365 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      gameObject = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)gameObject, 0, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mScreenTouchInfo,
          (int32_t)Component_object,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_1C7BD40(gameObject, v4);
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
  if ( (byte_4CEB367 & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_1C7BAE8(&Method_CStateManager_QuestRewardItemAction__getState__);
    byte_4CEB367 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C7BD40(this, method);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  UnityEngine_Object_o *mSimpleAnimation; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v34; // x21
  __int64 v35; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v37; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_TrackedReference_o *Item; // x21
  const MethodInfo *v40; // x2
  int32_t v41; // w1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v43; // x0
  System_Action_o *v44; // x21

  if ( (byte_4CEB366 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardItemAction___c__DisplayClass55_0__Play_b__0__);
    sub_1C7BAE8(&QuestRewardItemAction___c__DisplayClass55_0_TypeInfo);
    byte_4CEB366 = 1;
  }
  v11 = sub_1C7BD34(QuestRewardItemAction___c__DisplayClass55_0_TypeInfo);
  QuestRewardItemAction___c__DisplayClass55_0___ctor((QuestRewardItemAction___c__DisplayClass55_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_35;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  this->fields.mIsFromTreasureBox = is_from_treasure_box;
  this->fields.mEndAct = end_act;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mEndAct, (int32_t)end_act, v20, v21, v22, v23, v24, v25);
  this->fields.mTouchWaitAct = touchWaitAct;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mTouchWaitAct,
    (int32_t)touchWaitAct,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
    v34 = gameObject;
    v35 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v35;
        p_offset += 2;
        if ( !v35 )
          goto LABEL_14;
      }
      v37 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v37 = sub_1C51E70(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v37)(v34, *(_QWORD *)(v37 + 8), 0.0);
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
    v41 = 2;
  else
    v41 = 1;
  *(_DWORD *)(v11 + 24) = v41;
  if ( this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, v41, v40);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v43 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v43 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v43->static_fields->DEFAULT_FADE_TIME;
  }
  v44 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)v11, Method_QuestRewardItemAction___c__DisplayClass55_0__Play_b__0__, 0);
  if ( !Instance )
LABEL_35:
    sub_1C7BD40(gameObject, v13);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v44, 0);
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
            sub_1C7BD48(this);
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
          {
            sub_1C7BD40(gameObject, itemLabelList);
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
  __int64 v7; // x1
  int32_t type; // w22
  Il2CppObject *v9; // x22
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v12; // x22
  System_String_o *v13; // x23
  Il2CppObject *v14; // x0
  QuestRewardItemAction_c *v15; // x0
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEB364 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C7BAE8(&QuestRewardItemAction_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10890/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB364 = 1;
  }
  CrossOperatorString = ItemType__get_CrossOperatorString(0);
  if ( !questInfoReward )
    goto LABEL_29;
  type = questInfoReward->fields.type;
  if ( type == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( CrossOperatorString )
    {
      CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                              questInfoReward->fields.objectId,
                              (const MethodInfo_342E2FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( CrossOperatorString )
      {
        v9 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
        CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0);
        goto LABEL_22;
      }
    }
LABEL_29:
    sub_1C7BD40(CrossOperatorString, v7);
  }
  CountableString = (Il2CppObject *)CrossOperatorString;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( type == 1 )
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0, 0);
  }
  else
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EquipMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_342E2FC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49485620(v12, 0);
  }
  v9 = (Il2CppObject *)Name;
LABEL_22:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10890/*"QUEST_CLEAR_REWARD_GET"*/, 0);
  num = questInfoReward->fields.num;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  CrossOperatorString = System_String__Format_64218288(v13, v9, CountableString, v14, 0);
  if ( !itemLabel )
    goto LABEL_29;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0);
  v15 = QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v15 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v15->static_fields->ITEM_LABEL_MAX_WIDTH, 0, 0);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0);
  if ( !CrossOperatorString )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0);
}


void QuestRewardItemAction__SetForcePauseFlag(QuestRewardItemAction_o *this, bool isActive, const MethodInfo *method)
{
  this->fields.forcePause = isActive;
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CEB368 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardItemAction__setState__);
    byte_4CEB368 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C7BD40(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_33B9524 *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void QuestRewardItemAction__SetTitleSprite(
        QuestRewardItemAction_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.titleSpriteName = spriteName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.titleSpriteName,
    (int32_t)spriteName,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestRewardItemAction__Setup(QuestRewardItemAction_o *this, QuestRewardInfo_o *qri, const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *v15; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x0
  UnityEngine_Object_o *v24; // x24
  Il2CppObject *v25; // x21
  UnityEngine_Object_o *v26; // x23
  struct System_String_o *name; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  QuestRewardItemAction_o *v34; // x0
  const MethodInfo *v35; // x3
  QuestRewardItemAction_o *v36; // x0
  const MethodInfo *v37; // x3
  QuestRewardItemAction_o *v38; // x0
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct UILabel_o *mItemLabel; // x22
  __int64 v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct UnityEngine_GameObject_array *v60; // x21
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v69; // x0
  const MethodInfo *v70; // x3
  UnityEngine_Object_o *v71; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v73; // x1
  __int64 v74; // x0

  if ( (byte_4CEB361 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C7BAE8(&UnityEngine_GameObject___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UILabel___TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB361 = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51801640;
  p_mAnimation = &this->fields.mAnimation;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__51801640,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  v15 = UnityEngine_Component__GetComponentInChildren_object__51801640(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v15;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimation, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  v23 = UnityEngine_Component__GetComponentInChildren_object__51801640(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v24 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v25 = v23;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(v24, 0, 0);
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
    v26 = (UnityEngine_Object_o *)*p_mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(v26, 0, 0);
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.playAnimationName,
    (int32_t)name,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
LABEL_18:
  if ( !v25 )
    goto LABEL_48;
  BYTE5(v25[6].monitor) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_48;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  QuestRewardItemAction__SetActiveLabelList(v34, this->fields.mItemLabelList_2, 0, v35);
  QuestRewardItemAction__SetActiveLabelList(v36, this->fields.mItemLabelList_3, 0, v37);
  QuestRewardItemAction__SetActiveLabelList(v38, this->fields.mItemLabelList_4, 0, v39);
  transform = sub_1C7BB90(UILabel___TypeInfo, 1);
  if ( !transform )
    goto LABEL_48;
  mItemLabel = this->fields.mItemLabel;
  v47 = transform;
  if ( mItemLabel )
  {
    transform = sub_1C7BC24(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
      v74 = sub_1C7BD64();
      sub_1C7BC10(v74, 0);
    }
  }
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_49;
  *(_QWORD *)(v47 + 32) = mItemLabel;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v47 + 32), (int32_t)mItemLabel, v40, v41, v42, v43, v44, v45);
  this->fields.itemLabelDispList = (struct UILabel_array *)v47;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.itemLabelDispList, v47, v48, v49, v50, v51, v52, v53);
  transform = sub_1C7BB90(UnityEngine_GameObject___TypeInfo, 1);
  if ( !transform )
    goto LABEL_48;
  v60 = (struct UnityEngine_GameObject_array *)transform;
  if ( !*(_DWORD *)(transform + 24) )
LABEL_49:
    sub_1C7BD48(transform);
  mAppearEffObj = this->fields.mAppearEffObj;
  *(_QWORD *)(transform + 32) = mAppearEffObj;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(transform + 32), (int32_t)mAppearEffObj, v54, v55, v56, v57, v58, v59);
  this->fields.appearEffObjDispList = v60;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.appearEffObjDispList,
    (int32_t)v60,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  if ( !qri )
LABEL_48:
    sub_1C7BD40(transform, v6);
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
    ServantFaceIconComponent__Set_41659924(
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
    v71 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v71, 0, 0) )
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
                           (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !transform )
      goto LABEL_48;
    ItemIconComponent__SetGift_41487788(
      (ItemIconComponent_o *)transform,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0);
  }
  QuestRewardItemAction__SetClearTextLabel(v69, this->fields.mItemLabel, qri, v70);
  QuestRewardItemAction__CommonSetUpEndAction(this, v73);
}


void QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  QuestRewardItemAction_o *v21; // x0
  const MethodInfo *v22; // x3
  QuestRewardItemAction_o *v23; // x0
  const MethodInfo *v24; // x3
  QuestRewardItemAction_o *v25; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct UILabel_o *mItemLabel; // x22
  ServantFaceIconComponent_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct UnityEngine_GameObject_array *v47; // x23
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x23
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x24
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct UnityEngine_GameObject_array **p_mAppearEffObjList_3; // x8
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  struct UnityEngine_GameObject_array *v74; // x1
  __int64 v75; // x21
  ServantFaceIconComponent_o **m_Items; // x22
  UISprite_o **v77; // x25
  float x; // s8
  float z; // s9
  const MethodInfo *v80; // x3
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v82; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v84; // w8
  const MethodInfo *v85; // x1
  __int64 v86; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEB363 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C7BAE8(&UnityEngine_GameObject___TypeInfo);
    sub_1C7BAE8(&UILabel___TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB363 = 1;
  }
  if ( !this->fields.mItemSpList_2 || !this->fields.mItemLabelList_3 || !this->fields.mItemLabelList_4 )
    return;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51801640;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__51801640,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  v14 = UnityEngine_Component__GetComponentInChildren_object__51801640(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimation, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__GetComponentInChildren_object__51801640(
                                              (UnityEngine_Component_o *)transform,
                                              (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
  QuestRewardItemAction__SetActiveLabelList(v21, this->fields.mItemLabelList_2, 0, v22);
  QuestRewardItemAction__SetActiveLabelList(v23, this->fields.mItemLabelList_3, 0, v24);
  QuestRewardItemAction__SetActiveLabelList(v25, this->fields.mItemLabelList_4, 0, v26);
  transform = (ServantFaceIconComponent_o *)sub_1C7BB90(UILabel___TypeInfo, 1);
  if ( !transform )
    goto LABEL_60;
  mItemLabel = this->fields.mItemLabel;
  v34 = transform;
  if ( mItemLabel )
  {
    transform = (ServantFaceIconComponent_o *)sub_1C7BC24(this->fields.mItemLabel, transform->klass->_1.element_class);
    if ( !transform )
    {
      v86 = sub_1C7BD64();
      sub_1C7BC10(v86, 0);
    }
  }
  if ( !LODWORD(v34->fields.m_CancellationTokenSource) )
    goto LABEL_61;
  v34->fields.backSprite = (struct UISprite_o *)mItemLabel;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v34->fields.backSprite, (int32_t)mItemLabel, v27, v28, v29, v30, v31, v32);
  this->fields.itemLabelDispList = (struct UILabel_array *)v34;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemLabelDispList,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  transform = (ServantFaceIconComponent_o *)sub_1C7BB90(UnityEngine_GameObject___TypeInfo, 1);
  if ( !transform )
    goto LABEL_60;
  v47 = (struct UnityEngine_GameObject_array *)transform;
  if ( !LODWORD(transform->fields.m_CancellationTokenSource) )
LABEL_61:
    sub_1C7BD48(transform);
  mAppearEffObj = this->fields.mAppearEffObj;
  transform->fields.backSprite = (struct UISprite_o *)mAppearEffObj;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&transform->fields.backSprite,
    (int32_t)mAppearEffObj,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.appearEffObjDispList = v47;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.appearEffObjDispList,
    (int32_t)v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !questInfoReward )
    goto LABEL_60;
  num = questInfoReward->fields.num;
  if ( num == 3 )
  {
    SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_3;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_3_TYPES,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_3;
  }
  else if ( num == 2 )
  {
    SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_2;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_2_TYPES,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_2;
  }
  else
  {
    SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_4;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_4_TYPES,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_4;
  }
  v74 = *p_mAppearEffObjList_3;
  this->fields.appearEffObjDispList = *p_mAppearEffObjList_3;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.appearEffObjDispList,
    (int32_t)v74,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  if ( !mItemSpList_3 )
LABEL_60:
    sub_1C7BD40(transform, v6);
  v75 = 0;
  m_Items = mServantFaceIconList_3->m_Items;
  v77 = mItemSpList_3->m_Items;
  do
  {
    if ( (unsigned int)v75 >= LODWORD(mItemSpList_3->max_length) )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v77[v75];
    if ( !transform )
      goto LABEL_60;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
    if ( !transform )
      goto LABEL_60;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( (unsigned int)v75 >= LODWORD(mItemSpList_3->max_length) )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v77[v75];
    if ( !transform )
      goto LABEL_60;
    x = position.fields.x;
    z = position.fields.z;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
    if ( !transform )
      goto LABEL_60;
    v88.fields.y = 0.0;
    v88.fields.x = x;
    v88.fields.z = z;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v88, 0);
    if ( questInfoReward->fields.type == 1 )
    {
      if ( (unsigned int)v75 >= LODWORD(mItemSpList_3->max_length) )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v77[v75];
      if ( !transform )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      max_length = mServantFaceIconList_3->max_length;
      if ( max_length )
      {
        if ( (unsigned int)v75 >= (unsigned int)max_length )
          goto LABEL_61;
        transform = m_Items[v75];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
        if ( (unsigned int)v75 >= LODWORD(mServantFaceIconList_3->max_length) )
          goto LABEL_61;
        transform = m_Items[v75];
        if ( !transform )
          goto LABEL_60;
        ServantFaceIconComponent__Set_41659924(
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
      v82 = mServantFaceIconList_3->max_length;
      if ( v82 )
      {
        if ( (unsigned int)v75 >= (unsigned int)v82 )
          goto LABEL_61;
        transform = m_Items[v75];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      }
      if ( (unsigned int)v75 >= LODWORD(mItemSpList_3->max_length) )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v77[v75];
      if ( !transform )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      transform = (ServantFaceIconComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                  gameObject,
                                                  (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !transform )
        goto LABEL_60;
      ItemIconComponent__SetGift_41487788(
        (ItemIconComponent_o *)transform,
        questInfoReward->fields.type,
        questInfoReward->fields.objectId,
        1,
        0,
        0);
    }
    v84 = questInfoReward->fields.num;
    ++v75;
    if ( v84 >= 4 )
      v84 = 4;
    if ( v84 <= 2 )
      v84 = 2;
  }
  while ( (unsigned int)v75 < v84 );
  QuestRewardItemAction__SetClearTextLabel(
    (QuestRewardItemAction_o *)transform,
    this->fields.mItemLabel,
    questInfoReward,
    v80);
  QuestRewardItemAction__CommonSetUpEndAction(this, v85);
}


void QuestRewardItemAction__Setup_37030156(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v4; // x20
  QuestRewardItemAction_o *v5; // x19
  bool v6; // w21
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct UILabel_array *mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  struct System_String_o *DIFF_ANIMATION_NAME_2_TYPES; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_2; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  QuestRewardItemAction_o *v44; // x0
  const MethodInfo *v45; // x3
  QuestRewardItemAction_o *v46; // x0
  const MethodInfo *v47; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v49; // w2
  TerminalPramsManager_c *v50; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  Il2CppObject *Master_object; // x21
  QuestRewardInfo_o *v53; // x8
  struct UILabel_array *v54; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_3_TYPES; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  QuestRewardItemAction_o *v69; // x0
  const MethodInfo *v70; // x3
  QuestRewardItemAction_o *v71; // x0
  const MethodInfo *v72; // x3
  bool v73; // w2
  UILabel_array **p_mItemLabelList_4; // x24
  struct UILabel_array *mItemLabelList_4; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_4_TYPES; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_4; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  QuestRewardItemAction_o *v90; // x0
  const MethodInfo *v91; // x3
  QuestRewardItemAction_o *v92; // x0
  const MethodInfo *v93; // x3
  int max_length; // w8
  __int64 v95; // x24
  unsigned int v96; // w27
  QuestRewardInfo_o *v97; // x21
  const MethodInfo *v98; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  v4 = questInfoRewardList;
  v5 = this;
  v6 = isMultiDisp;
  if ( (byte_4CEB362 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    this = (QuestRewardItemAction_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB362 = 1;
  }
  entity = 0;
  v5->fields.isMultiDisp = v6;
  if ( !v4 )
    goto LABEL_73;
  if ( SLODWORD(v4->max_length) <= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CE84EB )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CE84EB = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v50->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4CE84EC )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CE84EC = 1;
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
      if ( !LODWORD(v4->max_length) )
        goto LABEL_74;
      v53 = v4->m_Items[0];
      if ( !v53 )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v53->fields.objectId,
                                          (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !LODWORD(v4->max_length) )
          goto LABEL_74;
        questInfoRewardList = (QuestRewardInfo_array *)v4->m_Items[0];
        if ( questInfoRewardList )
        {
          if ( SLODWORD(questInfoRewardList->max_length) >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v5, (QuestRewardInfo_o *)questInfoRewardList, v21);
            return;
          }
          goto LABEL_34;
        }
LABEL_73:
        sub_1C7BD40(this, questInfoRewardList);
      }
    }
LABEL_34:
    if ( !LODWORD(v4->max_length) )
      goto LABEL_74;
LABEL_35:
    QuestRewardItemAction__Setup(v5, v4->m_Items[0], v21);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v5->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51801640;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v5->fields.mAnimation,
    (int32_t)ComponentInChildren_object__51801640,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_73;
  v14 = UnityEngine_Component__GetComponentInChildren_object__51801640(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v5->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v5->fields.mSimpleAnimation, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_73;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_object__51801640(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !this )
    goto LABEL_73;
  BYTE5(this->fields.titleSprites) = 1;
  switch ( LODWORD(v4->max_length) )
  {
    case 0:
      goto LABEL_74;
    case 2:
      mItemLabelList_2 = v5->fields.mItemLabelList_2;
      mItemSpList_2 = v5->fields.mItemSpList_2;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_2;
      v5->fields.itemLabelDispList = mItemLabelList_2;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.itemLabelDispList,
        (int32_t)mItemLabelList_2,
        (int32_t)v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      DIFF_ANIMATION_NAME_2_TYPES = v5->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_2_TYPES;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_2_TYPES,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      mAppearEffObjList_2 = v5->fields.mAppearEffObjList_2;
      v5->fields.appearEffObjDispList = mAppearEffObjList_2;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.appearEffObjDispList,
        (int32_t)mAppearEffObjList_2,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      QuestRewardItemAction__SetActiveLabelList(v44, v5->fields.mItemLabelList_2, 1, v45);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v49 = 0;
      goto LABEL_39;
    case 3:
      v54 = v5->fields.mItemLabelList_3;
      mItemSpList_2 = v5->fields.mItemSpList_3;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_3;
      v5->fields.itemLabelDispList = v54;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.itemLabelDispList,
        (int32_t)v54,
        (int32_t)v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      DIFF_ANIMATION_NAME_3_TYPES = v5->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_3_TYPES;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_3_TYPES,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      mAppearEffObjList_3 = v5->fields.mAppearEffObjList_3;
      v5->fields.appearEffObjDispList = mAppearEffObjList_3;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.appearEffObjDispList,
        (int32_t)mAppearEffObjList_3,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      QuestRewardItemAction__SetActiveLabelList(v69, v5->fields.mItemLabelList_2, 0, v70);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v49 = 1;
LABEL_39:
      QuestRewardItemAction__SetActiveLabelList(v46, mItemLabelList_3, v49, v47);
      v73 = 0;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      break;
    case 4:
      mItemSpList_2 = v5->fields.mItemSpList_4;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_4;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      mItemLabelList_4 = v5->fields.mItemLabelList_4;
      v5->fields.itemLabelDispList = mItemLabelList_4;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.itemLabelDispList,
        (int32_t)mItemLabelList_4,
        (int32_t)v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      DIFF_ANIMATION_NAME_4_TYPES = v5->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_4_TYPES;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_4_TYPES,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      mAppearEffObjList_4 = v5->fields.mAppearEffObjList_4;
      v5->fields.appearEffObjDispList = mAppearEffObjList_4;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v5->fields.appearEffObjDispList,
        (int32_t)mAppearEffObjList_4,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      QuestRewardItemAction__SetActiveLabelList(v90, v5->fields.mItemLabelList_2, 0, v91);
      QuestRewardItemAction__SetActiveLabelList(v92, v5->fields.mItemLabelList_3, 0, v93);
      v73 = 1;
      break;
    default:
      goto LABEL_35;
  }
  QuestRewardItemAction__SetActiveLabelList(v71, *p_mItemLabelList_4, v73, v72);
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v95 = 4;
    while ( 1 )
    {
      v96 = v95 - 4;
      if ( (int)v95 - 4 >= (unsigned int)max_length )
        break;
      v97 = (QuestRewardInfo_o *)*((_QWORD *)&v4->obj.klass + v95);
      if ( !v97 )
        goto LABEL_73;
      if ( v97->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v96 >= LODWORD(mItemSpList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_73;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v96 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( v96 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_73;
        ServantFaceIconComponent__Set_41659924(
          (ServantFaceIconComponent_o *)this,
          v97->fields.objectId,
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
        if ( v96 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v96 >= LODWORD(mItemSpList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_73;
        ItemIconComponent__SetGift_41487788(
          (ItemIconComponent_o *)this,
          v97->fields.type,
          v97->fields.objectId,
          v97->fields.num,
          0,
          0);
      }
      itemLabelDispList = v5->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_73;
      if ( v96 >= LODWORD(itemLabelDispList->max_length) )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v95), v97, v98);
      max_length = v4->max_length;
      if ( (int)++v95 - 4 >= max_length )
        goto LABEL_70;
    }
LABEL_74:
    sub_1C7BD48(this);
  }
LABEL_70:
  QuestRewardItemAction__CommonSetUpEndAction(v5, (const MethodInfo *)questInfoRewardList);
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

  if ( (byte_4CEB36A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AndroidBackKeyManager_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardItemAction_TouchWaitEnd__);
    sub_1C7BAE8(&Method_QuestRewardItemAction__TouchWaitEnd_b__65_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEB36A = 1;
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
      v4 = (_QWORD *)sub_1C7BB00(Method_QuestRewardItemAction_TouchWaitEnd__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_QuestRewardItemAction__TouchWaitEnd_b__65_0__, 0);
  if ( !v8 )
LABEL_13:
    sub_1C7BD40(mScreenTouchInfo, method);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0);
  QuestRewardItemAction__SetState(this, 0, v11);
}


void QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CEB360 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardItemAction__update__);
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CEB360 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_33B9500 *)Method_CStateManager_QuestRewardItemAction__update__);
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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x19
  __int64 v14; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  ManagerConfig_c *v29; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w25
  MoveObject_o *v33; // x21
  float x; // s10
  float v35; // s11
  float v36; // s12
  System_Action_o *v37; // x22
  System_Action_o *v38; // x23
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4CEB371 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardItemAction_StateItemLabel_begin__);
    sub_1C7BAE8(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_1C7BAE8(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1C7BAE8(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_4CEB371 = 1;
  }
  v4 = sub_1C7BD34(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 32) = that;
  v13 = v4 + 32;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)that, v7, v8, v9, v10, v11, v12);
  v14 = *(_QWORD *)(v4 + 32);
  if ( !v14 )
    goto LABEL_19;
  transform = *(UnityEngine_Transform_o **)(v14 + 80);
  if ( !transform )
    goto LABEL_19;
  if ( *(_BYTE *)(v14 + 312) )
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)gameObject, v16, v17, v18, v19, v20, v21);
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
                       (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)Component_object, v23, v24, v25, v26, v27, v28);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v29 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v29 = ManagerConfig_TypeInfo;
  }
  WIDTH = v29->static_fields->WIDTH;
  v42 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v33 = *(MoveObject_o **)(v4 + 24);
  x = v42.fields.x;
  v35 = v42.fields.y;
  v36 = v42.fields.z;
  v37 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0);
  v38 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0);
  if ( !v33
    || (v43.fields.x = (float)WIDTH,
        v43.fields.y = y,
        v43.fields.z = z,
        v44.fields.x = x,
        v44.fields.y = v35,
        v44.fields.z = v36,
        MoveObject__Play(v33, v43, v44, 0.25, v37, v38, 0.0, 17, 0),
        !*(_QWORD *)v13) )
  {
LABEL_19:
    sub_1C7BD40(transform, v6);
  }
  if ( *(_BYTE *)(*(_QWORD *)v13 + 217LL) )
  {
    v39 = Method_QuestRewardItemAction_StateItemLabel_begin__;
    if ( (*((_BYTE *)Method_QuestRewardItemAction_StateItemLabel_begin__ + 83) & 2) != 0 )
      v39 = (_QWORD *)sub_1C7BB00(Method_QuestRewardItemAction_StateItemLabel_begin__);
    v40 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v39, v39[4]);
    OverwriteAssetSoundName__PlaySystemSe(v40, 4, 0, 0);
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
    sub_1C7BD40(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0);
}


void QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C7BD40(0, method);
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
  GrandQuestFolderBoardItem_o *p_fields; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  GrandQuestFolderBoardItem_c *klass; // x21
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v17; // x20
  float mTreasureAnimStartTime; // s0
  _QWORD *image; // x8
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  GrandQuestFolderBoardItem_c *v23; // x20
  _QWORD *v24; // x8
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  unsigned int v30; // w21
  _BOOL4 v31; // w8

  v5 = this;
  if ( (byte_4CEB36F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB36F = 1;
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
    p_fields = (GrandQuestFolderBoardItem_o *)&v5->fields;
    sub_1C7BA8C(p_fields, (int32_t)Item, v9, v10, v11, v12, v13, v14);
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
    v20 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( *((_WORD *)klass->_1.image + 151) )
    {
      v21 = (SimpleAnimation_State_c **)(image[22] + 8LL);
      while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_24;
      }
      v22 = (__int64)&image[2 * *(_DWORD *)v21 + 51];
    }
    else
    {
LABEL_24:
      v22 = sub_1C51E70(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD, long double))v22)(
                                                  klass,
                                                  *(_QWORD *)(v22 + 8),
                                                  v3);
    v23 = p_fields->klass;
    if ( !v23 )
      goto LABEL_48;
    v24 = v23->_1.image;
    v25 = *((unsigned __int16 *)v23->_1.image + 151);
    if ( *((_WORD *)v23->_1.image + 151) )
    {
      v26 = (SimpleAnimation_State_c **)(v24[22] + 8LL);
      while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v25;
        v26 += 2;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = (__int64)&v24[2 * *(_DWORD *)v26 + 55];
    }
    else
    {
LABEL_31:
      v27 = sub_1C51E70(v23, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD, float))v27)(v23, *(_QWORD *)(v27 + 8), 1.0);
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
LABEL_48:
      sub_1C7BD40(this, that);
    this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_67121960(
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
      v17 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)this,
                                                that->fields.playAnimationName,
                                                0);
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v17, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( that->fields.mIsFromTreasureBox )
        {
          mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
          if ( !v17 )
            goto LABEL_48;
        }
        else
        {
          mTreasureAnimStartTime = 0.0;
          if ( !v17 )
            goto LABEL_48;
        }
        UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v17, mTreasureAnimStartTime, 0);
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v17, 1.0, 0);
        this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
        if ( !this )
          goto LABEL_48;
        this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_71613624(
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
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1C7BD48(this);
      v31 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[v30];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31, 0);
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v30 >= max_length )
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
  __int64 v13; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  int32_t v16; // w1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  _OWORD v19[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v20; // [xsp+20h] [xbp-60h] BYREF
  UIWidget_o *v21[2]; // [xsp+30h] [xbp-50h]

  if ( (byte_4CEB370 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1C7BAE8(&Method_QuestRewardItemAction_StatePlay_update__);
    byte_4CEB370 = 1;
  }
  v20 = 0u;
  *(_OWORD *)v21 = 0u;
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
        sub_1C7BD48(this);
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
    (System_Collections_Generic_List_Enumerator_T__o *)v19,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_37EC358 *)Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___GetEnumerator__);
  v20 = v19[0];
  *(_OWORD *)v21 = v19[1];
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v20,
            (const MethodInfo_35B52D4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___MoveNext__);
    if ( !v12 )
      break;
    if ( !v21[0] )
      sub_1C7BD40(v12, v13);
    if ( !v21[1] )
      sub_1C7BD40(0, v13);
    UIWidget__set_color(v21[1], v21[0]->fields.mColor, 0);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (const MethodInfo_35B52D0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___Dispose__);
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
    this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
      {
        if ( that->fields.mLabelAnimate )
        {
          v16 = 3;
        }
        else
        {
          if ( that->fields.mGetSEonProgram )
          {
            v17 = Method_QuestRewardItemAction_StatePlay_update__;
            if ( (*((_BYTE *)Method_QuestRewardItemAction_StatePlay_update__ + 83) & 2) != 0 )
              v17 = (_QWORD *)sub_1C7BB00(Method_QuestRewardItemAction_StatePlay_update__);
            v18 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v17, v17[4]);
            OverwriteAssetSoundName__PlaySystemSe(v18, 4, 0, 0);
          }
          v16 = 4;
        }
        QuestRewardItemAction__SetState(that, v16, 0);
      }
      return;
    }
LABEL_49:
    sub_1C7BD40(this, that);
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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x19
  __int64 v14; // x8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  System_String_o *v18; // x21
  AssetLoader_LoadEndDataHandler_o *v19; // x22
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEB36D & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_First_UISprite___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&QuestRewardItemAction_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0__begin_b__0__);
    sub_1C7BAE8(&QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0_TypeInfo);
    byte_4CEB36D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v4 = sub_1C7BD34(QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_31;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_31;
  IsNullOrEmpty = (QuestRewardItemAction_o *)System_String__IsNullOrEmpty(
                                               *(System_String_o **)(*(_QWORD *)(v4 + 16) + 328LL),
                                               0);
  v14 = *(_QWORD *)v13;
  if ( !*(_QWORD *)v13 )
    goto LABEL_31;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
LABEL_9:
    IsNullOrEmpty = (QuestRewardItemAction_o *)v14;
LABEL_29:
    QuestRewardItemAction__SetState(IsNullOrEmpty, 2, 0);
    return;
  }
  IsNullOrEmpty = (QuestRewardItemAction_o *)BasicHelper__IsNullOrEmpty(
                                               *(System_Collections_ICollection_o **)(v14 + 104),
                                               0);
  v14 = *(_QWORD *)v13;
  if ( !*(_QWORD *)v13 )
    goto LABEL_31;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_9;
  IsNullOrEmpty = (QuestRewardItemAction_o *)System_Linq_Enumerable__First_object_(
                                               *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 104),
                                               (const MethodInfo_319601C *)Method_System_Linq_Enumerable_First_UISprite___);
  if ( !IsNullOrEmpty
    || !*(_QWORD *)v13
    || (IsNullOrEmpty = (QuestRewardItemAction_o *)IsNullOrEmpty[1].fields.mItemSpList_2) == 0 )
  {
LABEL_31:
    sub_1C7BD40(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = (QuestRewardItemAction_o *)UIAtlas__GetSprite(
                                               (UIAtlas_o *)IsNullOrEmpty,
                                               *(System_String_o **)(*(_QWORD *)v13 + 328LL),
                                               0);
  if ( IsNullOrEmpty )
  {
    if ( !*(_QWORD *)v13 )
      goto LABEL_31;
    IsNullOrEmpty = *(QuestRewardItemAction_o **)(*(_QWORD *)v13 + 104LL);
    if ( !IsNullOrEmpty )
      goto LABEL_31;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
      if ( !v15 )
        break;
      if ( !*(_QWORD *)v13 )
        sub_1C7BD40(v15, v16);
      current = v20.fields._current;
      if ( !v20.fields._current )
        sub_1C7BD40(v15, v16);
      UISprite__set_spriteName((UISprite_o *)v20.fields._current, *(System_String_o **)(*(_QWORD *)v13 + 328LL), 0);
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[33].methodPtr)(
        current,
        current->klass->vtable[33].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
LABEL_28:
    IsNullOrEmpty = *(QuestRewardItemAction_o **)v13;
    if ( *(_QWORD *)v13 )
      goto LABEL_29;
    goto LABEL_31;
  }
  IsNullOrEmpty = (QuestRewardItemAction_o *)QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
  if ( !*(_QWORD *)v13 )
    goto LABEL_31;
  v18 = System_String__Concat_64176912(
          QuestRewardItemAction_TypeInfo->static_fields->GetSpritesTexturePath,
          *(System_String_o **)(*(_QWORD *)v13 + 328LL),
          0);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v18, v19, 1, 0) )
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
  System_Collections_Generic_List_object__o *Object_object__51713432; // x0
  __int64 v8; // x1
  struct QuestRewardItemAction_o *that; // x8
  struct QuestRewardItemAction_o *v10; // x8
  UnityEngine_Texture_o *v11; // x22
  System_String_o *v12; // x0
  UnityEngine_Texture_o *v13; // x21
  QuestRewardItemAction_c *v14; // x0
  struct QuestRewardItemAction_o *v15; // x8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v21; // x1
  UnityEngine_Behaviour_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo_3BA5554 *v25; // x4
  struct QuestRewardItemAction_o *v26; // x8
  System_Collections_Generic_List_T__o *titleSpriteToTextureList; // x23
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_ValueTuple_object__object__o v35; // x1 OVERLAPPED
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  GrandQuestFolderBoardItem_o *v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_object__object__o v42; // 0:x0.16

  if ( (byte_4CEB36E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_UITexture___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Material_TypeInfo);
    sub_1C7BAE8(&QuestRewardItemAction_TypeInfo);
    sub_1C7BAE8(&Method_System_ValueTuple_UISprite__UITexture___ctor__);
    sub_1C7BAE8(&StringLiteral_16596/*"_alpha"*/);
    sub_1C7BAE8(&StringLiteral_4944/*"Custom/SpriteWithMask"*/);
    byte_4CEB36E = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4944/*"Custom/SpriteWithMask"*/, 0);
  v6 = (UnityEngine_Material_o *)sub_1C7BD34(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v6, v5, 0);
  that = this->fields.that;
  if ( !that )
    goto LABEL_28;
  if ( !assetData )
    goto LABEL_28;
  Object_object__51713432 = (System_Collections_Generic_List_object__o *)AssetData__GetObject_object__51713432(
                                                                           assetData,
                                                                           that->fields.titleSpriteName,
                                                                           (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
  v10 = this->fields.that;
  if ( !v10 )
    goto LABEL_28;
  v11 = (UnityEngine_Texture_o *)Object_object__51713432;
  v12 = System_String__Concat_64176912(v10->fields.titleSpriteName, (System_String_o *)StringLiteral_16596/*"_alpha"*/, 0);
  Object_object__51713432 = (System_Collections_Generic_List_object__o *)AssetData__GetObject_object__51713432(
                                                                           assetData,
                                                                           v12,
                                                                           (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
  if ( !v6 )
    goto LABEL_28;
  v13 = (UnityEngine_Texture_o *)Object_object__51713432;
  UnityEngine_Material__set_mainTexture(v6, v11, 0);
  v14 = QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v14 = QuestRewardItemAction_TypeInfo;
  }
  UnityEngine_Material__SetTexture_71734296(v6, v14->static_fields->MaskTex, v13, 0);
  v15 = this->fields.that;
  if ( !v15 )
    goto LABEL_28;
  Object_object__51713432 = (System_Collections_Generic_List_object__o *)v15->fields.titleSprites;
  if ( !Object_object__51713432 )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    Object_object__51713432,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v16 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1C7BD40(v16, v17);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v41.fields._current, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_UITexture___);
    v22 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      sub_1C7BD40(0, v21);
    ((void (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
      Component_object,
      v6,
      Component_object->klass->vtable[25].method);
    UnityEngine_Behaviour__set_enabled(v22, 1, 0);
    v23 = ((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v22->klass[2]._1.parent)(
            v22,
            v22->klass[2]._1.generic_class);
    v26 = this->fields.that;
    if ( !v26 )
      sub_1C7BD40(v23, v24);
    titleSpriteToTextureList = (System_Collections_Generic_List_T__o *)v26->fields.titleSpriteToTextureList;
    *(_OWORD *)&v40.fields._list = 0u;
    v42.fields.Item1 = (Il2CppObject *)&v40;
    v42.fields.Item2 = current;
    System_ValueTuple_object__object____ctor(
      v42,
      (Il2CppObject *)v22,
      (Il2CppObject *)Method_System_ValueTuple_UISprite__UITexture___ctor__,
      v25);
    if ( !titleSpriteToTextureList )
      sub_1C7BD40(v28, v29);
    v35 = *(System_ValueTuple_object__object__o *)&v40.fields._list;
    items = titleSpriteToTextureList->fields._items;
    v37 = Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___Add__;
    ++titleSpriteToTextureList->fields._version;
    if ( !items )
      sub_1C7BD40(v28, v35.fields.Item1);
    size = titleSpriteToTextureList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
        titleSpriteToTextureList,
        v35,
        *(const MethodInfo_37EB800 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = (GrandQuestFolderBoardItem_o *)(&items->obj + size);
      titleSpriteToTextureList->fields._size = size + 1;
      v39->fields.sortValue0 = (int64_t)v35.fields.Item1;
      v39 = (GrandQuestFolderBoardItem_o *)((char *)v39 + 32);
      v39->monitor = v35.fields.Item2;
      sub_1C7BA8C(v39, 0, (int32_t)v35.fields.Item2, v30, v31, v32, v33, v34);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  Object_object__51713432 = (System_Collections_Generic_List_object__o *)this->fields.that;
  if ( !Object_object__51713432 )
LABEL_28:
    sub_1C7BD40(Object_object__51713432, v8);
  QuestRewardItemAction__SetState((QuestRewardItemAction_o *)Object_object__51713432, 2, 0);
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
    sub_1C7BD40(this, that);
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
  __int64 v5; // x1

  if ( (byte_4CEB372 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEB372 = 1;
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
    isTouchPush = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !isTouchPush )
LABEL_12:
      sub_1C7BD40(isTouchPush, v5);
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
    sub_1C7BD40(0, method);
  if ( !_4__this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(_4__this, this->fields.state, 0);
}