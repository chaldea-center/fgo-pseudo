void FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct FriendshipUpItemUseItem_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5933D5A & 1) == 0 )
  {
    sub_21FFC50(&FriendshipUpItemUseItem_TypeInfo);
    sub_21FFC50(&StringLiteral_18194/*"btn_boostitem_off"*/);
    sub_21FFC50(&StringLiteral_18195/*"btn_boostitem_on"*/);
    byte_5933D5A = 1;
  }
  v7 = StringLiteral_18195/*"btn_boostitem_on"*/;
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  static_fields->ITEM_MAX_NUM = 9999;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->BUTTON_ON_FILE_NAME, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_18194/*"btn_boostitem_off"*/;
  v10 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v10->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_18194/*"btn_boostitem_off"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->BUTTON_OFF_FILE_NAME, v9, v11, v12, v13, v14, v15, v16);
  FriendshipUpItemUseItem_TypeInfo->static_fields->TIME_LABEL_STANDARD_POSITION_X = 29.5;
}


void FriendshipUpItemUseItem___ctor(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void FriendshipUpItemUseItem__Awake(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x19

  if ( (byte_5933D50 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10642/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/);
    sub_21FFC50(&StringLiteral_10640/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/);
    byte_5933D50 = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10640/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0);
  if ( !friendshipUpItemUseFixAutoUseLabel
    || (UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, v5, 0),
        friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10642/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0),
        !friendshipUpItemUseFixHaveLabel) )
  {
    sub_21FFECC(v5, v6);
  }
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemUseItem__ChangeButtonState(FriendshipUpItemUseItem_o *this, bool isOn, const MethodInfo *method)
{
  FriendshipUpItemUseItem_c *v5; // x0
  UISprite_o *friendshipUpItemUseSprite; // x19
  int v7; // w8
  System_String_o **p_BUTTON_ON_FILE_NAME; // x8

  if ( (byte_5933D54 & 1) == 0 )
  {
    sub_21FFC50(&FriendshipUpItemUseItem_TypeInfo);
    byte_5933D54 = 1;
  }
  v5 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  v7 = *(&FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished + 1);
  if ( isOn )
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo, isOn, method);
      v5 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_ON_FILE_NAME = &v5->static_fields->BUTTON_ON_FILE_NAME;
  }
  else
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo, isOn, method);
      v5 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_ON_FILE_NAME = &v5->static_fields->BUTTON_OFF_FILE_NAME;
  }
  if ( !friendshipUpItemUseSprite )
    sub_21FFECC(v5, isOn);
  UISprite__set_spriteName(friendshipUpItemUseSprite, *p_BUTTON_ON_FILE_NAME, 0);
}


void FriendshipUpItemUseItem__OnClickSelectItem(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FriendshipUpItemUseItem_o *v3; // x19
  struct System_Action_o *onClickButtonCallback; // x8
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  UnityEngine_Object_o *useAlertObj; // x20
  struct QuestUseItemInfo_o *v7; // x8
  bool v8; // w20
  const MethodInfo *v9; // x2

  v3 = this;
  if ( (byte_5933D59 & 1) == 0 )
  {
    this = (FriendshipUpItemUseItem_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933D59 = 1;
  }
  onClickButtonCallback = v3->fields.onClickButtonCallback;
  if ( onClickButtonCallback )
    this = (FriendshipUpItemUseItem_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))onClickButtonCallback->fields.invoke_impl)(
                                          onClickButtonCallback->fields.method_code,
                                          onClickButtonCallback->fields.method);
  questUseItemInfo = v3->fields.questUseItemInfo;
  if ( !questUseItemInfo )
    goto LABEL_18;
  if ( questUseItemInfo->fields._MaxNum_k__BackingField >= 1 )
  {
    useAlertObj = (UnityEngine_Object_o *)v3->fields.useAlertObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    this = (FriendshipUpItemUseItem_o *)UnityEngine_Object__op_Equality(useAlertObj, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v3->fields.questUseItemInfo;
      if ( v7 )
      {
        v8 = v7->fields._MaxNum_k__BackingField == v7->fields._Num_k__BackingField
          && !v7->fields._UseFlag_k__BackingField;
        this = (FriendshipUpItemUseItem_o *)v3->fields.useAlertObj;
        if ( this )
        {
          this = (FriendshipUpItemUseItem_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0);
            FriendshipUpItemUseItem__SetPosNumLabel(v3, v8, v9);
            return;
          }
        }
      }
LABEL_18:
      sub_21FFECC(this, method);
    }
  }
}


void FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_5933D52 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13315/*"SetLabelUpdate"*/);
    byte_5933D52 = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_83230160(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_13315/*"SetLabelUpdate"*/,
         0) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_83229692(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13315/*"SetLabelUpdate"*/,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemUseItem__SetButtonEnabled(
        FriendshipUpItemUseItem_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUserButton; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_5933D57 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933D57 = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnabled, method);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0, 0) )
  {
    v7 = this->fields.friendshipUpItemUserButton;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UICommonButton__SetColliderEnable(v7, isEnabled, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemUseItem__SetInit(
        FriendshipUpItemUseItem_o *this,
        QuestUseItemInfo_o *itemInfo,
        bool isInterruption,
        System_Action_o *buttonCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct QuestUseItemInfo_o **p_questUseItemInfo; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  bool UseFlag_k__BackingField; // w1
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *friendshipUpStringLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *explanationLabel; // x22
  __int64 v31; // x2
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  UnityEngine_Object_o *useAlertObj; // x22
  const MethodInfo *v34; // x2
  struct QuestUseItemInfo_o *v35; // x8
  int MaxNum_k__BackingField; // w9
  bool v37; // w22
  __int64 v38; // x1
  __int64 v39; // x2
  UISprite_o *useAlertSprite; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  UILabel_o *useAlertLabel; // x23
  int64_t EndedAt_k__BackingField; // x23
  BalanceConfig_c *v45; // x0
  int64_t NoneExpireTime; // x24
  char v47; // w1
  const MethodInfo *v48; // x1
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  const MethodInfo *v51; // x4
  __int64 v52; // x1
  __int64 v53; // x2

  if ( (byte_5933D51 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13966/*"TIME_REST_USER_ITEM"*/);
    sub_21FFC50(&StringLiteral_13315/*"SetLabelUpdate"*/);
    sub_21FFC50(&StringLiteral_11367/*"QUEST_USE_ITEM_MAX_NOT_USE_ALERT"*/);
    sub_21FFC50(&StringLiteral_21131/*"icon_exclamation_mark"*/);
    byte_5933D51 = 1;
  }
  this->fields.questUseItemInfo = itemInfo;
  p_questUseItemInfo = &this->fields.questUseItemInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questUseItemInfo,
    (int32_t)itemInfo,
    (System_String_o *)isInterruption,
    (System_String_o *)buttonCallback,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.onClickButtonCallback = buttonCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickButtonCallback,
    (int32_t)buttonCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  FriendshipUpItemUseItem__SetItemIconSprite(this, v19);
  FriendshipUpItemUseItem__SetNumLabel(this, v20);
  if ( this->fields.questUseItemInfo )
    UseFlag_k__BackingField = this->fields.questUseItemInfo->fields._UseFlag_k__BackingField;
  else
    UseFlag_k__BackingField = 0;
  FriendshipUpItemUseItem__ChangeButtonState(this, UseFlag_k__BackingField, v21);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13966/*"TIME_REST_USER_ITEM"*/, 0);
  if ( !friendshipUpStringLabel )
    goto LABEL_52;
  UILabel__set_text(friendshipUpStringLabel, gameObject, 0);
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
  gameObject = (System_String_o *)UnityEngine_Object__op_Inequality(explanationLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    questUseItemInfo = this->fields.questUseItemInfo;
    if ( !questUseItemInfo )
      goto LABEL_52;
    gameObject = (System_String_o *)this->fields.explanationLabel;
    if ( !gameObject )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)gameObject, questUseItemInfo->fields._Explanation_k__BackingField, 0);
  }
  useAlertObj = (UnityEngine_Object_o *)this->fields.useAlertObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v31);
  gameObject = (System_String_o *)UnityEngine_Object__op_Inequality(useAlertObj, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v35 = *p_questUseItemInfo;
    if ( !*p_questUseItemInfo )
      goto LABEL_52;
    MaxNum_k__BackingField = v35->fields._MaxNum_k__BackingField;
    v37 = MaxNum_k__BackingField >= 1
       && MaxNum_k__BackingField == v35->fields._Num_k__BackingField
       && !v35->fields._UseFlag_k__BackingField
       && !isInterruption;
    gameObject = (System_String_o *)this->fields.useAlertObj;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (System_String_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v37, 0);
    useAlertSprite = this->fields.useAlertSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38, v39);
    AtlasManager__SetDownloadCommonSprite(useAlertSprite, (System_String_o *)StringLiteral_21131/*"icon_exclamation_mark"*/, 0);
    useAlertLabel = this->fields.useAlertLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11367/*"QUEST_USE_ITEM_MAX_NOT_USE_ALERT"*/, 0);
    if ( !useAlertLabel )
      goto LABEL_52;
    UILabel__set_text(useAlertLabel, gameObject, 0);
  }
  else
  {
    v37 = 0;
  }
  if ( !*p_questUseItemInfo )
    goto LABEL_52;
  EndedAt_k__BackingField = (*p_questUseItemInfo)->fields._EndedAt_k__BackingField;
  v45 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27, v34);
    v45 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v45->static_fields->NoneExpireTime;
  v47 = EndedAt_k__BackingField < NoneExpireTime || v37;
  FriendshipUpItemUseItem__SetPosNumLabel(this, v47, v34);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v48);
  gameObject = (System_String_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !gameObject )
    goto LABEL_52;
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPosition_42876120(v49, -9.0, 10.5, 0);
  gameObject = (System_String_o *)this->fields.friendshipUpItemUseFixHaveLabel;
  if ( !gameObject )
    goto LABEL_52;
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalScale_42878188(v50, 1.0, 1.0, 0);
  if ( isInterruption )
  {
    if ( *p_questUseItemInfo )
    {
      FriendshipUpItemUseItem__SetWaveBattleRestart(
        this,
        (*p_questUseItemInfo)->fields._InterruptionUseFlag_k__BackingField,
        (*p_questUseItemInfo)->fields._IsValid_k__BackingField,
        EndedAt_k__BackingField < NoneExpireTime,
        v51);
      goto LABEL_46;
    }
LABEL_52:
    sub_21FFECC(gameObject, v27);
  }
  gameObject = (System_String_o *)this->fields.friendshipUpItemEnableTimeObj;
  if ( !gameObject )
    goto LABEL_52;
  gameObject = (System_String_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, EndedAt_k__BackingField < NoneExpireTime, 0);
