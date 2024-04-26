void __fastcall FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct FriendshipUpItemUseItem_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43540C2 & 1) == 0 )
  {
    sub_B70694(&FriendshipUpItemUseItem_TypeInfo);
    sub_B70694(&StringLiteral_17237/*"btn_boostitem_off"*/);
    sub_B70694(&StringLiteral_17238/*"btn_boostitem_on"*/);
    byte_43540C2 = 1;
  }
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17238/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17238/*"btn_boostitem_on"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->BUTTON_ON_FILE_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17237/*"btn_boostitem_off"*/;
  v9->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17237/*"btn_boostitem_off"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->BUTTON_OFF_FILE_NAME, v10, v11, v12, v13, v14, v15, v16);
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
  UISprite_o *friendshipUpItemUseSprite; // x19
  FriendshipUpItemUseItem_c *v6; // x0
  System_String_o **p_BUTTON_ON_FILE_NAME; // x8

  if ( (byte_43540BF & 1) == 0 )
  {
    sub_B70694(&FriendshipUpItemUseItem_TypeInfo);
    byte_43540BF = 1;
  }
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  v6 = FriendshipUpItemUseItem_TypeInfo;
  if ( isOn )
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v6 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_ON_FILE_NAME = &v6->static_fields->BUTTON_ON_FILE_NAME;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_14;
  }
  else
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v6 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_ON_FILE_NAME = &v6->static_fields->BUTTON_OFF_FILE_NAME;
    if ( !friendshipUpItemUseSprite )
LABEL_14:
      sub_B7076C(v6, isOn);
  }
  UISprite__set_spriteName(friendshipUpItemUseSprite, *p_BUTTON_ON_FILE_NAME, 0LL);
}


void __fastcall FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_43540BD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12981/*"SetLabelUpdate"*/);
    byte_43540BD = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_36061468(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12981/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_36061308(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12981/*"SetLabelUpdate"*/,
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

  if ( (byte_43540C0 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43540C0 = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0LL, 0LL) )
  {
    v7 = this->fields.friendshipUpItemUserButton;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UICommonButton__SetEnable(v7, isEnabled, 0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetInit(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  System_String_o *Int; // x0
  __int64 v5; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x20
  int32_t AvailableFriendshipUpItemNum; // w20
  FriendshipUpItemUseItem_c *v8; // x8
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v10; // w0
  UILabel_o *friendshipUpItemUseNumLabel; // x20
  int v12; // w21
  System_String_o *v13; // x22
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  PartyOrganizationUtility_c *v16; // x0
  FriendshipUpItemUseItem_c *v17; // x8
  UISprite_o *friendshipUpItemUseSprite; // x20
  System_String_o **p_BUTTON_OFF_FILE_NAME; // x8
  UILabel_o *friendshipUpStringLabel; // x20
  int64_t FriendshipUpItemEndedTime; // x20
  const MethodInfo *v22; // x1
  int m_stringLength; // w21
  float v24; // s0
  struct UILabel_o *v25; // x8
  FriendshipUpItemUseItem_c *v26; // x0
  float v27; // s2
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x21
  float v29; // s8
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_43540BC & 1) == 0 )
  {
    sub_B70694(&FriendshipUpItemUseItem_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&PartyOrganizationUtility_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&StringLiteral_13596/*"TIME_REST_USER_ITEM"*/);
    sub_B70694(&StringLiteral_10476/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/);
    sub_B70694(&StringLiteral_10474/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/);
    sub_B70694(&StringLiteral_10478/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/);
    sub_B70694(&StringLiteral_12981/*"SetLabelUpdate"*/);
    byte_43540BC = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_10474/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, Int, 0LL);
  friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel;
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_10476/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL);
  if ( !friendshipUpItemUseFixHaveLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, Int, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Int = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Int )
    goto LABEL_53;
  AvailableFriendshipUpItemNum = PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
                                   (PartyOrganizationUtility_o *)Int,
                                   0LL);
  v8 = FriendshipUpItemUseItem_TypeInfo;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v8 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v8->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = System_Math__Min_45556056(AvailableFriendshipUpItemNum, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v12 = v10;
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10478/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, 0LL);
  v30 = v12;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v14);
  Int = System_String__Format(v13, v15, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseNumLabel, Int, 0LL);
  v16 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v16 = PartyOrganizationUtility_TypeInfo;
  }
  Int = (System_String_o *)UnityEngine_PlayerPrefs__GetInt(
                             v16->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                             0,
                             0LL);
  v17 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !(_DWORD)Int )
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v17 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_OFF_FILE_NAME = &v17->static_fields->BUTTON_OFF_FILE_NAME;
    if ( friendshipUpItemUseSprite )
      goto LABEL_32;
LABEL_53:
    sub_B7076C(Int, v5);
  }
  if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v17 = FriendshipUpItemUseItem_TypeInfo;
  }
  p_BUTTON_OFF_FILE_NAME = &v17->static_fields->BUTTON_ON_FILE_NAME;
  if ( !friendshipUpItemUseSprite )
    goto LABEL_53;
