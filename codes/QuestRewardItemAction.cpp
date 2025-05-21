void __fastcall QuestRewardItemAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B41892 & 1) == 0 )
  {
    sub_1BDB878(&QuestRewardItemAction_TypeInfo, v1);
    byte_4B41892 = 1;
  }
  QuestRewardItemAction_TypeInfo->static_fields->ITEM_LABEL_MAX_WIDTH = 1024;
}


void __fastcall QuestRewardItemAction___ctor(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B41891 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17233/*"bit_item_get01_3"*/, method);
    sub_1BDB878(&StringLiteral_17234/*"bit_item_get01_4"*/, v5);
    sub_1BDB878(&StringLiteral_17232/*"bit_item_get01_2"*/, v6);
    byte_4B41891 = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v7 = StringLiteral_17232/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17232/*"bit_item_get01_2"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES, v7, v2, v3);
  v8 = StringLiteral_17233/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17233/*"bit_item_get01_3"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES, v8, v9, v10);
  v11 = StringLiteral_17234/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17234/*"bit_item_get01_4"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES, v11, v12, v13);
  v14 = StringLiteral_17232/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17232/*"bit_item_get01_2"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES, v14, v15, v16);
  v17 = StringLiteral_17233/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17233/*"bit_item_get01_3"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES, v17, v18, v19);
  v20 = StringLiteral_17234/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17234/*"bit_item_get01_4"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES, v20, v21, v22);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_T__o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v19; // x1
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x21
  Il2CppObject *v23; // x22
  CStateManager_T__o *v24; // x20
  Il2CppObject *v25; // x21
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v29; // x21
  Il2CppObject *v30; // x21
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4B41886 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestRewardItemAction___ctor__, method);
    sub_1BDB878(&Method_CStateManager_QuestRewardItemAction__add__, v3);
    sub_1BDB878(&CStateManager_QuestRewardItemAction__TypeInfo, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&QuestRewardItemAction_StateItemLabel_TypeInfo, v8);
    sub_1BDB878(&QuestRewardItemAction_StateNone_TypeInfo, v9);
    sub_1BDB878(&QuestRewardItemAction_StatePlay_TypeInfo, v10);
    sub_1BDB878(&QuestRewardItemAction_StateTouchWait_TypeInfo, v11);
    byte_4B41886 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1BDBAC4(CStateManager_QuestRewardItemAction__TypeInfo);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3270084 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v13;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v13, v14, v15);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1BDBAC4(QuestRewardItemAction_StateNone_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_327012C *)Method_CStateManager_QuestRewardItemAction__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_1BDBAC4(QuestRewardItemAction_StatePlay_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !v20 )
      goto LABEL_24;
    CStateManager_object___add(
      v20,
      1,
      (IState_T__o *)v21,
      (const MethodInfo_327012C *)Method_CStateManager_QuestRewardItemAction__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (Il2CppObject *)sub_1BDBAC4(QuestRewardItemAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v23, 0LL);
    if ( !v22 )
      goto LABEL_24;
    CStateManager_object___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_327012C *)Method_CStateManager_QuestRewardItemAction__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_1BDBAC4(QuestRewardItemAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v25, 0LL);
    if ( !v24 )
      goto LABEL_24;
    CStateManager_object___add(
      v24,
      3,
      (IState_T__o *)v25,
      (const MethodInfo_327012C *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v26);
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
      v29 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v30 = UnityEngine_Object__Instantiate_object_(
              v29,
              (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v30, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B3E911 )
        {
          sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v31);
          byte_4B3E911 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v30,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v30 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v30,
                                         (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v30;
            sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.particleObj, (int32_t)v30, v32, v33);
            return;
          }
        }
LABEL_24:
        sub_1BDBAD4(ComponentInChildren_object, v19);
      }
    }
  }
}


void __fastcall QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B4188C & 1) == 0 )
  {
    sub_1BDB878(&AndroidBackKeyManager_TypeInfo, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B4188C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      gameObject = CommonUI__CreateScreeenTouchInfo(
                     (CommonUI_o *)Instance,
                     (UnityEngine_Transform_o *)gameObject,
                     0,
                     0LL);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mScreenTouchInfo, (int32_t)Component_object, v12, v13);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_1BDBAD4(gameObject, v7);
  }
LABEL_10:
  gameObject = (UnityEngine_GameObject_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


int32_t __fastcall QuestRewardItemAction__GetState(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  QuestRewardItemAction_o *v2; // x19
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4B4188E & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_1BDB878(&Method_CStateManager_QuestRewardItemAction__getState__, method);
    byte_4B4188E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1BDBAD4(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__Play(
        QuestRewardItemAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  bool v8; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v23; // x2
  UnityEngine_TrackedReference_o *Item; // x20
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v26; // x0
  System_Action_o *v27; // x21

  v8 = is_from_treasure_box;
  if ( (byte_4B4188D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, is_from_treasure_box);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&Method_QuestRewardItemAction__Play_b__49_0__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BDB878(&SimpleAnimation_State_TypeInfo, v13);
    byte_4B4188D = 1;
  }
  this->fields.mIsFromTreasureBox = v8;
  this->fields.mEndAct = end_act;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)end_act, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                               (SimpleAnimation_o *)gameObject,
                                               this->fields.playAnimationName,
                                               0LL);
    if ( !gameObject )
      goto LABEL_31;
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
          goto LABEL_13;
      }
      v21 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v21 = sub_1C2C00C(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
      if ( !gameObject )
        goto LABEL_31;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 this->fields.playAnimationName,
                                                 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_31;
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
      }
    }
  }
  if ( this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, 1, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_QuestRewardItemAction__Play_b__49_0__, 0LL);
  if ( !Instance )
LABEL_31:
    sub_1BDBAD4(gameObject, v15);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetActiveLabelList(
        QuestRewardItemAction_o *this,
        UILabel_array *itemLabelList,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v6; // x21
  bool v7; // w20
  UnityEngine_Component_o *gameObject; // x0

  if ( itemLabelList )
  {
    v4 = *(_QWORD *)&itemLabelList->max_length;
    if ( v4 )
    {
      if ( (int)v4 >= 1 )
      {
        v6 = 0LL;
        v7 = isActive;
        do
        {
          if ( (unsigned int)v6 >= (unsigned int)v4 )
            sub_1BDBADC(this, itemLabelList, isActive);
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
          {
            sub_1BDBAD4(gameObject, itemLabelList);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v7, 0LL);
          LODWORD(v4) = itemLabelList->max_length;
          ++v6;
        }
        while ( (int)v6 < (int)v4 );
      }
    }
  }
}


void __fastcall QuestRewardItemAction__SetClearTextLabel(
        QuestRewardItemAction_o *this,
        UILabel_o *itemLabel,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *CrossOperatorString; // x0
  __int64 v19; // x1
  int32_t type; // w22
  Il2CppObject *v21; // x22
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  System_String_o *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  QuestRewardItemAction_c *v30; // x0
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B4188B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EquipMaster___, itemLabel);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BDB878(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v11);
    sub_1BDB878(&int_TypeInfo, v12);
    sub_1BDB878(&LocalizationManager_TypeInfo, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_1BDB878(&QuestRewardItemAction_TypeInfo, v15);
    sub_1BDB878(&StringLiteral_10845/*"QUEST_CLEAR_REWARD_GET"*/, v16);
    sub_1BDB878(&StringLiteral_1/*""*/, v17);
    byte_4B4188B = 1;
  }
  CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
  if ( !questInfoReward )
    goto LABEL_29;
  type = questInfoReward->fields.type;
  if ( type == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( CrossOperatorString )
    {
      CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                              questInfoReward->fields.objectId,
                              (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( CrossOperatorString )
      {
        v21 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
        CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0LL);
        goto LABEL_22;
      }
    }
LABEL_29:
    sub_1BDBAD4(CrossOperatorString, v19);
  }
  CountableString = (Il2CppObject *)CrossOperatorString;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( type == 1 )
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0, 0LL);
  }
  else
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EquipMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    v24 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(v24, 0LL);
  }
  v21 = (Il2CppObject *)Name;
