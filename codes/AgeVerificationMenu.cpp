void __fastcall AgeVerificationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct AgeVerificationMenu_StaticFields *static_fields; // x0
  __int64 v11; // x1
  struct AgeVerificationMenu_StaticFields *v12; // x0
  __int64 v13; // x1
  struct AgeVerificationMenu_StaticFields *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_String_array *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct AgeVerificationMenu_StaticFields *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_4185A50 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v1);
    sub_B2C35C(&string___TypeInfo, v2);
    sub_B2C35C(&StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/, v3);
    sub_B2C35C(&StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/, v4);
    sub_B2C35C(&StringLiteral_1872/*"AgeVerificationType"*/, v5);
    sub_B2C35C(&StringLiteral_1871/*"AgeVerificationExpirationDate"*/, v6);
    sub_B2C35C(&StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/, v7);
    sub_B2C35C(&StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/, v8);
    sub_B2C35C(&StringLiteral_1870/*"AgeVerificationCumulativeAmount"*/, v9);
    byte_4185A50 = 1;
  }
  static_fields = AgeVerificationMenu_TypeInfo->static_fields;
  v11 = StringLiteral_1872/*"AgeVerificationType"*/;
  static_fields->SAVE_KEY_TYPE = (struct System_String_o *)StringLiteral_1872/*"AgeVerificationType"*/;
  sub_B2C2F8(static_fields, v11);
  v12 = AgeVerificationMenu_TypeInfo->static_fields;
  v13 = StringLiteral_1871/*"AgeVerificationExpirationDate"*/;
  v12->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_1871/*"AgeVerificationExpirationDate"*/;
  sub_B2C2F8(&v12->SAVE_KEY_EXPIRATION_DATE, v13);
  v14 = AgeVerificationMenu_TypeInfo->static_fields;
  v15 = StringLiteral_1870/*"AgeVerificationCumulativeAmount"*/;
  v14->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_1870/*"AgeVerificationCumulativeAmount"*/;
  sub_B2C2F8(&v14->SAVE_KEY_CUMULATIVE_AMOUNT, v15);
  v16 = sub_B2C374(string___TypeInfo, 4LL);
  if ( !v16 )
    sub_B2C434(0LL, v17);
  v18 = (struct System_String_array *)v16;
  v19 = StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/;
  if ( StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/ )
  {
    v19 = sub_B2C41C(StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_26;
    v20 = StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v18->max_length )
    goto LABEL_25;
  v18->m_Items[0] = (System_String_o *)v20;
  sub_B2C2F8(v18->m_Items, v20);
  v19 = StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/;
  if ( StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/ )
  {
    v19 = sub_B2C41C(StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_26;
    v21 = StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_25;
  v18->m_Items[1] = (System_String_o *)v21;
  sub_B2C2F8(&v18->m_Items[1], v21);
  v19 = StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/;
  if ( StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/ )
  {
    v19 = sub_B2C41C(StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_26;
    v22 = StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_25;
  v18->m_Items[2] = (System_String_o *)v22;
  sub_B2C2F8(&v18->m_Items[2], v22);
  v19 = StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/;
  if ( StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/ )
  {
    v19 = sub_B2C41C(StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/, v18->obj.klass->_1.element_class);
    if ( v19 )
    {
      v23 = StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/;
      goto LABEL_23;
    }
LABEL_26:
    v26 = sub_B2C454();
    sub_B2C400(v26, 0LL);
  }
  v23 = 0LL;
LABEL_23:
  if ( v18->max_length <= 3 )
  {
LABEL_25:
    v25 = sub_B2C460(v19);
    sub_B2C400(v25, 0LL);
  }
  v18->m_Items[3] = (System_String_o *)v23;
  sub_B2C2F8(&v18->m_Items[3], v23);
  v24 = AgeVerificationMenu_TypeInfo->static_fields;
  v24->typeTextList = v18;
  sub_B2C2F8(&v24->typeTextList, v18);
}


void __fastcall AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4185A4F & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4185A4F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AgeVerificationMenu__Callback(AgeVerificationMenu_o *this, int32_t result, const MethodInfo *method)
{
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x0
  AgeVerificationMenu_CallbackFunc_o *v4; // x20
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL);
    AgeVerificationMenu_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_21161552(this, 0LL, v2);
}


void __fastcall AgeVerificationMenu__Close_21161552(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4185A47 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_AgeVerificationMenu_EndClose__, v5);
    byte_4185A47 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185A3F & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, method);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_4185A3F = 1;
  }
  v11 = 0LL;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = AgeVerificationMenu_TypeInfo;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    if ( !AgeVerificationMenu__IsConcent((const MethodInfo *)v6) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      NextMonthTime = NetworkManager__getNextMonthTime(0LL);
      v8 = AgeVerificationMenu_TypeInfo;
      v11 = NextMonthTime;
      if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
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
  CommonUI_o *Instance; // x20
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x22
  AgeVerificationMenu_c *v19; // x8
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  CommonConfirmDialog_ClickDelegate_o *v26; // x25
  __int64 v27; // x0

  if ( (byte_4185A48 & 1) == 0 )
  {
    sub_B2C35C(&Method_AgeVerificationMenu_OnEndConfirm__, *(_QWORD *)&type);
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v5);
    sub_B2C35C(&BalanceConfig_TypeInfo, v6);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_1668/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, v10);
    sub_B2C35C(&StringLiteral_1667/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, v11);
    sub_B2C35C(&StringLiteral_1665/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, v12);
    sub_B2C35C(&StringLiteral_1666/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, v13);
    byte_4185A48 = 1;
  }
  this->fields.selectType = type;
  this->fields.state = 3;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1668/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_1667/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0LL);
  v18 = v16;
  v19 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v19 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v19->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_16;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= typeTextList->max_length )
  {
    v27 = sub_B2C460(v16);
    sub_B2C400(v27, 0LL);
  }
  v22 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0LL);
  v23 = System_String__Format(v18, v22, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_1666/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1665/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0LL);
  v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v26, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0LL);
  v16 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
