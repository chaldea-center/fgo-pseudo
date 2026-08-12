void QuestRewardItemAction___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct QuestRewardItemAction_StaticFields *static_fields; // x0

  if ( (byte_596D3E5 & 1) == 0 )
  {
    sub_2213A60(&QuestRewardItemAction_TypeInfo);
    sub_2213A60(&StringLiteral_6145/*"Effect/Talk/GetTitleSprites/"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596D3E5 = 1;
  }
  v7 = StringLiteral_6145/*"Effect/Talk/GetTitleSprites/"*/;
  static_fields = QuestRewardItemAction_TypeInfo->static_fields;
  static_fields->ITEM_LABEL_MAX_WIDTH = 1024;
  static_fields->GetSpritesTexturePath = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->GetSpritesTexturePath, v7, v1, v2, v3, v4, v5, v6);
  QuestRewardItemAction_TypeInfo->static_fields->MaskTex = UnityEngine_Shader__PropertyToID(
                                                             (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
                                                             0);
}


void QuestRewardItemAction___ctor(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_T__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7

  if ( (byte_596D3E4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_UISprite__UITexture___TypeInfo);
    sub_2213A60(&StringLiteral_17958/*"bit_item_get01_3"*/);
    sub_2213A60(&StringLiteral_17959/*"bit_item_get01_4"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_17957/*"bit_item_get01_2"*/);
    byte_596D3E4 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_17957/*"bit_item_get01_2"*/;
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES,
    (int32_t)v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_17958/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17958/*"bit_item_get01_3"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_17959/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17959/*"bit_item_get01_4"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_17957/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17957/*"bit_item_get01_2"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = StringLiteral_17958/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17958/*"bit_item_get01_3"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = StringLiteral_17959/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17959/*"bit_item_get01_4"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_UISprite__UITexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v45,
    (const MethodInfo_43FE7B4 *)Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture____ctor__);
  this->fields.titleSpriteToTextureList = (struct System_Collections_Generic_List_ValueTuple_UISprite__UITexture___o *)v45;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.titleSpriteToTextureList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (int)StringLiteral_1/*""*/;
  this->fields.titleSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.titleSpriteName, v52, v53, v54, v55, v56, v57, v58);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x20
  Il2CppObject *v23; // x21
  const MethodInfo *v24; // x2
  MissionNaviTransitionBoardItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_596D3D8 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestRewardItemAction___ctor__);
    sub_2213A60(&Method_CStateManager_QuestRewardItemAction__add__);
    sub_2213A60(&CStateManager_QuestRewardItemAction__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestRewardItemAction_StateItemLabel_TypeInfo);
    sub_2213A60(&QuestRewardItemAction_StateNone_TypeInfo);
    sub_2213A60(&QuestRewardItemAction_StatePlay_TypeInfo);
    sub_2213A60(&QuestRewardItemAction_StateTitleSprite_TypeInfo);
    sub_2213A60(&QuestRewardItemAction_StateTouchWait_TypeInfo);
    byte_596D3D8 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v5 = (CStateManager_T__o *)sub_2213CCC(CStateManager_QuestRewardItemAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_3E83D54 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_2213CCC(QuestRewardItemAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestRewardItemAction__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_2213CCC(QuestRewardItemAction_StateTitleSprite_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_25;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestRewardItemAction__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_2213CCC(QuestRewardItemAction_StatePlay_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_25;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestRewardItemAction__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_2213CCC(QuestRewardItemAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_25;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestRewardItemAction__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (Il2CppObject *)sub_2213CCC(QuestRewardItemAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v23, 0);
    if ( !v22 )
      goto LABEL_25;
    CStateManager_object___add(
      v22,
      4,
      (IState_T__o *)v23,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v24);
  }
  p_particleObj = (MissionNaviTransitionBoardItem_o *)&this->fields.particleObj;
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v32 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
      v33 = UnityEngine_Object__Instantiate_object_(
              v32,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v33, (UnityEngine_Component_o *)this, 0);
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v33,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v33 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v33,
                                         (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (MissionNaviTransitionBoardItem_c *)v33;
            sub_2213A04(p_particleObj, (int32_t)v33, v34, v35, v36, v37, v38, v39);
            return;
          }
        }
LABEL_25:
        sub_2213CDC(ComponentInChildren_object, v15);
      }
    }
  }
}


void QuestRewardItemAction__CheckTutorial(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20
  struct System_Action_o *mTouchWaitAct; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596D3E2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_QuestRewardItemAction_TouchWaitEnd__);
    sub_2213A60(&Method_QuestRewardItemAction__CheckTutorial_b__64_0__);
    byte_596D3E2 = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0) )
  {
    v3 = System_Action_TypeInfo;
    this->fields.forcePause = 1;
    v4 = (System_Action_o *)sub_2213CCC(v3);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_QuestRewardItemAction__CheckTutorial_b__64_0__, 0);
    EventTutorialMaster__CheckTutorial(0, 75, v4, 0, 0, 0, 0, 0);
  }
  else
  {
    mTouchWaitAct = this->fields.mTouchWaitAct;
    this->fields.forcePause = 0;
    if ( !mTouchWaitAct )
    {
      mTouchWaitAct = (struct System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        mTouchWaitAct,
        (Il2CppObject *)this,
        (intptr_t)Method_QuestRewardItemAction_TouchWaitEnd__,
        0);
      if ( !mTouchWaitAct )
        sub_2213CDC(v6, v7);
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
  __int64 v5; // x1
  __int64 v6; // x2
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596D3DE & 1) == 0 )
  {
    sub_2213A60(&AndroidBackKeyManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D3DE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      gameObject = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)gameObject, 0, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mScreenTouchInfo,
          (int32_t)Component_object,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_2213CDC(gameObject, v4);
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
  if ( (byte_596D3E0 & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_2213A60(&Method_CStateManager_QuestRewardItemAction__getState__);
    byte_596D3E0 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x21
  __int64 v35; // x2
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v37; // x21
  __int64 v38; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v40; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_TrackedReference_o *Item; // x21
  bool IsNullOrEmpty; // w0
  const MethodInfo *v44; // x2
  _BOOL4 mIsFromTreasureBox; // w9
  int32_t v46; // w1
  __int64 v47; // x1
  __int64 v48; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v50; // x0
  System_Action_o *v51; // x21

  if ( (byte_596D3DF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&Method_QuestRewardItemAction___c__DisplayClass55_0__Play_b__0__);
    sub_2213A60(&QuestRewardItemAction___c__DisplayClass55_0_TypeInfo);
    byte_596D3DF = 1;
  }
  v11 = sub_2213CCC(QuestRewardItemAction___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_35;
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  this->fields.mIsFromTreasureBox = is_from_treasure_box;
  this->fields.mEndAct = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mEndAct, (int32_t)end_act, v20, v21, v22, v23, v24, v25);
  this->fields.mTouchWaitAct = touchWaitAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTouchWaitAct,
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
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
    v37 = gameObject;
    v38 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v38;
        p_offset += 2;
        if ( !v38 )
          goto LABEL_14;
      }
      v40 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v40 = sub_224BC3C(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, double))v40)(v37, *(_QWORD *)(v40 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v35);
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
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.titleSpriteName, 0);
  mIsFromTreasureBox = this->fields.mIsFromTreasureBox;
  if ( IsNullOrEmpty )
    v46 = 2;
  else
    v46 = 1;
  *(_DWORD *)(v11 + 24) = v46;
  if ( mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, v46, v44);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v50 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v47, v48);
      v50 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v50->static_fields->DEFAULT_FADE_TIME;
  }
  v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)v11, Method_QuestRewardItemAction___c__DisplayClass55_0__Play_b__0__, 0);
  if ( !Instance )
