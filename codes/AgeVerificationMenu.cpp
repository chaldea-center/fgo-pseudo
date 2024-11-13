void __fastcall AgeVerificationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x1
  struct AgeVerificationMenu_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct AgeVerificationMenu_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x19
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  struct AgeVerificationMenu_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7

  if ( (byte_4B13D50 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_2063/*"AGE_VEIFICATION_TYPE3"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_2059/*"AGE_VEIFICATION_NONE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2293/*"AgeVerificationType"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2292/*"AgeVerificationExpirationDate"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2061/*"AGE_VEIFICATION_TYPE1"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_2062/*"AGE_VEIFICATION_TYPE2"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2291/*"AgeVerificationCumulativeAmount"*/, v22, v23);
    byte_4B13D50 = 1;
  }
  AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_TYPE = (struct System_String_o *)StringLiteral_2293/*"AgeVerificationType"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AgeVerificationMenu_TypeInfo->static_fields,
    StringLiteral_2293/*"AgeVerificationType"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v24 = StringLiteral_2292/*"AgeVerificationExpirationDate"*/;
  static_fields = AgeVerificationMenu_TypeInfo->static_fields;
  static_fields->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_2292/*"AgeVerificationExpirationDate"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SAVE_KEY_EXPIRATION_DATE, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_2291/*"AgeVerificationCumulativeAmount"*/;
  v33 = AgeVerificationMenu_TypeInfo->static_fields;
  v33->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_2291/*"AgeVerificationCumulativeAmount"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->SAVE_KEY_CUMULATIVE_AMOUNT, v32, v34, v35, v36, v37, v38, v39);
  v40 = sub_1BCA888(string___TypeInfo, 4LL);
  if ( !v40 )
    sub_1BCAA3C(0LL, v41);
  v48 = v40;
  if ( !*(_DWORD *)(v40 + 24) )
    goto LABEL_9;
  v49 = StringLiteral_2059/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v40 + 32) = StringLiteral_2059/*"AGE_VEIFICATION_NONE"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), v49, v42, v43, v44, v45, v46, v47);
  if ( *(_DWORD *)(v48 + 24) <= 1u
    || (v56 = StringLiteral_2061/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v48 + 40) = StringLiteral_2061/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 40), v56, v50, v51, v52, v53, v54, v55),
        *(_DWORD *)(v48 + 24) <= 2u)
    || (v63 = StringLiteral_2062/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v48 + 48) = StringLiteral_2062/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 48), v63, v57, v58, v59, v60, v61, v62),
        *(_DWORD *)(v48 + 24) <= 3u) )
  {
LABEL_9:
    sub_1BCAA44(v40, v41);
  }
  v70 = StringLiteral_2063/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v48 + 56) = StringLiteral_2063/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 56), v70, v64, v65, v66, v67, v68, v69);
  v71 = AgeVerificationMenu_TypeInfo->static_fields;
  v71->typeTextList = (struct System_String_array *)v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v71->typeTextList, v48, v72, v73, v74, v75, v76, v77);
}


void __fastcall AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13D4F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B13D4F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AgeVerificationMenu__Callback(AgeVerificationMenu_o *this, int32_t result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct AgeVerificationMenu_CallbackFunc_o *v9; // x20
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_35958676(this, 0LL, v2);
}


void __fastcall AgeVerificationMenu__Close_35958676(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B13D47 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_AgeVerificationMenu_EndClose__, v10, v11);
    byte_4B13D47 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall AgeVerificationMenu__Concent(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ManagerConfig_c *v8; // x0
  AgeVerificationMenu_c *v9; // x0
  __int64 v10; // x1
  int64_t NextMonthTime; // x0
  __int64 v12; // x1
  AgeVerificationMenu_c *v13; // x8
  System_String_o *SAVE_KEY_EXPIRATION_DATE; // x19
  System_String_o *v15; // x0
  int64_t v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13D3F & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, method, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B13D3F = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( !v8->static_fields->UseMock )
  {
    v9 = AgeVerificationMenu_TypeInfo;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, method);
    if ( !AgeVerificationMenu__IsConcent((const MethodInfo *)v9) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      NextMonthTime = NetworkManager__getNextMonthTime(0LL);
      v13 = AgeVerificationMenu_TypeInfo;
      v16 = NextMonthTime;
      if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v12);
        v13 = AgeVerificationMenu_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v13->static_fields->SAVE_KEY_TYPE, type, 0LL);
      SAVE_KEY_EXPIRATION_DATE = AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE;
      v15 = System_Int64__ToString((int64_t)&v16, 0LL);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_EXPIRATION_DATE, v15, 0LL);
      UnityEngine_PlayerPrefs__SetInt(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu__ConfirmType(AgeVerificationMenu_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  __int64 v27; // x1
  AgeVerificationMenu_c *v28; // x8
  System_String_o *v29; // x22
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v32; // x0
  System_String_o *v33; // x22
  System_String_o *v34; // x23
  System_String_o *v35; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  CommonConfirmDialog_ClickDelegate_o *v39; // x25

  if ( (byte_4B13D48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AgeVerificationMenu_OnEndConfirm__, *(_QWORD *)&type, method);
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v5, v6);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_2057/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_2056/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2054/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2055/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, v21, v22);
    byte_4B13D48 = 1;
  }
  this->fields.state = 3;
  this->fields.selectType = type;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2057/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0LL);
  v28 = AgeVerificationMenu_TypeInfo;
  v29 = v26;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v27);
    v28 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v28->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_13;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= typeTextList->max_length )
    sub_1BCAA44(v26, v27);
  v32 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0LL);
  v33 = System_String__Format(v29, v32, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2055/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0LL);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2054/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0LL);
  v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v36, v37, v38);
  CommonConfirmDialog_ClickDelegate___ctor(v39, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0LL);
  v26 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27);
  if ( !Instance )
LABEL_13:
    sub_1BCAA3C(v26, v27);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v25,
    v33,
    v34,
    v35,
    v39,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0,
    0,
    0LL);
}


void __fastcall AgeVerificationMenu__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4B13D40 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v1, v2);
    byte_4B13D40 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVE_KEY_TYPE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0LL);
}


void __fastcall AgeVerificationMenu__EndClose(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AgeVerificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall AgeVerificationMenu__EndOpen(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall AgeVerificationMenu__GetAgeType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4B13D41 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v1, v2);
    byte_4B13D41 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_TYPE, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetCumulativeAmount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4B13D43 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v1, v2);
    byte_4B13D43 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetLimit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AgeVerificationMenu_c *v3; // x0
  int32_t AgeType; // w0

  if ( (byte_4B13D42 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v1, v2);
    byte_4B13D42 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1);
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v3);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_C0C9F4[AgeType];
}


void __fastcall AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B13D45 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B13D45 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.type1Label) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.type2Label) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.type3Label) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall AgeVerificationMenu__IsConcent(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ManagerConfig_c *v11; // x0
  int32_t Int; // w0
  AgeVerificationMenu_c *v13; // x0
  __int64 v14; // x1
  System_DateTime_o v15; // x0
  System_DateTime_o v16; // x1
  AgeVerificationMenu_c *v17; // x8
  System_String_o *String; // x0
  int64_t v19; // x0
  __int64 v20; // x1
  int32_t Year; // w19
  __int64 v22; // x1
  int32_t v23; // w19
  __int64 v24; // x1
  int32_t Month; // w19
  uint64_t v27; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8

  if ( (byte_4B13D3D & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v3, v4);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v9, v10);
    byte_4B13D3D = 1;
  }
  v11 = ManagerConfig_TypeInfo;
  dateData = 0LL;
  v27 = 0LL;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    goto LABEL_6;
  v13 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1);
    v13 = AgeVerificationMenu_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v13->static_fields->SAVE_KEY_TYPE, 0, 0LL);
  if ( Int )
  {
    if ( Int > 2 )
      goto LABEL_6;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    v15.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    v17 = AgeVerificationMenu_TypeInfo;
    dateData = v15.fields._dateData;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v16.fields._dateData);
      v17 = AgeVerificationMenu_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v17->static_fields->SAVE_KEY_EXPIRATION_DATE,
               (System_String_o *)StringLiteral_1209/*"0"*/,
               0LL);
    v19 = System_Int64__Parse(String, 0LL);
    v27 = NetworkManager__getDateTime_39270164(v19, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v20);
    v29.fields._dateData = (uint64_t)&v27;
    Year = System_DateTime__get_Year(v29, 0LL);
    v30.fields._dateData = (uint64_t)&dateData;
    if ( Year > System_DateTime__get_Year(v30, 0LL) )
    {
LABEL_6:
      LOBYTE(Int) = 1;
      return Int;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v22);
    v31.fields._dateData = (uint64_t)&v27;
    v23 = System_DateTime__get_Year(v31, 0LL);
    v32.fields._dateData = (uint64_t)&dateData;
    if ( v23 == System_DateTime__get_Year(v32, 0LL) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v24);
      v33.fields._dateData = (uint64_t)&v27;
      Month = System_DateTime__get_Month(v33, 0LL);
      v34.fields._dateData = (uint64_t)&dateData;
      LOBYTE(Int) = Month > System_DateTime__get_Month(v34, 0LL);
    }
    else
    {
      LOBYTE(Int) = 0;
    }
  }
  return Int;
}


