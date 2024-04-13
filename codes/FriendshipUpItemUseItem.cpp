void __fastcall FriendshipUpItemUseItem___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct FriendshipUpItemUseItem_StaticFields *static_fields; // x0
  System_Int32_array **v15; // x1
  struct FriendshipUpItemUseItem_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EB51D & 1) == 0 )
  {
    sub_B5D5C4(&FriendshipUpItemUseItem_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17190/*"btn_boostitem_off"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17191/*"btn_boostitem_on"*/, v11, v12, v13);
    byte_42EB51D = 1;
  }
  FriendshipUpItemUseItem_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM = 9999;
  static_fields = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_17191/*"btn_boostitem_on"*/;
  static_fields->BUTTON_ON_FILE_NAME = (struct System_String_o *)StringLiteral_17191/*"btn_boostitem_on"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->BUTTON_ON_FILE_NAME, v15, v2, v3, v4, v5, v6, v7);
  v16 = FriendshipUpItemUseItem_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_17190/*"btn_boostitem_off"*/;
  v16->BUTTON_OFF_FILE_NAME = (struct System_String_o *)StringLiteral_17190/*"btn_boostitem_off"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->BUTTON_OFF_FILE_NAME, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v3; // x3
  UISprite_o *friendshipUpItemUseSprite; // x19
  FriendshipUpItemUseItem_c *v7; // x0
  System_String_o **p_BUTTON_ON_FILE_NAME; // x8

  if ( (byte_42EB51B & 1) == 0 )
  {
    sub_B5D5C4(&FriendshipUpItemUseItem_TypeInfo, isOn, (_DWORD)method, v3);
    byte_42EB51B = 1;
  }
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  v7 = FriendshipUpItemUseItem_TypeInfo;
  if ( isOn )
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v7 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_ON_FILE_NAME = &v7->static_fields->BUTTON_ON_FILE_NAME;
    if ( !friendshipUpItemUseSprite )
      goto LABEL_14;
  }
  else
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v7 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_ON_FILE_NAME = &v7->static_fields->BUTTON_OFF_FILE_NAME;
    if ( !friendshipUpItemUseSprite )
LABEL_14:
      sub_B5D69C(v7, isOn);
  }
  UISprite__set_spriteName(friendshipUpItemUseSprite, *p_BUTTON_ON_FILE_NAME, 0LL);
}


void __fastcall FriendshipUpItemUseItem__OnDestroy(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB519 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12960/*"SetLabelUpdate"*/, (_DWORD)method, v2, v3);
    byte_42EB519 = 1;
  }
  if ( UnityEngine_MonoBehaviour__IsInvoking_35614496(
         (UnityEngine_MonoBehaviour_o *)this,
         (System_String_o *)StringLiteral_12960/*"SetLabelUpdate"*/,
         0LL) )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12960/*"SetLabelUpdate"*/,
      0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetButtonEnabled(
        FriendshipUpItemUseItem_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *friendshipUpItemUserButton; // x21
  __int64 v7; // x1
  UICommonButton_o *v8; // x0

  if ( (byte_42EB51C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isEnabled, (_DWORD)method, v3);
    byte_42EB51C = 1;
  }
  friendshipUpItemUserButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUserButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemUserButton, 0LL, 0LL) )
  {
    v8 = this->fields.friendshipUpItemUserButton;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UICommonButton__SetEnable(v8, isEnabled, 0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetInit(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UILabel_o *friendshipUpItemUseFixAutoUseLabel; // x20
  System_String_o *Int; // x0
  __int64 v43; // x1
  UILabel_o *friendshipUpItemUseFixHaveLabel; // x20
  int32_t AvailableFriendshipUpItemNum; // w20
  FriendshipUpItemUseItem_c *v46; // x8
  int32_t FRIENDSHIP_UP_ITEM_MAX_NUM; // w21
  int32_t v48; // w0
  UILabel_o *friendshipUpItemUseNumLabel; // x20
  int v50; // w21
  System_String_o *v51; // x22
  Il2CppObject *v52; // x0
  PartyOrganizationUtility_c *v53; // x0
  FriendshipUpItemUseItem_c *v54; // x8
  UISprite_o *friendshipUpItemUseSprite; // x20
  System_String_o **p_BUTTON_OFF_FILE_NAME; // x8
  UILabel_o *friendshipUpStringLabel; // x20
  int64_t FriendshipUpItemEndedTime; // x20
  const MethodInfo *v59; // x1
  int m_stringLength; // w21
  float v61; // s0
  struct UILabel_o *v62; // x8
  FriendshipUpItemUseItem_c *v63; // x0
  float v64; // s2
  UnityEngine_GameObject_o *friendshipUpItemEnableTimeObj; // x21
  float v66; // s8
  int v67; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EB518 & 1) == 0 )
  {
    sub_B5D5C4(&FriendshipUpItemUseItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Math_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_13568/*"TIME_REST_USER_ITEM"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_10457/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_10455/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_10458/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12960/*"SetLabelUpdate"*/, v38, v39, v40);
    byte_42EB518 = 1;
  }
  friendshipUpItemUseFixAutoUseLabel = this->fields.friendshipUpItemUseFixAutoUseLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_10455/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_AUTO_USE"*/, 0LL);
  if ( !friendshipUpItemUseFixAutoUseLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixAutoUseLabel, Int, 0LL);
  friendshipUpItemUseFixHaveLabel = this->fields.friendshipUpItemUseFixHaveLabel;
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_HAVE"*/, 0LL);
  if ( !friendshipUpItemUseFixHaveLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseFixHaveLabel, Int, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Int = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Int )
    goto LABEL_53;
  AvailableFriendshipUpItemNum = PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
                                   (PartyOrganizationUtility_o *)Int,
                                   0LL);
  v46 = FriendshipUpItemUseItem_TypeInfo;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v46 = FriendshipUpItemUseItem_TypeInfo;
  }
  FRIENDSHIP_UP_ITEM_MAX_NUM = v46->static_fields->FRIENDSHIP_UP_ITEM_MAX_NUM;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v48 = System_Math__Min_45104456(AvailableFriendshipUpItemNum, FRIENDSHIP_UP_ITEM_MAX_NUM, 0LL);
  friendshipUpItemUseNumLabel = this->fields.friendshipUpItemUseNumLabel;
  v50 = v48;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10458/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_NUM"*/, 0LL);
  v67 = v50;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  Int = System_String__Format(v51, v52, 0LL);
  if ( !friendshipUpItemUseNumLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpItemUseNumLabel, Int, 0LL);
  v53 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v53 = PartyOrganizationUtility_TypeInfo;
  }
  Int = (System_String_o *)UnityEngine_PlayerPrefs__GetInt(
                             v53->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                             0,
                             0LL);
  v54 = FriendshipUpItemUseItem_TypeInfo;
  friendshipUpItemUseSprite = this->fields.friendshipUpItemUseSprite;
  if ( !(_DWORD)Int )
  {
    if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
      v54 = FriendshipUpItemUseItem_TypeInfo;
    }
    p_BUTTON_OFF_FILE_NAME = &v54->static_fields->BUTTON_OFF_FILE_NAME;
    if ( friendshipUpItemUseSprite )
      goto LABEL_32;