LABEL_35:
    sub_2213CDC(gameObject, v13);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v51, 0);
}


void QuestRewardItemAction__SetActiveLabelList(
        QuestRewardItemAction_o *this,
        UILabel_array *itemLabelList,
        bool isActive,
        const MethodInfo *method)
{
  int max_length; // w8
  __int64 v7; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( itemLabelList )
  {
    max_length = itemLabelList->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      do
      {
        if ( (unsigned int)v7 >= max_length )
          sub_2213CE4(this);
        gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v7];
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
        {
          sub_2213CDC(gameObject, itemLabelList);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
        max_length = itemLabelList->max_length;
        ++v7;
      }
      while ( (int)v7 < max_length );
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
  __int64 v8; // x2
  Il2CppObject *CountableString; // x21
  int32_t type; // w9
  int v11; // w8
  Il2CppObject *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *Name; // x0
  __int64 v16; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x22
  System_String_o *v18; // x23
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  QuestRewardItemAction_c *v22; // x0
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596D3DD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EquipMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&QuestRewardItemAction_TypeInfo);
    sub_2213A60(&StringLiteral_11322/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D3DD = 1;
  }
  CrossOperatorString = ItemType__get_CrossOperatorString(0);
  if ( !questInfoReward )
    goto LABEL_31;
  CountableString = (Il2CppObject *)CrossOperatorString;
  type = questInfoReward->fields.type;
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  if ( type == 1 )
  {
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !CrossOperatorString )
      goto LABEL_31;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_31;
    Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0, 0, 0);
  }
  else
  {
    if ( type == 2 )
    {
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
      CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( CrossOperatorString )
      {
        CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                                questInfoReward->fields.objectId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( CrossOperatorString )
        {
          v12 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
          CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0);
          goto LABEL_24;
        }
      }
LABEL_31:
      sub_2213CDC(CrossOperatorString, v7);
    }
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EquipMaster___);
    if ( !CrossOperatorString )
      goto LABEL_31;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_31;
    v17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7, v16);
    Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(v17, 0);
  }
  v12 = (Il2CppObject *)Name;
LABEL_24:
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11322/*"QUEST_CLEAR_REWARD_GET"*/, 0);
  num = questInfoReward->fields.num;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &num);
  CrossOperatorString = System_String__Format_75697948(v18, v12, CountableString, v19, 0);
  if ( !itemLabel )
    goto LABEL_31;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0);
  v22 = QuestRewardItemAction_TypeInfo;
  if ( !*(&QuestRewardItemAction_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo, v20, v21);
    v22 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v22->static_fields->ITEM_LABEL_MAX_WIDTH, 0, 0);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0);
  if ( !CrossOperatorString )
    goto LABEL_31;
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

  if ( (byte_596D3E1 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestRewardItemAction__setState__);
    byte_596D3E1 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void QuestRewardItemAction__SetTitleSprite(
        QuestRewardItemAction_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.titleSpriteName = spriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.titleSpriteName,
    (int32_t)spriteName,
    (System_String_o *)method,
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
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *v26; // x24
  Il2CppObject *v27; // x21
  __int64 v28; // x2
  UnityEngine_Object_o *v29; // x23
  struct System_String_o *name; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  QuestRewardItemAction_o *v37; // x0
  const MethodInfo *v38; // x3
  QuestRewardItemAction_o *v39; // x0
  const MethodInfo *v40; // x3
  QuestRewardItemAction_o *v41; // x0
  const MethodInfo *v42; // x3
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct UILabel_o *mItemLabel; // x22
  __int64 v50; // x21
  __int64 v51; // x1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct UnityEngine_GameObject_array *v64; // x21
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v76; // x0
  const MethodInfo *v77; // x3
  UnityEngine_Object_o *v78; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v80; // x1
  __int64 v81; // x0

  if ( (byte_596D3DA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UILabel___TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D3DA = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58855044;
  p_mAnimation = &this->fields.mAnimation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__58855044,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  v15 = UnityEngine_Component__GetComponentInChildren_object__58855044(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v15;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  v23 = UnityEngine_Component__GetComponentInChildren_object__58855044(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v26 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v27 = v23;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  transform = UnityEngine_Object__op_Inequality(v26, 0, 0);
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
    v29 = (UnityEngine_Object_o *)*p_mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v28);
    transform = UnityEngine_Object__op_Inequality(v29, 0, 0);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimationName,
    (int32_t)name,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
LABEL_18:
  if ( !v27 )
    goto LABEL_48;
  transform = (__int64)this->fields.mItemLabel;
  BYTE5(v27[6].monitor) = 1;
  if ( !transform )
    goto LABEL_48;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  QuestRewardItemAction__SetActiveLabelList(v37, this->fields.mItemLabelList_2, 0, v38);
  QuestRewardItemAction__SetActiveLabelList(v39, this->fields.mItemLabelList_3, 0, v40);
  QuestRewardItemAction__SetActiveLabelList(v41, this->fields.mItemLabelList_4, 0, v42);
  transform = sub_2213B20(UILabel___TypeInfo, 1);
  if ( !transform )
    goto LABEL_48;
  mItemLabel = this->fields.mItemLabel;
  v50 = transform;
  if ( mItemLabel )
  {
    transform = sub_2213BB4(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
      v81 = sub_2213D00(0, v51);
      sub_2213BA0(v81, 0);
    }
  }
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_49;
  *(_QWORD *)(v50 + 32) = mItemLabel;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 32), (int32_t)mItemLabel, v43, v44, v45, v46, v47, v48);
  this->fields.itemLabelDispList = (struct UILabel_array *)v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemLabelDispList, v50, v52, v53, v54, v55, v56, v57);
  transform = sub_2213B20(UnityEngine_GameObject___TypeInfo, 1);
  if ( !transform )
    goto LABEL_48;
  v64 = (struct UnityEngine_GameObject_array *)transform;
  if ( !*(_DWORD *)(transform + 24) )
LABEL_49:
    sub_2213CE4(transform);
  mAppearEffObj = this->fields.mAppearEffObj;
  *(_QWORD *)(transform + 32) = mAppearEffObj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(transform + 32),
    (int32_t)mAppearEffObj,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.appearEffObjDispList = v64;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appearEffObjDispList,
    (int32_t)v64,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  if ( !qri )
LABEL_48:
    sub_2213CDC(transform, v6);
  if ( qri->fields.type == 1 )
  {
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_48;
    UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
    mServantFaceIcon = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73, v74);
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
    ServantFaceIconComponent__Set_48052592(
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
      0,
      0);
  }
  else
  {
    v78 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v72);
    if ( UnityEngine_Object__op_Inequality(v78, 0, 0) )
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
                           (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !transform )
      goto LABEL_48;
    ItemIconComponent__SetGift_47884936(
      (ItemIconComponent_o *)transform,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0);
  }
  QuestRewardItemAction__SetClearTextLabel(v76, this->fields.mItemLabel, qri, v77);
  QuestRewardItemAction__CommonSetUpEndAction(this, v80);
}


void QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UnityEngine_Component_o *mItemLabel; // x8
  QuestRewardItemAction_o *v22; // x0
  const MethodInfo *v23; // x3
  QuestRewardItemAction_o *v24; // x0
  const MethodInfo *v25; // x3
  QuestRewardItemAction_o *v26; // x0
  const MethodInfo *v27; // x3
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct UILabel_o *v34; // x22
  ServantFaceIconComponent_o *v35; // x21
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct UnityEngine_GameObject_array *v49; // x21
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x23
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct UnityEngine_GameObject_array **p_mAppearEffObjList_3; // x8
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  struct UnityEngine_GameObject_array *v76; // x1
  __int64 v77; // x21
  UISprite_o **m_Items; // x25
  ServantFaceIconComponent_o **v79; // x27
  const MethodInfo *v80; // x3
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v82; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v84; // w8
  const MethodInfo *v85; // x1
  __int64 v86; // x0
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D3DC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&UILabel___TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D3DC = 1;
  }
  if ( !this->fields.mItemSpList_2 || !this->fields.mItemLabelList_3 || !this->fields.mItemLabelList_4 )
    return;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58855044;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__58855044,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  v14 = UnityEngine_Component__GetComponentInChildren_object__58855044(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                              (UnityEngine_Component_o *)transform,
                                              (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_60;
  mItemLabel = (UnityEngine_Component_o *)this->fields.mItemLabel;
  BYTE5(transform->fields.rarity2Sprite) = 1;
  if ( !mItemLabel )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(mItemLabel, 0);
  if ( !transform )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  QuestRewardItemAction__SetActiveLabelList(v22, this->fields.mItemLabelList_2, 0, v23);
  QuestRewardItemAction__SetActiveLabelList(v24, this->fields.mItemLabelList_3, 0, v25);
  QuestRewardItemAction__SetActiveLabelList(v26, this->fields.mItemLabelList_4, 0, v27);
  transform = (ServantFaceIconComponent_o *)sub_2213B20(UILabel___TypeInfo, 1);
  if ( !transform )
    goto LABEL_60;
  v34 = this->fields.mItemLabel;
  v35 = transform;
  if ( v34 )
  {
    transform = (ServantFaceIconComponent_o *)sub_2213BB4(this->fields.mItemLabel, transform->klass->_1.element_class);
    if ( !transform )
    {
      v86 = sub_2213D00(0, v36);
      sub_2213BA0(v86, 0);
    }
  }
  if ( !LODWORD(v35->fields.m_CancellationTokenSource) )
    goto LABEL_61;
  v35->fields.backSprite = (struct UISprite_o *)v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->fields.backSprite, (int32_t)v34, v28, v29, v30, v31, v32, v33);
  this->fields.itemLabelDispList = (struct UILabel_array *)v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemLabelDispList,
    (int32_t)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  transform = (ServantFaceIconComponent_o *)sub_2213B20(UnityEngine_GameObject___TypeInfo, 1);
  if ( !transform )
    goto LABEL_60;
  v49 = (struct UnityEngine_GameObject_array *)transform;
  if ( !LODWORD(transform->fields.m_CancellationTokenSource) )
LABEL_61:
    sub_2213CE4(transform);
  mAppearEffObj = this->fields.mAppearEffObj;
  transform->fields.backSprite = (struct UISprite_o *)mAppearEffObj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&transform->fields.backSprite,
    (int32_t)mAppearEffObj,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.appearEffObjDispList = v49;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appearEffObjDispList,
    (int32_t)v49,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  if ( !questInfoReward )
    goto LABEL_60;
  num = questInfoReward->fields.num;
  if ( num == 3 )
  {
    SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_3;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_3_TYPES,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_3;
  }
  else if ( num == 2 )
  {
    SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_2;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_2_TYPES,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_2;
  }
  else
  {
    SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_4;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_4_TYPES,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_4;
  }
  v76 = *p_mAppearEffObjList_3;
  this->fields.appearEffObjDispList = *p_mAppearEffObjList_3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appearEffObjDispList,
    (int32_t)v76,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  if ( !mItemSpList_3 )
LABEL_60:
    sub_2213CDC(transform, v6);
  v77 = 0;
  m_Items = mItemSpList_3->m_Items;
  v79 = mServantFaceIconList_3->m_Items;
  do
  {
    if ( (unsigned int)v77 >= LODWORD(mItemSpList_3->max_length) )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)m_Items[v77];
    if ( !transform )
      goto LABEL_60;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
    if ( !transform )
      goto LABEL_60;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( (unsigned int)v77 >= LODWORD(mItemSpList_3->max_length) )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)m_Items[v77];
    if ( !transform )
      goto LABEL_60;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
    if ( !transform )
      goto LABEL_60;
    v88.fields.y = 0.0;
    v88.fields.x = position.fields.x;
    v88.fields.z = position.fields.z;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v88, 0);
    if ( questInfoReward->fields.type == 1 )
    {
      if ( (unsigned int)v77 >= LODWORD(mItemSpList_3->max_length) )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)m_Items[v77];
      if ( !transform )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      max_length = mServantFaceIconList_3->max_length;
      if ( max_length )
      {
        if ( (unsigned int)v77 >= (unsigned int)max_length )
          goto LABEL_61;
        transform = v79[v77];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
        if ( (unsigned int)v77 >= LODWORD(mServantFaceIconList_3->max_length) )
          goto LABEL_61;
        transform = v79[v77];
        if ( !transform )
          goto LABEL_60;
        ServantFaceIconComponent__Set_48052592(
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
        if ( (unsigned int)v77 >= (unsigned int)v82 )
          goto LABEL_61;
        transform = v79[v77];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      }
      if ( (unsigned int)v77 >= LODWORD(mItemSpList_3->max_length) )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)m_Items[v77];
      if ( !transform )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      transform = (ServantFaceIconComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                  gameObject,
                                                  (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !transform )
        goto LABEL_60;
      ItemIconComponent__SetGift_47884936(
        (ItemIconComponent_o *)transform,
        questInfoReward->fields.type,
        questInfoReward->fields.objectId,
        1,
        0,
        0);
    }
    v84 = questInfoReward->fields.num;
    ++v77;
    if ( v84 >= 4 )
      v84 = 4;
    if ( v84 <= 2 )
      v84 = 2;
  }
  while ( (unsigned int)v77 < v84 );
  QuestRewardItemAction__SetClearTextLabel(
    (QuestRewardItemAction_o *)transform,
    this->fields.mItemLabel,
    questInfoReward,
    v80);
  QuestRewardItemAction__CommonSetUpEndAction(this, v85);
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardItemAction__Setup_43403752(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v4; // x20
  QuestRewardItemAction_o *v5; // x19
  bool v6; // w21
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int v27; // w8
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  struct UILabel_array *mItemLabelList_4; // x1
  UILabel_array **p_mItemLabelList_4; // x24
  struct System_String_o *DIFF_ANIMATION_NAME_4_TYPES; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct UnityEngine_GameObject_array *mAppearEffObjList_4; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  QuestRewardItemAction_o *v46; // x0
  const MethodInfo *v47; // x3
  QuestRewardItemAction_o *v48; // x0
  const MethodInfo *v49; // x3
  QuestRewardItemAction_o *v50; // x0
  const MethodInfo *v51; // x3
  bool v52; // w2
  TerminalPramsManager_c *v53; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  __int64 v55; // x2
  Il2CppObject *Master_object; // x21
  const MethodInfo *v57; // x2
  QuestRewardInfo_o *v58; // x8
  int max_length; // w8
  struct UILabel_array *mItemLabelList_2; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_2_TYPES; // x1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct UnityEngine_GameObject_array *mAppearEffObjList_2; // x1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  QuestRewardItemAction_o *v75; // x0
  const MethodInfo *v76; // x3
  QuestRewardItemAction_o *v77; // x0
  const MethodInfo *v78; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v80; // w2
  struct UILabel_array *v81; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_3_TYPES; // x1
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  QuestRewardItemAction_o *v96; // x0
  const MethodInfo *v97; // x3
  int v98; // w8
  __int64 v99; // x26
  unsigned int v100; // w27
  QuestRewardInfo_o *v101; // x21
  const MethodInfo *v102; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  v4 = questInfoRewardList;
  v5 = this;
  v6 = isMultiDisp;
  if ( (byte_596D3DB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    this = (QuestRewardItemAction_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D3DB = 1;
  }
  entity = 0;
  v5->fields.isMultiDisp = v6;
  if ( !v4 )
    goto LABEL_78;
  if ( SLODWORD(v4->max_length) <= 1 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, questInfoRewardList, isMultiDisp);
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92D = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, questInfoRewardList, isMultiDisp);
      v53 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v53->static_fields->_PhaseCnt_k__BackingField;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questInfoRewardList, isMultiDisp);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, questInfoRewardList, v55);
      this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_78;
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
        goto LABEL_78;
      this = (QuestRewardItemAction_o *)QuestPhaseEntity__GetClearGiftItemListDisplay(entity, 0);
      if ( !LODWORD(v4->max_length) )
        goto LABEL_79;
      v58 = v4->m_Items[0];
      if ( !v58 )
        goto LABEL_78;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v58->fields.objectId,
                                          (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
      max_length = v4->max_length;
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !LODWORD(v4->max_length) )
          goto LABEL_79;
        questInfoRewardList = (QuestRewardInfo_array *)v4->m_Items[0];
        if ( !questInfoRewardList )
          goto LABEL_78;
        if ( SLODWORD(questInfoRewardList->max_length) >= 2 )
        {
          QuestRewardItemAction__SetupMultipleQuestRewardInfo(v5, (QuestRewardInfo_o *)questInfoRewardList, v57);
          return;
        }
      }
    }
    else
    {
      max_length = v4->max_length;
    }
    if ( !max_length )
      goto LABEL_79;
    QuestRewardItemAction__Setup(v5, v4->m_Items[0], v57);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_78;
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v5->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58855044;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.mAnimation,
    (int32_t)ComponentInChildren_object__58855044,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_78;
  v14 = UnityEngine_Component__GetComponentInChildren_object__58855044(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v5->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.mSimpleAnimation,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_78;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !this )
    goto LABEL_78;
  v27 = v4->max_length;
  BYTE5(this->fields.titleSprites) = 1;
  if ( v27 <= 2 )
  {
    if ( v27 != 2 )
    {
      if ( !v27 )
        goto LABEL_79;
      goto LABEL_77;
    }
    mItemLabelList_2 = v5->fields.mItemLabelList_2;
    mItemSpList_2 = v5->fields.mItemSpList_2;
    mServantFaceIconList_2 = v5->fields.mServantFaceIconList_2;
    v5->fields.itemLabelDispList = mItemLabelList_2;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v5->fields.itemLabelDispList,
      (int32_t)mItemLabelList_2,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    DIFF_ANIMATION_NAME_2_TYPES = v5->fields.DIFF_ANIMATION_NAME_2_TYPES;
    v5->fields.playAnimationName = DIFF_ANIMATION_NAME_2_TYPES;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v5->fields.playAnimationName,
      (int32_t)DIFF_ANIMATION_NAME_2_TYPES,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    mAppearEffObjList_2 = v5->fields.mAppearEffObjList_2;
    v5->fields.appearEffObjDispList = mAppearEffObjList_2;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v5->fields.appearEffObjDispList,
      (int32_t)mAppearEffObjList_2,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
    if ( this )
    {
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        QuestRewardItemAction__SetActiveLabelList(v75, v5->fields.mItemLabelList_2, 1, v76);
        mItemLabelList_3 = v5->fields.mItemLabelList_3;
        v80 = 0;
LABEL_47:
        QuestRewardItemAction__SetActiveLabelList(v77, mItemLabelList_3, v80, v78);
        v52 = 0;
        p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
        goto LABEL_48;
      }
    }
