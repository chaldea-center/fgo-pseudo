void AgeVerificationMenu___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct AgeVerificationMenu_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct AgeVerificationMenu_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x19
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  struct AgeVerificationMenu_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C351A8 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1942/*"AGE_VEIFICATION_TYPE3"*/);
    sub_1C32C20(&StringLiteral_1938/*"AGE_VEIFICATION_NONE"*/);
    sub_1C32C20(&StringLiteral_2182/*"AgeVerificationType"*/);
    sub_1C32C20(&StringLiteral_2181/*"AgeVerificationExpirationDate"*/);
    sub_1C32C20(&StringLiteral_1940/*"AGE_VEIFICATION_TYPE1"*/);
    sub_1C32C20(&StringLiteral_1941/*"AGE_VEIFICATION_TYPE2"*/);
    sub_1C32C20(&StringLiteral_2180/*"AgeVerificationCumulativeAmount"*/);
    byte_4C351A8 = 1;
  }
  AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_TYPE = (struct System_String_o *)StringLiteral_2182/*"AgeVerificationType"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)AgeVerificationMenu_TypeInfo->static_fields, StringLiteral_2182/*"AgeVerificationType"*/, v1, v2);
  v3 = StringLiteral_2181/*"AgeVerificationExpirationDate"*/;
  static_fields = AgeVerificationMenu_TypeInfo->static_fields;
  static_fields->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_2181/*"AgeVerificationExpirationDate"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->SAVE_KEY_EXPIRATION_DATE, v3, v5, v6);
  v7 = StringLiteral_2180/*"AgeVerificationCumulativeAmount"*/;
  v8 = AgeVerificationMenu_TypeInfo->static_fields;
  v8->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_2180/*"AgeVerificationCumulativeAmount"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->SAVE_KEY_CUMULATIVE_AMOUNT, v7, v9, v10);
  v11 = sub_1C32CC8(string___TypeInfo, 4);
  if ( !v11 )
    sub_1C32E7C(0);
  v14 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_9;
  v15 = StringLiteral_1938/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v11 + 32) = StringLiteral_1938/*"AGE_VEIFICATION_NONE"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), v15, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u
    || (v18 = StringLiteral_1940/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v14 + 40) = StringLiteral_1940/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 40), v18, v16, v17),
        *(_DWORD *)(v14 + 24) <= 2u)
    || (v21 = StringLiteral_1941/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v14 + 48) = StringLiteral_1941/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 48), v21, v19, v20),
        *(_DWORD *)(v14 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C32E84(v11);
  }
  v24 = StringLiteral_1942/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v14 + 56) = StringLiteral_1942/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 56), v24, v22, v23);
  v25 = AgeVerificationMenu_TypeInfo->static_fields;
  v25->typeTextList = (struct System_String_array *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&v25->typeTextList, v14, v26, v27);
}


void AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C351A7 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C351A7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AgeVerificationMenu__Callback(AgeVerificationMenu_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct AgeVerificationMenu_CallbackFunc_o *v5; // x20
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
  }
}


void AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_37562816(this, 0, v2);
}


void AgeVerificationMenu__Close_37562816(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3519F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AgeVerificationMenu_EndClose__);
    byte_4C3519F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 5;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
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

  if ( (byte_4C35197 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C35197 = 1;
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
  AgeVerificationMenu_c *v8; // x8
  System_String_o *v9; // x22
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v12; // x0
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x24
  CommonConfirmDialog_ClickDelegate_o *v16; // x25

  if ( (byte_4C351A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_AgeVerificationMenu_OnEndConfirm__);
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_1936/*"AGE_VEIFICATION_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_1935/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_1933/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_1934/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/);
    byte_4C351A0 = 1;
  }
  this->fields.state = 3;
  this->fields.selectType = type;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1936/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1935/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0);
  v8 = AgeVerificationMenu_TypeInfo;
  v9 = v7;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v8 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v8->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_13;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= LODWORD(typeTextList->max_length) )
    sub_1C32E84(v7);
  v12 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0);
  v13 = System_String__Format(v9, v12, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1934/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1933/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0);
  v16 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v16, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_13:
    sub_1C32E7C(v7);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v6,
    v13,
    v14,
    v15,
    v16,
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

  if ( (byte_4C35198 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    byte_4C35198 = 1;
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
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AgeVerificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void AgeVerificationMenu__EndOpen(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t AgeVerificationMenu__GetAgeType(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0

  if ( (byte_4C35199 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    byte_4C35199 = 1;
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

  if ( (byte_4C3519B & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    byte_4C3519B = 1;
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

  if ( (byte_4C3519A & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    byte_4C3519A = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v1);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_C45CC0[AgeType];
}


void AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C3519D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3519D = 1;
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
    sub_1C32E7C(titleLabel);
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
  System_DateTime_o v8; // x0
  int32_t Year; // w19
  System_DateTime_o v10; // x0
  System_DateTime_o v11; // x0
  int32_t v12; // w19
  System_DateTime_o v13; // x0
  System_DateTime_o v14; // x0
  int32_t Month; // w19
  System_DateTime_o v16; // x0
  uint64_t v18; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C35195 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C35195 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  dateData = 0;
  v18 = 0;
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
               (System_String_o *)StringLiteral_1122/*"0"*/,
               0);
    v7 = System_Int64__Parse(String, 0);
    v18 = NetworkManager__getDateTime_41267668(v7, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v8.fields._dateData = (uint64_t)&v18;
    Year = System_DateTime__get_Year(v8, 0);
    v10.fields._dateData = (uint64_t)&dateData;
    if ( Year > System_DateTime__get_Year(v10, 0) )
    {
LABEL_6:
      LOBYTE(Int) = 1;
      return Int;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v11.fields._dateData = (uint64_t)&v18;
    v12 = System_DateTime__get_Year(v11, 0);
    v13.fields._dateData = (uint64_t)&dateData;
    if ( v12 == System_DateTime__get_Year(v13, 0) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v14.fields._dateData = (uint64_t)&v18;
      Month = System_DateTime__get_Month(v14, 0);
      v16.fields._dateData = (uint64_t)&dateData;
      LOBYTE(Int) = Month > System_DateTime__get_Month(v16, 0);
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

  if ( (byte_4C35196 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C35196 = 1;
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

  if ( (byte_4C351A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_AgeVerificationMenu_OnClickCancel__);
    byte_4C351A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_AgeVerificationMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    AgeVerificationMenu__Callback(this, -1, v5);
  }
}


void AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C351A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_AgeVerificationMenu_OnClickType1__);
    byte_4C351A2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType1__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_AgeVerificationMenu_OnClickType1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 1, v5);
  }
}


void AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C351A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_AgeVerificationMenu_OnClickType2__);
    byte_4C351A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType2__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_AgeVerificationMenu_OnClickType2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 2, v5);
  }
}


void AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C351A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_AgeVerificationMenu_OnClickType3__);
    byte_4C351A4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType3__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_AgeVerificationMenu_OnClickType3__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 3, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void AgeVerificationMenu__OnEndConfirm(AgeVerificationMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t selectType; // w20
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C351A1 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C351A1 = 1;
  }
  if ( result )
  {
    selectType = this->fields.selectType;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    AgeVerificationMenu__Concent(selectType, (const MethodInfo *)result);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
      AgeVerificationMenu__Callback(this, this->fields.selectType, v7);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  const MethodInfo *v3; // x3
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *type1Label; // x20
  __int64 v11; // x8
  struct System_String_array *typeTextList; // x8
  UILabel_o *type2Label; // x20
  struct System_String_array *v14; // x8
  UILabel_o *type3Label; // x20
  System_Action_o *v16; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4C3519E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AgeVerificationMenu_EndOpen__);
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1939/*"AGE_VEIFICATION_TITLE"*/);
    sub_1C32C20(&StringLiteral_1937/*"AGE_VEIFICATION_MESSAGE"*/);
    byte_4C3519E = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C32BC4((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)method, v3);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1939/*"AGE_VEIFICATION_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1937/*"AGE_VEIFICATION_MESSAGE"*/, 0);
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
          v11 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 24);
          if ( v11 )
          {
            if ( *(_DWORD *)(v11 + 24) <= 1u )
              goto LABEL_25;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v11 + 40), 0);
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
            v14 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v14 )
              goto LABEL_24;
            if ( LODWORD(v14->max_length) <= 3 )
LABEL_25:
              sub_1C32E84(gameObject);
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v14->m_Items[3], 0);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0);
              this->fields.state = 1;
              v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              System_Action___ctor(v16, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C32E7C(gameObject);
  }
}


void AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4C3519C & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    byte_4C3519C = 1;
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

  if ( (byte_4C35193 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_4C35193 = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  AgeVerificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *AgeVerificationMenu__get_closeBtnPath(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C351A6 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15641/*"Window/CloseButton"*/);
    byte_4C351A6 = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CloseButton"*/;
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

  if ( (byte_4C35194 & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_4C35194 = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  AgeVerificationMenu__IsConcent(v11);
}


void AgeVerificationMenu_CallbackFunc___ctor(
        AgeVerificationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A75138;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A750F0;
}


System_IAsyncResult_o *AgeVerificationMenu_CallbackFunc__BeginInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C351A9 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    byte_4C351A9 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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