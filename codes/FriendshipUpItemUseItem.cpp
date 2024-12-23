void __fastcall FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  struct FriendshipUpItemUseItem_StaticFields *v5; // x0

  if ( (byte_4B6273B & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemUseItem_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_17719/*"btn_boostitem_off"*/, v2);
    sub_1BE4ACC(&StringLiteral_17720/*"btn_boostitem_on"*/, v3);
    byte_4B6273B = 1;
  }
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17720/*"btn_boostitem_on"*/;
  sub_1BE4A70(&static_fields->BUTTON_ON_FILE_NAME);
  v5 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v5->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17719/*"btn_boostitem_off"*/;
  sub_1BE4A70(&v5->BUTTON_OFF_FILE_NAME);
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X = 29.5;
}


void __fastcall FriendshipUpItemUseItem___ctor(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendshipUpItemUseItem__Awake(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  ;
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

  if ( (byte_4B62735 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemUseItem_TypeInfo, isOn);
    byte_4B62735 = 1;
  }
  v5 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( !friendshipUpItemUseSprite )
    sub_1BE4D28(v5, isOn);
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
  if ( (byte_4B62733 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_12898/*"SetLabelUpdate"*/, method);
    byte_4B62733 = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_70436716(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12898/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70436580(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12898/*"SetLabelUpdate"*/,
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

  if ( (byte_4B62739 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, isEnabled);
    byte_4B62739 = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0LL, 0LL) )
  {
    v7 = this->fields.friendshipUpItemUserButton;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
    UICommonButton__SetEnable(v7, isEnabled, 0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetInit(
        FriendshipUpItemUseItem_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        System_Action_o *buttonCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct FriendshipUpItemInfo_o **p_friendshipUpItemInfo; // x20
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x21
  System_String_o *v14; // x0
  const MethodInfo *v15; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x21
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UILabel_o *friendshipUpStringLabel; // x21
  int64_t EndedAt_k__BackingField; // x20

  if ( (byte_4B62732 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, itemInfo);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_13550/*"TIME_REST_USER_ITEM"*/, v8);
    sub_1BE4ACC(&StringLiteral_10425/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, v9);
    sub_1BE4ACC(&StringLiteral_10423/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, v10);
    sub_1BE4ACC(&StringLiteral_12898/*"SetLabelUpdate"*/, v11);
    byte_4B62732 = 1;
  }
  this->fields.friendshipUpItemInfo = itemInfo;
  p_friendshipUpItemInfo = &this->fields.friendshipUpItemInfo;
  sub_1BE4A70(&this->fields.friendshipUpItemInfo);
  this->fields.onClickButtonCallback = buttonCallback;
  sub_1BE4A70(&this->fields.onClickButtonCallback);
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10423/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel )
    goto LABEL_14;
  UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, v14, 0LL);
  friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10425/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL);
  if ( !friendshipUpItemUseFixHaveLabel
    || (UILabel__set_text(friendshipUpItemUseFixHaveLabel, v14, 0LL),
        FriendshipUpItemUseItem__SetItemIconSprite(this, v17),
        FriendshipUpItemUseItem__SetNumLabel(this, v18),
        FriendshipUpItemUseItem__SetUseButtonSprite(this, v19),
        friendshipUpStringLabel = this->fields.friendshipUpStringLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13550/*"TIME_REST_USER_ITEM"*/, 0LL),
        !friendshipUpStringLabel)
    || (UILabel__set_text(friendshipUpStringLabel, v14, 0LL), !*p_friendshipUpItemInfo) )
  {
LABEL_14:
    sub_1BE4D28(v14, v15);
  }
  EndedAt_k__BackingField = (*p_friendshipUpItemInfo)->fields._EndedAt_k__BackingField;
  FriendshipUpItemUseItem__SetLabelUpdate(this, v15);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( EndedAt_k__BackingField - NetworkManager__getTime(0LL) >= 1 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70436580(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12898/*"SetLabelUpdate"*/,
      0LL);
    UnityEngine_MonoBehaviour__InvokeRepeating(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12898/*"SetLabelUpdate"*/,
      1.0,
      1.0,
      0LL);
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

  if ( (byte_4B62736 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B62736 = 1;
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
    sub_1BE4D28(IsNullOrEmpty, v8);
  }
  v6 = this->fields.friendshipUpItemIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(v6, v5, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  FriendshipUpItemUseItem_o *v2; // x19
  __int64 v3; // x1
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  int64_t EndedAt_k__BackingField; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v7; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4B62734 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    this = (FriendshipUpItemUseItem_o *)sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    byte_4B62734 = 1;
  }
  friendshipUpItemInfo = v2->fields.friendshipUpItemInfo;
  if ( !friendshipUpItemInfo )
    sub_1BE4D28(this, method);
  EndedAt_k__BackingField = friendshipUpItemInfo->fields._EndedAt_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(EndedAt_k__BackingField, -1LL, 0LL);
  FriendshipUpItemUseItem__SetParamsToBehindText(v2, RestTime2, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (FriendshipUpItemUseItem_o *)NetworkManager__getTime(0LL);
  FriendshipUpItemUseItem__SetRemainTime(
    Time,
    EndedAt_k__BackingField - (_QWORD)Time,
    v2->fields.friendshipUpEndedLabel,
    v9);
}


void __fastcall FriendshipUpItemUseItem__SetNumLabel(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  int32_t Num_k__BackingField; // w20
  FriendshipUpItemUseItem_c *v9; // x0
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v11; // w0
  UILabel_o *friendshipUpItemUseNumLabel; // x19
  int v13; // w20
  System_String_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B62737 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemUseItem_TypeInfo, method);
    sub_1BE4ACC(&int_TypeInfo, v3);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v4);
    sub_1BE4ACC(&System_Math_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_10427/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, v6);
    byte_4B62737 = 1;
  }
  friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
  if ( friendshipUpItemInfo )
    Num_k__BackingField = friendshipUpItemInfo->fields._Num_k__BackingField;
  else
    Num_k__BackingField = 0;
  v9 = FriendshipUpItemUseItem_TypeInfo;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v9 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v9->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Min_63518280(Num_k__BackingField, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v13 = v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, 0LL);
  v21 = v13;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v15, v16, v17);
  v19 = System_String__Format(v14, v18, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    sub_1BE4D28(v19, v20);
  UILabel__set_text(friendshipUpItemUseNumLabel, v19, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_1BE4D28(0LL, time);
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
    sub_1BE4D28(this, remainTime);
  v6 = 1.0;
  if ( (int)remainTime / 86400 < 1 )
    v4 = 0.90196;
  v7 = v5;
  UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v4, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetUseButtonSprite(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct FriendshipUpItemInfo_o *friendshipUpItemInfo; // x8
  System_String_o *SpriteName_k__BackingField; // x20
  bool IsExistEventAtlas; // w0
  FriendshipUpItemInfo_c *v8; // x8
  bool v9; // w20
  System_String_o **p_SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE; // x8
  UISprite_o *Int; // x0
  struct FriendshipUpItemInfo_o *v12; // x8
  struct UISprite_o *friendshipUpItemUseSprite; // x19
  int32_t v14; // w0
  UISprite_o *v15; // x21
  int v16; // w20
  __int64 v17; // x9

  if ( (byte_4B62738 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&FriendshipUpItemInfo_TypeInfo, v3);
    sub_1BE4ACC(&FriendshipUpItemUseItem_TypeInfo, v4);
    byte_4B62738 = 1;
  }
  friendshipUpItemInfo = this->fields.friendshipUpItemInfo;
  if ( friendshipUpItemInfo )
  {
    SpriteName_k__BackingField = friendshipUpItemInfo->fields._SpriteName_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    IsExistEventAtlas = AtlasManager__IsExistEventAtlas(SpriteName_k__BackingField, 0LL);
    v8 = FriendshipUpItemInfo_TypeInfo;
    v9 = IsExistEventAtlas;
    if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
      v8 = FriendshipUpItemInfo_TypeInfo;
    }
    p_SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = &v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE;
    if ( v9 )
    {
      Int = (UISprite_o *)UnityEngine_PlayerPrefs__GetInt(p_SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE[1], 0, 0LL);
      v12 = this->fields.friendshipUpItemInfo;
      if ( !v12 )
        goto LABEL_25;
      friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
      if ( (_DWORD)Int != v12->fields._Id_k__BackingField )
        goto LABEL_15;
LABEL_14:
      v15 = 0LL;
      v16 = 1;
      goto LABEL_16;
    }
    v14 = UnityEngine_PlayerPrefs__GetInt(*p_SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
    friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
    if ( v14 == 1 )
      goto LABEL_14;
  }
  else
  {
    friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  }
LABEL_15:
  v16 = 0;
  v15 = friendshipUpItemUseSprite;
  friendshipUpItemUseSprite = 0LL;
LABEL_16:
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( v16 )
    Int = friendshipUpItemUseSprite;
  else
    Int = v15;
  if ( !Int )
LABEL_25:
    sub_1BE4D28(Int, method);
  v17 = 16LL;
  if ( v16 )
    v17 = 8LL;
  UISprite__set_spriteName(
    Int,
    *(System_String_o **)((char *)&FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM + v17),
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemUseItem__SetWaveBattleRestart(
        FriendshipUpItemUseItem_o *this,
        bool isUse,
        bool isValid,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *friendshipUpItemUseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  float v16; // s0
  UILabel_o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0

  if ( (byte_4B6273A & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, isUse);
    sub_1BE4ACC(&StringLiteral_10431/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/, v7);
    sub_1BE4ACC(&StringLiteral_10426/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/, v8);
    byte_4B6273A = 1;
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0LL);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUserButton;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  UICommonButton__SetColliderEnable((UICommonButton_o *)friendshipUpItemUseSprite, 0, 1, 0LL);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_39;
    gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 4.0, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_39;
    v11 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v11, -10.5, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_39;
    v12 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v12, 42.5, 0LL);
    if ( !isUse )
    {
      friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/,
                                                               0LL);
      if ( friendshipUpItemUseFixAutoUseLabel )
      {
        UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)friendshipUpItemUseSprite, 0LL);
        friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
        if ( friendshipUpItemUseSprite )
        {
          v14 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
          GameObjectExtensions__SetLocalScaleX(v14, 0.85, 0LL);
          friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
          if ( friendshipUpItemUseSprite )
          {
            v15 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
            v16 = 10.5;
LABEL_25:
            GameObjectExtensions__SetLocalPositionX(v15, v16, 0LL);
            return;
          }
        }
      }
      goto LABEL_39;
    }
  }
  else if ( !isUse )
  {
    return;
  }
  v17 = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10426/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/,
                                                           0LL);
  if ( !v17 )
    goto LABEL_39;
  UILabel__set_text(v17, (System_String_o *)friendshipUpItemUseSprite, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v18 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalScaleX(v18, 1.0, 0LL);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( friendshipUpItemUseSprite )
    {
      v15 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
      v16 = -4.5;
      goto LABEL_25;
    }
LABEL_39:
    sub_1BE4D28(friendshipUpItemUseSprite, isUse);
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v19 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v19, 2.0, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v20 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionX(v20, -26.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 15, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v21 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionX(v21, 16.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v22 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v22, -0.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0LL);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           friendshipUpItemUseSprite,
                                                           0LL);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemEnableTimeObj;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)friendshipUpItemUseSprite,
                                                           0LL);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0LL);
}