LABEL_46:
  if ( EndedAt_k__BackingField < NoneExpireTime )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v52, v53);
    if ( EndedAt_k__BackingField - NetworkManager__getTime(0) >= 0 )
    {
      UnityEngine_MonoBehaviour__CancelInvoke_83229692(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_13315/*"SetLabelUpdate"*/,
        0);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_13315/*"SetLabelUpdate"*/,
        1.0,
        1.0,
        0);
    }
  }
}


void FriendshipUpItemUseItem__SetItemIconSprite(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct QuestUseItemInfo_o *questUseItemInfo; // x9
  System_String_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *v8; // x19
  UISprite_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *friendshipUpItemIconSprite; // x21
  System_String_o *v13; // x1

  if ( (byte_5933D55 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933D55 = 1;
  }
  questUseItemInfo = this->fields.questUseItemInfo;
  if ( questUseItemInfo )
    questUseItemInfo = (struct QuestUseItemInfo_o *)questUseItemInfo->fields._SpriteName_k__BackingField;
  if ( questUseItemInfo )
    v5 = (System_String_o *)questUseItemInfo;
  else
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  if ( !AtlasManager__IsExistEventAtlas(v5, 0) )
  {
    IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(v5, 0);
    friendshipUpItemIconSprite = this->fields.friendshipUpItemIconSprite;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( friendshipUpItemIconSprite )
      {
        UISprite__set_atlas(this->fields.friendshipUpItemIconSprite, 0, 0);
        IsNullOrEmpty = this->fields.friendshipUpItemIconSprite;
        if ( IsNullOrEmpty )
        {
          v13 = 0;
LABEL_22:
          UISprite__set_spriteName(IsNullOrEmpty, v13, 0);
          return;
        }
      }
    }
    else
    {
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
      AtlasManager__SetCommon(friendshipUpItemIconSprite, 0);
      IsNullOrEmpty = this->fields.friendshipUpItemIconSprite;
      if ( IsNullOrEmpty )
      {
        v13 = v5;
        goto LABEL_22;
      }
    }
    sub_21FFECC(IsNullOrEmpty, v10);
  }
  v8 = this->fields.friendshipUpItemIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetEventSprite(v8, v5, 0);
}


void FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *trueTypeFont; // x20
  __int64 v7; // x2
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  int64_t EndedAt_k__BackingField; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  struct CondensedScaleLabel_o **p_endedCondensedScaleLabel; // x20
  UnityEngine_Object_o *endedCondensedScaleLabel; // x21
  __int64 v20; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Object_o *v28; // x21
  int mWidth; // w20
  __int64 v30; // x2
  float v31; // s0
  struct UILabel_o *friendshipUpStringLabel; // x8
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x19
  FriendshipUpItemUseItem_c *v34; // x0
  float v35; // s8

  if ( (byte_5933D53 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_21FFC50(&FriendshipUpItemUseItem_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933D53 = 1;
  }
  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(friendshipUpEndedLabel, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  friendshipUpEndedLabel = (UILabel_o *)UnityEngine_Object__op_Equality(trueTypeFont, 0, 0);
  if ( ((unsigned __int8)friendshipUpEndedLabel & 1) != 0 )
  {
    this->fields.delayLabelUpdate = 1;
    return;
  }
  questUseItemInfo = this->fields.questUseItemInfo;
  if ( !questUseItemInfo )
    goto LABEL_31;
  EndedAt_k__BackingField = questUseItemInfo->fields._EndedAt_k__BackingField;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v7);
  RestTime2 = LocalizationManager__GetRestTime2(EndedAt_k__BackingField, -1, 0);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v11);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12, v13);
  Time = (FriendshipUpItemUseItem_o *)NetworkManager__getTime(0);
  FriendshipUpItemUseItem__SetRemainTime(
    Time,
    EndedAt_k__BackingField - (_QWORD)Time,
    this->fields.friendshipUpEndedLabel,
    v15);
  p_endedCondensedScaleLabel = &this->fields.endedCondensedScaleLabel;
  endedCondensedScaleLabel = (UnityEngine_Object_o *)this->fields.endedCondensedScaleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Equality(endedCondensedScaleLabel, 0, 0) )
  {
    friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
    if ( !friendshipUpEndedLabel )
      goto LABEL_31;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)friendshipUpEndedLabel,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    *p_endedCondensedScaleLabel = (struct CondensedScaleLabel_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.endedCondensedScaleLabel,
      (int32_t)Component_object,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (UnityEngine_Object_o *)*p_endedCondensedScaleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v20);
  if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
  {
    friendshipUpEndedLabel = (UILabel_o *)*p_endedCondensedScaleLabel;
    if ( *p_endedCondensedScaleLabel )
    {
      CondensedScaleLabel__Initialize((CondensedScaleLabel_o *)friendshipUpEndedLabel, 0);
      friendshipUpEndedLabel = (UILabel_o *)*p_endedCondensedScaleLabel;
      if ( *p_endedCondensedScaleLabel )
      {
        CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)friendshipUpEndedLabel, 0);
        goto LABEL_24;
      }
    }