LABEL_78:
    sub_2213CDC(this, questInfoRewardList);
  }
  if ( v27 == 3 )
  {
    v81 = v5->fields.mItemLabelList_3;
    mItemSpList_2 = v5->fields.mItemSpList_3;
    mServantFaceIconList_2 = v5->fields.mServantFaceIconList_3;
    v5->fields.itemLabelDispList = v81;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v5->fields.itemLabelDispList,
      (int32_t)v81,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    DIFF_ANIMATION_NAME_3_TYPES = v5->fields.DIFF_ANIMATION_NAME_3_TYPES;
    v5->fields.playAnimationName = DIFF_ANIMATION_NAME_3_TYPES;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v5->fields.playAnimationName,
      (int32_t)DIFF_ANIMATION_NAME_3_TYPES,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
    mAppearEffObjList_3 = v5->fields.mAppearEffObjList_3;
    v5->fields.appearEffObjDispList = mAppearEffObjList_3;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v5->fields.appearEffObjDispList,
      (int32_t)mAppearEffObjList_3,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
    if ( this )
    {
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        QuestRewardItemAction__SetActiveLabelList(v96, v5->fields.mItemLabelList_2, 0, v97);
        mItemLabelList_3 = v5->fields.mItemLabelList_3;
        v80 = 1;
        goto LABEL_47;
      }
    }
    goto LABEL_78;
  }
  if ( v27 != 4 )
  {
LABEL_77:
    QuestRewardItemAction__Setup(v5, v4->m_Items[0], (const MethodInfo *)v21);
    return;
  }
  mItemSpList_2 = v5->fields.mItemSpList_4;
  mServantFaceIconList_2 = v5->fields.mServantFaceIconList_4;
  p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
  mItemLabelList_4 = v5->fields.mItemLabelList_4;
  v5->fields.itemLabelDispList = mItemLabelList_4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.itemLabelDispList,
    (int32_t)mItemLabelList_4,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  DIFF_ANIMATION_NAME_4_TYPES = v5->fields.DIFF_ANIMATION_NAME_4_TYPES;
  v5->fields.playAnimationName = DIFF_ANIMATION_NAME_4_TYPES;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.playAnimationName,
    (int32_t)DIFF_ANIMATION_NAME_4_TYPES,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  mAppearEffObjList_4 = v5->fields.mAppearEffObjList_4;
  v5->fields.appearEffObjDispList = mAppearEffObjList_4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.appearEffObjDispList,
    (int32_t)mAppearEffObjList_4,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
  if ( !this )
    goto LABEL_78;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  QuestRewardItemAction__SetActiveLabelList(v46, v5->fields.mItemLabelList_2, 0, v47);
  QuestRewardItemAction__SetActiveLabelList(v48, v5->fields.mItemLabelList_3, 0, v49);
  v52 = 1;
