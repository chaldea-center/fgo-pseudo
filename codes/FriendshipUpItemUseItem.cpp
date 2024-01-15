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

  if ( (byte_40FB2D7 & 1) == 0 )
  {
    sub_B16FFC(&FriendshipUpItemUseItem_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16915/*"btn_boostitem_off"*/, v8);
    sub_B16FFC(&StringLiteral_16916/*"btn_boostitem_on"*/, v9);
    byte_40FB2D7 = 1;
  }
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16916/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_16916/*"btn_boostitem_on"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->BUTTON_ON_FILE_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16915/*"btn_boostitem_off"*/;
  v12->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_16915/*"btn_boostitem_off"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->BUTTON_OFF_FILE_NAME, v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_40FB2D6 & 1) == 0 )
  {
    sub_B16FFC(&FriendshipUpItemUseItem_TypeInfo, isOn);
    byte_40FB2D6 = 1;
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
      sub_B170D4();
  }
  UISprite__set_spriteName(friendshipUpItemUseSprite, *p_BUTTON_ON_FILE_NAME, 0LL);
}


void __fastcall FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  if ( (byte_40FB2D4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12748/*"SetLabelUpdate"*/, method);
    byte_40FB2D4 = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_34803724(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12748/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12748/*"SetLabelUpdate"*/,
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
  System_String_o *v16; // x0
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x20
  System_String_o *v18; // x0
  PartyOrganizationUtility_o *v19; // x0
  int32_t AvailableFriendshipUpItemNum; // w20
  FriendshipUpItemUseItem_c *v21; // x8
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v23; // w0
  UILabel_o *friendshipUpItemUseNumLabel; // x20
  int v25; // w21
  System_String_o *v26; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  PartyOrganizationUtility_c *v29; // x0
  int32_t Int; // w0
  FriendshipUpItemUseItem_c *v31; // x8
  UISprite_o *friendshipUpItemUseSprite; // x20
  System_String_o **p_BUTTON_OFF_FILE_NAME; // x8
  UILabel_o *friendshipUpStringLabel; // x20
  System_String_o *v35; // x0
  PartyOrganizationUtility_o *v36; // x0
  int64_t FriendshipUpItemEndedTime; // x20
  const MethodInfo *v38; // x1
  UnityEngine_Component_o *friendshipUpEndedLabel; // x0
  int m_CachedPtr; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v43; // x1
  float v44; // s0
  struct UILabel_o *v45; // x8
  FriendshipUpItemUseItem_c *v46; // x0
  float v47; // s2
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x21
  float v49; // s8
  int v50; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FB2D3 & 1) == 0 )
  {
    sub_B16FFC(&FriendshipUpItemUseItem_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&System_Math_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_13356/*"TIME_REST_USER_ITEM"*/, v10);
    sub_B16FFC(&StringLiteral_10318/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, v11);
    sub_B16FFC(&StringLiteral_10316/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, v12);
    sub_B16FFC(&StringLiteral_10319/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, v13);
    sub_B16FFC(&StringLiteral_12748/*"SetLabelUpdate"*/, v14);
    byte_40FB2D3 = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10316/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, v16, 0LL);
  friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10318/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL);
  if ( !friendshipUpItemUseFixHaveLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, v18, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v19 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v19 )
    goto LABEL_53;
  AvailableFriendshipUpItemNum = PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(v19, 0LL);
  v21 = FriendshipUpItemUseItem_TypeInfo;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v21 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v21->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v23 = System_Math__Min_44418752(AvailableFriendshipUpItemNum, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v25 = v23;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_10319/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, 0LL);
  v50 = v25;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v28 = System_String__Format(v26, v27, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseNumLabel, v28, 0LL);
  v29 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v29 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v29->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v31 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !Int )
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v31 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_OFF_FILE_NAME = &v31->static_fields->BUTTON_OFF_FILE_NAME;
    if ( friendshipUpItemUseSprite )
      goto LABEL_32;
LABEL_53:
    sub_B170D4();
  }
  if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v31 = FriendshipUpItemUseItem_TypeInfo;
  }
  p_BUTTON_OFF_FILE_NAME = &v31->static_fields->BUTTON_ON_FILE_NAME;
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
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13356/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpStringLabel, v35, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v36 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v36 )
    goto LABEL_53;
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(v36, 0LL);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v38);
  friendshipUpEndedLabel = (UnityEngine_Component_o *)this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    goto LABEL_53;
  m_CachedPtr = friendshipUpEndedLabel[6].fields.m_CachedPtr;
  gameObject = UnityEngine_Component__get_gameObject(friendshipUpEndedLabel, 0LL);
  if ( !gameObject )
    goto LABEL_53;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !transform )
    goto LABEL_53;
  LODWORD(v44) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
  v45 = this->fields.friendshipUpStringLabel;
  if ( !v45 )
    goto LABEL_53;
  v46 = FriendshipUpItemUseItem_TypeInfo;
  v47 = (float)m_CachedPtr;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v49 = (float)((float)(v44 * v47) + (float)v45->fields.mWidth) * 0.5;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v46 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    friendshipUpItemEnableTimeObj,
    v46->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v49,
    v43);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( FriendshipUpItemEndedTime - NetworkManager__getTime(0LL) >= 1 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12748/*"SetLabelUpdate"*/,
      0LL);
    UnityEngine_MonoBehaviour__InvokeRepeating(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12748/*"SetLabelUpdate"*/,
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

  if ( (byte_40FB2D5 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    byte_40FB2D5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v6 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v6 )
    sub_B170D4();
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
    sub_B170D4();
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
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v15.fields.b = 0.0;
  v15.fields.r = 255.0;
  v15.fields.g = 255.0;
  v15.fields.a = 255.0;
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  UnityEngine_Color___ctor(v15, v4, v5, v6, v7, (const MethodInfo *)&v14);
  if ( !label )
    sub_B170D4();
  UIWidget__set_color((UIWidget_o *)label, v14, 0LL);
  if ( (remainTime & 0x8000000000000000LL) == 0
    && (int)(remainTime / 0x15180uLL) <= 0
    && (int)(remainTime / 0xE10uLL) <= 59 )
  {
    v16.fields.r = 230.0;
    v16.fields.g = 0.0;
    v16.fields.b = 0.0;
    v16.fields.a = 255.0;
    v14 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor(v16, v10, v11, v12, v13, (const MethodInfo *)&v14);
    UIWidget__set_color((UIWidget_o *)label, v14, 0LL);
  }
}