LABEL_22:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10845/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
  num = questInfoReward->fields.num;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v26, v27, v28);
  CrossOperatorString = System_String__Format_62613620(v25, v21, CountableString, v29, 0LL);
  if ( !itemLabel )
    goto LABEL_29;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0LL);
  v30 = QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v30 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v30->static_fields->ITEM_LABEL_MAX_WIDTH, 0, 0LL);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0LL);
  if ( !CrossOperatorString )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B4188F & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestRewardItemAction__setState__, *(_QWORD *)&state);
    byte_4B4188F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BDBAD4(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_32701B8 *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void __fastcall QuestRewardItemAction__SetTitleSprite(
        QuestRewardItemAction_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_UISprite__o *titleSprites; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B41890 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__, spriteName);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__, v7);
    byte_4B41890 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !System_String__IsNullOrEmpty(spriteName, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.titleSprites, 0LL) )
  {
    titleSprites = this->fields.titleSprites;
    if ( !titleSprites )
      sub_1BDBAD4(0LL, v8);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)titleSprites,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
      if ( !v10 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current )
        sub_1BDBAD4(v10, v11);
      UISprite__set_spriteName((UISprite_o *)v13.fields._current, spriteName, 0LL);
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[33].method)(
        current,
        current->klass->vtable[34].methodPtr);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  }
}


