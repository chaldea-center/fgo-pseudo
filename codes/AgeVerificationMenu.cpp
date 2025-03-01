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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x1
  struct AgeVerificationMenu_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct AgeVerificationMenu_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x19
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  struct AgeVerificationMenu_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  if ( (byte_4BFB1F5 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v1);
    sub_1C2E12C(&string___TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_2047/*"AGE_VEIFICATION_TYPE3"*/, v9);
    sub_1C2E12C(&StringLiteral_2043/*"AGE_VEIFICATION_NONE"*/, v10);
    sub_1C2E12C(&StringLiteral_2298/*"AgeVerificationType"*/, v11);
    sub_1C2E12C(&StringLiteral_2297/*"AgeVerificationExpirationDate"*/, v12);
    sub_1C2E12C(&StringLiteral_2045/*"AGE_VEIFICATION_TYPE1"*/, v13);
    sub_1C2E12C(&StringLiteral_2046/*"AGE_VEIFICATION_TYPE2"*/, v14);
    sub_1C2E12C(&StringLiteral_2296/*"AgeVerificationCumulativeAmount"*/, v15);
    byte_4BFB1F5 = 1;
  }
  AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_TYPE = (struct System_String_o *)StringLiteral_2298/*"AgeVerificationType"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)AgeVerificationMenu_TypeInfo->static_fields,
    StringLiteral_2298/*"AgeVerificationType"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_2297/*"AgeVerificationExpirationDate"*/;
  static_fields = AgeVerificationMenu_TypeInfo->static_fields;
  static_fields->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_2297/*"AgeVerificationExpirationDate"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->SAVE_KEY_EXPIRATION_DATE, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_2296/*"AgeVerificationCumulativeAmount"*/;
  v25 = AgeVerificationMenu_TypeInfo->static_fields;
  v25->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_2296/*"AgeVerificationCumulativeAmount"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->SAVE_KEY_CUMULATIVE_AMOUNT, v24, v26, v27, v28, v29, v30, v31);
  v32 = sub_1C2E1D4(string___TypeInfo, 4LL);
  if ( !v32 )
    sub_1C2E388(0LL, v33);
  v40 = v32;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_9;
  v41 = StringLiteral_2043/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v32 + 32) = StringLiteral_2043/*"AGE_VEIFICATION_NONE"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v32 + 32), v41, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v40 + 24) <= 1u
    || (v48 = StringLiteral_2045/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v40 + 40) = StringLiteral_2045/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v40 + 40), v48, v42, v43, v44, v45, v46, v47),
        *(_DWORD *)(v40 + 24) <= 2u)
    || (v55 = StringLiteral_2046/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v40 + 48) = StringLiteral_2046/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v40 + 48), v55, v49, v50, v51, v52, v53, v54),
        *(_DWORD *)(v40 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C2E390(v32, v33);
  }
  v62 = StringLiteral_2047/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v40 + 56) = StringLiteral_2047/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v40 + 56), v62, v56, v57, v58, v59, v60, v61);
  v63 = AgeVerificationMenu_TypeInfo->static_fields;
  v63->typeTextList = (struct System_String_array *)v40;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->typeTextList, v40, v64, v65, v66, v67, v68, v69);
}


void __fastcall AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BFB1F4 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4BFB1F4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1C2E0D0(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_36475504(this, 0LL, v2);
}


void __fastcall AgeVerificationMenu__Close_36475504(
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
  System_Action_o *v11; // x20

  if ( (byte_4BFB1EC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_AgeVerificationMenu_EndClose__, v10);
    byte_4BFB1EC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall AgeVerificationMenu__Concent(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AgeVerificationMenu_c *v6; // x0
  int64_t NextMonthTime; // x0
  AgeVerificationMenu_c *v8; // x8
  System_String_o *SAVE_KEY_EXPIRATION_DATE; // x19
  System_String_o *v10; // x0
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFB1E4 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, method);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v3);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    byte_4BFB1E4 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = AgeVerificationMenu_TypeInfo;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    if ( !AgeVerificationMenu__IsConcent((const MethodInfo *)v6) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      NextMonthTime = NetworkManager__getNextMonthTime(0LL);
      v8 = AgeVerificationMenu_TypeInfo;
      v11 = NextMonthTime;
      if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
        v8 = AgeVerificationMenu_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_TYPE, type, 0LL);
      SAVE_KEY_EXPIRATION_DATE = AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE;
      v10 = System_Int64__ToString((int64_t)&v11, 0LL);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_EXPIRATION_DATE, v10, 0LL);
      UnityEngine_PlayerPrefs__SetInt(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu__ConfirmType(AgeVerificationMenu_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  AgeVerificationMenu_c *v18; // x8
  System_String_o *v19; // x22
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  CommonConfirmDialog_ClickDelegate_o *v26; // x25

  if ( (byte_4BFB1ED & 1) == 0 )
  {
    sub_1C2E12C(&Method_AgeVerificationMenu_OnEndConfirm__, *(_QWORD *)&type);
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v5);
    sub_1C2E12C(&BalanceConfig_TypeInfo, v6);
    sub_1C2E12C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C2E12C(&StringLiteral_2041/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, v10);
    sub_1C2E12C(&StringLiteral_2040/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, v11);
    sub_1C2E12C(&StringLiteral_2038/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, v12);
    sub_1C2E12C(&StringLiteral_2039/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, v13);
    byte_4BFB1ED = 1;
  }
  this->fields.state = 3;
  this->fields.selectType = type;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2040/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0LL);
  v18 = AgeVerificationMenu_TypeInfo;
  v19 = v16;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v18 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v18->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_13;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= typeTextList->max_length )
    sub_1C2E390(v16, v17);
  v22 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0LL);
  v23 = System_String__Format(v19, v22, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2039/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2038/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0LL);
  v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2E378(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v26, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0LL);
  v16 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_13:
    sub_1C2E388(v16, v17);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v15,
    v23,
    v24,
    v25,
    v26,
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
  AgeVerificationMenu_c *v2; // x0

  if ( (byte_4BFB1E5 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v1);
    byte_4BFB1E5 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v2 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY_TYPE, 0LL);
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
    sub_1C2E0D0(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  AgeVerificationMenu_c *v2; // x0

  if ( (byte_4BFB1E6 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v1);
    byte_4BFB1E6 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v2 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_TYPE, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetCumulativeAmount(const MethodInfo *method)
{
  __int64 v1; // x1
  AgeVerificationMenu_c *v2; // x0

  if ( (byte_4BFB1E8 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v1);
    byte_4BFB1E8 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v2 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetLimit(const MethodInfo *method)
{
  __int64 v1; // x1
  AgeVerificationMenu_c *v2; // x0
  int32_t AgeType; // w0

  if ( (byte_4BFB1E7 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v1);
    byte_4BFB1E7 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v2);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_C40950[AgeType];
}


void __fastcall AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BFB1EA & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFB1EA = 1;
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
    sub_1C2E388(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall AgeVerificationMenu__IsConcent(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ManagerConfig_c *v6; // x0
  int32_t Int; // w0
  AgeVerificationMenu_c *v8; // x0
  System_DateTime_o v9; // x0
  AgeVerificationMenu_c *v10; // x8
  System_String_o *String; // x0
  int64_t v12; // x0
  int32_t Year; // w19
  int32_t v14; // w19
  int32_t Month; // w19
  uint64_t v17; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8

  if ( (byte_4BFB1E2 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v1);
    sub_1C2E12C(&System_DateTime_TypeInfo, v2);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v3);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_1191/*"0"*/, v5);
    byte_4BFB1E2 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  dateData = 0LL;
  v17 = 0LL;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( v6->static_fields->UseMock )
    goto LABEL_6;
  v8 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v8 = AgeVerificationMenu_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v8->static_fields->SAVE_KEY_TYPE, 0, 0LL);
  if ( Int )
  {
    if ( Int > 2 )
      goto LABEL_6;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    v10 = AgeVerificationMenu_TypeInfo;
    dateData = v9.fields._dateData;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      v10 = AgeVerificationMenu_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v10->static_fields->SAVE_KEY_EXPIRATION_DATE,
               (System_String_o *)StringLiteral_1191/*"0"*/,
               0LL);
    v12 = System_Int64__Parse(String, 0LL);
    v17 = NetworkManager__getDateTime_39877668(v12, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v19.fields._dateData = (uint64_t)&v17;
    Year = System_DateTime__get_Year(v19, 0LL);
    v20.fields._dateData = (uint64_t)&dateData;
    if ( Year > System_DateTime__get_Year(v20, 0LL) )
    {
LABEL_6:
      LOBYTE(Int) = 1;
      return Int;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v21.fields._dateData = (uint64_t)&v17;
    v14 = System_DateTime__get_Year(v21, 0LL);
    v22.fields._dateData = (uint64_t)&dateData;
    if ( v14 == System_DateTime__get_Year(v22, 0LL) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v23.fields._dateData = (uint64_t)&v17;
      Month = System_DateTime__get_Month(v23, 0LL);
      v24.fields._dateData = (uint64_t)&dateData;
      LOBYTE(Int) = Month > System_DateTime__get_Month(v24, 0LL);
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
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  AgeVerificationMenu_c *v5; // x0

  if ( (byte_4BFB1E3 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v1);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v2);
    byte_4BFB1E3 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v5 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v5 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY_TYPE, 0, 0LL) == 0;
}


void __fastcall AgeVerificationMenu__OnClickCancel(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BFB1F2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AgeVerificationMenu_OnClickCancel__, method);
    byte_4BFB1F2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_AgeVerificationMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    AgeVerificationMenu__Callback(this, -1, v5);
  }
}