bool __fastcall AgeVerificationMenu__IsConcentFirst(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ManagerConfig_c *v5; // x0
  AgeVerificationMenu_c *v7; // x0

  if ( (byte_4B13D3E & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v3, v4);
    byte_4B13D3E = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 1;
  v7 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1);
    v7 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v7->static_fields->SAVE_KEY_TYPE, 0, 0LL) == 0;
}


void __fastcall AgeVerificationMenu__OnClickCancel(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B13D4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AgeVerificationMenu_OnClickCancel__, method, v2);
    byte_4B13D4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v4 = Method_AgeVerificationMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_AgeVerificationMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    AgeVerificationMenu__Callback(this, -1, v6);
  }
}


void __fastcall AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B13D4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AgeVerificationMenu_OnClickType1__, method, v2);
    byte_4B13D4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v4 = Method_AgeVerificationMenu_OnClickType1__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType1__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_AgeVerificationMenu_OnClickType1__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 1, v6);
  }
}


void __fastcall AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B13D4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AgeVerificationMenu_OnClickType2__, method, v2);
    byte_4B13D4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v4 = Method_AgeVerificationMenu_OnClickType2__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType2__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_AgeVerificationMenu_OnClickType2__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 2, v6);
  }
}


void __fastcall AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B13D4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AgeVerificationMenu_OnClickType3__, method, v2);
    byte_4B13D4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v4 = Method_AgeVerificationMenu_OnClickType3__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType3__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_AgeVerificationMenu_OnClickType3__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 3, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu__OnEndConfirm(AgeVerificationMenu_o *this, bool result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t selectType; // w20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B13D49 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    byte_4B13D49 = 1;
  }
  if ( result )
  {
    selectType = this->fields.selectType;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, result);
    AgeVerificationMenu__Concent(selectType, (const MethodInfo *)result);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
      AgeVerificationMenu__Callback(this, this->fields.selectType, v10);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  this->fields.state = 2;
}