void __fastcall QuestRewardItemAction__Setup(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *qri,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 transform; // x0
  __int64 v13; // x1
  Il2CppObject *ComponentInChildren_object__50504592; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  UnityEngine_Object_o *v23; // x24
  Il2CppObject *v24; // x21
  UnityEngine_Object_o *v25; // x23
  struct System_String_o *name; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  QuestRewardItemAction_o *v29; // x0
  const MethodInfo *v30; // x3
  QuestRewardItemAction_o *v31; // x0
  const MethodInfo *v32; // x3
  QuestRewardItemAction_o *v33; // x0
  const MethodInfo *v34; // x3
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  struct UILabel_o *mItemLabel; // x22
  __int64 v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  struct UnityEngine_GameObject_array *v42; // x21
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v47; // x0
  const MethodInfo *v48; // x3
  UnityEngine_Object_o *v49; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v51; // x1
  __int64 v52; // x0

  if ( (byte_4B41888 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, qri);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_1BDB878(&UnityEngine_GameObject___TypeInfo, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&UILabel___TypeInfo, v10);
    sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B41888 = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  ComponentInChildren_object__50504592 = UnityEngine_Component__GetComponentInChildren_object__50504592(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__50504592;
  p_mAnimation = &this->fields.mAnimation;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__50504592,
    v16,
    v17);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  v18 = UnityEngine_Component__GetComponentInChildren_object__50504592(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v18;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mSimpleAnimation, (int32_t)v18, v20, v21);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  v22 = UnityEngine_Component__GetComponentInChildren_object__50504592(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v23 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v24 = v22;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !*p_mSimpleAnimation )
      goto LABEL_48;
    transform = (__int64)(*p_mSimpleAnimation)[1].monitor;
    if ( !transform )
      goto LABEL_48;
  }
  else
  {
    v25 = (UnityEngine_Object_o *)*p_mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
    if ( (transform & 1) == 0 )
      goto LABEL_18;
    transform = (__int64)*p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_48;
    transform = (__int64)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_48;
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  this->fields.playAnimationName = name;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.playAnimationName, (int32_t)name, v27, v28);
LABEL_18:
  if ( !v24 )
    goto LABEL_48;
  BYTE5(v24[6].monitor) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_48;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v29, this->fields.mItemLabelList_2, 0, v30);
  QuestRewardItemAction__SetActiveLabelList(v31, this->fields.mItemLabelList_3, 0, v32);
  QuestRewardItemAction__SetActiveLabelList(v33, this->fields.mItemLabelList_4, 0, v34);
  transform = sub_1BDB920(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_48;
  mItemLabel = this->fields.mItemLabel;
  v38 = transform;
  if ( mItemLabel )
  {
    transform = sub_1BDB9B4(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
      v52 = sub_1BDBAF8();
      sub_1BDB9A0(v52, 0LL);
    }
  }
  if ( !*(_DWORD *)(v38 + 24) )
    goto LABEL_49;
  *(_QWORD *)(v38 + 32) = mItemLabel;
  sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 32), (int32_t)mItemLabel, v35, v36);
  this->fields.itemLabelDispList = (struct UILabel_array *)v38;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemLabelDispList, v38, v39, v40);
  transform = sub_1BDB920(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_48;
  v42 = (struct UnityEngine_GameObject_array *)transform;
  if ( !*(_DWORD *)(transform + 24) )
LABEL_49:
    sub_1BDBADC(transform, v13, v35);
  mAppearEffObj = this->fields.mAppearEffObj;
  *(_QWORD *)(transform + 32) = mAppearEffObj;
  sub_1BDB81C((CGThumbnailListItem_o *)(transform + 32), (int32_t)mAppearEffObj, v35, v41);
  this->fields.appearEffObjDispList = v42;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.appearEffObjDispList, (int32_t)v42, v44, v45);
  if ( !qri )
