void FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct FriendshipUpItemUseItem_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D27F8E & 1) == 0 )
  {
    sub_1C94098(&FriendshipUpItemUseItem_TypeInfo);
    sub_1C94098(&StringLiteral_17554/*"btn_boostitem_off"*/);
    sub_1C94098(&StringLiteral_17555/*"btn_boostitem_on"*/);
    byte_4D27F8E = 1;
  }
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  static_fields->ITEM_MAX_NUM = 9999;
  v8 = StringLiteral_17555/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17555/*"btn_boostitem_on"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->BUTTON_ON_FILE_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_17554/*"btn_boostitem_off"*/;
  v10 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v10->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17554/*"btn_boostitem_off"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->BUTTON_OFF_FILE_NAME, v9, v11, v12, v13, v14, v15, v16);
  FriendshipUpItemUseItem_TypeInfo->static_fields->TIME_LABEL_STANDARD_POSITION_X = 29.5;
}


void FriendshipUpItemUseItem___ctor(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void FriendshipUpItemUseItem__Awake(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x19

  if ( (byte_4D27F84 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10274/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/);
    sub_1C94098(&StringLiteral_10272/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/);
    byte_4D27F84 = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0);
  if ( !friendshipUpItemUseFixAutoUseLabel
    || (UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, v4, 0),
        friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0),
        !friendshipUpItemUseFixHaveLabel) )
  {
    sub_1C942F0(v4, v5);
  }
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemUseItem__ChangeButtonState(FriendshipUpItemUseItem_o *this, bool isOn, const MethodInfo *method)
{
  FriendshipUpItemUseItem_c *v5; // x0
  UISprite_o *friendshipUpItemUseSprite; // x20
  __int64 v7; // x9

  if ( (byte_4D27F88 & 1) == 0 )
  {
    sub_1C94098(&FriendshipUpItemUseItem_TypeInfo);
    byte_4D27F88 = 1;
  }
  v5 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( !friendshipUpItemUseSprite )
    sub_1C942F0(v5, isOn);
  v7 = 16;
  if ( isOn )
    v7 = 8;
  UISprite__set_spriteName(
    friendshipUpItemUseSprite,
    *(System_String_o **)((char *)&FriendshipUpItemUseItem_TypeInfo->static_fields->ITEM_MAX_NUM + v7),
    0);
}


void FriendshipUpItemUseItem__OnClickSelectItem(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  FriendshipUpItemUseItem_o *v2; // x19
  struct System_Action_o *onClickButtonCallback; // x8
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  UnityEngine_Object_o *useAlertObj; // x20
  struct QuestUseItemInfo_o *v6; // x8
  bool v7; // w20
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4D27F8D & 1) == 0 )
  {
    this = (FriendshipUpItemUseItem_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27F8D = 1;
  }
  onClickButtonCallback = v2->fields.onClickButtonCallback;
  if ( onClickButtonCallback )
    this = (FriendshipUpItemUseItem_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))onClickButtonCallback->fields.invoke_impl)(
                                          onClickButtonCallback->fields.method_code,
                                          onClickButtonCallback->fields.method);
  questUseItemInfo = v2->fields.questUseItemInfo;
  if ( !questUseItemInfo )
    goto LABEL_18;
  if ( questUseItemInfo->fields._MaxNum_k__BackingField >= 1 )
  {
    useAlertObj = (UnityEngine_Object_o *)v2->fields.useAlertObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FriendshipUpItemUseItem_o *)UnityEngine_Object__op_Equality(useAlertObj, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v6 = v2->fields.questUseItemInfo;
      if ( v6 )
      {
        v7 = v6->fields._MaxNum_k__BackingField == v6->fields._Num_k__BackingField
          && !v6->fields._UseFlag_k__BackingField;
        this = (FriendshipUpItemUseItem_o *)v2->fields.useAlertObj;
        if ( this )
        {
          this = (FriendshipUpItemUseItem_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7, 0);
            FriendshipUpItemUseItem__SetPosNumLabel(v2, v7, v8);
            return;
          }
        }
      }
LABEL_18:
      sub_1C942F0(this, method);
    }
  }
}


void FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_4D27F86 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_12857/*"SetLabelUpdate"*/);
    byte_4D27F86 = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_72095608(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12857/*"SetLabelUpdate"*/,
         0) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_72095472(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12857/*"SetLabelUpdate"*/,
      0);
  }
}


