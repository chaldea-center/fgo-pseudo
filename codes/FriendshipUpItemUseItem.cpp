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

  if ( (byte_418A4CB & 1) == 0 )
  {
    sub_B2C35C(&FriendshipUpItemUseItem_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16981/*"btn_boostitem_off"*/, v8);
    sub_B2C35C(&StringLiteral_16982/*"btn_boostitem_on"*/, v9);
    byte_418A4CB = 1;
  }
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16982/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_16982/*"btn_boostitem_on"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->BUTTON_ON_FILE_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16981/*"btn_boostitem_off"*/;
  v12->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_16981/*"btn_boostitem_off"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->BUTTON_OFF_FILE_NAME, v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_418A4CA & 1) == 0 )
  {
    sub_B2C35C(&FriendshipUpItemUseItem_TypeInfo, isOn);
    byte_418A4CA = 1;
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
      sub_B2C434(v6, isOn);
  }
  UISprite__set_spriteName(friendshipUpItemUseSprite, *p_BUTTON_ON_FILE_NAME, 0LL);
}


void __fastcall FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_418A4C8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12804/*"SetLabelUpdate"*/, method);
    byte_418A4C8 = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_35309156(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12804/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35308996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12804/*"SetLabelUpdate"*/,
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
  __int64 v17; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x20
  int32_t AvailableFriendshipUpItemNum; // w20
  FriendshipUpItemUseItem_c *v20; // x8
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v22; // w0
  UILabel_o *friendshipUpItemUseNumLabel; // x20
  int v24; // w21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  PartyOrganizationUtility_c *v27; // x0
  FriendshipUpItemUseItem_c *v28; // x8
  UISprite_o *friendshipUpItemUseSprite; // x20
  System_String_o **p_BUTTON_OFF_FILE_NAME; // x8
  UILabel_o *friendshipUpStringLabel; // x20
  int64_t FriendshipUpItemEndedTime; // x20
  const MethodInfo *v33; // x1
  int m_stringLength; // w21
  float v35; // s0
  struct UILabel_o *v36; // x8
  FriendshipUpItemUseItem_c *v37; // x0
  float v38; // s2
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x21
  float v40; // s8
  int v41; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418A4C7 & 1) == 0 )
  {
    sub_B2C35C(&FriendshipUpItemUseItem_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&System_Math_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13412/*"TIME_REST_USER_ITEM"*/, v10);
    sub_B2C35C(&StringLiteral_10351/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, v11);
    sub_B2C35C(&StringLiteral_10349/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, v12);
    sub_B2C35C(&StringLiteral_10352/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, v13);
    sub_B2C35C(&StringLiteral_12804/*"SetLabelUpdate"*/, v14);
    byte_418A4C7 = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_10349/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, Int, 0LL);
  friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel;
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_10351/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL);
  if ( !friendshipUpItemUseFixHaveLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, Int, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Int = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Int )
    goto LABEL_53;
  AvailableFriendshipUpItemNum = PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
                                   (PartyOrganizationUtility_o *)Int,
                                   0LL);
  v20 = FriendshipUpItemUseItem_TypeInfo;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v20 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v20->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = System_Math__Min_44967328(AvailableFriendshipUpItemNum, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v24 = v22;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10352/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, 0LL);
  v41 = v24;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  Int = System_String__Format(v25, v26, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseNumLabel, Int, 0LL);
  v27 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v27 = PartyOrganizationUtility_TypeInfo;
  }
  Int = (System_String_o *)UnityEngine_PlayerPrefs__GetInt(
                             v27->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                             0,
                             0LL);
  v28 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !(_DWORD)Int )
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v28 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_OFF_FILE_NAME = &v28->static_fields->BUTTON_OFF_FILE_NAME;
    if ( friendshipUpItemUseSprite )
      goto LABEL_32;
LABEL_53:
    sub_B2C434(Int, v17);
  }
  if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v28 = FriendshipUpItemUseItem_TypeInfo;
  }
  p_BUTTON_OFF_FILE_NAME = &v28->static_fields->BUTTON_ON_FILE_NAME;
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
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_13412/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpStringLabel, Int, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Int = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Int )
    goto LABEL_53;
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
                                (PartyOrganizationUtility_o *)Int,
                                0LL);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v33);
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
  LODWORD(v35) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Int, 0LL);
  v36 = this->fields.friendshipUpStringLabel;
  if ( !v36 )
    goto LABEL_53;
  v37 = FriendshipUpItemUseItem_TypeInfo;
  v38 = (float)m_stringLength;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v40 = (float)((float)(v35 * v38) + (float)v36->fields.mWidth) * 0.5;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v37 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    friendshipUpItemEnableTimeObj,
    v37->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v40,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( FriendshipUpItemEndedTime - NetworkManager__getTime(0LL) >= 1 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35308996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12804/*"SetLabelUpdate"*/,
      0LL);
    UnityEngine_MonoBehaviour__InvokeRepeating(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12804/*"SetLabelUpdate"*/,
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
  __int64 v7; // x1
  int64_t FriendshipUpItemEndedTime; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v10; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v12; // x3

  if ( (byte_418A4C9 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    byte_418A4C9 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v6 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v6 )
    sub_B2C434(0LL, v7);
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(v6, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(FriendshipUpItemEndedTime, -1LL, 0LL);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v10);
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
    v12);
}


void __fastcall FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_B2C434(0LL, time);
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
  __int64 v11; // x1
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v17.fields.b = 0.0;
  v17.fields.r = 255.0;
  v17.fields.g = 255.0;
  v17.fields.a = 255.0;
  *(_QWORD *)&v16.fields.r = 0LL;
  *(_QWORD *)&v16.fields.b = 0LL;
  UnityEngine_Color___ctor(v17, v4, v5, v6, v7, (const MethodInfo *)&v16);
  if ( !label )
    sub_B2C434(v10, v11);
  UIWidget__set_color((UIWidget_o *)label, v16, 0LL);
  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    v18.fields.r = 230.0;
    v18.fields.g = 0.0;
    v18.fields.b = 0.0;
    v18.fields.a = 255.0;
    v16 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor(v18, v12, v13, v14, v15, (const MethodInfo *)&v16);
    UIWidget__set_color((UIWidget_o *)label, v16, 0LL);
  }
}