LABEL_48:
    sub_1BDBAD4(transform, v13);
  if ( qri->fields.type == 1 )
  {
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_48;
    UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mServantFaceIcon = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mServantFaceIcon, 0LL, 0LL) )
    {
      transform = (__int64)this->fields.mServantFaceIcon;
      if ( !transform )
        goto LABEL_48;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    }
    transform = (__int64)this->fields.mServantFaceIcon;
    if ( !transform )
      goto LABEL_48;
    ServantFaceIconComponent__Set_40019528(
      (ServantFaceIconComponent_o *)transform,
      qri->fields.objectId,
      0,
      0,
      0,
      0LL,
      0LL,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL,
      0,
      0LL);
  }
  else
  {
    v49 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
    {
      transform = (__int64)this->fields.mServantFaceIcon;
      if ( !transform )
        goto LABEL_48;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    }
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_48;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    transform = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                           gameObject,
                           (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !transform )
      goto LABEL_48;
    ItemIconComponent__SetGift_39935088(
      (ItemIconComponent_o *)transform,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0LL);
  }
  QuestRewardItemAction__SetClearTextLabel(v47, this->fields.mItemLabel, qri, v48);
  QuestRewardItemAction__CommonSetUpEndAction(this, v51);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantFaceIconComponent_o *transform; // x0
  __int64 v12; // x1
  Il2CppObject *ComponentInChildren_object__50504592; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  QuestRewardItemAction_o *v19; // x0
  const MethodInfo *v20; // x3
  QuestRewardItemAction_o *v21; // x0
  const MethodInfo *v22; // x3
  QuestRewardItemAction_o *v23; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  struct UILabel_o *mItemLabel; // x22
  ServantFaceIconComponent_o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  struct UnityEngine_GameObject_array *v32; // x23
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x23
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x24
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UnityEngine_GameObject_array **p_mAppearEffObjList_3; // x8
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  struct UnityEngine_GameObject_array *v47; // x1
  __int64 v48; // x21
  ServantFaceIconComponent_o **m_Items; // x22
  UISprite_o **v50; // x25
  float v51; // s0
  float v52; // s2
  float v53; // s8
  float v54; // s9
  const MethodInfo *v55; // x3
  __int64 v56; // x8
  __int64 v57; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v59; // w8
  const MethodInfo *v60; // x1
  __int64 v61; // x0
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B4188A & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, questInfoReward);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_1BDB878(&UnityEngine_GameObject___TypeInfo, v8);
    sub_1BDB878(&UILabel___TypeInfo, v9);
    sub_1BDB878(&StringLiteral_1/*""*/, v10);
    byte_4B4188A = 1;
  }
  if ( !this->fields.mItemSpList_2 || !this->fields.mItemLabelList_3 || !this->fields.mItemLabelList_4 )
    return;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  ComponentInChildren_object__50504592 = UnityEngine_Component__GetComponentInChildren_object__50504592(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__50504592;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__50504592,
    v14,
    v15);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  v16 = UnityEngine_Component__GetComponentInChildren_object__50504592(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v16;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mSimpleAnimation, (int32_t)v16, v17, v18);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__GetComponentInChildren_object__50504592(
                                              (UnityEngine_Component_o *)transform,
                                              (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_60;
  BYTE5(transform->fields.rarity2Sprite) = 1;
  transform = (ServantFaceIconComponent_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
  if ( !transform )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v19, this->fields.mItemLabelList_2, 0, v20);
  QuestRewardItemAction__SetActiveLabelList(v21, this->fields.mItemLabelList_3, 0, v22);
  QuestRewardItemAction__SetActiveLabelList(v23, this->fields.mItemLabelList_4, 0, v24);
  transform = (ServantFaceIconComponent_o *)sub_1BDB920(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_60;
  mItemLabel = this->fields.mItemLabel;
  v28 = transform;
  if ( mItemLabel )
  {
    transform = (ServantFaceIconComponent_o *)sub_1BDB9B4(this->fields.mItemLabel, transform->klass->_1.element_class);
    if ( !transform )
    {
      v61 = sub_1BDBAF8();
      sub_1BDB9A0(v61, 0LL);
    }
  }
  if ( !LODWORD(v28->fields.m_CancellationTokenSource) )
    goto LABEL_61;
  v28->fields.backSprite = (struct UISprite_o *)mItemLabel;
  sub_1BDB81C((CGThumbnailListItem_o *)&v28->fields.backSprite, (int32_t)mItemLabel, v25, v26);
  this->fields.itemLabelDispList = (struct UILabel_array *)v28;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemLabelDispList, (int32_t)v28, v29, v30);
  transform = (ServantFaceIconComponent_o *)sub_1BDB920(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_60;
  v32 = (struct UnityEngine_GameObject_array *)transform;
  if ( !LODWORD(transform->fields.m_CancellationTokenSource) )
LABEL_61:
    sub_1BDBADC(transform, v12, v25);
  mAppearEffObj = this->fields.mAppearEffObj;
  transform->fields.backSprite = (struct UISprite_o *)mAppearEffObj;
  sub_1BDB81C((CGThumbnailListItem_o *)&transform->fields.backSprite, (int32_t)mAppearEffObj, v25, v31);
  this->fields.appearEffObjDispList = v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.appearEffObjDispList, (int32_t)v32, v34, v35);
  if ( !questInfoReward )
    goto LABEL_60;
  num = questInfoReward->fields.num;
  if ( num == 3 )
  {
    SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_3;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_3_TYPES,
      v36,
      v37);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_3;
  }
  else if ( num == 2 )
  {
    SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_2;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_2_TYPES,
      v36,
      v37);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_2;
  }
  else
  {
    SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_4;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_4_TYPES,
      v36,
      v37);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_4;
  }
  v47 = *p_mAppearEffObjList_3;
  this->fields.appearEffObjDispList = *p_mAppearEffObjList_3;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.appearEffObjDispList, (int32_t)v47, v42, v43);
  if ( !mItemSpList_3 )
LABEL_60:
    sub_1BDBAD4(transform, v12);
  v48 = 0LL;
  m_Items = mServantFaceIconList_3->m_Items;
  v50 = mItemSpList_3->m_Items;
  do
  {
    if ( (unsigned int)v48 >= mItemSpList_3->max_length )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v50[v48];
    if ( !transform )
      goto LABEL_60;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
    if ( !transform )
      goto LABEL_60;
    *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( (unsigned int)v48 >= mItemSpList_3->max_length )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v50[v48];
    if ( !transform )
      goto LABEL_60;
    v53 = v51;
    v54 = v52;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
    if ( !transform )
      goto LABEL_60;
    v62.fields.y = 0.0;
    v62.fields.x = v53;
    v62.fields.z = v54;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v62, 0LL);
    if ( questInfoReward->fields.type == 1 )
    {
      if ( (unsigned int)v48 >= mItemSpList_3->max_length )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v50[v48];
      if ( !transform )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v56 = *(_QWORD *)&mServantFaceIconList_3->max_length;
      if ( v56 )
      {
        if ( (unsigned int)v48 >= (unsigned int)v56 )
          goto LABEL_61;
        transform = m_Items[v48];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
        if ( (unsigned int)v48 >= mServantFaceIconList_3->max_length )
          goto LABEL_61;
        transform = m_Items[v48];
        if ( !transform )
          goto LABEL_60;
        ServantFaceIconComponent__Set_40019528(
          transform,
          questInfoReward->fields.objectId,
          0,
          0,
          0,
          0LL,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0,
          0LL,
          0,
          0LL);
      }
    }
    else
    {
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v57 = *(_QWORD *)&mServantFaceIconList_3->max_length;
      if ( v57 )
      {
        if ( (unsigned int)v48 >= (unsigned int)v57 )
          goto LABEL_61;
        transform = m_Items[v48];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      }
      if ( (unsigned int)v48 >= mItemSpList_3->max_length )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v50[v48];
      if ( !transform )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      transform = (ServantFaceIconComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                  gameObject,
                                                  (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !transform )
        goto LABEL_60;
      ItemIconComponent__SetGift_39935088(
        (ItemIconComponent_o *)transform,
        questInfoReward->fields.type,
        questInfoReward->fields.objectId,
        1,
        0,
        0LL);
    }
    v59 = questInfoReward->fields.num;
    ++v48;
    if ( v59 >= 4 )
      v59 = 4;
    if ( v59 <= 2 )
      v59 = 2;
  }
  while ( (unsigned int)v48 < v59 );
  QuestRewardItemAction__SetClearTextLabel(
    (QuestRewardItemAction_o *)transform,
    this->fields.mItemLabel,
    questInfoReward,
    v55);
  QuestRewardItemAction__CommonSetUpEndAction(this, v60);
}