LABEL_32:
  UISprite__set_spriteName(friendshipUpItemUseSprite, *p_BUTTON_OFF_FILE_NAME, 0LL);
  friendshipUpStringLabel = this->fields.friendshipUpStringLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_13596/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpStringLabel, Int, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Int = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Int )
    goto LABEL_53;
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
                                (PartyOrganizationUtility_o *)Int,
                                0LL);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v22);
  Int = (System_String_o *)this->fields.friendshipUpEndedLabel;
  if ( !Int )
    goto LABEL_53;
  m_stringLength = Int[6].fields.m_stringLength;
  Int = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
  if ( !Int )
    goto LABEL_53;
  Int = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int, 0LL);
  if ( !Int )
    goto LABEL_53;
  LODWORD(v24) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Int, 0LL);
  v25 = this->fields.friendshipUpStringLabel;
  if ( !v25 )
    goto LABEL_53;
  v26 = FriendshipUpItemUseItem_TypeInfo;
  v27 = (float)m_stringLength;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v29 = (float)((float)(v24 * v27) + (float)v25->fields.mWidth) * 0.5;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v26 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    friendshipUpItemEnableTimeObj,
    v26->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v29,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( FriendshipUpItemEndedTime - NetworkManager__getTime(0LL) >= 1 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_36061308(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12981/*"SetLabelUpdate"*/,
      0LL);
    UnityEngine_MonoBehaviour__InvokeRepeating(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12981/*"SetLabelUpdate"*/,
      1.0,
      1.0,
      0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *v3; // x0
  __int64 v4; // x1
  int64_t FriendshipUpItemEndedTime; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v7; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v9; // x3

  if ( (byte_43540BE & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_43540BE = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v3 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(v3, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(FriendshipUpItemEndedTime, -1LL, 0LL);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v7);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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
    sub_B7076C(0LL, time);
  UILabel__set_text(friendshipUpEndedLabel, time, 0LL);
}


void __fastcall FriendshipUpItemUseItem__SetRemainTime(
        FriendshipUpItemUseItem_o *this,
        int64_t remainTime,
        UILabel_o *label,
        const MethodInfo *method)
{
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  __int64 v9; // x0
  __int64 v10; // x1
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    v12.fields.r = 230.0;
    v12.fields.a = 255.0;
    v12.fields.g = 0.0;
    v12.fields.b = 0.0;
    *(_QWORD *)&v11.fields.r = 0LL;
    *(_QWORD *)&v11.fields.b = 0LL;
    UnityEngine_Color___ctor(v12, v4, v5, v6, v7, (const MethodInfo *)&v11);
    if ( !label )
      sub_B7076C(v9, v10);
    UIWidget__set_color((UIWidget_o *)label, v11, 0LL);
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
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x21
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  float v14; // s0
  UILabel_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0

  if ( (byte_43540C1 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_10479/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/);
    sub_B70694(&StringLiteral_10477/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/);
    byte_43540C1 = 1;
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
  if ( isValid )
  {
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    gameObject = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 4.0, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v9 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v9, -10.5, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v10 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v10, 42.5, 0LL);
  }
  if ( isUse )
  {
    friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10477/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_IN_USE"*/,
                                                             0LL);
    if ( !friendshipUpItemUseFixAutoUseLabel )
      goto LABEL_41;
    UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, (System_String_o *)friendshipUpItemUseSprite, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v12 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalScaleX(v12, 1.0, 0LL);
    if ( isValid )
    {
      friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
      if ( friendshipUpItemUseSprite )
      {
        v13 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
        v14 = -4.5;
LABEL_27:
        GameObjectExtensions__SetLocalPositionX(v13, v14, 0LL);
        return;
      }
      goto LABEL_41;
    }
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v17 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v17, 2.0, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemIconSprite;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v18 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v18, -26.5, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    UILabel__set_fontSize((UILabel_o *)friendshipUpItemUseSprite, 15, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v19 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v19, 16.5, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    v20 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v20, -0.5, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixHaveLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             friendshipUpItemUseSprite,
                                                             0LL);
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseNumLabel;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             friendshipUpItemUseSprite,
                                                             0LL);
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0LL);
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemEnableTimeObj;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)friendshipUpItemUseSprite,
                                                             0LL);
    if ( !friendshipUpItemUseSprite )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseSprite, 0, 0LL);
  }
  else if ( isValid )
  {
    v15 = this->fields.friendshipUpItemUseFixAutoUseLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    friendshipUpItemUseSprite = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10479/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_UNUSED"*/,
                                                             0LL);
    if ( v15 )
    {
      UILabel__set_text(v15, (System_String_o *)friendshipUpItemUseSprite, 0LL);
      friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
      if ( friendshipUpItemUseSprite )
      {
        v16 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
        GameObjectExtensions__SetLocalScaleX(v16, 0.85, 0LL);
        friendshipUpItemUseSprite = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseFixAutoUseLabel;
        if ( friendshipUpItemUseSprite )
        {
          v13 = UnityEngine_Component__get_gameObject(friendshipUpItemUseSprite, 0LL);
          v14 = 10.5;
          goto LABEL_27;
        }
      }
    }
LABEL_41:
    sub_B7076C(friendshipUpItemUseSprite, isUse);
  }
}