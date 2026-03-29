void AgeVerificationMenu___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct AgeVerificationMenu_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct AgeVerificationMenu_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x19
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w1
  struct AgeVerificationMenu_StaticFields *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7

  if ( (byte_4D2E605 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1939/*"AGE_VEIFICATION_TYPE3"*/);
    sub_1C93AD4(&StringLiteral_1935/*"AGE_VEIFICATION_NONE"*/);
    sub_1C93AD4(&StringLiteral_2193/*"AgeVerificationType"*/);
    sub_1C93AD4(&StringLiteral_2192/*"AgeVerificationExpirationDate"*/);
    sub_1C93AD4(&StringLiteral_1937/*"AGE_VEIFICATION_TYPE1"*/);
    sub_1C93AD4(&StringLiteral_1938/*"AGE_VEIFICATION_TYPE2"*/);
    sub_1C93AD4(&StringLiteral_2191/*"AgeVerificationCumulativeAmount"*/);
    byte_4D2E605 = 1;
  }
  AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_TYPE = (struct System_String_o *)StringLiteral_2193/*"AgeVerificationType"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)AgeVerificationMenu_TypeInfo->static_fields,
    StringLiteral_2193/*"AgeVerificationType"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_2192/*"AgeVerificationExpirationDate"*/;
  static_fields = AgeVerificationMenu_TypeInfo->static_fields;
  static_fields->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_2192/*"AgeVerificationExpirationDate"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->SAVE_KEY_EXPIRATION_DATE, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_2191/*"AgeVerificationCumulativeAmount"*/;
  v16 = AgeVerificationMenu_TypeInfo->static_fields;
  v16->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_2191/*"AgeVerificationCumulativeAmount"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->SAVE_KEY_CUMULATIVE_AMOUNT, v15, v17, v18, v19, v20, v21, v22);
  v23 = sub_1C93B7C(string___TypeInfo, 4);
  if ( !v23 )
    sub_1C93D2C(0, v24);
  v31 = v23;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_9;
  v32 = StringLiteral_1935/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v23 + 32) = StringLiteral_1935/*"AGE_VEIFICATION_NONE"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 32), v32, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v31 + 24) <= 1u
    || (v39 = StringLiteral_1937/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v31 + 40) = StringLiteral_1937/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v31 + 40), v39, v33, v34, v35, v36, v37, v38),
        *(_DWORD *)(v31 + 24) <= 2u)
    || (v46 = StringLiteral_1938/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v31 + 48) = StringLiteral_1938/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v31 + 48), v46, v40, v41, v42, v43, v44, v45),
        *(_DWORD *)(v31 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C93D34(v23);
  }
  v53 = StringLiteral_1939/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v31 + 56) = StringLiteral_1939/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v31 + 56), v53, v47, v48, v49, v50, v51, v52);
  v54 = AgeVerificationMenu_TypeInfo->static_fields;
  v54->typeTextList = (struct System_String_array *)v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v54->typeTextList, v31, v55, v56, v57, v58, v59, v60);
}


void AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E604 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2E604 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AgeVerificationMenu__Callback(AgeVerificationMenu_o *this, int32_t result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct AgeVerificationMenu_CallbackFunc_o *v9; // x20
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_38940720(this, 0, v2);
}


void AgeVerificationMenu__Close_38940720(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2E5FC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AgeVerificationMenu_EndClose__);
    byte_4D2E5FC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void AgeVerificationMenu__Concent(int32_t type, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  AgeVerificationMenu_c *v4; // x0
  int64_t NextMonthTime; // x0
  AgeVerificationMenu_c *v6; // x8
  System_String_o *SAVE_KEY_EXPIRATION_DATE; // x19
  System_String_o *v8; // x0
  int64_t v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E5F4 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2E5F4 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = AgeVerificationMenu_TypeInfo;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    if ( !AgeVerificationMenu__IsConcent((const MethodInfo *)v4) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      NextMonthTime = NetworkManager__getNextMonthTime(0);
      v6 = AgeVerificationMenu_TypeInfo;
      v9 = NextMonthTime;
      if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
        v6 = AgeVerificationMenu_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_TYPE, type, 0);
      SAVE_KEY_EXPIRATION_DATE = AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE;
      v8 = System_Int64__ToString((int64_t)&v9, 0);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_EXPIRATION_DATE, v8, 0);
      UnityEngine_PlayerPrefs__SetInt(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
}


void AgeVerificationMenu__ConfirmType(AgeVerificationMenu_o *this, int32_t type, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  __int64 v8; // x1
  AgeVerificationMenu_c *v9; // x8
  System_String_o *v10; // x22
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  System_String_o *v16; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25

  if ( (byte_4D2E5FD & 1) == 0 )
  {
    sub_1C93AD4(&Method_AgeVerificationMenu_OnEndConfirm__);
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_1933/*"AGE_VEIFICATION_CONFIRM_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1932/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_1930/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_1931/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/);
    byte_4D2E5FD = 1;
  }
  this->fields.state = 3;
  this->fields.selectType = type;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1933/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1932/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0);
  v9 = AgeVerificationMenu_TypeInfo;
  v10 = v7;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v9 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v9->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_13;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= LODWORD(typeTextList->max_length) )
    sub_1C93D34(v7);
  v13 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0);
  v14 = System_String__Format(v10, v13, 0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1931/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_1930/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0);
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_13:
    sub_1C93D2C(v7, v8);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v6,
    v14,
    v15,
    v16,
    v17,
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
    0);
}


void AgeVerificationMenu__DeleteContinueData(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0

  if ( (byte_4D2E5F5 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    byte_4D2E5F5 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v1 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY_TYPE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0);
}


void AgeVerificationMenu__EndClose(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AgeVerificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void AgeVerificationMenu__EndOpen(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t AgeVerificationMenu__GetAgeType(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0

  if ( (byte_4D2E5F6 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    byte_4D2E5F6 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v1 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_TYPE, 0, 0);
}


int32_t AgeVerificationMenu__GetCumulativeAmount(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0

  if ( (byte_4D2E5F8 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    byte_4D2E5F8 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v1 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0);
}


int32_t AgeVerificationMenu__GetLimit(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0
  int32_t AgeType; // w0

  if ( (byte_4D2E5F7 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    byte_4D2E5F7 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v1);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_D34D1C[AgeType];
}


void AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D2E5FA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E5FA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.type1Label) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.type2Label) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.type3Label) == 0) )
  {
LABEL_9:
    sub_1C93D2C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool AgeVerificationMenu__IsConcent(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  int32_t Int; // w0
  AgeVerificationMenu_c *v3; // x0
  System_DateTime_o v4; // x0
  AgeVerificationMenu_c *v5; // x8
  System_String_o *String; // x0
  int64_t v7; // x0
  int32_t Year; // w19
  int32_t v9; // w19
  int32_t Month; // w19
  uint64_t v12; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4D2E5F2 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2E5F2 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  dateData = 0;
  v12 = 0;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    goto LABEL_6;
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_TYPE, 0, 0);
  if ( Int )
  {
    if ( Int > 2 )
      goto LABEL_6;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    v5 = AgeVerificationMenu_TypeInfo;
    dateData = v4.fields._dateData;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      v5 = AgeVerificationMenu_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v5->static_fields->SAVE_KEY_EXPIRATION_DATE,
               (System_String_o *)StringLiteral_1116/*"0"*/,
               0);
    v7 = System_Int64__Parse(String, 0);
    v12 = NetworkManager__getDateTime_42096756(v7, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    Year = System_DateTime__get_Year((System_DateTime_o)&v12, 0);
    if ( Year > System_DateTime__get_Year((System_DateTime_o)&dateData, 0) )
    {
LABEL_6:
      LOBYTE(Int) = 1;
      return Int;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v9 = System_DateTime__get_Year((System_DateTime_o)&v12, 0);
    if ( v9 == System_DateTime__get_Year((System_DateTime_o)&dateData, 0) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      Month = System_DateTime__get_Month((System_DateTime_o)&v12, 0);
      LOBYTE(Int) = Month > System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
    }
    else
    {
      LOBYTE(Int) = 0;
    }
  }
  return Int;
}