void __fastcall QuestRewardItemAction__Setup_35601228(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v4; // x20
  QuestRewardItemAction_o *v5; // x19
  bool v6; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *ComponentInChildren_object__50504592; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  struct UILabel_array *mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  struct System_String_o *DIFF_ANIMATION_NAME_2_TYPES; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UnityEngine_GameObject_array *mAppearEffObjList_2; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  QuestRewardItemAction_o *v32; // x0
  const MethodInfo *v33; // x3
  QuestRewardItemAction_o *v34; // x0
  const MethodInfo *v35; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v37; // w2
  TerminalPramsManager_c *v38; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  Il2CppObject *Master_object; // x21
  QuestRewardInfo_o *v41; // x8
  struct UILabel_array *v42; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_3_TYPES; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  QuestRewardItemAction_o *v49; // x0
  const MethodInfo *v50; // x3
  QuestRewardItemAction_o *v51; // x0
  const MethodInfo *v52; // x3
  bool v53; // w2
  UILabel_array **p_mItemLabelList_4; // x24
  struct UILabel_array *mItemLabelList_4; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_4_TYPES; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct UnityEngine_GameObject_array *mAppearEffObjList_4; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  QuestRewardItemAction_o *v62; // x0
  const MethodInfo *v63; // x3
  QuestRewardItemAction_o *v64; // x0
  const MethodInfo *v65; // x3
  int max_length; // w8
  __int64 v67; // x24
  il2cpp_array_size_t v68; // w27
  QuestRewardInfo_o *v69; // x21
  const MethodInfo *v70; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  v4 = questInfoRewardList;
  v5 = this;
  v6 = isMultiDisp;
  if ( (byte_4B41889 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, questInfoRewardList);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v8);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v12);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v13);
    this = (QuestRewardItemAction_o *)sub_1BDB878(&StringLiteral_1/*""*/, v14);
    byte_4B41889 = 1;
  }
  entity = 0LL;
  v5->fields.isMultiDisp = v6;
  if ( !v4 )
    goto LABEL_73;
  if ( (int)v4->max_length <= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EFCF )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, questInfoRewardList);
      byte_4B3EFCF = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v38->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4B3EFD0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, questInfoRewardList);
      byte_4B3EFD0 = 1;
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
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_o *)entity;
      if ( !entity )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)QuestPhaseEntity__GetClearGiftItemListDisplay(entity, 0LL);
      if ( !v4->max_length )
        goto LABEL_74;
      v41 = v4->m_Items[0];
      if ( !v41 )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v41->fields.objectId,
                                          (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !v4->max_length )
          goto LABEL_74;
        questInfoRewardList = (QuestRewardInfo_array *)v4->m_Items[0];
        if ( questInfoRewardList )
        {
          if ( (int)questInfoRewardList->max_length >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v5, (QuestRewardInfo_o *)questInfoRewardList, v21);
            return;
          }
          goto LABEL_34;
        }
LABEL_73:
        sub_1BDBAD4(this, questInfoRewardList);
      }
    }
LABEL_34:
    if ( !v4->max_length )
      goto LABEL_74;
