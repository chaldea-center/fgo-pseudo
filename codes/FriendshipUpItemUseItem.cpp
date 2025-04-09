void __fastcall FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct FriendshipUpItemUseItem_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49B6908 & 1) == 0 )
  {
    sub_1B4CF90(&FriendshipUpItemUseItem_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_17181/*"btn_boostitem_off"*/, v4);
    sub_1B4CF90(&StringLiteral_17182/*"btn_boostitem_on"*/, v5);
    byte_49B6908 = 1;
  }
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  v7 = StringLiteral_17182/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17182/*"btn_boostitem_on"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->BUTTON_ON_FILE_NAME, v7, v2, v3);
  v8 = StringLiteral_17181/*"btn_boostitem_off"*/;
  v9 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v9->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17181/*"btn_boostitem_off"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v9->BUTTON_OFF_FILE_NAME, v8, v10, v11);
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X = 29.5;
}


void __fastcall FriendshipUpItemUseItem___ctor(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipUpItemUseItem__Awake(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x19

  if ( (byte_49B68FE & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_10039/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, v3);
    sub_1B4CF90(&StringLiteral_10037/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, v4);
    byte_49B68FE = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10037/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel
    || (UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, v6, 0LL),
        friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10039/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL),
        !friendshipUpItemUseFixHaveLabel) )
  {
    sub_1B4D1EC(v6, v7);
  }
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemUseItem__ChangeButtonState(
        FriendshipUpItemUseItem_o *this,
        bool isOn,
        const MethodInfo *method)
{
  FriendshipUpItemUseItem_c *v5; // x0
  UISprite_o *friendshipUpItemUseSprite; // x20
  __int64 v7; // x9

  if ( (byte_49B6902 & 1) == 0 )
  {
    sub_1B4CF90(&FriendshipUpItemUseItem_TypeInfo, isOn);
    byte_49B6902 = 1;
  }
  v5 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( !friendshipUpItemUseSprite )
    sub_1B4D1EC(v5, isOn);
  v7 = 16LL;
  if ( isOn )
    v7 = 8LL;
  UISprite__set_spriteName(
    friendshipUpItemUseSprite,
    *(System_String_o **)((char *)&FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM + v7),
    0LL);
}


void __fastcall FriendshipUpItemUseItem__OnClickSelectItem(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  FriendshipUpItemUseItem_o *v2; // x19
  struct System_Action_o *onClickButtonCallback; // x8
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  UnityEngine_Object_o *useAlertObj; // x20
  struct FriendshipUpItemInfo_o *v6; // x8
  bool v7; // w20
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_49B6907 & 1) == 0 )
  {
    this = (FriendshipUpItemUseItem_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B6907 = 1;
  }
  onClickButtonCallback = v2->fields.onClickButtonCallback;
  if ( onClickButtonCallback )
    this = (FriendshipUpItemUseItem_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickButtonCallback->fields.m_target)(
                                          onClickButtonCallback->fields.original_method_info,
                                          *(_QWORD *)&onClickButtonCallback->fields.extra_arg);
  friendshipUpItemInfo = v2->fields.friendshipUpItemInfo;
  if ( !friendshipUpItemInfo )
    goto LABEL_18;
  if ( friendshipUpItemInfo->fields._MaxNum_k__BackingField >= 1 )
  {
    useAlertObj = (UnityEngine_Object_o *)v2->fields.useAlertObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FriendshipUpItemUseItem_o *)UnityEngine_Object__op_Equality(useAlertObj, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v6 = v2->fields.friendshipUpItemInfo;
      if ( v6 )
      {
        v7 = v6->fields._MaxNum_k__BackingField == v6->fields._Num_k__BackingField
          && !v6->fields._UseFlag_k__BackingField;
        this = (FriendshipUpItemUseItem_o *)v2->fields.useAlertObj;
        if ( this )
        {
          this = (FriendshipUpItemUseItem_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7, 0LL);
            FriendshipUpItemUseItem__SetPosNumLabel(v2, v7, v8);
            return;
          }
        }
      }
LABEL_18:
      sub_1B4D1EC(this, method);
    }
  }
}


void __fastcall FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_49B6900 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12508/*"SetLabelUpdate"*/, method);
    byte_49B6900 = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_68789172(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12508/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_68789036(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12508/*"SetLabelUpdate"*/,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemUseItem__SetButtonEnabled(
        FriendshipUpItemUseItem_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUserButton; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_49B6905 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isEnabled);
    byte_49B6905 = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0LL, 0LL) )
  {
    v7 = this->fields.friendshipUpItemUserButton;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
    UICommonButton__SetColliderEnable(v7, isEnabled, 1, 0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetInit(
        FriendshipUpItemUseItem_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        bool isInterruption,
        System_Action_o *buttonCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct FriendshipUpItemInfo_o **p_friendshipUpItemInfo; // x21
  char v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  bool UseFlag_k__BackingField; // w1
  UILabel_o *friendshipUpStringLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *explanationLabel; // x22
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  UnityEngine_Object_o *useAlertObj; // x22
  const MethodInfo *v30; // x2
  struct FriendshipUpItemInfo_o *v31; // x8
  int MaxNum_k__BackingField; // w9
  bool v33; // w22
  UISprite_o *useAlertSprite; // x23
  UILabel_o *useAlertLabel; // x23
  int64_t EndedAt_k__BackingField; // x23
  BalanceConfig_c *v37; // x0
  int64_t NoneExpireTime; // x24
  const MethodInfo *v39; // x1
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  const MethodInfo *v42; // x4

  if ( (byte_49B68FF & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, itemInfo);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v9);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v10);
    sub_1B4CF90(&NetworkManager_TypeInfo, v11);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_13144/*"TIME_REST_USER_ITEM"*/, v13);
    sub_1B4CF90(&StringLiteral_12508/*"SetLabelUpdate"*/, v14);
    sub_1B4CF90(&StringLiteral_10696/*"QUEST_USE_ITEM_MAX_NOT_USE_ALERT"*/, v15);
    sub_1B4CF90(&StringLiteral_19849/*"icon_exclamation_mark"*/, v16);
    byte_49B68FF = 1;
  }
  this->fields.friendshipUpItemInfo = itemInfo;
  p_friendshipUpItemInfo = &this->fields.friendshipUpItemInfo;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.friendshipUpItemInfo,
    (int32_t)itemInfo,
    isInterruption,
    (const MethodInfo *)buttonCallback);
  this->fields.onClickButtonCallback = buttonCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onClickButtonCallback, (int32_t)buttonCallback, v18, v19);
  FriendshipUpItemUseItem__SetItemIconSprite(this, v20);
  FriendshipUpItemUseItem__SetNumLabel(this, v21);
  if ( this->fields.friendshipUpItemInfo )
    UseFlag_k__BackingField = this->fields.friendshipUpItemInfo->fields._UseFlag_k__BackingField;
  else
    UseFlag_k__BackingField = 0;
  FriendshipUpItemUseItem__ChangeButtonState(this, UseFlag_k__BackingField, v22);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_13144/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_50;
  UILabel__set_text(friendshipUpStringLabel, gameObject, 0LL);
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (System_String_o *)UnityEngine_Object__op_Inequality(explanationLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
    if ( !friendshipUpItemInfo )
      goto LABEL_50;
    gameObject = (System_String_o *)this->fields.explanationLabel;
    if ( !gameObject )
      goto LABEL_50;
    UILabel__set_text((UILabel_o *)gameObject, friendshipUpItemInfo->fields._Explanation_k__BackingField, 0LL);
  }
  useAlertObj = (UnityEngine_Object_o *)this->fields.useAlertObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (System_String_o *)UnityEngine_Object__op_Inequality(useAlertObj, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v31 = *p_friendshipUpItemInfo;
    if ( !*p_friendshipUpItemInfo )
      goto LABEL_50;
    MaxNum_k__BackingField = v31->fields._MaxNum_k__BackingField;
    v33 = MaxNum_k__BackingField >= 1
       && MaxNum_k__BackingField == v31->fields._Num_k__BackingField
       && !v31->fields._UseFlag_k__BackingField
       && !isInterruption;
    gameObject = (System_String_o *)this->fields.useAlertObj;
    if ( !gameObject )
      goto LABEL_50;
    gameObject = (System_String_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v33, 0LL);
    useAlertSprite = this->fields.useAlertSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(useAlertSprite, (System_String_o *)StringLiteral_19849/*"icon_exclamation_mark"*/, 0LL);
    useAlertLabel = this->fields.useAlertLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10696/*"QUEST_USE_ITEM_MAX_NOT_USE_ALERT"*/, 0LL);
    if ( !useAlertLabel )
      goto LABEL_50;
    UILabel__set_text(useAlertLabel, gameObject, 0LL);
  }
  else
  {
    v33 = 0;
  }
  if ( !*p_friendshipUpItemInfo )
    goto LABEL_50;
  EndedAt_k__BackingField = (*p_friendshipUpItemInfo)->fields._EndedAt_k__BackingField;
  v37 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v37->static_fields->NoneExpireTime;
  FriendshipUpItemUseItem__SetPosNumLabel(this, v33 || EndedAt_k__BackingField < NoneExpireTime, v30);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v39);
  gameObject = (System_String_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !gameObject )
    goto LABEL_50;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_34069556(v40, -9.0, 10.5, 0LL);
  gameObject = (System_String_o *)this->fields.friendshipUpItemUseFixHaveLabel;
  if ( !gameObject )
    goto LABEL_50;
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalScale_34071736(v41, 1.0, 1.0, 0LL);
  if ( isInterruption )
  {
    if ( *p_friendshipUpItemInfo )
    {
      FriendshipUpItemUseItem__SetWaveBattleRestart(
        this,
        (*p_friendshipUpItemInfo)->fields._InterruptionUseFlag_k__BackingField,
        (*p_friendshipUpItemInfo)->fields._IsValid_k__BackingField,
        EndedAt_k__BackingField < NoneExpireTime,
        v42);
      goto LABEL_43;
    }
LABEL_50:
    sub_1B4D1EC(gameObject, v26);
  }
  gameObject = (System_String_o *)this->fields.friendshipUpItemEnableTimeObj;
  if ( !gameObject )
    goto LABEL_50;
  gameObject = (System_String_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)gameObject,
    EndedAt_k__BackingField < NoneExpireTime,
    0LL);
