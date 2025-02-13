void __fastcall FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  __int64 v2; // x1
  __int64 v3; // x1
  struct FriendshipUpItemUseItem_StaticFields *v4; // x0

  if ( (byte_4BD8071 & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemUseItem_TypeInfo);
    sub_1C21E38(&StringLiteral_17788/*"btn_boostitem_off"*/);
    sub_1C21E38(&StringLiteral_17789/*"btn_boostitem_on"*/);
    byte_4BD8071 = 1;
  }
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  v2 = StringLiteral_17789/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17789/*"btn_boostitem_on"*/;
  sub_1C21DDC(&static_fields->BUTTON_ON_FILE_NAME, v2);
  v3 = StringLiteral_17788/*"btn_boostitem_off"*/;
  v4 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v4->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17788/*"btn_boostitem_off"*/;
  sub_1C21DDC(&v4->BUTTON_OFF_FILE_NAME, v3);
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X = 29.5;
}


void __fastcall FriendshipUpItemUseItem___ctor(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipUpItemUseItem__Awake(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x19

  if ( (byte_4BD8068 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10466/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/);
    sub_1C21E38(&StringLiteral_10464/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/);
    byte_4BD8068 = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10464/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel
    || (UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, v4, 0LL),
        friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10466/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL),
        !friendshipUpItemUseFixHaveLabel) )
  {
    sub_1C22094(v4, v5);
  }
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, v4, 0LL);
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

  if ( (byte_4BD806C & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemUseItem_TypeInfo);
    byte_4BD806C = 1;
  }
  v5 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( !friendshipUpItemUseSprite )
    sub_1C22094(v5, isOn);
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
  struct System_Action_o *onClickButtonCallback; // x8

  onClickButtonCallback = this->fields.onClickButtonCallback;
  if ( onClickButtonCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickButtonCallback->fields.m_target)(
      onClickButtonCallback->fields.original_method_info,
      *(_QWORD *)&onClickButtonCallback->fields.extra_arg);
}