LABEL_35:
    QuestRewardItemAction__Setup(v5, v4->m_Items[0], v21);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object__50504592 = UnityEngine_Component__GetComponentInChildren_object__50504592(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v5->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__50504592;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.mAnimation, (int32_t)ComponentInChildren_object__50504592, v16, v17);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  v18 = UnityEngine_Component__GetComponentInChildren_object__50504592(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v5->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v18;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.mSimpleAnimation, (int32_t)v18, v19, v20);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_object__50504592(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !this )
    goto LABEL_73;
  BYTE5(this->fields.titleSprites) = 1;
  switch ( v4->max_length )
  {
    case 0u:
      goto LABEL_74;
    case 2u:
      mItemLabelList_2 = v5->fields.mItemLabelList_2;
      mItemSpList_2 = v5->fields.mItemSpList_2;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_2;
      v5->fields.itemLabelDispList = mItemLabelList_2;
      sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.itemLabelDispList, (int32_t)mItemLabelList_2, (int32_t)v21, v22);
      DIFF_ANIMATION_NAME_2_TYPES = v5->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_2_TYPES;
      sub_1BDB81C(
        (CGThumbnailListItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_2_TYPES,
        v27,
        v28);
      mAppearEffObjList_2 = v5->fields.mAppearEffObjList_2;
      v5->fields.appearEffObjDispList = mAppearEffObjList_2;
      sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.appearEffObjDispList, (int32_t)mAppearEffObjList_2, v30, v31);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v32, v5->fields.mItemLabelList_2, 1, v33);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v37 = 0;
      goto LABEL_39;
    case 3u:
      v42 = v5->fields.mItemLabelList_3;
      mItemSpList_2 = v5->fields.mItemSpList_3;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_3;
      v5->fields.itemLabelDispList = v42;
      sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.itemLabelDispList, (int32_t)v42, (int32_t)v21, v22);
      DIFF_ANIMATION_NAME_3_TYPES = v5->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_3_TYPES;
      sub_1BDB81C(
        (CGThumbnailListItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_3_TYPES,
        v44,
        v45);
      mAppearEffObjList_3 = v5->fields.mAppearEffObjList_3;
      v5->fields.appearEffObjDispList = mAppearEffObjList_3;
      sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.appearEffObjDispList, (int32_t)mAppearEffObjList_3, v47, v48);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v49, v5->fields.mItemLabelList_2, 0, v50);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v37 = 1;
LABEL_39:
      QuestRewardItemAction__SetActiveLabelList(v34, mItemLabelList_3, v37, v35);
      v53 = 0;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      break;
    case 4u:
      mItemSpList_2 = v5->fields.mItemSpList_4;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_4;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      mItemLabelList_4 = v5->fields.mItemLabelList_4;
      v5->fields.itemLabelDispList = mItemLabelList_4;
      sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.itemLabelDispList, (int32_t)mItemLabelList_4, (int32_t)v21, v22);
      DIFF_ANIMATION_NAME_4_TYPES = v5->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_4_TYPES;
      sub_1BDB81C(
        (CGThumbnailListItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_4_TYPES,
        v57,
        v58);
      mAppearEffObjList_4 = v5->fields.mAppearEffObjList_4;
      v5->fields.appearEffObjDispList = mAppearEffObjList_4;
      sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.appearEffObjDispList, (int32_t)mAppearEffObjList_4, v60, v61);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v62, v5->fields.mItemLabelList_2, 0, v63);
      QuestRewardItemAction__SetActiveLabelList(v64, v5->fields.mItemLabelList_3, 0, v65);
      v53 = 1;
      break;
    default:
      goto LABEL_35;
  }
  QuestRewardItemAction__SetActiveLabelList(v51, *p_mItemLabelList_4, v53, v52);
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v67 = 4LL;
    while ( 1 )
    {
      v68 = v67 - 4;
      if ( (int)v67 - 4 >= (unsigned int)max_length )
        break;
      v69 = (QuestRewardInfo_o *)*((_QWORD *)&v4->obj.klass + v67);
      if ( !v69 )
        goto LABEL_73;
      if ( v69->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v68 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v67);
        if ( !this )
          goto LABEL_73;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v68 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v67);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( v68 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v67);
        if ( !this )
          goto LABEL_73;
        ServantFaceIconComponent__Set_40019528(
          (ServantFaceIconComponent_o *)this,
          v69->fields.objectId,
          0,
          0,
          0,
          0LL,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0,
          0LL,
          0,
          0LL);
      }
      else
      {
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v68 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v67);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v68 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v67);
        if ( !this )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_73;
        ItemIconComponent__SetGift_39935088(
          (ItemIconComponent_o *)this,
          v69->fields.type,
          v69->fields.objectId,
          v69->fields.num,
          0,
          0LL);
      }
      itemLabelDispList = v5->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_73;
      if ( v68 >= itemLabelDispList->max_length )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v67), v69, v70);
      max_length = v4->max_length;
      if ( (int)++v67 - 4 >= max_length )
        goto LABEL_70;
    }
LABEL_74:
    sub_1BDBADC(this, questInfoRewardList, v21);
  }
LABEL_70:
  QuestRewardItemAction__CommonSetUpEndAction(v5, (const MethodInfo *)questInfoRewardList);
}


void __fastcall QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B41887 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_QuestRewardItemAction__update__, method);
    sub_1BDB878(&CTouch_TypeInfo, v3);
    byte_4B41887 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3270194 *)Method_CStateManager_QuestRewardItemAction__update__);
}


