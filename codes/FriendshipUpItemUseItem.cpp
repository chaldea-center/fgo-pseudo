void __fastcall FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1
  struct FriendshipUpItemUseItem_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42171F2 & 1) == 0 )
  {
    sub_B0D8A4(&FriendshipUpItemUseItem_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17032/*"btn_boostitem_off"*/, v8);
    sub_B0D8A4(&StringLiteral_17033/*"btn_boostitem_on"*/, v9);
    byte_42171F2 = 1;
  }
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_17033/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17033/*"btn_boostitem_on"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->BUTTON_ON_FILE_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17032/*"btn_boostitem_off"*/;
  v12->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17032/*"btn_boostitem_off"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->BUTTON_OFF_FILE_NAME, v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_42171F1 & 1) == 0 )
  {
    sub_B0D8A4(&FriendshipUpItemUseItem_TypeInfo, isOn);
    byte_42171F1 = 1;
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
      sub_B0D97C(v6);
  }
  UISprite__set_spriteName(friendshipUpItemUseSprite, *p_BUTTON_ON_FILE_NAME, 0LL);
}


void __fastcall FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_42171EF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12848/*"SetLabelUpdate"*/, method);
    byte_42171EF = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_34929536(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12848/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_34929376(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12848/*"SetLabelUpdate"*/,
      0LL);
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
  __int64 v14; // x1
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  System_String_o *Int; // x0
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x20
  int32_t AvailableFriendshipUpItemNum; // w20
  FriendshipUpItemUseItem_c *v19; // x8
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v21; // w0
  UILabel_o *friendshipUpItemUseNumLabel; // x20
  int v23; // w21
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  PartyOrganizationUtility_c *v26; // x0
  FriendshipUpItemUseItem_c *v27; // x8
  UISprite_o *friendshipUpItemUseSprite; // x20
  System_String_o **p_BUTTON_OFF_FILE_NAME; // x8
  UILabel_o *friendshipUpStringLabel; // x20
  int64_t FriendshipUpItemEndedTime; // x20
  const MethodInfo *v32; // x1
  int m_stringLength; // w21
  float v34; // s0
  struct UILabel_o *v35; // x8
  FriendshipUpItemUseItem_c *v36; // x0
  float v37; // s2
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x21
  float v39; // s8
  int v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42171EE & 1) == 0 )
  {
    sub_B0D8A4(&FriendshipUpItemUseItem_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&System_Math_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_13456/*"TIME_REST_USER_ITEM"*/, v10);
    sub_B0D8A4(&StringLiteral_10375/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, v11);
    sub_B0D8A4(&StringLiteral_10373/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, v12);
    sub_B0D8A4(&StringLiteral_10376/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, v13);
    sub_B0D8A4(&StringLiteral_12848/*"SetLabelUpdate"*/, v14);
    byte_42171EE = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_10373/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, Int, 0LL);
  friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel;
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_10375/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL);
  if ( !friendshipUpItemUseFixHaveLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, Int, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Int = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Int )
    goto LABEL_53;
  AvailableFriendshipUpItemNum = PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
                                   (PartyOrganizationUtility_o *)Int,
                                   0LL);
  v19 = FriendshipUpItemUseItem_TypeInfo;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v19 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v19->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v21 = System_Math__Min_44514512(AvailableFriendshipUpItemNum, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v23 = v21;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10376/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, 0LL);
  v40 = v23;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  Int = System_String__Format(v24, v25, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseNumLabel, Int, 0LL);
  v26 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v26 = PartyOrganizationUtility_TypeInfo;
  }
  Int = (System_String_o *)UnityEngine_PlayerPrefs__GetInt(
                             v26->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                             0,
                             0LL);
  v27 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !(_DWORD)Int )
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v27 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_OFF_FILE_NAME = &v27->static_fields->BUTTON_OFF_FILE_NAME;
    if ( friendshipUpItemUseSprite )
      goto LABEL_32;
LABEL_53:
    sub_B0D97C(Int);
  }
  if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v27 = FriendshipUpItemUseItem_TypeInfo;
  }
  p_BUTTON_OFF_FILE_NAME = &v27->static_fields->BUTTON_ON_FILE_NAME;
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
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_13456/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpStringLabel, Int, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Int = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Int )
    goto LABEL_53;
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
                                (PartyOrganizationUtility_o *)Int,
                                0LL);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v32);
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
  LODWORD(v34) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Int, 0LL);
  v35 = this->fields.friendshipUpStringLabel;
  if ( !v35 )
    goto LABEL_53;
  v36 = FriendshipUpItemUseItem_TypeInfo;
  v37 = (float)m_stringLength;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v39 = (float)((float)(v34 * v37) + (float)v35->fields.mWidth) * 0.5;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v36 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    friendshipUpItemEnableTimeObj,
    v36->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v39,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( FriendshipUpItemEndedTime - NetworkManager__getTime(0LL) >= 1 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_34929376(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12848/*"SetLabelUpdate"*/,
      0LL);
    UnityEngine_MonoBehaviour__InvokeRepeating(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12848/*"SetLabelUpdate"*/,
      1.0,
      1.0,
      0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PartyOrganizationUtility_o *v6; // x0
  int64_t FriendshipUpItemEndedTime; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v9; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v11; // x3

  if ( (byte_42171F0 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    byte_42171F0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v6 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v6 )
    sub_B0D97C(0LL);
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(v6, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(FriendshipUpItemEndedTime, -1LL, 0LL);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v9);
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
    sub_B0D97C(0LL);
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
  __int64 v10; // x0
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v16.fields.b = 0.0;
  v16.fields.r = 255.0;
  v16.fields.g = 255.0;
  v16.fields.a = 255.0;
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  UnityEngine_Color___ctor(v16, v4, v5, v6, v7, (const MethodInfo *)&v15);
  if ( !label )
    sub_B0D97C(v10);
  UIWidget__set_color((UIWidget_o *)label, v15, 0LL);
  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    v17.fields.r = 230.0;
    v17.fields.g = 0.0;
    v17.fields.b = 0.0;
    v17.fields.a = 255.0;
    v15 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor(v17, v11, v12, v13, v14, (const MethodInfo *)&v15);
    UIWidget__set_color((UIWidget_o *)label, v15, 0LL);
  }
}