LABEL_48:
  QuestRewardItemAction__SetActiveLabelList(v50, *p_mItemLabelList_4, v52, v51);
  v98 = v4->max_length;
  if ( v98 >= 1 )
  {
    v99 = 4;
    while ( 1 )
    {
      v100 = v99 - 4;
      if ( (int)v99 - 4 >= (unsigned int)v98 )
        break;
      v101 = (QuestRewardInfo_o *)*((_QWORD *)&v4->obj.klass + v99);
      if ( !v101 )
        goto LABEL_78;
      if ( v101->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_78;
        if ( v100 >= LODWORD(mItemSpList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v99);
        if ( !this )
          goto LABEL_78;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( !mServantFaceIconList_2 )
          goto LABEL_78;
        if ( v100 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v99);
        if ( !this )
          goto LABEL_78;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_78;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( v100 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v99);
        if ( !this )
          goto LABEL_78;
        ServantFaceIconComponent__Set_48052592(
          (ServantFaceIconComponent_o *)this,
          v101->fields.objectId,
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
          0,
          0);
      }
      else
      {
        if ( !mServantFaceIconList_2 )
          goto LABEL_78;
        if ( v100 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v99);
        if ( !this )
          goto LABEL_78;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_78;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !mItemSpList_2 )
          goto LABEL_78;
        if ( v100 >= LODWORD(mItemSpList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v99);
        if ( !this )
          goto LABEL_78;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_78;
        ItemIconComponent__SetGift_47884936(
          (ItemIconComponent_o *)this,
          v101->fields.type,
          v101->fields.objectId,
          v101->fields.num,
          0,
          0);
      }
      itemLabelDispList = v5->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_78;
      if ( v100 >= LODWORD(itemLabelDispList->max_length) )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v99), v101, v102);
      v98 = v4->max_length;
      if ( (int)++v99 - 4 >= v98 )
        goto LABEL_75;
    }
LABEL_79:
    sub_2213CE4(this);
  }
LABEL_75:
  QuestRewardItemAction__CommonSetUpEndAction(v5, (const MethodInfo *)questInfoRewardList);
}


void QuestRewardItemAction__TouchWaitEnd(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_596D3E3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AndroidBackKeyManager_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_QuestRewardItemAction_TouchWaitEnd__);
    sub_2213A60(&Method_QuestRewardItemAction__TouchWaitEnd_b__65_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D3E3 = 1;
  }
  mScreenTouchInfo = (UnityEngine_Component_o *)this->fields.mScreenTouchInfo;
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
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
      v4 = (_QWORD *)sub_2213A78(Method_QuestRewardItemAction_TouchWaitEnd__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7, v8);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_QuestRewardItemAction__TouchWaitEnd_b__65_0__, 0);
  if ( !v10 )
