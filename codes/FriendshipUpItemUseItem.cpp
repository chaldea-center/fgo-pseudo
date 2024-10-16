void __fastcall FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct FriendshipUpItemUseItem_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4AB19D4 & 1) == 0 )
  {
    sub_1BAB41C(&FriendshipUpItemUseItem_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_17529/*"btn_boostitem_off"*/, v4);
    sub_1BAB41C(&StringLiteral_17530/*"btn_boostitem_on"*/, v5);
    byte_4AB19D4 = 1;
  }
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  v7 = StringLiteral_17530/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17530/*"btn_boostitem_on"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->BUTTON_ON_FILE_NAME, v7, v2, v3);
  v8 = StringLiteral_17529/*"btn_boostitem_off"*/;
  v9 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v9->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17529/*"btn_boostitem_off"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v9->BUTTON_OFF_FILE_NAME, v8, v10, v11);
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

  if ( (byte_4AB19D1 & 1) == 0 )
  {
    sub_1BAB41C(&FriendshipUpItemUseItem_TypeInfo, isOn);
    byte_4AB19D1 = 1;
  }
  v5 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( !friendshipUpItemUseSprite )
    sub_1BAB678(v5, isOn);
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
  if ( (byte_4AB19CF & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_12730/*"SetLabelUpdate"*/, method);
    byte_4AB19CF = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_69785336(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12730/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_69785200(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12730/*"SetLabelUpdate"*/,
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

  if ( (byte_4AB19D2 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, isEnabled);
    byte_4AB19D2 = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0LL, 0LL) )
  {
    v7 = this->fields.friendshipUpItemUserButton;
    if ( !v7 )
      sub_1BAB678(0LL, v6);
    UICommonButton__SetEnable(v7, isEnabled, 0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetInit(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  void *Instance; // x0
  __int64 v16; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x20
  int32_t AvailableFriendshipUpItemNum; // w0
  FriendshipUpItemUseItem_c *v19; // x8
  int32_t v20; // w20
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v22; // w0
  UILabel_o *friendshipUpItemUseNumLabel; // x20
  int v24; // w21
  System_String_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  PartyOrganizationUtility_c *v30; // x0
  UISprite_o *friendshipUpItemUseSprite; // x20
  int v32; // w21
  __int64 v33; // x9
  UILabel_o *friendshipUpStringLabel; // x20
  int64_t FriendshipUpItemEndedTime; // x20
  const MethodInfo *v36; // x1
  int v37; // w21
  float v38; // s0
  struct UILabel_o *v39; // x8
  FriendshipUpItemUseItem_c *v40; // x0
  float v41; // s2
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x21
  float v43; // s8
  int v44; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4AB19CE & 1) == 0 )
  {
    sub_1BAB41C(&FriendshipUpItemUseItem_TypeInfo, method);
    sub_1BAB41C(&int_TypeInfo, v3);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v4);
    sub_1BAB41C(&System_Math_TypeInfo, v5);
    sub_1BAB41C(&NetworkManager_TypeInfo, v6);
    sub_1BAB41C(&PartyOrganizationUtility_TypeInfo, v7);
    sub_1BAB41C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_1BAB41C(&StringLiteral_13380/*"TIME_REST_USER_ITEM"*/, v9);
    sub_1BAB41C(&StringLiteral_10274/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, v10);
    sub_1BAB41C(&StringLiteral_10272/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, v11);
    sub_1BAB41C(&StringLiteral_10276/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, v12);
    sub_1BAB41C(&StringLiteral_12730/*"SetLabelUpdate"*/, v13);
    byte_4AB19CE = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel )
    goto LABEL_35;
  UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)Instance, 0LL);
  friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL);
  if ( !friendshipUpItemUseFixHaveLabel )
    goto LABEL_35;
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, (System_String_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  AvailableFriendshipUpItemNum = PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
                                   (PartyOrganizationUtility_o *)Instance,
                                   0LL);
  v19 = FriendshipUpItemUseItem_TypeInfo;
  v20 = AvailableFriendshipUpItemNum;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v19 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v19->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = System_Math__Min_62867104(v20, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v24 = v22;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, 0LL);
  v44 = v24;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v26, v27, v28);
  Instance = System_String__Format(v25, v29, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_35;
  UILabel__set_text(friendshipUpItemUseNumLabel, (System_String_o *)Instance, 0LL);
  v30 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v30 = PartyOrganizationUtility_TypeInfo;
  }
  Instance = (void *)UnityEngine_PlayerPrefs__GetInt(v30->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  v32 = (int)Instance;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
  if ( !friendshipUpItemUseSprite )
    goto LABEL_35;
  v33 = 8LL;
  if ( !v32 )
    v33 = 16LL;
  UISprite__set_spriteName(
    friendshipUpItemUseSprite,
    *(System_String_o **)((char *)&FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM + v33),
    0LL);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13380/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_35;
  UILabel__set_text(friendshipUpStringLabel, (System_String_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
                                (PartyOrganizationUtility_o *)Instance,
                                0LL);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v36);
  Instance = this->fields.friendshipUpEndedLabel;
  if ( !Instance
    || (v37 = *((_DWORD *)Instance + 42),
        (Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL)
    || (Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL
    || (LODWORD(v38) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL),
        (v39 = this->fields.friendshipUpStringLabel) == 0LL) )
  {
LABEL_35:
    sub_1BAB678(Instance, v16);
  }
  v40 = FriendshipUpItemUseItem_TypeInfo;
  v41 = (float)v37;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v43 = (float)((float)(v38 * v41) + (float)v39->fields.mWidth) * 0.5;
  if ( !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v40 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    friendshipUpItemEnableTimeObj,
    v40->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v43,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( FriendshipUpItemEndedTime - NetworkManager__getTime(0LL) >= 1 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_69785200(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12730/*"SetLabelUpdate"*/,
      0LL);
    UnityEngine_MonoBehaviour__InvokeRepeating(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12730/*"SetLabelUpdate"*/,
      1.0,
      1.0,
      0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t FriendshipUpItemEndedTime; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v9; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4AB19D0 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    byte_4AB19D0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v6);
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
                                (PartyOrganizationUtility_o *)Instance,
                                0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(FriendshipUpItemEndedTime, -1LL, 0LL);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (FriendshipUpItemUseItem_o *)NetworkManager__getTime(0LL);
  FriendshipUpItemUseItem__SetRemainTime(
    Time,
    FriendshipUpItemEndedTime - (_QWORD)Time,
    this->fields.friendshipUpEndedLabel,
    v11);
}


void __fastcall FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_1BAB678(0LL, time);
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
      sub_1BAB678(this, remainTime);
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

  if ( (byte_4AB19D3 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, isUse);
    sub_1BAB41C(&StringLiteral_10277/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/, v7);
    sub_1BAB41C(&StringLiteral_10275/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/, v8);
    byte_4AB19D3 = 1;
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
                                                               (System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/,
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
                                                           (System_String_o *)StringLiteral_10275/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/,
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
    sub_1BAB678(friendshipUpItemUseSprite, isUse);
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