LABEL_31:
    sub_21FFECC(friendshipUpEndedLabel, method);
  }
LABEL_24:
  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  mWidth = friendshipUpEndedLabel->fields.mWidth;
  friendshipUpEndedLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)friendshipUpEndedLabel,
                                          0);
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  friendshipUpEndedLabel = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)friendshipUpEndedLabel,
                                          0);
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  LODWORD(v31) = (unsigned int)UnityEngine_Transform__get_localScale(
                                 (UnityEngine_Transform_o *)friendshipUpEndedLabel,
                                 0);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( !friendshipUpStringLabel )
    goto LABEL_31;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v34 = FriendshipUpItemUseItem_TypeInfo;
  v35 = (float)((float)(v31 * (float)mWidth) + (float)friendshipUpStringLabel->fields.mWidth) * 0.5;
  if ( !*(&FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo, method, v30);
    v34 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_42876120(
    friendshipUpItemEnableTimeObj,
    v34->static_fields->TIME_LABEL_STANDARD_POSITION_X - v35,
    -21.5,
    0);
}


void FriendshipUpItemUseItem__SetNumLabel(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  int32_t Num_k__BackingField; // w20
  FriendshipUpItemUseItem_c *v6; // x0
  int32_t ITEM_MAX_NUM; // w21
  int32_t v8; // w0
  __int64 v9; // x1
  __int64 v10; // x2
  struct QuestUseItemInfo_o *v11; // x8
  int32_t v12; // w20
  int MaxNum_k__BackingField; // w22
  System_String_o **v14; // x8
  System_String_o *v15; // x21
  System_String_o *v16; // x21
  UILabel_o *friendshipUpItemUseNumLabel; // x19
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  int v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5933D56 & 1) == 0 )
  {
    sub_21FFC50(&FriendshipUpItemUseItem_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&StringLiteral_10644/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/);
    sub_21FFC50(&StringLiteral_10645/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX"*/);
    sub_21FFC50(&StringLiteral_10646/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX_WHEN_MAX"*/);
    byte_5933D56 = 1;
  }
  questUseItemInfo = this->fields.questUseItemInfo;
  if ( questUseItemInfo )
    Num_k__BackingField = questUseItemInfo->fields._Num_k__BackingField;
  else
    Num_k__BackingField = 0;
  v6 = FriendshipUpItemUseItem_TypeInfo;
  if ( !*(&FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo, method, v2);
    v6 = FriendshipUpItemUseItem_TypeInfo;
  }
  ITEM_MAX_NUM = v6->static_fields->ITEM_MAX_NUM;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v8 = System_Math__Min_76940292(Num_k__BackingField, ITEM_MAX_NUM, 0);
  v11 = this->fields.questUseItemInfo;
  v12 = v8;
  if ( v11 )
  {
    MaxNum_k__BackingField = v11->fields._MaxNum_k__BackingField;
    v14 = (System_String_o **)&StringLiteral_10646/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX_WHEN_MAX"*/;
    if ( v8 < MaxNum_k__BackingField )
      v14 = (System_String_o **)&StringLiteral_10645/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX"*/;
    if ( MaxNum_k__BackingField < 1 )
      v14 = (System_String_o **)&StringLiteral_10644/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/;
    v15 = *v14;
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_10644/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/;
    MaxNum_k__BackingField = 0;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  v16 = LocalizationManager__Get(v15, 0);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v23 = v12;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v23);
  v22 = MaxNum_k__BackingField;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v22);
  v20 = System_String__Format_75484576(v16, v18, v19, 0);
  if ( !friendshipUpItemUseNumLabel )
    sub_21FFECC(v20, v21);
  UILabel__set_text(friendshipUpItemUseNumLabel, v20, 0);
}


void FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_21FFECC(0, time);
  UILabel__set_text(friendshipUpEndedLabel, time, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemUseItem__SetPosNumLabel(
        FriendshipUpItemUseItem_o *this,
        bool isValidUnderLabel,
        const MethodInfo *method)
{
  UnityEngine_Component_o *friendshipUpItemUseFixHaveLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v6; // s1
  float v7; // s8
  UnityEngine_GameObject_o *v8; // x0

  friendshipUpItemUseFixHaveLabel = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
  if ( isValidUnderLabel )
  {
    if ( !friendshipUpItemUseFixHaveLabel )
      goto LABEL_8;
    gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseFixHaveLabel, 0);
    v6 = -5.5;
    v7 = -5.5;
  }
  else
  {
    if ( !friendshipUpItemUseFixHaveLabel )
      goto LABEL_8;
    gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseFixHaveLabel, 0);
    v6 = -8.5;
    v7 = -8.5;
  }
  GameObjectExtensions__SetLocalPosition_42876120(gameObject, -36.5, v6, 0);
  friendshipUpItemUseFixHaveLabel = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
  if ( !friendshipUpItemUseFixHaveLabel )
LABEL_8:
    sub_21FFECC(friendshipUpItemUseFixHaveLabel, isValidUnderLabel);
  v8 = UnityEngine_Component__get_gameObject(friendshipUpItemUseFixHaveLabel, 0);
  GameObjectExtensions__SetLocalPosition_42876120(v8, 11.0, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemUseItem__SetRemainTime(
        FriendshipUpItemUseItem_o *this,
        int64_t remainTime,
        UILabel_o *label,
        const MethodInfo *method)
{
  float v4; // s1
  float v5; // s0 OVERLAPPED
  float v6; // s3
  float v7; // s2

  if ( !label )
    sub_21FFECC(this, remainTime);
  v4 = 1.0;
  v5 = 0.90196;
  v6 = 1.0;
  if ( (int)remainTime / 86400 < 1 )
    v4 = 0.0;
  else
    v5 = 1.0;
  v7 = v4;
  UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v5, 0);
}