LABEL_53:
    sub_B5D69C(Int, v43);
  }
  if ( (WORD1(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v54 = FriendshipUpItemUseItem_TypeInfo;
  }
  p_BUTTON_OFF_FILE_NAME = &v54->static_fields->BUTTON_ON_FILE_NAME;
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
  Int = LocalizationManager__Get((System_String_o *)StringLiteral_13568/*"TIME_REST_USER_ITEM"*/, 0LL);
  if ( !friendshipUpStringLabel )
    goto LABEL_53;
  UILabel__set_text(friendshipUpStringLabel, Int, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Int = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Int )
    goto LABEL_53;
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
                                (PartyOrganizationUtility_o *)Int,
                                0LL);
  FriendshipUpItemUseItem__SetLabelUpdate(this, v59);
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
  LODWORD(v61) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Int, 0LL);
  v62 = this->fields.friendshipUpStringLabel;
  if ( !v62 )
    goto LABEL_53;
  v63 = FriendshipUpItemUseItem_TypeInfo;
  v64 = (float)m_stringLength;
  friendshipUpItemEnableTimeObj = this->fields.friendshipUpItemEnableTimeObj;
  v66 = (float)((float)(v61 * v64) + (float)v62->fields.mWidth) * 0.5;
  if ( (BYTE3(FriendshipUpItemUseItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendshipUpItemUseItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemUseItem_TypeInfo);
    v63 = FriendshipUpItemUseItem_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    friendshipUpItemEnableTimeObj,
    v63->static_fields->FRIEND_SHIP_TIME_LABEL_STANDARD_POSITION_X - v66,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( FriendshipUpItemEndedTime - NetworkManager__getTime(0LL) >= 1 )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12960/*"SetLabelUpdate"*/,
      0LL);
    UnityEngine_MonoBehaviour__InvokeRepeating(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12960/*"SetLabelUpdate"*/,
      1.0,
      1.0,
      0LL);
  }
}


void __fastcall FriendshipUpItemUseItem__SetLabelUpdate(FriendshipUpItemUseItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  PartyOrganizationUtility_o *v14; // x0
  __int64 v15; // x1
  int64_t FriendshipUpItemEndedTime; // x20
  System_String_o *RestTime2; // x0
  const MethodInfo *v18; // x2
  FriendshipUpItemUseItem_o *Time; // x0
  const MethodInfo *v20; // x3

  if ( (byte_42EB51A & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11, v12, v13);
    byte_42EB51A = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v14 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v14 )
    sub_B5D69C(0LL, v15);
  FriendshipUpItemEndedTime = PartyOrganizationUtility__GetFriendshipUpItemEndedTime(v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(FriendshipUpItemEndedTime, -1LL, 0LL);
  FriendshipUpItemUseItem__SetParamsToBehindText(this, RestTime2, v18);
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
    v20);
}


void __fastcall FriendshipUpItemUseItem__SetParamsToBehindText(
        FriendshipUpItemUseItem_o *this,
        System_String_o *time,
        const MethodInfo *method)
{
  UILabel_o *friendshipUpEndedLabel; // x0

  friendshipUpEndedLabel = this->fields.friendshipUpEndedLabel;
  if ( !friendshipUpEndedLabel )
    sub_B5D69C(0LL, time);
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
      sub_B5D69C(v9, v10);
    UIWidget__set_color((UIWidget_o *)label, v11, 0LL);
  }
}