void __fastcall QuestRewardItemAction___Play_b__49_0(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardItemAction_StateItemLabel___ctor(
        QuestRewardItemAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel__begin(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x19
  __int64 v16; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ManagerConfig_c *v25; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w25
  MoveObject_o *v29; // x21
  float x; // s10
  float v31; // s11
  float v32; // s12
  System_Action_o *v33; // x22
  System_Action_o *v34; // x23
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B41895 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_1BDB878(&ManagerConfig_TypeInfo, v5);
    sub_1BDB878(&Method_QuestRewardItemAction_StateItemLabel_begin__, v6);
    sub_1BDB878(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1BDB878(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1BDB878(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    byte_4B41895 = 1;
  }
  v10 = sub_1BDBAC4(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_19;
  *(_QWORD *)(v10 + 32) = that;
  v15 = v10 + 32;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)that, v13, v14);
  v16 = *(_QWORD *)(v10 + 32);
  if ( !v16 )
    goto LABEL_19;
  transform = *(UnityEngine_Component_o **)(v16 + 80);
  if ( !transform )
    goto LABEL_19;
  if ( *(_BYTE *)(v16 + 312) )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_19;
    transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_19;
  }
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  *(_QWORD *)(v10 + 16) = gameObject;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)gameObject, v18, v19);
  v21 = *(_QWORD *)(v10 + 32);
  if ( !v21 )
    goto LABEL_19;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)transform,
    *(UILabel_array **)(v21 + 248),
    1,
    v20);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v10 + 16),
                       (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v10 + 24) = Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)Component_object, v23, v24);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v10 + 16), 0LL);
  v25 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v25 = ManagerConfig_TypeInfo;
  }
  WIDTH = v25->static_fields->WIDTH;
  v38 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v10 + 16), 0LL);
  v29 = *(MoveObject_o **)(v10 + 24);
  x = v38.fields.x;
  v31 = v38.fields.y;
  v32 = v38.fields.z;
  v33 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v10,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v34 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v10,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v29
    || (v39.fields.x = (float)WIDTH,
        v39.fields.y = y,
        v39.fields.z = z,
        v40.fields.x = x,
        v40.fields.y = v31,
        v40.fields.z = v32,
        MoveObject__Play(v29, v39, v40, 0.25, v33, v34, 0.0, 17, 0LL),
        !*(_QWORD *)v15) )
  {
LABEL_19:
    sub_1BDBAD4(transform, v12);
  }
  if ( *(_BYTE *)(*(_QWORD *)v15 + 217LL) )
  {
    v35 = Method_QuestRewardItemAction_StateItemLabel_begin__;
    if ( (*((_BYTE *)Method_QuestRewardItemAction_StateItemLabel_begin__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_1BDB890(Method_QuestRewardItemAction_StateItemLabel_begin__);
    v36 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v35, v35[4]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 4, 0, 0LL);
  }
}


void __fastcall QuestRewardItemAction_StateItemLabel__end(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateItemLabel__update(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1BDBAD4(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(0LL, method);
  QuestRewardItemAction__SetState(that, 3, v2);
}


void __fastcall QuestRewardItemAction_StateNone___ctor(
        QuestRewardItemAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateNone__begin(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateNone__end(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateNone__update(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StatePlay___ctor(
        QuestRewardItemAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StatePlay__begin(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  long double v3; // q8
  QuestRewardItemAction_StatePlay_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *Item; // x0
  CGThumbnailListItem_o *p_fields; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CGThumbnailListItem_c *klass; // x21
  UnityEngine_Object_o *mAnimation; // x20
  __int64 v14; // x2
  UnityEngine_TrackedReference_o *v15; // x20
  float mTreasureAnimStartTime; // s0
  _QWORD *image; // x8
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0
  CGThumbnailListItem_c *v21; // x20
  _QWORD *v22; // x8
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  unsigned int v28; // w21
  _BOOL4 v29; // w8

  v5 = this;
  if ( (byte_4B41893 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1BDB878(&SimpleAnimation_State_TypeInfo, v6);
    byte_4B41893 = 1;
  }
  if ( !that )
    goto LABEL_48;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_48;
    Item = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.playAnimationName, 0LL);
    v5->fields.mSimpleAnimState = Item;
    p_fields = (CGThumbnailListItem_o *)&v5->fields;
    sub_1BDB81C(p_fields, (int32_t)Item, v10, v11);
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
    v18 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( *((_WORD *)klass->_1.image + 151) )
    {
      v19 = (SimpleAnimation_State_c **)(image[22] + 8LL);
      while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = (__int64)&image[2 * *(_DWORD *)v19 + 51];
    }
    else
    {
LABEL_24:
      v20 = sub_1C2C00C(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(CGThumbnailListItem_c *, _QWORD, long double))v20)(
                                                  klass,
                                                  *(_QWORD *)(v20 + 8),
                                                  v3);
    v21 = p_fields->klass;
    if ( !v21 )
      goto LABEL_48;
    v22 = v21->_1.image;
    v23 = *((unsigned __int16 *)v21->_1.image + 151);
    if ( *((_WORD *)v21->_1.image + 151) )
    {
      v24 = (SimpleAnimation_State_c **)(v22[22] + 8LL);
      while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_31;
      }
      v25 = (__int64)&v22[2 * *(_DWORD *)v24 + 55];
    }
    else
    {
LABEL_31:
      v25 = sub_1C2C00C(v21, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(CGThumbnailListItem_c *, _QWORD, float))v25)(v21, *(_QWORD *)(v25 + 8), 1.0);
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
LABEL_48:
      sub_1BDBAD4(this, that);
    this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_65523240(
                                                  (SimpleAnimation_o *)this,
                                                  that->fields.playAnimationName,
                                                  0LL);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
      if ( !this )
        goto LABEL_48;
      v15 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)this,
                                                that->fields.playAnimationName,
                                                0LL);
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( that->fields.mIsFromTreasureBox )
        {
          mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
          if ( !v15 )
            goto LABEL_48;
        }
        else
        {
          mTreasureAnimStartTime = 0.0;
          if ( !v15 )
            goto LABEL_48;
        }
        UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v15, mTreasureAnimStartTime, 0LL);
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v15, 1.0, 0LL);
        this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
        if ( !this )
          goto LABEL_48;
        this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_70027660(
                                                      (UnityEngine_Animation_o *)this,
                                                      that->fields.playAnimationName,
                                                      0LL);
      }
    }
  }
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_48;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= max_length )
        sub_1BDBADC(this, that, v14);
      v29 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[v28];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29, 0LL);
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v28 >= max_length )
        return;
    }
    goto LABEL_48;
  }
}