LABEL_43:
  if ( EndedAt_k__BackingField < NoneExpireTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( EndedAt_k__BackingField - NetworkManager__getTime(0LL) >= 0 )
    {
      UnityEngine_MonoBehaviour__CancelInvoke_68789036(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12508/*"SetLabelUpdate"*/,
        0LL);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12508/*"SetLabelUpdate"*/,
        1.0,
        1.0,
        0LL);
    }
  }
}


void __fastcall FriendshipUpItemUseItem__SetItemIconSprite(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x9
  System_String_o *v5; // x20
  UISprite_o *v6; // x19
  UISprite_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UISprite_o *friendshipUpItemIconSprite; // x21
  System_String_o *v10; // x1

  if ( (byte_49B6903 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v3);
    byte_49B6903 = 1;
  }
  friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
  if ( friendshipUpItemInfo )
    friendshipUpItemInfo = (struct FriendshipUpItemInfo_o *)friendshipUpItemInfo->fields._SpriteName_k__BackingField;
  if ( friendshipUpItemInfo )
    v5 = (System_String_o *)friendshipUpItemInfo;
  else
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__IsExistEventAtlas(v5, 0LL) )
  {
    IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(v5, 0LL);
    friendshipUpItemIconSprite = this->fields.friendshipUpItemIconSprite;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( friendshipUpItemIconSprite )
      {
        UISprite__set_atlas(this->fields.friendshipUpItemIconSprite, 0LL, 0LL);
        IsNullOrEmpty = this->fields.friendshipUpItemIconSprite;
        if ( IsNullOrEmpty )
        {
          v10 = 0LL;
LABEL_22:
          UISprite__set_spriteName(IsNullOrEmpty, v10, 0LL);
          return;
        }
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(friendshipUpItemIconSprite, 0LL);
      IsNullOrEmpty = this->fields.friendshipUpItemIconSprite;
      if ( IsNullOrEmpty )
      {
        v10 = v5;
        goto LABEL_22;
      }
    }
    sub_1B4D1EC(IsNullOrEmpty, v8);
  }
  v6 = this->fields.friendshipUpItemIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(v6, v5, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *friendshipUpEndedLabel; // x0
  UnityEngine_Object_o *trueTypeFont; // x20
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  int64_t EndedAt_k__BackingField; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v12; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v14; // x3
  struct CondensedScaleLabel_o **p_friendshipUpEndedCondensedScaleLabel; // x20
  UnityEngine_Object_o *friendshipUpEndedCondensedScaleLabel; // x21
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x21
  int mWidth; // w20
  float v22; // s0
  struct UILabel_o *friendshipUpStringLabel; // x8
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x19
  FriendshipUpItemUseItem_c *v25; // x0
  float v26; // s8

  if ( (byte_49B6901 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, method);
    sub_1B4CF90(&FriendshipUpItemUseItem_TypeInfo, v3);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v4);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    byte_49B6901 = 1;
  }
  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont(friendshipUpEndedLabel, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  friendshipUpEndedLabel = (UILabel_o *)UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL);
  if ( ((unsigned __int8)friendshipUpEndedLabel & 1) != 0 )
  {
    this->fields.delayLabelUpdate = 1;
    return;
  }
  friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
  if ( !friendshipUpItemInfo )
    goto LABEL_31;
  EndedAt_k__BackingField = friendshipUpItemInfo->fields._EndedAt_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(EndedAt_k__BackingField, -1LL, 0LL);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v12);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (FriendshipUpItemUseItem_o *)NetworkManager__getTime(0LL);
  FriendshipUpItemUseItem__SetRemainTime(
    Time,
    EndedAt_k__BackingField - (_QWORD)Time,
    this->fields.friendshipUpEndedLabel,
    v14);
  p_friendshipUpEndedCondensedScaleLabel = &this->fields.friendshipUpEndedCondensedScaleLabel;
  friendshipUpEndedCondensedScaleLabel = (UnityEngine_Object_o *)this->fields.friendshipUpEndedCondensedScaleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(friendshipUpEndedCondensedScaleLabel, 0LL, 0LL) )
  {
    friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
    if ( !friendshipUpEndedLabel )
      goto LABEL_31;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)friendshipUpEndedLabel,
                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    *p_friendshipUpEndedCondensedScaleLabel = (struct CondensedScaleLabel_o *)Component_object;
    sub_1B4CF34(
      (CGThumbnailListItem_o *)&this->fields.friendshipUpEndedCondensedScaleLabel,
      (int32_t)Component_object,
      v18,
      v19);
  }
  v20 = (UnityEngine_Object_o *)*p_friendshipUpEndedCondensedScaleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    friendshipUpEndedLabel = (UILabel_o *)*p_friendshipUpEndedCondensedScaleLabel;
    if ( *p_friendshipUpEndedCondensedScaleLabel )
    {
      CondensedScaleLabel__Initialize((CondensedScaleLabel_o *)friendshipUpEndedLabel, 0LL);
      friendshipUpEndedLabel = (UILabel_o *)*p_friendshipUpEndedCondensedScaleLabel;
      if ( *p_friendshipUpEndedCondensedScaleLabel )
      {
        CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)friendshipUpEndedLabel, 0LL);
        goto LABEL_24;
      }
    }