void __fastcall AgeVerificationMenu__Open(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *type1Label; // x20
  __int64 v27; // x8
  struct System_String_array *typeTextList; // x8
  UILabel_o *type2Label; // x20
  struct System_String_array *v30; // x8
  UILabel_o *type3Label; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4B13D46 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_AgeVerificationMenu_EndOpen__, v10, v11);
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_2060/*"AGE_VEIFICATION_TITLE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2058/*"AGE_VEIFICATION_MESSAGE"*/, v18, v19);
    byte_4B13D46 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1BCA784((PartyOrganizationUtility_o *)p_callbackFunc, (int64_t)callback, (int64_t)method, v3, v4, v5, v6, v7);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2060/*"AGE_VEIFICATION_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2058/*"AGE_VEIFICATION_MESSAGE"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
          type1Label = this->fields.type1Label;
          gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v22);
            gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          }
          v27 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 24LL);
          if ( v27 )
          {
            if ( *(_DWORD *)(v27 + 24) <= 1u )
              goto LABEL_25;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v27 + 40), 0LL);
            if ( !type1Label )
              goto LABEL_24;
            UILabel__set_text(type1Label, (System_String_o *)gameObject, 0LL);
            typeTextList = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !typeTextList )
              goto LABEL_24;
            if ( typeTextList->max_length <= 2 )
              goto LABEL_25;
            type2Label = this->fields.type2Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(typeTextList->m_Items[2], 0LL);
            if ( !type2Label )
              goto LABEL_24;
            UILabel__set_text(type2Label, (System_String_o *)gameObject, 0LL);
            v30 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v30 )
              goto LABEL_24;
            if ( v30->max_length <= 3 )
LABEL_25:
              sub_1BCAA44(gameObject, v22);
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v30->m_Items[3], 0LL);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0LL);
              this->fields.state = 1;
              v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
              System_Action___ctor(v35, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(gameObject, v22);
  }
}


void __fastcall AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  AgeVerificationMenu_c *v4; // x0

  if ( (byte_4B13D44 & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_TypeInfo, method, v2);
    byte_4B13D44 = 1;
  }
  v4 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, method);
    v4 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, count, 0LL);
}


void __fastcall AgeVerificationMenu__add_callbackFunc(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AgeVerificationMenu_o *v11; // x0
  AgeVerificationMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B13D3B & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13D3B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v8->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  AgeVerificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall AgeVerificationMenu__get_closeBtnPath(
        AgeVerificationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13D4E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15810/*"Window/CloseButton"*/, method, v2);
    byte_4B13D4E = 1;
  }
  return (System_String_o *)StringLiteral_15810/*"Window/CloseButton"*/;
}


void __fastcall AgeVerificationMenu__remove_callbackFunc(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_4B13D3C & 1) == 0 )
  {
    sub_1BCA7E0(&AgeVerificationMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13D3C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v8->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  AgeVerificationMenu__IsConcent(v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu_CallbackFunc___ctor(
        AgeVerificationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0AB00;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0AAB8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall AgeVerificationMenu_CallbackFunc__BeginInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B13D51 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B13D51 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall AgeVerificationMenu_CallbackFunc__Invoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}