void __fastcall AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BFB1EF & 1) == 0 )
  {
    sub_1C2E12C(&Method_AgeVerificationMenu_OnClickType1__, method);
    byte_4BFB1EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType1__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_AgeVerificationMenu_OnClickType1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 1, v5);
  }
}


void __fastcall AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BFB1F0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AgeVerificationMenu_OnClickType2__, method);
    byte_4BFB1F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType2__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_AgeVerificationMenu_OnClickType2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 2, v5);
  }
}


void __fastcall AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BFB1F1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AgeVerificationMenu_OnClickType3__, method);
    byte_4BFB1F1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType3__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_AgeVerificationMenu_OnClickType3__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 3, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu__OnEndConfirm(AgeVerificationMenu_o *this, bool result, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t selectType; // w20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4BFB1EE & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, result);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BFB1EE = 1;
  }
  if ( result )
  {
    selectType = this->fields.selectType;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    AgeVerificationMenu__Concent(selectType, (const MethodInfo *)result);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
      AgeVerificationMenu__Callback(this, this->fields.selectType, v9);
      return;
    }
LABEL_10:
    sub_1C2E388(Instance, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *type1Label; // x20
  __int64 v21; // x8
  struct System_String_array *typeTextList; // x8
  UILabel_o *type2Label; // x20
  struct System_String_array *v24; // x8
  UILabel_o *type3Label; // x20
  System_Action_o *v26; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4BFB1EB & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_AgeVerificationMenu_EndOpen__, v10);
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, v11);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_2044/*"AGE_VEIFICATION_TITLE"*/, v13);
    sub_1C2E12C(&StringLiteral_2042/*"AGE_VEIFICATION_MESSAGE"*/, v14);
    byte_4BFB1EB = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C2E0D0((PartyOrganizationUtility_o *)p_callbackFunc, (int64_t)callback, (int64_t)method, v3, v4, v5, v6, v7);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C2E0D0(
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2044/*"AGE_VEIFICATION_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2042/*"AGE_VEIFICATION_MESSAGE"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
          type1Label = this->fields.type1Label;
          gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          }
          v21 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 24LL);
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 24) <= 1u )
              goto LABEL_25;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v21 + 40), 0LL);
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
            v24 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v24 )
              goto LABEL_24;
            if ( v24->max_length <= 3 )
LABEL_25:
              sub_1C2E390(gameObject, v17);
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v24->m_Items[3], 0LL);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0LL);
              this->fields.state = 1;
              v26 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
              System_Action___ctor(v26, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C2E388(gameObject, v17);
  }
}


void __fastcall AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4BFB1E9 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_TypeInfo, method);
    byte_4BFB1E9 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, count, 0LL);
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

  if ( (byte_4BFB1E0 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_CallbackFunc_TypeInfo, value);
    byte_4BFB1E0 = 1;
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
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2E648(v8);
  AgeVerificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall AgeVerificationMenu__get_closeBtnPath(
        AgeVerificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BFB1F3 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_15924/*"Window/CloseButton"*/, method);
    byte_4BFB1F3 = 1;
  }
  return (System_String_o *)StringLiteral_15924/*"Window/CloseButton"*/;
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

  if ( (byte_4BFB1E1 & 1) == 0 )
  {
    sub_1C2E12C(&AgeVerificationMenu_CallbackFunc_TypeInfo, value);
    byte_4BFB1E1 = 1;
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
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2E648(v8);
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
  sub_1C2E0D0(
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
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A6D394;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6D34C;
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
  if ( (byte_4BFB1F6 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&result);
    byte_4BFB1F6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v9, callback, object);
}


void __fastcall AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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