LABEL_13:
    sub_2213CDC(mScreenTouchInfo, method);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v12, 0);
  QuestRewardItemAction__SetState(this, 0, v13);
}


void QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596D3D9 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestRewardItemAction__update__);
    sub_2213A60(&CTouch_TypeInfo);
    byte_596D3D9 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E83E6C *)Method_CStateManager_QuestRewardItemAction__update__);
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
  UnityEngine_Component_o *transform; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x19
  __int64 v14; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  Il2CppObject *Component_object; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  ManagerConfig_c *v33; // x0
  int WIDTH; // w25
  MoveObject_o *v35; // x21
  System_Action_o *v36; // x22
  System_Action_o *v37; // x23
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v41; // 0:kr14_12.12
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D3EA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&Method_QuestRewardItemAction_StateItemLabel_begin__);
    sub_2213A60(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_2213A60(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_2213A60(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_596D3EA = 1;
  }
  v4 = sub_2213CCC(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_20;
  *(_QWORD *)(v4 + 32) = that;
  v13 = v4 + 32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)that, v7, v8, v9, v10, v11, v12);
  v14 = *(_QWORD *)(v4 + 32);
  if ( !v14 )
    goto LABEL_20;
  transform = *(UnityEngine_Component_o **)(v14 + 80);
  if ( *(_BYTE *)(v14 + 312) )
  {
    if ( !transform )
      goto LABEL_20;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_20;
    transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
  }
  if ( !transform )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)gameObject, v16, v17, v18, v19, v20, v21);
  v23 = *(_QWORD *)(v4 + 32);
  if ( !v23 )
    goto LABEL_20;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)transform,
    *(UILabel_array **)(v23 + 248),
    1,
    v22);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v4 + 16),
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)Component_object, v25, v26, v27, v28, v29, v30);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v33 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v31, v32);
    v33 = ManagerConfig_TypeInfo;
  }
  WIDTH = v33->static_fields->WIDTH;
  v41 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v35 = *(MoveObject_o **)(v4 + 24);
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0);
  v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0);
  if ( !v35
    || (v42.fields.x = (float)WIDTH,
        v42.fields.y = LocalPosition.fields.y,
        v42.fields.z = LocalPosition.fields.z,
        MoveObject__Play(v35, v42, v41, 0.25, v36, v37, 0.0, 17, 0),
        !*(_QWORD *)v13) )
  {
LABEL_20:
    sub_2213CDC(transform, v6);
  }
  if ( *(_BYTE *)(*(_QWORD *)v13 + 217LL) )
  {
    v38 = Method_QuestRewardItemAction_StateItemLabel_begin__;
    if ( (*((_BYTE *)Method_QuestRewardItemAction_StateItemLabel_begin__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_2213A78(Method_QuestRewardItemAction_StateItemLabel_begin__);
    v39 = (System_Reflection_MethodBase_o *)sub_2213A44(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 4, 0, 0);
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
    sub_2213CDC(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0);
}


void QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_2213CDC(0, method);
  QuestRewardItemAction__SetState(that, 4, v2);
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
  QuestRewardItemAction_StatePlay_o *v4; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x21
  __int64 v6; // x2
  SimpleAnimation_State_o *Item; // x0
  MissionNaviTransitionBoardItem_o *p_fields; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  MissionNaviTransitionBoardItem_c *klass; // x21
  float mTreasureAnimStartTime; // s8
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v18; // x20
  float v19; // s0
  _QWORD *image; // x8
  __int64 v21; // x9
  SimpleAnimation_State_c **v22; // x10
  __int64 v23; // x0
  MissionNaviTransitionBoardItem_c *v24; // x20
  _QWORD *v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  unsigned int v31; // w21
  _BOOL4 v32; // w8

  v4 = this;
  if ( (byte_596D3E8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardItemAction_StatePlay_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D3E8 = 1;
  }
  if ( !that )
    goto LABEL_48;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_48;
    Item = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.playAnimationName, 0);
    v4->fields.mSimpleAnimState = Item;
    p_fields = (MissionNaviTransitionBoardItem_o *)&v4->fields;
    sub_2213A04(p_fields, (int32_t)Item, v9, v10, v11, v12, v13, v14);
    klass = p_fields->klass;
    if ( that->fields.mIsFromTreasureBox )
    {
      mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
      if ( !klass )
        goto LABEL_48;
    }
    else
    {
      mTreasureAnimStartTime = 0.0;
      if ( !klass )
        goto LABEL_48;
    }
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
          goto LABEL_24;
      }
      v23 = (__int64)&image[2 * *(_DWORD *)v22 + 51];
    }
    else
    {
LABEL_24:
      v23 = sub_224BC3C(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD, float))v23)(
                                                  klass,
                                                  *(_QWORD *)(v23 + 8),
                                                  mTreasureAnimStartTime);
    v24 = p_fields->klass;
    if ( !v24 )
      goto LABEL_48;
    v25 = v24->_1.image;
    v26 = *((unsigned __int16 *)v24->_1.image + 151);
    if ( *((_WORD *)v24->_1.image + 151) )
    {
      v27 = (SimpleAnimation_State_c **)(v25[22] + 8LL);
      while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v26;
        v27 += 2;
        if ( !v26 )
          goto LABEL_31;
      }
      v28 = (__int64)&v25[2 * *(_DWORD *)v27 + 55];
    }
    else
    {
LABEL_31:
      v28 = sub_224BC3C(v24, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 1.0);
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
LABEL_48:
      sub_2213CDC(this, that);
    this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_78552168(
                                                  (SimpleAnimation_o *)this,
                                                  that->fields.playAnimationName,
                                                  0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v6);
    this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
      if ( !this )
        goto LABEL_48;
      v18 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)this,
                                                that->fields.playAnimationName,
                                                0);
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v18, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( that->fields.mIsFromTreasureBox )
        {
          v19 = that->fields.mTreasureAnimStartTime;
          if ( !v18 )
            goto LABEL_48;
        }
        else
        {
          v19 = 0.0;
          if ( !v18 )
            goto LABEL_48;
        }
        UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v18, v19, 0);
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v18, 1.0, 0);
        this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
        if ( !this )
          goto LABEL_48;
        this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_83078544(
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
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
        sub_2213CE4(this);
      v32 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[v31];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v32, 0);
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v31 >= max_length )
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
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  UnityEngine_GameObject_o *v8; // x20
  _BOOL4 mTreasureEffectOff; // w8
  int v10; // w8
  __int128 v11; // q0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v17; // x2
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v19; // x2
  int32_t v20; // w20
  System_Reflection_MethodBase_o *v21; // x0
  _OWORD v22[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v23; // [xsp+20h] [xbp-50h] BYREF
  __int128 i; // [xsp+30h] [xbp-40h]

  if ( (byte_596D3E9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (QuestRewardItemAction_StatePlay_o *)sub_2213A60(&Method_QuestRewardItemAction_StatePlay_update__);
    byte_596D3E9 = 1;
  }
  v23 = 0u;
  i = 0u;
  if ( !that )
    goto LABEL_44;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_44;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= max_length )
        sub_2213CE4(this);
      v7 = &appearEffObjDispList->obj.klass + (int)v6;
      v8 = (UnityEngine_GameObject_o *)v7[4];
      if ( !v8 )
        goto LABEL_44;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v7[4],
                                                    0);
      if ( that->fields.mIsFromTreasureBox )
      {
        mTreasureEffectOff = that->fields.mTreasureEffectOff;
        if ( mTreasureEffectOff == ((unsigned __int8)this & 1) )
        {
          v10 = !mTreasureEffectOff;
LABEL_14:
          UnityEngine_GameObject__SetActive(v8, v10 != 0, 0);
        }
      }
      else if ( ((unsigned __int8)this & 1) == 0 )
      {
        v10 = 1;
        goto LABEL_14;
      }
      max_length = appearEffObjDispList->max_length;
    }
    while ( (int)++v6 < max_length );
  }
  this = (QuestRewardItemAction_StatePlay_o *)that->fields.titleSpriteToTextureList;
  if ( !this )
    goto LABEL_44;
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v22,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_43FFB84 *)Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___GetEnumerator__);
  v11 = v22[0];
  *(_QWORD *)&v22[0] = 0;
  *((_QWORD *)&v22[0] + 1) = &v23;
  v23 = v11;
  for ( i = v22[1]; ; UIWidget__set_color(*((UIWidget_o **)&i + 1), *(UnityEngine_Color_o *)(i + 148), 0) )
  {
    v12 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v23,
            (const MethodInfo_40EA4FC *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___MoveNext__);
    if ( !v12 )
      break;
    if ( !(_QWORD)i )
      sub_2213CDC(v12, v13);
    if ( !*((_QWORD *)&i + 1) )
      sub_2213CDC(0, v13);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (const MethodInfo_40EA4F8 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___Dispose__);
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_44;
    if ( SimpleAnimation__IsPlaying((SimpleAnimation_o *)this, that->fields.playAnimationName, 0) )
      return;
LABEL_33:
    this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
      {
        if ( that->fields.mLabelAnimate )
        {
          v20 = 3;
        }
        else if ( that->fields.mGetSEonProgram )
        {
          v21 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_QuestRewardItemAction_StatePlay_update__);
          v20 = 4;
          OverwriteAssetSoundName__PlaySystemSe(v21, 4, 0, 0);
        }
        else
        {
          v20 = 4;
        }
        QuestRewardItemAction__SetState(that, v20, v19);
      }
      return;
    }