bool AgeVerificationMenu__IsConcentFirst(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4D2E5F3 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    byte_4D2E5F3 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_TYPE, 0, 0) == 0;
}


void AgeVerificationMenu__OnClickCancel(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2E602 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AgeVerificationMenu_OnClickCancel__);
    byte_4D2E602 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_AgeVerificationMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    AgeVerificationMenu__Callback(this, -1, v5);
  }
}


void AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2E5FF & 1) == 0 )
  {
    sub_1C93AD4(&Method_AgeVerificationMenu_OnClickType1__);
    byte_4D2E5FF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType1__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_AgeVerificationMenu_OnClickType1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 1, v5);
  }
}


void AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2E600 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AgeVerificationMenu_OnClickType2__);
    byte_4D2E600 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType2__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_AgeVerificationMenu_OnClickType2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 2, v5);
  }
}


void AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2E601 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AgeVerificationMenu_OnClickType3__);
    byte_4D2E601 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType3__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_AgeVerificationMenu_OnClickType3__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 3, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void AgeVerificationMenu__OnEndConfirm(AgeVerificationMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t selectType; // w20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4D2E5FE & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2E5FE = 1;
  }
  if ( result )
  {
    selectType = this->fields.selectType;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    AgeVerificationMenu__Concent(selectType, (const MethodInfo *)result);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
      AgeVerificationMenu__Callback(this, this->fields.selectType, v8);
      return;
    }