void __fastcall FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_4BD806A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12952/*"SetLabelUpdate"*/);
    byte_4BD806A = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_70854328(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12952/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70854192(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12952/*"SetLabelUpdate"*/,
      0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetButtonEnabled(
        FriendshipUpItemUseItem_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUserButton; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4BD806F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD806F = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0LL, 0LL) )
  {
    v7 = this->fields.friendshipUpItemUserButton;
    if ( !v7 )
      sub_1C22094(0LL, v6);
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
  struct FriendshipUpItemInfo_o **p_friendshipUpItemInfo; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  bool UseFlag_k__BackingField; // w1
  UILabel_o *friendshipUpStringLabel; // x22
  System_String_o *friendshipUpItemUseNumLabel; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *explanationLabel; // x22
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  int64_t EndedAt_k__BackingField; // x22
  int64_t v20; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float v22; // s1
  float v23; // s8
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x4

  if ( (byte_4BD8069 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13606/*"TIME_REST_USER_ITEM"*/);
    sub_1C21E38(&StringLiteral_12952/*"SetLabelUpdate"*/);
    byte_4BD8069 = 1;
  }
  this->fields.friendshipUpItemInfo = itemInfo;
  p_friendshipUpItemInfo = &this->fields.friendshipUpItemInfo;
  sub_1C21DDC(&this->fields.friendshipUpItemInfo, itemInfo);
  this->fields.onClickButtonCallback = buttonCallback;
  sub_1C21DDC(&this->fields.onClickButtonCallback, buttonCallback);
  FriendshipUpItemUseItem__SetItemIconSprite(this, v10);
  FriendshipUpItemUseItem__SetNumLabel(this, v11);
  if ( this->fields.friendshipUpItemInfo )
    UseFlag_k__BackingField = this->fields.friendshipUpItemInfo->fields._UseFlag_k__BackingField;
  else
    UseFlag_k__BackingField = 0;
  FriendshipUpItemUseItem__ChangeButtonState(this, UseFlag_k__BackingField, v12);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipUpItemUseNumLabel = LocalizationManager__Get((System_String_o *)StringLiteral_13606/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_37;
  UILabel__set_text(friendshipUpStringLabel, friendshipUpItemUseNumLabel, 0LL);
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  friendshipUpItemUseNumLabel = (System_String_o *)UnityEngine_Object__op_Inequality(explanationLabel, 0LL, 0LL);
  if ( ((unsigned __int8)friendshipUpItemUseNumLabel & 1) != 0 )
  {
    friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
    if ( !friendshipUpItemInfo )
      goto LABEL_37;
    friendshipUpItemUseNumLabel = (System_String_o *)this->fields.explanationLabel;
    if ( !friendshipUpItemUseNumLabel )
      goto LABEL_37;
    UILabel__set_text(
      (UILabel_o *)friendshipUpItemUseNumLabel,
      friendshipUpItemInfo->fields._Explanation_k__BackingField,
      0LL);
  }
  if ( !*p_friendshipUpItemInfo )
    goto LABEL_37;
  EndedAt_k__BackingField = (*p_friendshipUpItemInfo)->fields._EndedAt_k__BackingField;
  friendshipUpItemUseNumLabel = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    friendshipUpItemUseNumLabel = (System_String_o *)BalanceConfig_TypeInfo;
  }
  if ( !this->fields.friendshipUpItemUseFixHaveLabel )
    goto LABEL_37;
  v20 = *(int *)(*(_QWORD *)&friendshipUpItemUseNumLabel[7].fields + 504LL);
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel,
                 0LL);
  if ( EndedAt_k__BackingField >= v20 )
  {
    v22 = -8.5;
    v23 = -8.5;
  }
  else
  {
    v22 = -5.5;
    v23 = -5.5;
  }
  GameObjectExtensions__SetLocalPosition_34797668(gameObject, -36.5, v22, 0LL);
  friendshipUpItemUseNumLabel = (System_String_o *)this->fields.friendshipUpItemUseNumLabel;
  if ( !friendshipUpItemUseNumLabel
    || (v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)friendshipUpItemUseNumLabel, 0LL),
        GameObjectExtensions__SetLocalPosition_34797668(v24, 11.0, v23, 0LL),
        FriendshipUpItemUseItem__SetLabelUpdate(this, v25),
        (friendshipUpItemUseNumLabel = (System_String_o *)this->fields.friendshipUpItemUseFixAutoUseLabel) == 0LL)
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)friendshipUpItemUseNumLabel, 0LL),
        GameObjectExtensions__SetLocalPosition_34797668(v26, -9.0, 10.5, 0LL),
        (friendshipUpItemUseNumLabel = (System_String_o *)this->fields.friendshipUpItemUseFixHaveLabel) == 0LL) )
  {
LABEL_37:
    sub_1C22094(friendshipUpItemUseNumLabel, v16);
  }
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)friendshipUpItemUseNumLabel, 0LL);
  GameObjectExtensions__SetLocalScale_34799848(v27, 1.0, 1.0, 0LL);
  if ( isInterruption )
  {
    if ( *p_friendshipUpItemInfo )
    {
      FriendshipUpItemUseItem__SetWaveBattleRestart(
        this,
        (*p_friendshipUpItemInfo)->fields._InterruptionUseFlag_k__BackingField,
        (*p_friendshipUpItemInfo)->fields._IsValid_k__BackingField,
        EndedAt_k__BackingField < v20,
        v28);
      goto LABEL_31;
    }
    goto LABEL_37;
  }
  friendshipUpItemUseNumLabel = (System_String_o *)this->fields.friendshipUpItemEnableTimeObj;
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_37;
  friendshipUpItemUseNumLabel = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)friendshipUpItemUseNumLabel,
                                                     0LL);
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)friendshipUpItemUseNumLabel,
    EndedAt_k__BackingField < v20,
    0LL);