LABEL_16:
    sub_B2C434(v16, v17);
  CommonUI__OpenConfirmDecideDlg(
    Instance,
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
    0LL);
}


void __fastcall AgeVerificationMenu__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AgeVerificationMenu_c *v2; // x0

  if ( (byte_4185A40 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v1);
    byte_4185A40 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
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
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AgeVerificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
    System_Action__Invoke(v4, 0LL);
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

  if ( (byte_4185A41 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v1);
    byte_4185A41 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4185A43 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v1);
    byte_4185A43 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4185A42 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v1);
    byte_4185A42 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v2);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_319FB34[AgeType];
}


void __fastcall AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4185A45 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4185A45 = 1;
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
    sub_B2C434(titleLabel, method);
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
  ManagerConfig_c *v5; // x0
  int32_t Int; // w0
  AgeVerificationMenu_c *v7; // x0
  System_DateTime_o v8; // x0
  AgeVerificationMenu_c *v9; // x8
  System_String_o *String; // x0
  int64_t v11; // x0
  int32_t Year; // w19
  int32_t v13; // w19
  int32_t Month; // w19
  uint64_t v16; // [xsp+8h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8

  if ( (byte_4185A3D & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v1);
    sub_B2C35C(&ManagerConfig_TypeInfo, v2);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v4);
    byte_4185A3D = 1;
  }
  dateData = 0LL;
  v16 = 0LL;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    goto LABEL_7;
  v7 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v7 = AgeVerificationMenu_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v7->static_fields->SAVE_KEY_TYPE, 0, 0LL);
  if ( Int )
  {
    if ( Int > 2 )
      goto LABEL_7;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v8.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v9 = AgeVerificationMenu_TypeInfo;
    dateData = v8.fields.dateData;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      v9 = AgeVerificationMenu_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v9->static_fields->SAVE_KEY_EXPIRATION_DATE,
               (System_String_o *)StringLiteral_953/*"0"*/,
               0LL);
    v11 = System_Int64__Parse(String, 0LL);
    v16 = NetworkManager__getDateTime_26271468(v11, 0LL).fields.dateData;
    v18.fields.dateData = (uint64_t)&v16;
    Year = System_DateTime__get_Year(v18, 0LL);
    v19.fields.dateData = (uint64_t)&dateData;
    if ( Year > System_DateTime__get_Year(v19, 0LL) )
    {
LABEL_7:
      LOBYTE(Int) = 1;
      return Int;
    }
    v20.fields.dateData = (uint64_t)&v16;
    v13 = System_DateTime__get_Year(v20, 0LL);
    v21.fields.dateData = (uint64_t)&dateData;
    if ( v13 == System_DateTime__get_Year(v21, 0LL) )
    {
      v22.fields.dateData = (uint64_t)&v16;
      Month = System_DateTime__get_Month(v22, 0LL);
      v23.fields.dateData = (uint64_t)&dateData;
      LOBYTE(Int) = Month > System_DateTime__get_Month(v23, 0LL);
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

  if ( (byte_4185A3E & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v1);
    sub_B2C35C(&ManagerConfig_TypeInfo, v2);
    byte_4185A3E = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v5 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v5 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY_TYPE, 0, 0LL) == 0;
}