LABEL_44:
    sub_2213CDC(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v17);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
    if ( !this )
      goto LABEL_44;
    if ( UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)this, that->fields.playAnimationName, 0) )
      return;
    goto LABEL_33;
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
  System_Collections_ICollection_o **object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x19
  const MethodInfo *v14; // x2
  bool IsNullOrEmpty; // w8
  bool v16; // w8
  __int64 v17; // x2
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v21; // x2
  System_String_o *v22; // x21
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D3E6 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_First_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&QuestRewardItemAction_TypeInfo);
    sub_2213A60(&Method_QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0__begin_b__0__);
    sub_2213A60(&QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0_TypeInfo);
    byte_596D3E6 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v4 = sub_2213CCC(QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_31;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_31;
  IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(*(_QWORD *)(v4 + 16) + 328LL), 0);
  object = *(System_Collections_ICollection_o ***)v13;
  if ( IsNullOrEmpty )
    goto LABEL_8;
  if ( !object )
    goto LABEL_31;
  v16 = BasicHelper__IsNullOrEmpty(object[13], 0);
  object = *(System_Collections_ICollection_o ***)v13;
  if ( v16 )
  {
LABEL_8:
    if ( object )
    {
LABEL_9:
      QuestRewardItemAction__SetState((QuestRewardItemAction_o *)object, 2, v14);
      return;
    }
LABEL_31:
    sub_2213CDC(object, v6);
  }
  if ( !object )
    goto LABEL_31;
  object = (System_Collections_ICollection_o **)System_Linq_Enumerable__First_object_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)object[13],
                                                  (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_UISprite___);
  if ( !object )
    goto LABEL_31;
  if ( !*(_QWORD *)v13 )
    goto LABEL_31;
  object = (System_Collections_ICollection_o **)object[58];
  if ( !object )
    goto LABEL_31;
  object = (System_Collections_ICollection_o **)UIAtlas__GetSprite(
                                                  (UIAtlas_o *)object,
                                                  *(System_String_o **)(*(_QWORD *)v13 + 328LL),
                                                  0);
  if ( object )
  {
    if ( !*(_QWORD *)v13 )
      goto LABEL_31;
    object = *(System_Collections_ICollection_o ***)(*(_QWORD *)v13 + 104LL);
    if ( !object )
      goto LABEL_31;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)object,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
      if ( !v18 )
        break;
      if ( !*(_QWORD *)v13 )
        sub_2213CDC(v18, v19);
      current = v26.fields._current;
      if ( !v26.fields._current )
        sub_2213CDC(v18, v19);
      UISprite__set_spriteName((UISprite_o *)v26.fields._current, *(System_String_o **)(*(_QWORD *)v13 + 328LL), 0);
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[33].methodPtr)(
        current,
        current->klass->vtable[33].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    object = *(System_Collections_ICollection_o ***)v13;
    if ( !*(_QWORD *)v13 )
      goto LABEL_31;
    QuestRewardItemAction__SetState((QuestRewardItemAction_o *)object, 2, v21);
  }
  else
  {
    object = (System_Collections_ICollection_o **)QuestRewardItemAction_TypeInfo;
    if ( !*(&QuestRewardItemAction_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo, v6, v17);
    if ( !*(_QWORD *)v13 )
      goto LABEL_31;
    v22 = System_String__Concat_75651716(
            QuestRewardItemAction_TypeInfo->static_fields->GetSpritesTexturePath,
            *(System_String_o **)(*(_QWORD *)v13 + 328LL),
            0);
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)v4,
      Method_QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0__begin_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24, v25);
    if ( !AssetManager__loadAssetStorage(v22, v23, 1, 0, 0) )
    {
      object = *(System_Collections_ICollection_o ***)v13;
      if ( *(_QWORD *)v13 )
        goto LABEL_9;
      goto LABEL_31;
    }
  }
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
  System_Collections_Generic_List_object__o *Object_object__58532980; // x0
  __int64 v8; // x1
  struct QuestRewardItemAction_o *that; // x8
  struct QuestRewardItemAction_o *v10; // x8
  UnityEngine_Texture_o *v11; // x22
  System_String_o *v12; // x0
  UnityEngine_Texture_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  QuestRewardItemAction_c *v16; // x0
  struct QuestRewardItemAction_o *v17; // x8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v23; // x1
  UnityEngine_Behaviour_o *v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo_3CF8CCC *v27; // x4
  struct QuestRewardItemAction_o *v28; // x8
  System_Collections_Generic_List_T__o *titleSpriteToTextureList; // x22
  __int64 v30; // x0
  System_ValueTuple_object__object__o v31; // x1
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x2
  System_ValueTuple_object__object__o v42; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+30h] [xbp-80h] BYREF
  System_ValueTuple_object__object__o v45; // 0:x0.16

  if ( (byte_596D3E7 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_UITexture___);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&QuestRewardItemAction_TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_UISprite__UITexture___ctor__);
    sub_2213A60(&StringLiteral_17207/*"_alpha"*/);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    byte_596D3E7 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
  v6 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v6, v5, 0);
  that = this->fields.that;
  if ( !that )
    goto LABEL_27;
  if ( !assetData )
    goto LABEL_27;
  Object_object__58532980 = (System_Collections_Generic_List_object__o *)AssetData__GetObject_object__58532980(
                                                                           assetData,
                                                                           that->fields.titleSpriteName,
                                                                           (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  v10 = this->fields.that;
  if ( !v10 )
    goto LABEL_27;
  v11 = (UnityEngine_Texture_o *)Object_object__58532980;
  v12 = System_String__Concat_75651716(v10->fields.titleSpriteName, (System_String_o *)StringLiteral_17207/*"_alpha"*/, 0);
  Object_object__58532980 = (System_Collections_Generic_List_object__o *)AssetData__GetObject_object__58532980(
                                                                           assetData,
                                                                           v12,
                                                                           (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !v6 )
    goto LABEL_27;
  v13 = (UnityEngine_Texture_o *)Object_object__58532980;
  UnityEngine_Material__set_mainTexture(v6, v11, 0);
  v16 = QuestRewardItemAction_TypeInfo;
  if ( !*(&QuestRewardItemAction_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo, v14, v15);
    v16 = QuestRewardItemAction_TypeInfo;
  }
  UnityEngine_Material__SetTexture_83276468(v6, v16->static_fields->MaskTex, v13, 0);
  v17 = this->fields.that;
  if ( !v17 )
    goto LABEL_27;
  Object_object__58532980 = (System_Collections_Generic_List_object__o *)v17->fields.titleSprites;
  if ( !Object_object__58532980 )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    Object_object__58532980,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v44 = v43;
  v43.fields._list = 0;
  *(_QWORD *)&v43.fields._index = &v44;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v18 )
      break;
    current = v44.fields._current;
    if ( !v44.fields._current )
      sub_2213CDC(v18, v19);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v44.fields._current, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_UITexture___);
    v24 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      sub_2213CDC(0, v23);
    ((void (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
      Component_object,
      v6,
      Component_object->klass->vtable[25].method);
    UnityEngine_Behaviour__set_enabled(v24, 1, 0);
    v25 = ((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v24->klass[2]._1.parent)(
            v24,
            v24->klass[2]._1.generic_class);
    v28 = this->fields.that;
    if ( !v28 )
      sub_2213CDC(v25, v26);
    titleSpriteToTextureList = (System_Collections_Generic_List_T__o *)v28->fields.titleSpriteToTextureList;
    v42.fields.Item1 = 0;
    v42.fields.Item2 = 0;
    v45.fields.Item1 = (Il2CppObject *)&v42;
    v45.fields.Item2 = current;
    System_ValueTuple_object__object____ctor(
      v45,
      (Il2CppObject *)v24,
      (Il2CppObject *)Method_System_ValueTuple_UISprite__UITexture___ctor__,
      v27);
    if ( !titleSpriteToTextureList
      || (v31 = v42,
          items = titleSpriteToTextureList->fields._items,
          v38 = Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___Add__,
          ++titleSpriteToTextureList->fields._version,
          !items) )
    {
      sub_2213CDC(v30, v31.fields.Item1);
    }
    size = titleSpriteToTextureList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
        titleSpriteToTextureList,
        v31,
        *(const MethodInfo_43FF060 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &items->obj + size;
      titleSpriteToTextureList->fields._size = size + 1;
      v40[2] = (Il2CppObject)v31;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v40[2],
        0,
        (System_String_o *)v31.fields.Item2,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  Object_object__58532980 = (System_Collections_Generic_List_object__o *)this->fields.that;
  if ( !Object_object__58532980 )
LABEL_27:
    sub_2213CDC(Object_object__58532980, v8);
  QuestRewardItemAction__SetState((QuestRewardItemAction_o *)Object_object__58532980, 2, v41);
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
    sub_2213CDC(this, that);
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
  const MethodInfo *v6; // x1

  if ( (byte_596D3EB & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D3EB = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, method);
  isTouchPush = (Il2CppObject *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( !that )
      goto LABEL_12;
    if ( that->fields.forcePause )
      return;
    isTouchPush = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !isTouchPush )
LABEL_12:
      sub_2213CDC(isTouchPush, v5);
    if ( !CommonUI__IsActive_TreasureBoxDialog((CommonUI_o *)isTouchPush, 0) )
      QuestRewardItemAction__CheckTutorial(that, v6);
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
  const MethodInfo *v2; // x2
  struct QuestRewardItemAction_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  if ( !_4__this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this->fields.__4__this, this->fields.state, v2);
}