void FriendshipUpItemUseItem__SetButtonEnabled(
        FriendshipUpItemUseItem_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUserButton; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4D27F8B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27F8B = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0, 0) )
  {
    v7 = this->fields.friendshipUpItemUserButton;
    if ( !v7 )
      sub_1C942F0(0, v6);
    UICommonButton__SetColliderEnable(v7, isEnabled, 1, 0);
  }
}


void FriendshipUpItemUseItem__SetInit(
        FriendshipUpItemUseItem_o *this,
        QuestUseItemInfo_o *itemInfo,
        bool isInterruption,
        System_Action_o *buttonCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct QuestUseItemInfo_o **p_questUseItemInfo; // x21
  char v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  bool UseFlag_k__BackingField; // w1
  UILabel_o *friendshipUpStringLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *explanationLabel; // x22
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  UnityEngine_Object_o *useAlertObj; // x22
  const MethodInfo *v29; // x2
  struct QuestUseItemInfo_o *v30; // x8
  int MaxNum_k__BackingField; // w9
  bool v32; // w22
  UISprite_o *useAlertSprite; // x23
  UILabel_o *useAlertLabel; // x23
  int64_t EndedAt_k__BackingField; // x23
  BalanceConfig_c *v36; // x0
  int64_t NoneExpireTime; // x24
  const MethodInfo *v38; // x1
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  const MethodInfo *v41; // x4

  if ( (byte_4D27F85 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_13495/*"TIME_REST_USER_ITEM"*/);
    sub_1C94098(&StringLiteral_12857/*"SetLabelUpdate"*/);
    sub_1C94098(&StringLiteral_10954/*"QUEST_USE_ITEM_MAX_NOT_USE_ALERT"*/);
    sub_1C94098(&StringLiteral_20370/*"icon_exclamation_mark"*/);
    byte_4D27F85 = 1;
  }
  this->fields.questUseItemInfo = itemInfo;
  p_questUseItemInfo = &this->fields.questUseItemInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questUseItemInfo,
    (int32_t)itemInfo,
    isInterruption,
    (int32_t)buttonCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.onClickButtonCallback = buttonCallback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickButtonCallback,
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13495/*"TIME_REST_USER_ITEM"*/, 0);
  if ( !friendshipUpStringLabel )
    goto LABEL_50;
  UILabel__set_text(friendshipUpStringLabel, gameObject, 0);
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (System_String_o *)UnityEngine_Object__op_Inequality(explanationLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    questUseItemInfo = this->fields.questUseItemInfo;
    if ( !questUseItemInfo )
      goto LABEL_50;
    gameObject = (System_String_o *)this->fields.explanationLabel;
    if ( !gameObject )
      goto LABEL_50;
    UILabel__set_text((UILabel_o *)gameObject, questUseItemInfo->fields._Explanation_k__BackingField, 0);
  }
  useAlertObj = (UnityEngine_Object_o *)this->fields.useAlertObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (System_String_o *)UnityEngine_Object__op_Inequality(useAlertObj, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v30 = *p_questUseItemInfo;
    if ( !*p_questUseItemInfo )
      goto LABEL_50;
    MaxNum_k__BackingField = v30->fields._MaxNum_k__BackingField;
    v32 = MaxNum_k__BackingField >= 1
       && MaxNum_k__BackingField == v30->fields._Num_k__BackingField
       && !v30->fields._UseFlag_k__BackingField
       && !isInterruption;
    gameObject = (System_String_o *)this->fields.useAlertObj;
    if ( !gameObject )
      goto LABEL_50;
    gameObject = (System_String_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v32, 0);
    useAlertSprite = this->fields.useAlertSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(useAlertSprite, (System_String_o *)StringLiteral_20370/*"icon_exclamation_mark"*/, 0);
    useAlertLabel = this->fields.useAlertLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10954/*"QUEST_USE_ITEM_MAX_NOT_USE_ALERT"*/, 0);
    if ( !useAlertLabel )
      goto LABEL_50;
    UILabel__set_text(useAlertLabel, gameObject, 0);
  }
  else
  {
    v32 = 0;
  }
  if ( !*p_questUseItemInfo )
    goto LABEL_50;
  EndedAt_k__BackingField = (*p_questUseItemInfo)->fields._EndedAt_k__BackingField;
  v36 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v36->static_fields->NoneExpireTime;
  FriendshipUpItemUseItem__SetPosNumLabel(this, v32 || EndedAt_k__BackingField < NoneExpireTime, v29);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v38);
  gameObject = (System_String_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !gameObject )
    goto LABEL_50;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPosition_36798812(v39, -9.0, 10.5, 0);
  gameObject = (System_String_o *)this->fields.friendshipUpItemUseFixHaveLabel;
  if ( !gameObject )
    goto LABEL_50;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalScale_36800880(v40, 1.0, 1.0, 0);
  if ( isInterruption )
  {
    if ( *p_questUseItemInfo )
    {
      FriendshipUpItemUseItem__SetWaveBattleRestart(
        this,
        (*p_questUseItemInfo)->fields._InterruptionUseFlag_k__BackingField,
        (*p_questUseItemInfo)->fields._IsValid_k__BackingField,
        EndedAt_k__BackingField < NoneExpireTime,
        v41);
      goto LABEL_43;
    }
LABEL_50:
    sub_1C942F0(gameObject, v25);
  }
  gameObject = (System_String_o *)this->fields.friendshipUpItemEnableTimeObj;
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (System_String_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, EndedAt_k__BackingField < NoneExpireTime, 0);
LABEL_43:
  if ( EndedAt_k__BackingField < NoneExpireTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( EndedAt_k__BackingField - NetworkManager__getTime(0) >= 0 )
    {
      UnityEngine_MonoBehaviour__CancelInvoke_72095472(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12857/*"SetLabelUpdate"*/,
        0);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12857/*"SetLabelUpdate"*/,
        1.0,
        1.0,
        0);
    }
  }
}