LABEL_31:
    sub_1B4D1EC(friendshipUpEndedLabel, method);
  }
LABEL_24:
  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  mWidth = friendshipUpEndedLabel->fields.mWidth;
  friendshipUpEndedLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)friendshipUpEndedLabel,
                                          0LL);
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  friendshipUpEndedLabel = (UILabel_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)friendshipUpEndedLabel,
                                          0LL);
  if ( !friendshipUpEndedLabel )
    goto LABEL_31;
  LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localScale(
                                 (UnityEngine_Transform_o *)friendshipUpEndedLabel,
                                 0LL);
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
  GameObjectExtensions__SetLocalPosition_34069556(
    friendshipUpItemEnableTimeObj,
    v25->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v26,
    -21.5,
    0LL);
}


void __fastcall FriendshipUpItemUseItem__SetNumLabel(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  int32_t Num_k__BackingField; // w20
  FriendshipUpItemUseItem_c *v11; // x0
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v13; // w0
  struct FriendshipUpItemInfo_o *v14; // x8
  int v15; // w20
  int MaxNum_k__BackingField; // w22
  System_String_o **v17; // x8
  System_String_o *v18; // x21
  System_String_o *v19; // x21
  UILabel_o *friendshipUpItemUseNumLabel; // x19
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x1
  int v31; // [xsp+8h] [xbp-38h] BYREF
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49B6904 & 1) == 0 )
  {
    sub_1B4CF90(&FriendshipUpItemUseItem_TypeInfo, method);
    sub_1B4CF90(&int_TypeInfo, v3);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v4);
    sub_1B4CF90(&System_Math_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_10041/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, v6);
    sub_1B4CF90(&StringLiteral_10042/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX"*/, v7);
    sub_1B4CF90(&StringLiteral_10043/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX_WHEN_MAX"*/, v8);
    byte_49B6904 = 1;
  }
  friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
  if ( friendshipUpItemInfo )
    Num_k__BackingField = friendshipUpItemInfo->fields._Num_k__BackingField;
  else
    Num_k__BackingField = 0;
  v11 = FriendshipUpItemUseItem_TypeInfo;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v11 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v11->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = System_Math__Min_62622116(Num_k__BackingField, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  v14 = this->fields.friendshipUpItemInfo;
  v15 = v13;
  if ( v14 )
  {
    MaxNum_k__BackingField = v14->fields._MaxNum_k__BackingField;
    if ( MaxNum_k__BackingField < 1 )
    {
      v18 = (System_String_o *)StringLiteral_10041/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/;
    }
    else
    {
      v17 = (System_String_o **)&StringLiteral_10042/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX"*/;
      if ( v13 >= MaxNum_k__BackingField )
        v17 = (System_String_o **)&StringLiteral_10043/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX_WHEN_MAX"*/;
      v18 = *v17;
    }
  }
  else
  {
    v18 = (System_String_o *)StringLiteral_10041/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/;
    MaxNum_k__BackingField = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get(v18, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v32 = v15;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v21, v22, v23);
  v31 = MaxNum_k__BackingField;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v25, v26, v27);
  v29 = System_String__Format_61134760(v19, v24, v28, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    sub_1B4D1EC(v29, v30);
  UILabel__set_text(friendshipUpItemUseNumLabel, v29, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_1B4D1EC(0LL, time);
  UILabel__set_text(friendshipUpEndedLabel, time, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemUseItem__SetPosNumLabel(
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
    || ((gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseFixHaveLabel, 0LL), !isValidUnderLabel)
      ? (v7 = -8.5, v8 = -8.5)
      : (v7 = -5.5, v8 = -5.5),
        GameObjectExtensions__SetLocalPosition_34069556(gameObject, -36.5, v7, 0LL),
        (friendshipUpItemUseFixHaveLabel = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel) == 0LL) )
  {
    sub_1B4D1EC(friendshipUpItemUseFixHaveLabel, isValidUnderLabel);
  }
  v9 = UnityEngine_Component__get_gameObject(friendshipUpItemUseFixHaveLabel, 0LL);
  GameObjectExtensions__SetLocalPosition_34069556(v9, 11.0, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemUseItem__SetRemainTime(
        FriendshipUpItemUseItem_o *this,
        int64_t remainTime,
        UILabel_o *label,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s3
  float v7; // s2

  v4 = 1.0;
  v5 = 0.0;
  if ( (int)remainTime / 86400 >= 1 )
    v5 = 1.0;
  if ( !label )
    sub_1B4D1EC(this, remainTime);
  v6 = 1.0;
  if ( (int)remainTime / 86400 < 1 )
    v4 = 0.90196;
  v7 = v5;
  UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v4, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetUseButtonSprite(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  bool UseFlag_k__BackingField; // w1

  friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
  if ( friendshipUpItemInfo )
    UseFlag_k__BackingField = friendshipUpItemInfo->fields._UseFlag_k__BackingField;
  else
    UseFlag_k__BackingField = 0;
  FriendshipUpItemUseItem__ChangeButtonState(this, UseFlag_k__BackingField, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemUseItem__SetWaveBattleRestart(
        FriendshipUpItemUseItem_o *this,
        bool isUse,
        bool isValid,
        bool showTimeLimit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *friendshipUpItemUseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s0
  UILabel_o *v20; // x21
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_49B6906 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, isUse);
    sub_1B4CF90(&StringLiteral_10047/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/, v9);
    sub_1B4CF90(&StringLiteral_10040/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/, v10);
    byte_49B6906 = 1;
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0LL);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUserButton;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UICommonButton__SetColliderEnable((UICommonButton_o *)friendshipUpItemUseSprite, 0, 1, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0LL);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, isValid, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0LL);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, isValid, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemEnableTimeObj;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)friendshipUpItemUseSprite,
                                                           0LL);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)friendshipUpItemUseSprite,
    isValid && showTimeLimit,
    0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 13, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPosition_34069556(gameObject, -44.5, 14.0, 0LL);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v13 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v13, 4.0, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v14 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v14, -10.5, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v15 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v15, 42.5, 0LL);
    if ( !isUse )
    {
      friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10047/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/,
                                                               0LL);
      if ( friendshipUpItemUseFixAutoUseLabel )
      {
        UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)friendshipUpItemUseSprite, 0LL);
        friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
        if ( friendshipUpItemUseSprite )
        {
          v17 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
          GameObjectExtensions__SetLocalScaleX(v17, 0.85, 0LL);
          friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
          if ( friendshipUpItemUseSprite )
          {
            v18 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
            v19 = 10.5;
LABEL_33:
            GameObjectExtensions__SetLocalPositionX(v18, v19, 0LL);
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
  v20 = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10040/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/,
                                                           0LL);
  if ( !v20 )
    goto LABEL_41;
  UILabel__set_text(v20, (System_String_o *)friendshipUpItemUseSprite, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v21 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalScaleX(v21, 1.0, 0LL);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( friendshipUpItemUseSprite )
    {
      v18 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
      v19 = -4.5;
      goto LABEL_33;
    }
LABEL_41:
    sub_1B4D1EC(friendshipUpItemUseSprite, isUse);
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v22 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v22, 2.0, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v23 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionX(v23, -26.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 15, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v24 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionX(v24, 16.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v25 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v25, -0.5, 0LL);
}


void __fastcall FriendshipUpItemUseItem__Update(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8

  if ( this->fields.delayLabelUpdate )
  {
    friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
    this->fields.delayLabelUpdate = 0;
    if ( friendshipUpItemInfo )
      FriendshipUpItemUseItem__SetLabelUpdate(this, method);
  }
}


void __fastcall FriendshipUpItemUseItem__UpdateButtonAlpha(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UICommonButtonColor_o *friendshipUpItemUserButton; // x0

  friendshipUpItemUserButton = (UICommonButtonColor_o *)this->fields.friendshipUpItemUserButton;
  if ( !friendshipUpItemUserButton )
    sub_1B4D1EC(0LL, method);
  UICommonButtonColor__UpdateColor(friendshipUpItemUserButton, 0, 0LL);
}