void __fastcall AgeVerificationMenu__OnClickCancel(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185A4D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185A4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    AgeVerificationMenu__Callback(this, -1, v3);
  }
}


void __fastcall AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185A4A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185A4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 1, v3);
  }
}


void __fastcall AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185A4B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185A4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 2, v3);
  }
}


void __fastcall AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185A4C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185A4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 3, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu__OnEndConfirm(AgeVerificationMenu_o *this, bool result, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t selectType; // w21
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4185A49 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4185A49 = 1;
  }
  if ( result )
  {
    selectType = this->fields.selectType;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    AgeVerificationMenu__Concent(selectType, (const MethodInfo *)result);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( result )
    AgeVerificationMenu__Callback(this, this->fields.selectType, v9);
  else
    this->fields.state = 2;
}


void __fastcall AgeVerificationMenu__Open(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  __int64 v23; // x0

  if ( (byte_4185A46 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_AgeVerificationMenu_EndOpen__, v5);
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1671/*"AGE_VEIFICATION_TITLE"*/, v8);
    sub_B2C35C(&StringLiteral_1669/*"AGE_VEIFICATION_MESSAGE"*/, v9);
    byte_4185A46 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B2C2F8(p_callbackFunc, callback);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1671/*"AGE_VEIFICATION_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1669/*"AGE_VEIFICATION_MESSAGE"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
          type1Label = this->fields.type1Label;
          gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          }
          v16 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 24LL);
          if ( v16 )
          {
            if ( *(_DWORD *)(v16 + 24) <= 1u )
              goto LABEL_27;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v16 + 40), 0LL);
            if ( !type1Label )
              goto LABEL_26;
            UILabel__set_text(type1Label, (System_String_o *)gameObject, 0LL);
            typeTextList = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !typeTextList )
              goto LABEL_26;
            if ( typeTextList->max_length <= 2 )
              goto LABEL_27;
            type2Label = this->fields.type2Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(typeTextList->m_Items[2], 0LL);
            if ( !type2Label )
              goto LABEL_26;
            UILabel__set_text(type2Label, (System_String_o *)gameObject, 0LL);
            v19 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v19 )
              goto LABEL_26;
            if ( v19->max_length <= 3 )
            {
LABEL_27:
              v23 = sub_B2C460(gameObject);
              sub_B2C400(v23, 0LL);
            }
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19->m_Items[3], 0LL);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0LL);
              this->fields.state = 1;
              v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(v21, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(gameObject, v12);
  }
}


void __fastcall AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_4185A44 & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, method);
    byte_4185A44 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4185A3B & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_CallbackFunc_TypeInfo, value);
    byte_4185A3B = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AgeVerificationMenu_o *)sub_B2C728(v8);
  AgeVerificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall AgeVerificationMenu__get_closeBtnPath(
        AgeVerificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185A4E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15479/*"Window/CloseButton"*/, method);
    byte_4185A4E = 1;
  }
  return (System_String_o *)StringLiteral_15479/*"Window/CloseButton"*/;
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

  if ( (byte_4185A3C & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_CallbackFunc_TypeInfo, value);
    byte_4185A3C = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_B2C728(v8);
  AgeVerificationMenu__IsConcent(v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu_CallbackFunc___ctor(
        AgeVerificationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall AgeVerificationMenu_CallbackFunc__BeginInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_4186B99 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    byte_4186B99 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu_CallbackFunc__Invoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  AgeVerificationMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  AgeVerificationMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  AgeVerificationMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (AgeVerificationMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)result, v22);
    goto LABEL_37;
  }
}