void __fastcall FriendshipUpItemUseItem__Start(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *friendshipUpEndedLabel; // x0
  int klass; // w20
  unsigned int localScale; // s0
  struct UILabel_o *friendshipUpStringLabel; // x8
  int mWidth; // w21
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x19
  float v9; // s8
  FriendshipUpItemUseItem_c *v10; // x0

  if ( (byte_4B62731 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemUseItem_TypeInfo, method);
    byte_4B62731 = 1;
  }
  friendshipUpEndedLabel = (UnityEngine_Component_o *)this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel
    || (klass = (int)friendshipUpEndedLabel[7].klass,
        (friendshipUpEndedLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               friendshipUpEndedLabel,
                                                               0LL)) == 0LL)
    || (friendshipUpEndedLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)friendshipUpEndedLabel,
                                                              0LL)) == 0LL
    || (localScale = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)friendshipUpEndedLabel,
                                     0LL),
        (friendshipUpStringLabel = this->fields.friendshipUpStringLabel) == 0LL) )
  {
    sub_1BE4D28(friendshipUpEndedLabel, method);
  }
  mWidth = friendshipUpStringLabel->fields.mWidth;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v9 = *(float *)&localScale;
  v10 = FriendshipUpItemUseItem_TypeInfo;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v10 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    friendshipUpItemEnableTimeObj,
    v10->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X
  + (float)((float)((float)(v9 * (float)klass) + (float)mWidth) * -0.5),
    0LL);
}