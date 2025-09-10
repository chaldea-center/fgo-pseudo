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
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x19
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  struct AgeVerificationMenu_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C24BB3 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1941/*"AGE_VEIFICATION_TYPE3"*/);
    sub_1C2D490(&StringLiteral_1937/*"AGE_VEIFICATION_NONE"*/);
    sub_1C2D490(&StringLiteral_2179/*"AgeVerificationType"*/);
    sub_1C2D490(&StringLiteral_2178/*"AgeVerificationExpirationDate"*/);
    sub_1C2D490(&StringLiteral_1939/*"AGE_VEIFICATION_TYPE1"*/);
    sub_1C2D490(&StringLiteral_1940/*"AGE_VEIFICATION_TYPE2"*/);
    sub_1C2D490(&StringLiteral_2177/*"AgeVerificationCumulativeAmount"*/);
    byte_4C24BB3 = 1;
  }
  AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_TYPE = (struct System_String_o *)StringLiteral_2179/*"AgeVerificationType"*/;
  sub_1C2D434((CGThumbnailListItem_o *)AgeVerificationMenu_TypeInfo->static_fields, StringLiteral_2179/*"AgeVerificationType"*/, v1, v2);
  v3 = StringLiteral_2178/*"AgeVerificationExpirationDate"*/;
  static_fields = AgeVerificationMenu_TypeInfo->static_fields;
  static_fields->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_2178/*"AgeVerificationExpirationDate"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->SAVE_KEY_EXPIRATION_DATE, v3, v5, v6);
  v7 = StringLiteral_2177/*"AgeVerificationCumulativeAmount"*/;
  v8 = AgeVerificationMenu_TypeInfo->static_fields;
  v8->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_2177/*"AgeVerificationCumulativeAmount"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->SAVE_KEY_CUMULATIVE_AMOUNT, v7, v9, v10);
  v11 = sub_1C2D538(string___TypeInfo, 4);
  if ( !v11 )
    sub_1C2D6EC(0, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_9;
  v16 = StringLiteral_1937/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v11 + 32) = StringLiteral_1937/*"AGE_VEIFICATION_NONE"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), v16, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u
    || (v18 = StringLiteral_1939/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v15 + 40) = StringLiteral_1939/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 40), v18, v13, v17),
        *(_DWORD *)(v15 + 24) <= 2u)
    || (v20 = StringLiteral_1940/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v15 + 48) = StringLiteral_1940/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 48), v20, v13, v19),
        *(_DWORD *)(v15 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C2D6F4(v11, v12, v13);
  }
  v22 = StringLiteral_1941/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v15 + 56) = StringLiteral_1941/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 56), v22, v13, v21);
  v23 = AgeVerificationMenu_TypeInfo->static_fields;
  v23->typeTextList = (struct System_String_array *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&v23->typeTextList, v15, v24, v25);
}


void AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C24BB2 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C24BB2 = 1;
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
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
  }
}


void AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_37539000(this, 0, v2);
}


void AgeVerificationMenu__Close_37539000(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C24BAA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AgeVerificationMenu_EndClose__);
    byte_4C24BAA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 5;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  if ( (byte_4C24BA2 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C24BA2 = 1;
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
  __int64 v9; // x2
  AgeVerificationMenu_c *v10; // x8
  System_String_o *v11; // x22
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x24
  CommonConfirmDialog_ClickDelegate_o *v18; // x25

  if ( (byte_4C24BAB & 1) == 0 )
  {
    sub_1C2D490(&Method_AgeVerificationMenu_OnEndConfirm__);
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_1935/*"AGE_VEIFICATION_CONFIRM_TITLE"*/);
    sub_1C2D490(&StringLiteral_1934/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_1932/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_1933/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/);
    byte_4C24BAB = 1;
  }
  this->fields.state = 3;
  this->fields.selectType = type;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1935/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1934/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0);
  v10 = AgeVerificationMenu_TypeInfo;
  v11 = v7;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v10 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v10->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_13;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= LODWORD(typeTextList->max_length) )
    sub_1C2D6F4(v7, v8, v9);
  v14 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0);
  v15 = System_String__Format(v11, v14, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_1933/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_1932/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_13:
    sub_1C2D6EC(v7, v8);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v6,
    v15,
    v16,
    v17,
    v18,
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

  if ( (byte_4C24BA3 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    byte_4C24BA3 = 1;
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
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4C24BA4 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    byte_4C24BA4 = 1;
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

  if ( (byte_4C24BA6 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    byte_4C24BA6 = 1;
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

  if ( (byte_4C24BA5 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    byte_4C24BA5 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v1);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_C42864[AgeType];
}


void AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C24BA8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24BA8 = 1;
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
    sub_1C2D6EC(titleLabel, method);
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

  if ( (byte_4C24BA0 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&System_DateTime_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    byte_4C24BA0 = 1;
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
    v18 = NetworkManager__getDateTime_41145724(v7, 0).fields._dateData;
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

  if ( (byte_4C24BA1 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    byte_4C24BA1 = 1;
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

  if ( (byte_4C24BB0 & 1) == 0 )
  {
    sub_1C2D490(&Method_AgeVerificationMenu_OnClickCancel__);
    byte_4C24BB0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_AgeVerificationMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    AgeVerificationMenu__Callback(this, -1, v5);
  }
}


void AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C24BAD & 1) == 0 )
  {
    sub_1C2D490(&Method_AgeVerificationMenu_OnClickType1__);
    byte_4C24BAD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType1__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_AgeVerificationMenu_OnClickType1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 1, v5);
  }
}


void AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C24BAE & 1) == 0 )
  {
    sub_1C2D490(&Method_AgeVerificationMenu_OnClickType2__);
    byte_4C24BAE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType2__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_AgeVerificationMenu_OnClickType2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 2, v5);
  }
}


void AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C24BAF & 1) == 0 )
  {
    sub_1C2D490(&Method_AgeVerificationMenu_OnClickType3__);
    byte_4C24BAF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType3__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_AgeVerificationMenu_OnClickType3__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C24BAC & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C24BAC = 1;
  }
  if ( result )
  {
    selectType = this->fields.selectType;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    AgeVerificationMenu__Concent(selectType, (const MethodInfo *)result);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
      AgeVerificationMenu__Callback(this, this->fields.selectType, v8);
      return;
    }
LABEL_10:
    sub_1C2D6EC(Instance, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v8; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  __int64 v11; // x2
  UILabel_o *type1Label; // x20
  __int64 v13; // x8
  struct System_String_array *typeTextList; // x8
  UILabel_o *type2Label; // x20
  struct System_String_array *v16; // x8
  UILabel_o *type3Label; // x20
  System_Action_o *v18; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4C24BA9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AgeVerificationMenu_EndOpen__);
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1938/*"AGE_VEIFICATION_TITLE"*/);
    sub_1C2D490(&StringLiteral_1936/*"AGE_VEIFICATION_MESSAGE"*/);
    byte_4C24BA9 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C2D434((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)method, v3);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1938/*"AGE_VEIFICATION_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1936/*"AGE_VEIFICATION_MESSAGE"*/, 0);
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
          v13 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 24);
          if ( v13 )
          {
            if ( *(_DWORD *)(v13 + 24) <= 1u )
              goto LABEL_25;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v13 + 40), 0);
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
            v16 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v16 )
              goto LABEL_24;
            if ( LODWORD(v16->max_length) <= 3 )
LABEL_25:
              sub_1C2D6F4(gameObject, v8, v11);
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v16->m_Items[3], 0);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0);
              this->fields.state = 1;
              v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(v18, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C2D6EC(gameObject, v8);
  }
}


void AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4C24BA7 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    byte_4C24BA7 = 1;
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

  if ( (byte_4C24B9E & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_4C24B9E = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  AgeVerificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *AgeVerificationMenu__get_closeBtnPath(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C24BB1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15640/*"Window/CloseButton"*/);
    byte_4C24BB1 = 1;
  }
  return (System_String_o *)StringLiteral_15640/*"Window/CloseButton"*/;
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

  if ( (byte_4C24B9F & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_4C24B9F = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6FB3C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6FAF4;
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
  if ( (byte_4C24BB4 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C24BB4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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