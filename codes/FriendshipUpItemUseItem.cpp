void __fastcall FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct FriendshipUpItemUseItem_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A56F0E & 1) == 0 )
  {
    sub_1B885B0(&FriendshipUpItemUseItem_TypeInfo);
    sub_1B885B0(&StringLiteral_17499/*"btn_boostitem_off"*/);
    sub_1B885B0(&StringLiteral_17500/*"btn_boostitem_on"*/);
    byte_4A56F0E = 1;
  }
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  v4 = StringLiteral_17500/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17500/*"btn_boostitem_on"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->BUTTON_ON_FILE_NAME, v4, v1, v2);
  v5 = StringLiteral_17499/*"btn_boostitem_off"*/;
  v6 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v6->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17499/*"btn_boostitem_off"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->BUTTON_OFF_FILE_NAME, v5, v7, v8);
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X = 29.5;
}


void __fastcall FriendshipUpItemUseItem___ctor(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
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

  if ( (byte_4A56F0B & 1) == 0 )
  {
    sub_1B885B0(&FriendshipUpItemUseItem_TypeInfo);
    byte_4A56F0B = 1;
  }
  v5 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( !friendshipUpItemUseSprite )
    sub_1B8880C(v5, isOn);
  v7 = 16LL;
  if ( isOn )
    v7 = 8LL;
  UISprite__set_spriteName(
    friendshipUpItemUseSprite,
    *(System_String_o **)((char *)&FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM + v7),
    0LL);
}


void __fastcall FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_4A56F09 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12703/*"SetLabelUpdate"*/);
    byte_4A56F09 = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_69444096(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12703/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_69443960(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12703/*"SetLabelUpdate"*/,
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

  if ( (byte_4A56F0C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56F0C = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0LL, 0LL) )
  {
    v7 = this->fields.friendshipUpItemUserButton;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UICommonButton__SetEnable(v7, isEnabled, 0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetInit(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  void *Instance; // x0
  __int64 v5; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x20
  int32_t AvailableFriendshipUpItemNum; // w0
  FriendshipUpItemUseItem_c *v8; // x8
  int32_t v9; // w20
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v11; // w0
  UILabel_o *friendshipUpItemUseNumLabel; // x20
  int v13; // w21
  System_String_o *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  PartyOrganizationUtility_c *v19; // x0
  UISprite_o *friendshipUpItemUseSprite; // x20
  int v21; // w21
  __int64 v22; // x9
  UILabel_o *friendshipUpStringLabel; // x20
  int64_t FriendshipUpItemEndedTime; // x20
  const MethodInfo *v25; // x1
  int v26; // w21
  float v27; // s0
  struct UILabel_o *v28; // x8
  FriendshipUpItemUseItem_c *v29; // x0
  float v30; // s2
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x21
  float v32; // s8
  int v33; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A56F08 & 1) == 0 )
  {
    sub_1B885B0(&FriendshipUpItemUseItem_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_13350/*"TIME_REST_USER_ITEM"*/);
    sub_1B885B0(&StringLiteral_10268/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/);
    sub_1B885B0(&StringLiteral_10266/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/);
    sub_1B885B0(&StringLiteral_10270/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/);
    sub_1B885B0(&StringLiteral_12703/*"SetLabelUpdate"*/);
    byte_4A56F08 = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_10266/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel )
    goto LABEL_35;
  UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)Instance, 0LL);
  friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL);
  if ( !friendshipUpItemUseFixHaveLabel )
    goto LABEL_35;
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, (System_String_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  AvailableFriendshipUpItemNum = PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
                                   (PartyOrganizationUtility_o *)Instance,
                                   0LL);
  v8 = FriendshipUpItemUseItem_TypeInfo;
  v9 = AvailableFriendshipUpItemNum;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v8 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v8->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Min_62526008(v9, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v13 = v11;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, 0LL);
  v33 = v13;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v15, v16, v17);
  Instance = System_String__Format(v14, v18, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_35;
  UILabel__set_text(friendshipUpItemUseNumLabel, (System_String_o *)Instance, 0LL);
  v19 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v19 = PartyOrganizationUtility_TypeInfo;
  }
  Instance = (void *)UnityEngine_PlayerPrefs__GetInt(v19->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  v21 = (int)Instance;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_35;
  v22 = 8LL;
  if ( !v21 )
    v22 = 16LL;
  UISprite__set_spriteName(
    friendshipUpItemUseSprite,
    *(System_String_o **)((char *)&FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM + v22),
    0LL);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13350/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_35;
  UILabel__set_text(friendshipUpStringLabel, (System_String_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
                                (PartyOrganizationUtility_o *)Instance,
                                0LL);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v25);
  Instance = this->fields.friendshipUpEndedLabel;
  if ( !Instance
    || (v26 = *((_DWORD *)Instance + 42),
        (Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL)
    || (Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL
    || (LODWORD(v27) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL),
        (v28 = this->fields.friendshipUpStringLabel) == 0LL) )
  {
LABEL_35:
    sub_1B8880C(Instance, v5);
  }
  v29 = FriendshipUpItemUseItem_TypeInfo;
  v30 = (float)v26;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v32 = (float)((float)(v27 * v30) + (float)v28->fields.mWidth) * 0.5;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v29 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    friendshipUpItemEnableTimeObj,
    v29->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v32,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( FriendshipUpItemEndedTime - NetworkManager__getTime(0LL) >= 1 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_69443960(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12703/*"SetLabelUpdate"*/,
      0LL);
    UnityEngine_MonoBehaviour__InvokeRepeating(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12703/*"SetLabelUpdate"*/,
      1.0,
      1.0,
      0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int64_t FriendshipUpItemEndedTime; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v7; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4A56F0A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56F0A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
                                (PartyOrganizationUtility_o *)Instance,
                                0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(FriendshipUpItemEndedTime, -1LL, 0LL);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (FriendshipUpItemUseItem_o *)NetworkManager__getTime(0LL);
  FriendshipUpItemUseItem__SetRemainTime(
    Time,
    FriendshipUpItemEndedTime - (_QWORD)Time,
    this->fields.friendshipUpEndedLabel,
    v9);
}


void __fastcall FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_1B8880C(0LL, time);
  UILabel__set_text(friendshipUpEndedLabel, time, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetRemainTime(
        FriendshipUpItemUseItem_o *this,
        int64_t remainTime,
        UILabel_o *label,
        const MethodInfo *method)
{
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    if ( !label )
      sub_1B8880C(this, remainTime);
    v4.fields.g = 0.0;
    v4.fields.b = 0.0;
    v4.fields.r = 230.0;
    v4.fields.a = 255.0;
    UIWidget__set_color((UIWidget_o *)label, v4, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemUseItem__SetWaveBattleRestart(
        FriendshipUpItemUseItem_o *this,
        bool isUse,
        bool isValid,
        const MethodInfo *method)
{
  UnityEngine_Component_o *friendshipUpItemUseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  float v14; // s0
  UILabel_o *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0

  if ( (byte_4A56F0D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10271/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/);
    sub_1B885B0(&StringLiteral_10269/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/);
    byte_4A56F0D = 1;
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
    v9 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v9, -10.5, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_39;
    v10 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v10, 42.5, 0LL);
    if ( !isUse )
    {
      friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10271/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/,
                                                               0LL);
      if ( friendshipUpItemUseFixAutoUseLabel )
      {
        UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)friendshipUpItemUseSprite, 0LL);
        friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
        if ( friendshipUpItemUseSprite )
        {
          v12 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
          GameObjectExtensions__SetLocalScaleX(v12, 0.85, 0LL);
          friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
          if ( friendshipUpItemUseSprite )
          {
            v13 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
            v14 = 10.5;
LABEL_25:
            GameObjectExtensions__SetLocalPositionX(v13, v14, 0LL);
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
  v15 = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10269/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/,
                                                           0LL);
  if ( !v15 )
    goto LABEL_39;
  UILabel__set_text(v15, (System_String_o *)friendshipUpItemUseSprite, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v16 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalScaleX(v16, 1.0, 0LL);
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( friendshipUpItemUseSprite )
    {
      v13 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
      v14 = -4.5;
      goto LABEL_25;
    }
LABEL_39:
    sub_1B8880C(friendshipUpItemUseSprite, isUse);
  }
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v17 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v17, 2.0, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v18 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionX(v18, -26.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 15, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v19 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionX(v19, 16.5, 0LL);
  friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_39;
  v20 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(v20, -0.5, 0LL);
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