LABEL_10:
    sub_1C93D2C(Instance, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  this->fields.state = 2;
}


void AgeVerificationMenu__Open(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *type1Label; // x20
  __int64 v16; // x8
  struct System_String_array *typeTextList; // x8
  UILabel_o *type2Label; // x20
  struct System_String_array *v19; // x8
  UILabel_o *type3Label; // x20
  System_Action_o *v21; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4D2E5FB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AgeVerificationMenu_EndOpen__);
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1936/*"AGE_VEIFICATION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1934/*"AGE_VEIFICATION_MESSAGE"*/);
    byte_4D2E5FB = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)method, v3, v4, v5, v6, v7);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1936/*"AGE_VEIFICATION_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1934/*"AGE_VEIFICATION_MESSAGE"*/, 0);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
          type1Label = this->fields.type1Label;
          gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          }
          v16 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 24);
          if ( v16 )
          {
            if ( *(_DWORD *)(v16 + 24) <= 1u )
              goto LABEL_25;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v16 + 40), 0);
            if ( !type1Label )
              goto LABEL_24;
            UILabel__set_text(type1Label, (System_String_o *)gameObject, 0);
            typeTextList = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !typeTextList )
              goto LABEL_24;
            if ( LODWORD(typeTextList->max_length) <= 2 )
              goto LABEL_25;
            type2Label = this->fields.type2Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(typeTextList->m_Items[2], 0);
            if ( !type2Label )
              goto LABEL_24;
            UILabel__set_text(type2Label, (System_String_o *)gameObject, 0);
            v19 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v19 )
              goto LABEL_24;
            if ( LODWORD(v19->max_length) <= 3 )
LABEL_25:
              sub_1C93D34(gameObject);
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19->m_Items[3], 0);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0);
              this->fields.state = 1;
              v21 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
              System_Action___ctor(v21, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C93D2C(gameObject, v12);
  }
}


void AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4D2E5F9 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_TypeInfo);
    byte_4D2E5F9 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, count, 0);
}


void AgeVerificationMenu__add_callbackFunc(
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

  if ( (byte_4D2E5F0 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_4D2E5F0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v8->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  AgeVerificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *AgeVerificationMenu__get_closeBtnPath(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E603 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15743/*"Window/CloseButton"*/);
    byte_4D2E603 = 1;
  }
  return (System_String_o *)StringLiteral_15743/*"Window/CloseButton"*/;
}


void AgeVerificationMenu__remove_callbackFunc(
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

  if ( (byte_4D2E5F1 & 1) == 0 )
  {
    sub_1C93AD4(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_4D2E5F1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v8->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  AgeVerificationMenu__IsConcent(v11);
}


void AgeVerificationMenu_CallbackFunc___ctor(
        AgeVerificationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC7978;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC7930;
}


System_IAsyncResult_o *AgeVerificationMenu_CallbackFunc__BeginInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4D2F110 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D2F110 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void AgeVerificationMenu_CallbackFunc__Invoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}