LABEL_31:
  if ( EndedAt_k__BackingField < v20 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( EndedAt_k__BackingField - NetworkManager__getTime(0LL) >= 0 )
    {
      UnityEngine_MonoBehaviour__CancelInvoke_70854192(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12952/*"SetLabelUpdate"*/,
        0LL);
      UnityEngine_MonoBehaviour__InvokeRepeating(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12952/*"SetLabelUpdate"*/,
        1.0,
        1.0,
        0LL);
    }
  }
}


void __fastcall FriendshipUpItemUseItem__SetItemIconSprite(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x9
  System_String_o *v4; // x20
  UISprite_o *v5; // x19
  UISprite_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  UISprite_o *friendshipUpItemIconSprite; // x21
  System_String_o *v9; // x1

  if ( (byte_4BD806D & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD806D = 1;
  }
  friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
  if ( friendshipUpItemInfo )
    friendshipUpItemInfo = (struct FriendshipUpItemInfo_o *)friendshipUpItemInfo->fields._SpriteName_k__BackingField;
  if ( friendshipUpItemInfo )
    v4 = (System_String_o *)friendshipUpItemInfo;
  else
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__IsExistEventAtlas(v4, 0LL) )
  {
    IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(v4, 0LL);
    friendshipUpItemIconSprite = this->fields.friendshipUpItemIconSprite;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( friendshipUpItemIconSprite )
      {
        UISprite__set_atlas(this->fields.friendshipUpItemIconSprite, 0LL, 0LL);
        IsNullOrEmpty = this->fields.friendshipUpItemIconSprite;
        if ( IsNullOrEmpty )
        {
          v9 = 0LL;
LABEL_22:
          UISprite__set_spriteName(IsNullOrEmpty, v9, 0LL);
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
        v9 = v4;
        goto LABEL_22;
      }
    }
    sub_1C22094(IsNullOrEmpty, v7);
  }
  v5 = this->fields.friendshipUpItemIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(v5, v4, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0
  UnityEngine_Object_o *trueTypeFont; // x20
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  int64_t EndedAt_k__BackingField; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v8; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v10; // x3
  struct CondensedScaleLabel_o **p_friendshipUpEndedCondensedScaleLabel; // x20
  UnityEngine_Object_o *friendshipUpEndedCondensedScaleLabel; // x21
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *v14; // x21
  int mWidth; // w20
  float v16; // s0
  struct UILabel_o *friendshipUpStringLabel; // x8
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x19
  FriendshipUpItemUseItem_c *v19; // x0
  float v20; // s8

  if ( (byte_4BD806B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C21E38(&FriendshipUpItemUseItem_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD806B = 1;
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
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (FriendshipUpItemUseItem_o *)NetworkManager__getTime(0LL);
  FriendshipUpItemUseItem__SetRemainTime(
    Time,
    EndedAt_k__BackingField - (_QWORD)Time,
    this->fields.friendshipUpEndedLabel,
    v10);
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
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    *p_friendshipUpEndedCondensedScaleLabel = (struct CondensedScaleLabel_o *)Component_object;
    sub_1C21DDC(&this->fields.friendshipUpEndedCondensedScaleLabel, Component_object);
  }
  v14 = (UnityEngine_Object_o *)*p_friendshipUpEndedCondensedScaleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
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
    sub_1C22094(friendshipUpEndedLabel, method);
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
  LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_localScale(
                                 (UnityEngine_Transform_o *)friendshipUpEndedLabel,
                                 0LL);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( !friendshipUpStringLabel )
    goto LABEL_31;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v19 = FriendshipUpItemUseItem_TypeInfo;
  v20 = (float)((float)(v16 * (float)mWidth) + (float)friendshipUpStringLabel->fields.mWidth) * 0.5;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v19 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_34797668(
    friendshipUpItemEnableTimeObj,
    v19->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v20,
    -21.5,
    0LL);
}


void __fastcall FriendshipUpItemUseItem__SetNumLabel(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  int32_t Num_k__BackingField; // w20
  FriendshipUpItemUseItem_c *v5; // x0
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v7; // w0
  struct FriendshipUpItemInfo_o *v8; // x8
  int v9; // w20
  int MaxNum_k__BackingField; // w22
  System_String_o **v11; // x8
  System_String_o *v12; // x21
  System_String_o *v13; // x21
  UILabel_o *friendshipUpItemUseNumLabel; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  int v25; // [xsp+8h] [xbp-38h] BYREF
  int v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD806E & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemUseItem_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&StringLiteral_10468/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/);
    sub_1C21E38(&StringLiteral_10469/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX"*/);
    sub_1C21E38(&StringLiteral_10470/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX_WHEN_MAX"*/);
    byte_4BD806E = 1;
  }
  friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
  if ( friendshipUpItemInfo )
    Num_k__BackingField = friendshipUpItemInfo->fields._Num_k__BackingField;
  else
    Num_k__BackingField = 0;
  v5 = FriendshipUpItemUseItem_TypeInfo;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v5 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v5->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = System_Math__Min_63934948(Num_k__BackingField, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  v8 = this->fields.friendshipUpItemInfo;
  v9 = v7;
  if ( v8 )
  {
    MaxNum_k__BackingField = v8->fields._MaxNum_k__BackingField;
    if ( MaxNum_k__BackingField < 1 )
    {
      v12 = (System_String_o *)StringLiteral_10468/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/;
    }
    else
    {
      v11 = (System_String_o **)&StringLiteral_10469/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX"*/;
      if ( v7 >= MaxNum_k__BackingField )
        v11 = (System_String_o **)&StringLiteral_10470/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM_HAS_MAX_WHEN_MAX"*/;
      v12 = *v11;
    }
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_10468/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/;
    MaxNum_k__BackingField = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get(v12, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v26 = v9;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v15, v16, v17);
  v25 = MaxNum_k__BackingField;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v19, v20, v21);
  v23 = System_String__Format_63129848(v13, v18, v22, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    sub_1C22094(v23, v24);
  UILabel__set_text(friendshipUpItemUseNumLabel, v23, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_1C22094(0LL, time);
  UILabel__set_text(friendshipUpEndedLabel, time, 0LL);
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
    sub_1C22094(this, remainTime);
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

  if ( (byte_4BD8070 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10474/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/);
    sub_1C21E38(&StringLiteral_10467/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/);
    byte_4BD8070 = 1;
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
  GameObjectExtensions__SetLocalPosition_34797668(gameObject, -44.5, 14.0, 0LL);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v11 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v11, 4.0, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v12 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v12, -10.5, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v13 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v13, 42.5, 0LL);
    if ( !isUse )
    {
      friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10474/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/,
                                                               0LL);
      if ( friendshipUpItemUseFixAutoUseLabel )
      {
        UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)friendshipUpItemUseSprite, 0LL);
        friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
        if ( friendshipUpItemUseSprite )
        {
          v15 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
          GameObjectExtensions__SetLocalScaleX(v15, 0.85, 0LL);
          friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
          if ( friendshipUpItemUseSprite )
          {
            v16 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
            v17 = 10.5;
LABEL_33:
            GameObjectExtensions__SetLocalPositionX(v16, v17, 0LL);
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
                                                           (System_String_o *)StringLiteral_10467/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/,
                                                           0LL);
  if ( !v18 )
    goto LABEL_41;
  UILabel__set_text(v18, (System_String_o *)friendshipUpItemUseSprite, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v19 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalScaleX(v19, 1.0, 0LL);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( friendshipUpItemUseSprite )
    {
      v16 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
      v17 = -4.5;
      goto LABEL_33;
    }
LABEL_41:
    sub_1C22094(friendshipUpItemUseSprite, isUse);
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v20 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v20, 2.0, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v21 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionX(v21, -26.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 15, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v22 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionX(v22, 16.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_41;
  v23 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v23, -0.5, 0LL);
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
    sub_1C22094(0LL, method);
  UICommonButtonColor__UpdateColor(friendshipUpItemUserButton, 0, 0LL);
}