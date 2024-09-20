void __fastcall QuestRewardItemAction___cctor(const MethodInfo *method)
{
  if ( (byte_4A581E6 & 1) == 0 )
  {
    sub_1B885B0(&QuestRewardItemAction_TypeInfo);
    byte_4A581E6 = 1;
  }
  QuestRewardItemAction_TypeInfo->static_fields->ITEM_LABEL_MAX_WIDTH = 1024;
}


void __fastcall QuestRewardItemAction___ctor(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A581E5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17246/*"bit_item_get01_3"*/);
    sub_1B885B0(&StringLiteral_17247/*"bit_item_get01_4"*/);
    sub_1B885B0(&StringLiteral_17245/*"bit_item_get01_2"*/);
    byte_4A581E5 = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v5 = StringLiteral_17245/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17245/*"bit_item_get01_2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES, v5, v2, v3);
  v6 = StringLiteral_17246/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17246/*"bit_item_get01_3"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES, v6, v7, v8);
  v9 = StringLiteral_17247/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17247/*"bit_item_get01_4"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES, v9, v10, v11);
  v12 = StringLiteral_17245/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17245/*"bit_item_get01_2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES, v12, v13, v14);
  v15 = StringLiteral_17246/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17246/*"bit_item_get01_3"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES, v15, v16, v17);
  v18 = StringLiteral_17247/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17247/*"bit_item_get01_4"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES, v18, v19, v20);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
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

  if ( (byte_4A581DB & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardItemAction___ctor__);
    sub_1B885B0(&Method_CStateManager_QuestRewardItemAction__add__);
    sub_1B885B0(&CStateManager_QuestRewardItemAction__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestRewardItemAction_StateItemLabel_TypeInfo);
    sub_1B885B0(&QuestRewardItemAction_StateNone_TypeInfo);
    sub_1B885B0(&QuestRewardItemAction_StatePlay_TypeInfo);
    sub_1B885B0(&QuestRewardItemAction_StateTouchWait_TypeInfo);
    byte_4A581DB = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_QuestRewardItemAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30AAD34 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1B887FC(QuestRewardItemAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardItemAction__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1B887FC(QuestRewardItemAction_StatePlay_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !v11 )
      goto LABEL_24;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardItemAction__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (Il2CppObject *)sub_1B887FC(QuestRewardItemAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !v13 )
      goto LABEL_24;
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardItemAction__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1B887FC(QuestRewardItemAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_24;
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v17);
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


void __fastcall QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A581E1 & 1) == 0 )
  {
    sub_1B885B0(&AndroidBackKeyManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A581E1 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.mScreenTouchInfo,
          (int32_t)Component_object,
          v9,
          v10);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_1B8880C(gameObject, v4);
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
  if ( (byte_4A581E3 & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_1B885B0(&Method_CStateManager_QuestRewardItemAction__getState__);
    byte_4A581E3 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardItemAction__Play(
        QuestRewardItemAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  bool v8; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v18; // x2
  UnityEngine_TrackedReference_o *Item; // x20
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v21; // x0
  System_Action_o *v22; // x21

  v8 = is_from_treasure_box;
  if ( (byte_4A581E2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_QuestRewardItemAction__Play_b__48_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A581E2 = 1;
  }
  this->fields.mIsFromTreasureBox = v8;
  this->fields.mEndAct = end_act;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (int32_t)end_act,
    (int32_t)method);
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
    v13 = gameObject;
    v14 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_13;
      }
      v16 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v16 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
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
    QuestRewardItemAction__SetState(this, 1, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v21 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v21 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v21->static_fields->DEFAULT_FADE_TIME;
  }
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_QuestRewardItemAction__Play_b__48_0__, 0LL);
  if ( !Instance )
LABEL_31:
    sub_1B8880C(gameObject, v10);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v22, 0LL);
}


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
            sub_1B88814(this, itemLabelList);
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
          {
            sub_1B8880C(gameObject, itemLabelList);
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
  void *CrossOperatorString; // x0
  __int64 v7; // x1
  int32_t type; // w22
  Il2CppObject *v9; // x22
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v12; // x22
  System_String_o *v13; // x23
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  QuestRewardItemAction_c *v18; // x0
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A581E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&QuestRewardItemAction_TypeInfo);
    sub_1B885B0(&StringLiteral_10850/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A581E0 = 1;
  }
  CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
  if ( !questInfoReward )
    goto LABEL_29;
  type = questInfoReward->fields.type;
  if ( type == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( CrossOperatorString )
    {
      CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                              questInfoReward->fields.objectId,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( CrossOperatorString )
      {
        v9 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
        CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0LL);
        goto LABEL_22;
      }
    }
LABEL_29:
    sub_1B8880C(CrossOperatorString, v7);
  }
  CountableString = (Il2CppObject *)CrossOperatorString;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( type == 1 )
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0LL);
  }
  else
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EquipMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(v12, 0LL);
  }
  v9 = (Il2CppObject *)Name;
LABEL_22:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10850/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
  num = questInfoReward->fields.num;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v14, v15, v16);
  CrossOperatorString = System_String__Format_61721472(v13, v9, CountableString, v17, 0LL);
  if ( !itemLabel )
    goto LABEL_29;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0LL);
  v18 = QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v18 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v18->static_fields->ITEM_LABEL_MAX_WIDTH, 0LL);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0LL);
  if ( !CrossOperatorString )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A581E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardItemAction__setState__);
    byte_4A581E4 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void __fastcall QuestRewardItemAction__Setup(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *qri,
        const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *v16; // x24
  Il2CppObject *v17; // x21
  UnityEngine_Object_o *v18; // x23
  struct System_String_o *name; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  QuestRewardItemAction_o *v22; // x0
  const MethodInfo *v23; // x3
  QuestRewardItemAction_o *v24; // x0
  const MethodInfo *v25; // x3
  QuestRewardItemAction_o *v26; // x0
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  int32_t v29; // w3
  struct UILabel_o *mItemLabel; // x22
  __int64 v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct UnityEngine_GameObject_array *v36; // x21
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v41; // x0
  const MethodInfo *v42; // x3
  UnityEngine_Object_o *v43; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v45; // x1
  __int64 v46; // x0

  if ( (byte_4A581DD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UILabel___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A581DD = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48719376;
  p_mAnimation = &this->fields.mAnimation;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__48719376,
    v9,
    v10);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  v11 = UnityEngine_Component__GetComponentInChildren_object__48719376(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v11;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v11, v13, v14);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  v15 = UnityEngine_Component__GetComponentInChildren_object__48719376(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v16 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v17 = v15;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
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
    v18 = (UnityEngine_Object_o *)*p_mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playAnimationName, (int32_t)name, v20, v21);
LABEL_18:
  if ( !v17 )
    goto LABEL_48;
  BYTE5(v17[6].monitor) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_48;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v22, this->fields.mItemLabelList_2, 0, v23);
  QuestRewardItemAction__SetActiveLabelList(v24, this->fields.mItemLabelList_3, 0, v25);
  QuestRewardItemAction__SetActiveLabelList(v26, this->fields.mItemLabelList_4, 0, v27);
  transform = sub_1B88658(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_48;
  mItemLabel = this->fields.mItemLabel;
  v31 = transform;
  if ( mItemLabel )
  {
    transform = sub_1B886EC(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
      v46 = sub_1B88830();
      sub_1B886D8(v46, 0LL);
    }
  }
  if ( !*(_DWORD *)(v31 + 24) )
    goto LABEL_49;
  *(_QWORD *)(v31 + 32) = mItemLabel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)mItemLabel, v28, v29);
  this->fields.itemLabelDispList = (struct UILabel_array *)v31;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemLabelDispList, v31, v32, v33);
  transform = sub_1B88658(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_48;
  v36 = (struct UnityEngine_GameObject_array *)transform;
  if ( !*(_DWORD *)(transform + 24) )
LABEL_49:
    sub_1B88814(transform, v6);
  mAppearEffObj = this->fields.mAppearEffObj;
  *(_QWORD *)(transform + 32) = mAppearEffObj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(transform + 32), (int32_t)mAppearEffObj, v34, v35);
  this->fields.appearEffObjDispList = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.appearEffObjDispList, (int32_t)v36, v38, v39);
  if ( !qri )
LABEL_48:
    sub_1B8880C(transform, v6);
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
    ServantFaceIconComponent__Set_38217436(
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
      0LL);
  }
  else
  {
    v43 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
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
                           (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !transform )
      goto LABEL_48;
    ItemIconComponent__SetGift_38144896(
      (ItemIconComponent_o *)transform,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0LL);
  }
  QuestRewardItemAction__SetClearTextLabel(v41, this->fields.mItemLabel, qri, v42);
  QuestRewardItemAction__CommonSetUpEndAction(this, v45);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  QuestRewardItemAction_o *v13; // x0
  const MethodInfo *v14; // x3
  QuestRewardItemAction_o *v15; // x0
  const MethodInfo *v16; // x3
  QuestRewardItemAction_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  struct UILabel_o *mItemLabel; // x22
  ServantFaceIconComponent_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  struct UnityEngine_GameObject_array *v27; // x23
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x23
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  struct UnityEngine_GameObject_array **p_mAppearEffObjList_3; // x8
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  struct UnityEngine_GameObject_array *v42; // x1
  __int64 v43; // x21
  ServantFaceIconComponent_o **m_Items; // x22
  UISprite_o **v45; // x25
  float v46; // s0
  float v47; // s2
  float v48; // s8
  float v49; // s9
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  __int64 v52; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v54; // w8
  const MethodInfo *v55; // x1
  __int64 v56; // x0
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A581DF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&UILabel___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A581DF = 1;
  }
  if ( !this->fields.mItemSpList_2 || !this->fields.mItemLabelList_3 || !this->fields.mItemLabelList_4 )
    return;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__48719376,
    v8,
    v9);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  v10 = UnityEngine_Component__GetComponentInChildren_object__48719376(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v10, v11, v12);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                              (UnityEngine_Component_o *)transform,
                                              (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
  QuestRewardItemAction__SetActiveLabelList(v13, this->fields.mItemLabelList_2, 0, v14);
  QuestRewardItemAction__SetActiveLabelList(v15, this->fields.mItemLabelList_3, 0, v16);
  QuestRewardItemAction__SetActiveLabelList(v17, this->fields.mItemLabelList_4, 0, v18);
  transform = (ServantFaceIconComponent_o *)sub_1B88658(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_60;
  mItemLabel = this->fields.mItemLabel;
  v22 = transform;
  if ( mItemLabel )
  {
    transform = (ServantFaceIconComponent_o *)sub_1B886EC(this->fields.mItemLabel, transform->klass->_1.element_class);
    if ( !transform )
    {
      v56 = sub_1B88830();
      sub_1B886D8(v56, 0LL);
    }
  }
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
    goto LABEL_61;
  v22->fields.backSprite = (struct UISprite_o *)mItemLabel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.backSprite, (int32_t)mItemLabel, v19, v20);
  this->fields.itemLabelDispList = (struct UILabel_array *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemLabelDispList, (int32_t)v22, v23, v24);
  transform = (ServantFaceIconComponent_o *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_60;
  v27 = (struct UnityEngine_GameObject_array *)transform;
  if ( !LODWORD(transform->fields.m_CancellationTokenSource) )
LABEL_61:
    sub_1B88814(transform, v6);
  mAppearEffObj = this->fields.mAppearEffObj;
  transform->fields.backSprite = (struct UISprite_o *)mAppearEffObj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&transform->fields.backSprite, (int32_t)mAppearEffObj, v25, v26);
  this->fields.appearEffObjDispList = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.appearEffObjDispList, (int32_t)v27, v29, v30);
  if ( !questInfoReward )
    goto LABEL_60;
  num = questInfoReward->fields.num;
  if ( num == 3 )
  {
    SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_3;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_3_TYPES,
      v31,
      v32);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_3;
  }
  else if ( num == 2 )
  {
    SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_2;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_2_TYPES,
      v31,
      v32);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_2;
  }
  else
  {
    SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_4;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_4_TYPES,
      v31,
      v32);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_4;
  }
  v42 = *p_mAppearEffObjList_3;
  this->fields.appearEffObjDispList = *p_mAppearEffObjList_3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.appearEffObjDispList, (int32_t)v42, v37, v38);
  if ( !mItemSpList_3 )
LABEL_60:
    sub_1B8880C(transform, v6);
  v43 = 0LL;
  m_Items = mServantFaceIconList_3->m_Items;
  v45 = mItemSpList_3->m_Items;
  do
  {
    if ( (unsigned int)v43 >= mItemSpList_3->max_length )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v45[v43];
    if ( !transform )
      goto LABEL_60;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
    if ( !transform )
      goto LABEL_60;
    *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( (unsigned int)v43 >= mItemSpList_3->max_length )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v45[v43];
    if ( !transform )
      goto LABEL_60;
    v48 = v46;
    v49 = v47;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
    if ( !transform )
      goto LABEL_60;
    v57.fields.y = 0.0;
    v57.fields.x = v48;
    v57.fields.z = v49;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v57, 0LL);
    if ( questInfoReward->fields.type == 1 )
    {
      if ( (unsigned int)v43 >= mItemSpList_3->max_length )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v45[v43];
      if ( !transform )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v51 = *(_QWORD *)&mServantFaceIconList_3->max_length;
      if ( v51 )
      {
        if ( (unsigned int)v43 >= (unsigned int)v51 )
          goto LABEL_61;
        transform = m_Items[v43];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
        if ( (unsigned int)v43 >= mServantFaceIconList_3->max_length )
          goto LABEL_61;
        transform = m_Items[v43];
        if ( !transform )
          goto LABEL_60;
        ServantFaceIconComponent__Set_38217436(
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
          0LL);
      }
    }
    else
    {
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v52 = *(_QWORD *)&mServantFaceIconList_3->max_length;
      if ( v52 )
      {
        if ( (unsigned int)v43 >= (unsigned int)v52 )
          goto LABEL_61;
        transform = m_Items[v43];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      }
      if ( (unsigned int)v43 >= mItemSpList_3->max_length )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v45[v43];
      if ( !transform )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      transform = (ServantFaceIconComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                  gameObject,
                                                  (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !transform )
        goto LABEL_60;
      ItemIconComponent__SetGift_38144896(
        (ItemIconComponent_o *)transform,
        questInfoReward->fields.type,
        questInfoReward->fields.objectId,
        1,
        0,
        0LL);
    }
    v54 = questInfoReward->fields.num;
    ++v43;
    if ( v54 >= 4 )
      v54 = 4;
    if ( v54 <= 2 )
      v54 = 2;
  }
  while ( (unsigned int)v43 < v54 );
  QuestRewardItemAction__SetClearTextLabel(
    (QuestRewardItemAction_o *)transform,
    this->fields.mItemLabel,
    questInfoReward,
    v50);
  QuestRewardItemAction__CommonSetUpEndAction(this, v55);
}


void __fastcall QuestRewardItemAction__Setup_34089124(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v4; // x20
  QuestRewardItemAction_o *v5; // x19
  bool v6; // w21
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  int32_t v14; // w3
  struct UILabel_array *mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  struct System_String_o *DIFF_ANIMATION_NAME_2_TYPES; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct UnityEngine_GameObject_array *mAppearEffObjList_2; // x1
  int32_t v22; // w2
  int32_t v23; // w3
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
  struct UILabel_array *v34; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_3_TYPES; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  QuestRewardItemAction_o *v41; // x0
  const MethodInfo *v42; // x3
  QuestRewardItemAction_o *v43; // x0
  const MethodInfo *v44; // x3
  bool v45; // w2
  UILabel_array **p_mItemLabelList_4; // x24
  struct UILabel_array *mItemLabelList_4; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_4_TYPES; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  struct UnityEngine_GameObject_array *mAppearEffObjList_4; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  QuestRewardItemAction_o *v54; // x0
  const MethodInfo *v55; // x3
  QuestRewardItemAction_o *v56; // x0
  const MethodInfo *v57; // x3
  int max_length; // w8
  __int64 v59; // x24
  il2cpp_array_size_t v60; // w27
  QuestRewardInfo_o *v61; // x21
  const MethodInfo *v62; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  v4 = questInfoRewardList;
  v5 = this;
  v6 = isMultiDisp;
  if ( (byte_4A581DE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    this = (QuestRewardItemAction_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A581DE = 1;
  }
  entity = 0LL;
  v5->fields.isMultiDisp = v6;
  if ( !v4 )
    goto LABEL_73;
  if ( (int)v4->max_length <= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCB = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
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
                                        HIDWORD(this->fields.mAppearEffObjList_3->bounds),
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
      v33 = v4->m_Items[0];
      if ( !v33 )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v33->fields.objectId,
                                          (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !v4->max_length )
          goto LABEL_74;
        questInfoRewardList = (QuestRewardInfo_array *)v4->m_Items[0];
        if ( questInfoRewardList )
        {
          if ( (int)questInfoRewardList->max_length >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v5, (QuestRewardInfo_o *)questInfoRewardList, v13);
            return;
          }
          goto LABEL_34;
        }
LABEL_73:
        sub_1B8880C(this, questInfoRewardList);
      }
    }
LABEL_34:
    if ( !v4->max_length )
      goto LABEL_74;
LABEL_35:
    QuestRewardItemAction__Setup(v5, v4->m_Items[0], v13);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v5->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v5->fields.mAnimation,
    (int32_t)ComponentInChildren_object__48719376,
    v8,
    v9);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  v10 = UnityEngine_Component__GetComponentInChildren_object__48719376(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v5->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.mSimpleAnimation, (int32_t)v10, v11, v12);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !this )
    goto LABEL_73;
  BYTE5(this->fields.mItemSpList_2) = 1;
  switch ( v4->max_length )
  {
    case 0u:
      goto LABEL_74;
    case 2u:
      mItemLabelList_2 = v5->fields.mItemLabelList_2;
      mItemSpList_2 = v5->fields.mItemSpList_2;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_2;
      v5->fields.itemLabelDispList = mItemLabelList_2;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v5->fields.itemLabelDispList,
        (int32_t)mItemLabelList_2,
        (int32_t)v13,
        v14);
      DIFF_ANIMATION_NAME_2_TYPES = v5->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_2_TYPES;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_2_TYPES,
        v19,
        v20);
      mAppearEffObjList_2 = v5->fields.mAppearEffObjList_2;
      v5->fields.appearEffObjDispList = mAppearEffObjList_2;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v5->fields.appearEffObjDispList,
        (int32_t)mAppearEffObjList_2,
        v22,
        v23);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v24, v5->fields.mItemLabelList_2, 1, v25);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v29 = 0;
      goto LABEL_39;
    case 3u:
      v34 = v5->fields.mItemLabelList_3;
      mItemSpList_2 = v5->fields.mItemSpList_3;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_3;
      v5->fields.itemLabelDispList = v34;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.itemLabelDispList, (int32_t)v34, (int32_t)v13, v14);
      DIFF_ANIMATION_NAME_3_TYPES = v5->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_3_TYPES;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_3_TYPES,
        v36,
        v37);
      mAppearEffObjList_3 = v5->fields.mAppearEffObjList_3;
      v5->fields.appearEffObjDispList = mAppearEffObjList_3;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v5->fields.appearEffObjDispList,
        (int32_t)mAppearEffObjList_3,
        v39,
        v40);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v41, v5->fields.mItemLabelList_2, 0, v42);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v29 = 1;
LABEL_39:
      QuestRewardItemAction__SetActiveLabelList(v26, mItemLabelList_3, v29, v27);
      v45 = 0;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      break;
    case 4u:
      mItemSpList_2 = v5->fields.mItemSpList_4;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_4;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      mItemLabelList_4 = v5->fields.mItemLabelList_4;
      v5->fields.itemLabelDispList = mItemLabelList_4;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v5->fields.itemLabelDispList,
        (int32_t)mItemLabelList_4,
        (int32_t)v13,
        v14);
      DIFF_ANIMATION_NAME_4_TYPES = v5->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_4_TYPES;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_4_TYPES,
        v49,
        v50);
      mAppearEffObjList_4 = v5->fields.mAppearEffObjList_4;
      v5->fields.appearEffObjDispList = mAppearEffObjList_4;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v5->fields.appearEffObjDispList,
        (int32_t)mAppearEffObjList_4,
        v52,
        v53);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v54, v5->fields.mItemLabelList_2, 0, v55);
      QuestRewardItemAction__SetActiveLabelList(v56, v5->fields.mItemLabelList_3, 0, v57);
      v45 = 1;
      break;
    default:
      goto LABEL_35;
  }
  QuestRewardItemAction__SetActiveLabelList(v43, *p_mItemLabelList_4, v45, v44);
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v59 = 4LL;
    while ( 1 )
    {
      v60 = v59 - 4;
      if ( (int)v59 - 4 >= (unsigned int)max_length )
        break;
      v61 = (QuestRewardInfo_o *)*((_QWORD *)&v4->obj.klass + v59);
      if ( !v61 )
        goto LABEL_73;
      if ( v61->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v60 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v59);
        if ( !this )
          goto LABEL_73;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v60 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v59);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( v60 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v59);
        if ( !this )
          goto LABEL_73;
        ServantFaceIconComponent__Set_38217436(
          (ServantFaceIconComponent_o *)this,
          v61->fields.objectId,
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
          0LL);
      }
      else
      {
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v60 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v59);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v60 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v59);
        if ( !this )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_73;
        ItemIconComponent__SetGift_38144896(
          (ItemIconComponent_o *)this,
          v61->fields.type,
          v61->fields.objectId,
          v61->fields.num,
          0,
          0LL);
      }
      itemLabelDispList = v5->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_73;
      if ( v60 >= itemLabelDispList->max_length )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v59), v61, v62);
      max_length = v4->max_length;
      if ( (int)++v59 - 4 >= max_length )
        goto LABEL_70;
    }
LABEL_74:
    sub_1B88814(this, questInfoRewardList);
  }
LABEL_70:
  QuestRewardItemAction__CommonSetUpEndAction(v5, (const MethodInfo *)questInfoRewardList);
}


void __fastcall QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A581DC & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardItemAction__update__);
    sub_1B885B0(&CTouch_TypeInfo);
    byte_4A581DC = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30AAE44 *)Method_CStateManager_QuestRewardItemAction__update__);
}


void __fastcall QuestRewardItemAction___Play_b__48_0(QuestRewardItemAction_o *this, const MethodInfo *method)
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
  __int64 v4; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x19
  __int64 v10; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  ManagerConfig_c *v19; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w25
  MoveObject_o *v23; // x21
  float x; // s10
  float v25; // s11
  float v26; // s12
  System_Action_o *v27; // x22
  System_Action_o *v28; // x23
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4A581E9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&Method_QuestRewardItemAction_StateItemLabel_begin__);
    sub_1B885B0(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_1B885B0(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1B885B0(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_4A581E9 = 1;
  }
  v4 = sub_1B887FC(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 32) = that;
  v9 = v4 + 32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)that, v7, v8);
  v10 = *(_QWORD *)(v4 + 32);
  if ( !v10 )
    goto LABEL_19;
  transform = *(UnityEngine_Component_o **)(v10 + 80);
  if ( !transform )
    goto LABEL_19;
  if ( *(_BYTE *)(v10 + 304) )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_19;
    transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_19;
  }
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)gameObject, v12, v13);
  v15 = *(_QWORD *)(v4 + 32);
  if ( !v15 )
    goto LABEL_19;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)transform,
    *(UILabel_array **)(v15 + 240),
    1,
    v14);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v4 + 16),
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)Component_object, v17, v18);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0LL);
  v19 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v19 = ManagerConfig_TypeInfo;
  }
  WIDTH = v19->static_fields->WIDTH;
  v32 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0LL);
  v23 = *(MoveObject_o **)(v4 + 24);
  x = v32.fields.x;
  v25 = v32.fields.y;
  v26 = v32.fields.z;
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v23
    || (v33.fields.x = (float)WIDTH,
        v33.fields.y = y,
        v33.fields.z = z,
        v34.fields.x = x,
        v34.fields.y = v25,
        v34.fields.z = v26,
        MoveObject__Play(v23, v33, v34, 0.25, v27, v28, 0.0, 17, 0LL),
        !*(_QWORD *)v9) )
  {
LABEL_19:
    sub_1B8880C(transform, v6);
  }
  if ( *(_BYTE *)(*(_QWORD *)v9 + 209LL) )
  {
    v29 = Method_QuestRewardItemAction_StateItemLabel_begin__;
    if ( (*((_BYTE *)Method_QuestRewardItemAction_StateItemLabel_begin__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1B885C8(Method_QuestRewardItemAction_StateItemLabel_begin__);
    v30 = (System_Reflection_MethodBase_o *)sub_1B88594(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 4, 0LL);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
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
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *Item; // x0
  ServantStatusBattleListViewItem_o *p_fields; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v13; // x20
  float mTreasureAnimStartTime; // s0
  _QWORD *image; // x8
  __int64 v16; // x9
  SimpleAnimation_State_c **v17; // x10
  __int64 v18; // x0
  ServantStatusBattleListViewItem_c *v19; // x20
  _QWORD *v20; // x8
  __int64 v21; // x9
  SimpleAnimation_State_c **v22; // x10
  __int64 v23; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  unsigned int v26; // w21
  _BOOL4 v27; // w8

  v5 = this;
  if ( (byte_4A581E7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A581E7 = 1;
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
    p_fields = (ServantStatusBattleListViewItem_o *)&v5->fields;
    sub_1B88554(p_fields, (int32_t)Item, v9, v10);
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
      v18 = sub_1BDA590(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, long double))v18)(
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
      v23 = sub_1BDA590(v19, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v23)(v19, *(_QWORD *)(v23 + 8), 1.0);
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
LABEL_48:
      sub_1B8880C(this, that);
    this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_63844704(
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
      v13 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)this,
                                                that->fields.playAnimationName,
                                                0LL);
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v13, 0LL, 0LL);
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
        UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v13, mTreasureAnimStartTime, 0LL);
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v13, 1.0, 0LL);
        this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
        if ( !this )
          goto LABEL_48;
        this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_69204472(
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
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1B88814(this, that);
      v27 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[v26];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v27, 0LL);
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v26 >= max_length )
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
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x21
  int max_length; // w8
  char v6; // w22
  char v7; // w23
  unsigned int v8; // w24
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  _BOOL4 v11; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_4A581E8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1B885B0(&Method_QuestRewardItemAction_StatePlay_update__);
    byte_4A581E8 = 1;
  }
  if ( !that )
    goto LABEL_42;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_42;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B88814(this, that);
      v9 = &appearEffObjDispList->obj.klass + (int)v8;
      v10 = (UnityEngine_GameObject_o *)v9[4];
      if ( !v10 )
        goto LABEL_42;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v9[4],
                                                    0LL);
      if ( that->fields.mIsFromTreasureBox )
        v6 = (char)this;
      if ( !that->fields.mIsFromTreasureBox )
        v7 = (char)this;
      if ( that->fields.mIsFromTreasureBox )
        break;
      if ( (v7 & 1) == 0 )
      {
        v11 = 1;
LABEL_18:
        UnityEngine_GameObject__SetActive(v10, v11, 0LL);
      }
LABEL_19:
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_20;
    }
    v11 = !that->fields.mTreasureEffectOff;
    if ( v11 == (v6 & 1) )
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
    this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        if ( that->fields.mLabelAnimate )
        {
          v15 = 2;
        }
        else
        {
          if ( that->fields.mGetSEonProgram )
          {
            v16 = Method_QuestRewardItemAction_StatePlay_update__;
            if ( (*((_BYTE *)Method_QuestRewardItemAction_StatePlay_update__ + 83) & 2) != 0 )
              v16 = (_QWORD *)sub_1B885C8(Method_QuestRewardItemAction_StatePlay_update__);
            v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
            OverwriteAssetSoundName__PlaySystemSe(v17, 4, 0LL);
          }
          v15 = 3;
        }
        QuestRewardItemAction__SetState(that, v15, v14);
      }
      return;
    }
LABEL_42:
    sub_1B8880C(this, that);
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
  System_Action_o *v3; // x20

  if ( (byte_4A581EB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__);
    byte_4A581EB = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0LL) )
  {
    this->fields.waitTutorial = 1;
    v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__,
      0LL);
    EventTutorialMaster__CheckTutorial(0, 75, v3, 0, 0, 0, 0, 0LL);
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
    sub_1B8880C(this, that);
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
  __int64 v5; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x19
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x2

  if ( (byte_4A581EA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AndroidBackKeyManager_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestRewardItemAction_StateTouchWait_update__);
    sub_1B885B0(&Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__);
    sub_1B885B0(&QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo);
    byte_4A581EA = 1;
  }
  v5 = sub_1B887FC(QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = that;
  v10 = v5 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)that, v8, v9);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 && !this->fields.waitTutorial )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v10 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v10 + 224LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v11 = Method_QuestRewardItemAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardItemAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v11 = (_QWORD *)sub_1B885C8(Method_QuestRewardItemAction_StateTouchWait_update__);
          v12 = (System_Reflection_MethodBase_o *)sub_1B88594(v11, v11[4]);
          OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v14 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
          v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)v5,
            Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v16, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v10;
            if ( *(_QWORD *)v10 )
            {
              QuestRewardItemAction__SetState((QuestRewardItemAction_o *)isTouchPush, 0, v17);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B8880C(isTouchPush, v7);
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
    sub_1B8880C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}