void FriendshipUpItemUseItem__SetUseButtonSprite(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  bool UseFlag_k__BackingField; // w1

  questUseItemInfo = this->fields.questUseItemInfo;
  if ( questUseItemInfo )
    UseFlag_k__BackingField = questUseItemInfo->fields._UseFlag_k__BackingField;
  else
    UseFlag_k__BackingField = 0;
  FriendshipUpItemUseItem__ChangeButtonState(this, UseFlag_k__BackingField, v2);
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemUseItem__SetWaveBattleRestart(
        FriendshipUpItemUseItem_o *this,
        bool isUse,
        bool isValid,
        bool showTimeLimit,
        const MethodInfo *method)
{
  UnityEngine_Component_o *friendshipUpItemUseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x2
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  float v18; // s0
  UILabel_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0

  if ( (byte_5933D58 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10650/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/);
    sub_21FFC50(&StringLiteral_10643/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/);
    byte_5933D58 = 1;
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUserButton;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UICommonButton__SetColliderEnable((UICommonButton_o *)friendshipUpItemUseSprite, 0, 1, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, isValid, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, isValid, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemEnableTimeObj;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)friendshipUpItemUseSprite,
                                                           0);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, isValid && showTimeLimit, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 13, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPosition_42876120(gameObject, -44.5, 14.0, 0);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v12 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
    GameObjectExtensions__SetLocalPositionY(v12, 4.0, 0);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v13 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
    GameObjectExtensions__SetLocalPositionX(v13, -10.5, 0);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v14 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
    GameObjectExtensions__SetLocalPositionX(v14, 42.5, 0);
    if ( !isUse )
    {
      friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isUse, v11);
      friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10650/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/,
                                                               0);
      if ( friendshipUpItemUseFixAutoUseLabel )
      {
        UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)friendshipUpItemUseSprite, 0);
        friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
        if ( friendshipUpItemUseSprite )
        {
          v16 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
          GameObjectExtensions__SetLocalScaleX(v16, 0.85, 0);
          friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
          if ( friendshipUpItemUseSprite )
          {
            v17 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
            v18 = 10.5;
LABEL_33:
            GameObjectExtensions__SetLocalPositionX(v17, v18, 0);
            return;
          }
        }
      }
      goto LABEL_41;
    }
  }
  else if ( !isUse )
  {
    return;
  }
  v19 = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isUse, v11);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10643/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/,
                                                           0);
  if ( !v19 )
    goto LABEL_41;
  UILabel__set_text(v19, (System_String_o *)friendshipUpItemUseSprite, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v20 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalScaleX(v20, 1.0, 0);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( friendshipUpItemUseSprite )
    {
      v17 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
      v18 = -4.5;
      goto LABEL_33;
    }
LABEL_41:
    sub_21FFECC(friendshipUpItemUseSprite, isUse);
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v21 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPositionY(v21, 2.0, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v22 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPositionX(v22, -26.5, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 15, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v23 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPositionX(v23, 16.5, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v24 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPositionY(v24, -0.5, 0);
}


void FriendshipUpItemUseItem__Update(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_o *questUseItemInfo; // x8

  if ( this->fields.delayLabelUpdate )
  {
    questUseItemInfo = this->fields.questUseItemInfo;
    this->fields.delayLabelUpdate = 0;
    if ( questUseItemInfo )
      FriendshipUpItemUseItem__SetLabelUpdate(this, method);
  }
}


void FriendshipUpItemUseItem__UpdateButtonAlpha(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UICommonButtonColor_o *friendshipUpItemUserButton; // x0

  friendshipUpItemUserButton = (UICommonButtonColor_o *)this->fields.friendshipUpItemUserButton;
  if ( !friendshipUpItemUserButton )
    sub_21FFECC(0, method);
  UICommonButtonColor__UpdateColor(friendshipUpItemUserButton, 0, 0);
}