void __fastcall QuestRewardItemAction_StatePlay__end(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StatePlay__update(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x21
  int max_length; // w8
  char v8; // w22
  char v9; // w23
  unsigned int v10; // w24
  Il2CppClass **v11; // x8
  UnityEngine_GameObject_o *v12; // x20
  _BOOL4 v13; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  if ( (byte_4B41894 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, that);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1BDB878(&Method_QuestRewardItemAction_StatePlay_update__, v5);
    byte_4B41894 = 1;
  }
  if ( !that )
    goto LABEL_42;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_42;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1BDBADC(this, that, method);
      v11 = &appearEffObjDispList->obj.klass + (int)v10;
      v12 = (UnityEngine_GameObject_o *)v11[4];
      if ( !v12 )
        goto LABEL_42;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v11[4],
                                                    0LL);
      if ( that->fields.mIsFromTreasureBox )
        v8 = (char)this;
      if ( !that->fields.mIsFromTreasureBox )
        v9 = (char)this;
      if ( that->fields.mIsFromTreasureBox )
        break;
      if ( (v9 & 1) == 0 )
      {
        v13 = 1;
LABEL_18:
        UnityEngine_GameObject__SetActive(v12, v13, 0LL);
      }
LABEL_19:
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_20;
    }
    v13 = !that->fields.mTreasureEffectOff;
    if ( v13 == (v8 & 1) )
      goto LABEL_19;
    goto LABEL_18;
  }
LABEL_20:
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_42;
    if ( SimpleAnimation__IsPlaying((SimpleAnimation_o *)this, that->fields.playAnimationName, 0LL) )
      return;
LABEL_31:
    this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        if ( that->fields.mLabelAnimate )
        {
          v17 = 2;
        }
        else
        {
          if ( that->fields.mGetSEonProgram )
          {
            v18 = Method_QuestRewardItemAction_StatePlay_update__;
            if ( (*((_BYTE *)Method_QuestRewardItemAction_StatePlay_update__ + 83) & 2) != 0 )
              v18 = (_QWORD *)sub_1BDB890(Method_QuestRewardItemAction_StatePlay_update__);
            v19 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v18, v18[4]);
            OverwriteAssetSoundName__PlaySystemSe(v19, 4, 0, 0LL);
          }
          v17 = 3;
        }
        QuestRewardItemAction__SetState(that, v17, v16);
      }
      return;
    }
LABEL_42:
    sub_1BDBAD4(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
    if ( !this )
      goto LABEL_42;
    if ( UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)this, that->fields.playAnimationName, 0LL) )
      return;
    goto LABEL_31;
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait___ctor(
        QuestRewardItemAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateTouchWait__CheckTutorial(
        QuestRewardItemAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B41897 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__, v3);
    byte_4B41897 = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0LL) )
  {
    this->fields.waitTutorial = 1;
    v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__,
      0LL);
    EventTutorialMaster__CheckTutorial(0, 75, v4, 0, 0, 0, 0, 0LL);
  }
  else
  {
    this->fields.waitTutorial = 0;
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait__begin(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  QuestRewardItemAction_StateTouchWait_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( !that
    || (v3 = this, (this = (QuestRewardItemAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL)
    || (this = (QuestRewardItemAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
    sub_1BDBAD4(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  QuestRewardItemAction_StateTouchWait__CheckTutorial(v3, v4);
}


void __fastcall QuestRewardItemAction_StateTouchWait__end(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateTouchWait__update(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x19
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_4B41896 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&AndroidBackKeyManager_TypeInfo, v5);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v6);
    sub_1BDB878(&CTouch_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BDB878(&Method_QuestRewardItemAction_StateTouchWait_update__, v9);
    sub_1BDB878(&Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__, v10);
    sub_1BDB878(&QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo, v11);
    byte_4B41896 = 1;
  }
  v12 = sub_1BDBAC4(QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_19;
  *(_QWORD *)(v12 + 16) = that;
  v17 = v12 + 16;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)that, v15, v16);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 && !this->fields.waitTutorial )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v17 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v17 + 232LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v18 = Method_QuestRewardItemAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardItemAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v18 = (_QWORD *)sub_1BDB890(Method_QuestRewardItemAction_StateTouchWait_update__);
          v19 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v18, v18[4]);
          OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v21 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
          v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)v12,
            Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v23, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v17;
            if ( *(_QWORD *)v17 )
            {
              QuestRewardItemAction__SetState((QuestRewardItemAction_o *)isTouchPush, 0, v24);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BDBAD4(isTouchPush, v14);
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___ctor(
        QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___update_b__0(
        QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardItemAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}