void FriendshipUpItemUseItem__SetItemIconSprite(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_o *questUseItemInfo; // x9
  System_String_o *v4; // x20
  UISprite_o *v5; // x19
  UISprite_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  UISprite_o *friendshipUpItemIconSprite; // x21
  System_String_o *v9; // x1

  if ( (byte_4D27F89 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27F89 = 1;
  }
  questUseItemInfo = this->fields.questUseItemInfo;
  if ( questUseItemInfo )
    questUseItemInfo = (struct QuestUseItemInfo_o *)questUseItemInfo->fields._SpriteName_k__BackingField;
  if ( questUseItemInfo )
    v4 = (System_String_o *)questUseItemInfo;
  else
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__IsExistEventAtlas(v4, 0) )
  {
    IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(v4, 0);
    friendshipUpItemIconSprite = this->fields.friendshipUpItemIconSprite;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( friendshipUpItemIconSprite )
      {
        UISprite__set_atlas(this->fields.friendshipUpItemIconSprite, 0, 0);
        IsNullOrEmpty = this->fields.friendshipUpItemIconSprite;
        if ( IsNullOrEmpty )
        {
          v9 = 0;
LABEL_22:
          UISprite__set_spriteName(IsNullOrEmpty, v9, 0);
          return;
        }
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(friendshipUpItemIconSprite, 0);
      IsNullOrEmpty = this->fields.friendshipUpItemIconSprite;
      if ( IsNullOrEmpty )
      {
        v9 = v4;
        goto LABEL_22;
      }
    }
    sub_1C942F0(IsNullOrEmpty, v7);
  }
  v5 = this->fields.friendshipUpItemIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(v5, v4, 0);
}


void FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0
  UnityEngine_Object_o *trueTypeFont; // x20
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  int64_t EndedAt_k__BackingField; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v8; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v10; // x3
  struct CondensedScaleLabel_o **p_endedCondensedScaleLabel; // x20
  UnityEngine_Object_o *endedCondensedScaleLabel; // x21
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *v20; // x21
  int mWidth; // w20
  float v22; // s0
  struct UILabel_o *friendshipUpStringLabel; // x8
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x19
  FriendshipUpItemUseItem_c *v25; // x0
  float v26; // s8

  if ( (byte_4D27F87 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C94098(&FriendshipUpItemUseItem_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27F87 = 1;
  }
  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(friendshipUpEndedLabel, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(EndedAt_k__BackingField, -1, 0);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (FriendshipUpItemUseItem_o *)NetworkManager__getTime(0);
  FriendshipUpItemUseItem__SetRemainTime(
    Time,
    EndedAt_k__BackingField - (_QWORD)Time,
    this->fields.friendshipUpEndedLabel,
    v10);
  p_endedCondensedScaleLabel = &this->fields.endedCondensedScaleLabel;
  endedCondensedScaleLabel = (UnityEngine_Object_o *)this->fields.endedCondensedScaleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(endedCondensedScaleLabel, 0, 0) )
  {
    friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
    if ( !friendshipUpEndedLabel )
      goto LABEL_31;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)friendshipUpEndedLabel,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    *p_endedCondensedScaleLabel = (struct CondensedScaleLabel_o *)Component_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.endedCondensedScaleLabel,
      (int32_t)Component_object,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (UnityEngine_Object_o *)*p_endedCondensedScaleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
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
    sub_1C942F0(friendshipUpEndedLabel, method);
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
  LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localScale(
                                 (UnityEngine_Transform_o *)friendshipUpEndedLabel,
                                 0);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( !friendshipUpStringLabel )
    goto LABEL_31;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v25 = FriendshipUpItemUseItem_TypeInfo;
  v26 = (float)((float)(v22 * (float)mWidth) + (float)friendshipUpStringLabel->fields.mWidth) * 0.5;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v25 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_36798812(
    friendshipUpItemEnableTimeObj,
    v25->static_fields->TIME_LABEL_STANDARD_POSITION_X - v26,
    -21.5,
    0);
}


void FriendshipUpItemUseItem__SetNumLabel(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_o *questUseItemInfo; // x8
  int32_t Num_k__BackingField; // w20
  FriendshipUpItemUseItem_c *v5; // x0
  int32_t ITEM_MAX_NUM; // w21
  int32_t v7; // w0
  struct QuestUseItemInfo_o *v8; // x8
  int32_t v9; // w20
  int MaxNum_k__BackingField; // w22
  System_String_o **v11; // x8
  System_String_o *v12; // x21
  System_String_o *v13; // x21
  UILabel_o *friendshipUpItemUseNumLabel; // x19
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  int v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D27F8A & 1) == 0 )
  {
    sub_1C94098(&FriendshipUpItemUseItem_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&StringLiteral_10276/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/);
    sub_1C94098(&StringLiteral_10277/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX"*/);
    sub_1C94098(&StringLiteral_10278/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX_WHEN_MAX"*/);
    byte_4D27F8A = 1;
  }
  questUseItemInfo = this->fields.questUseItemInfo;
  if ( questUseItemInfo )
    Num_k__BackingField = questUseItemInfo->fields._Num_k__BackingField;
  else
    Num_k__BackingField = 0;
  v5 = FriendshipUpItemUseItem_TypeInfo;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v5 = FriendshipUpItemUseItem_TypeInfo;
  }
  ITEM_MAX_NUM = v5->static_fields->ITEM_MAX_NUM;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Min_65939892(Num_k__BackingField, ITEM_MAX_NUM, 0);
  v8 = this->fields.questUseItemInfo;
  v9 = v7;
  if ( v8 )
  {
    MaxNum_k__BackingField = v8->fields._MaxNum_k__BackingField;
    if ( MaxNum_k__BackingField < 1 )
    {
      v12 = (System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/;
    }
    else
    {
      v11 = (System_String_o **)&StringLiteral_10277/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX"*/;
      if ( v7 >= MaxNum_k__BackingField )
        v11 = (System_String_o **)&StringLiteral_10278/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX_WHEN_MAX"*/;
      v12 = *v11;
    }
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/;
    MaxNum_k__BackingField = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get(v12, 0);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v20 = v9;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v19 = MaxNum_k__BackingField;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v17 = System_String__Format_64459052(v13, v15, v16, 0);
  if ( !friendshipUpItemUseNumLabel )
    sub_1C942F0(v17, v18);
  UILabel__set_text(friendshipUpItemUseNumLabel, v17, 0);
}


void FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_1C942F0(0, time);
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
  float v7; // s1
  float v8; // s8
  UnityEngine_GameObject_o *v9; // x0

  friendshipUpItemUseFixHaveLabel = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
  if ( !friendshipUpItemUseFixHaveLabel
    || ((gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseFixHaveLabel, 0), !isValidUnderLabel)
      ? (v7 = -8.5, v8 = -8.5)
      : (v7 = -5.5, v8 = -5.5),
        GameObjectExtensions__SetLocalPosition_36798812(gameObject, -36.5, v7, 0),
        (friendshipUpItemUseFixHaveLabel = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel) == 0) )
  {
    sub_1C942F0(friendshipUpItemUseFixHaveLabel, isValidUnderLabel);
  }
  v9 = UnityEngine_Component__get_gameObject(friendshipUpItemUseFixHaveLabel, 0);
  GameObjectExtensions__SetLocalPosition_36798812(v9, 11.0, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemUseItem__SetRemainTime(
        FriendshipUpItemUseItem_o *this,
        int64_t remainTime,
        UILabel_o *label,
        const MethodInfo *method)
{
  float v4; // s0 OVERLAPPED
  float v5; // s1
  float v6; // s3
  float v7; // s2

  v4 = 1.0;
  v5 = 0.0;
  if ( (int)remainTime / 86400 >= 1 )
    v5 = 1.0;
  if ( !label )
    sub_1C942F0(this, remainTime);
  v6 = 1.0;
  if ( (int)remainTime / 86400 < 1 )
    v4 = 0.90196;
  v7 = v5;
  UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v4, 0);
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
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  float v17; // s0
  UILabel_o *v18; // x21
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_4D27F8C & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10282/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/);
    sub_1C94098(&StringLiteral_10275/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/);
    byte_4D27F8C = 1;
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
  GameObjectExtensions__SetLocalPosition_36798812(gameObject, -44.5, 14.0, 0);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v11 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
    GameObjectExtensions__SetLocalPositionY(v11, 4.0, 0);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v12 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
    GameObjectExtensions__SetLocalPositionX(v12, -10.5, 0);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v13 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
    GameObjectExtensions__SetLocalPositionX(v13, 42.5, 0);
    if ( !isUse )
    {
      friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/,
                                                               0);
      if ( friendshipUpItemUseFixAutoUseLabel )
      {
        UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)friendshipUpItemUseSprite, 0);
        friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
        if ( friendshipUpItemUseSprite )
        {
          v15 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
          GameObjectExtensions__SetLocalScaleX(v15, 0.85, 0);
          friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
          if ( friendshipUpItemUseSprite )
          {
            v16 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
            v17 = 10.5;
LABEL_33:
            GameObjectExtensions__SetLocalPositionX(v16, v17, 0);
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
  v18 = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10275/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/,
                                                           0);
  if ( !v18 )
    goto LABEL_41;
  UILabel__set_text(v18, (System_String_o *)friendshipUpItemUseSprite, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v19 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalScaleX(v19, 1.0, 0);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( friendshipUpItemUseSprite )
    {
      v16 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
      v17 = -4.5;
      goto LABEL_33;
    }
LABEL_41:
    sub_1C942F0(friendshipUpItemUseSprite, isUse);
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v20 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPositionY(v20, 2.0, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v21 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPositionX(v21, -26.5, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 15, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v22 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPositionX(v22, 16.5, 0);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v23 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0);
  GameObjectExtensions__SetLocalPositionY(v23, -0.5, 0);
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
    sub_1C942F0(0, method);
  UICommonButtonColor__UpdateColor(friendshipUpItemUserButton, 0, 0);
}