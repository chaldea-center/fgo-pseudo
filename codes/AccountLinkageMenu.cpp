void AccountLinkageMenu___ctor(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B6E5 & 1) == 0 )
  {
    sub_1C93AD4(&BaseMenu_TypeInfo);
    byte_4D2B6E5 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void AccountLinkageMenu__Awake(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  ;
}


void AccountLinkageMenu__Close(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  BaseMenu__Close((BaseMenu_o *)this, 0, 0);
}


void AccountLinkageMenu__InitView(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *warningLabel; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4D2B6E3 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1874/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_1875/*"ACCOUNT_LINKAGE_MENU_WARNING"*/);
    byte_4D2B6E3 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1874/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, 0);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v4, 0),
        warningLabel = this->fields.warningLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1875/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, 0),
        !warningLabel) )
  {
    sub_1C93D2C(v4, v5);
  }
  UILabel__set_text(warningLabel, v4, 0);
  AccountLinkageMenu__UpdateView(this, v7);
}


void AccountLinkageMenu__Open(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  AccountLinkageMenu__InitView(this, method);
  BaseMenu__Open((BaseMenu_o *)this, 0, 0);
}


void AccountLinkageMenu__UpdateView(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  UILabel_o *linkageDateLabel; // x20
  uint64_t SelfUserAccountLinkage; // x0
  __int64 v5; // x1
  int32_t type; // w21
  UILabel_o *linkageStatusLabel; // x20
  struct UILabel_o *v8; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  UILabel_o *v12; // x20
  int64_t linkedAt; // x20
  const MethodInfo *v14; // x2
  struct UILabel_o *v15; // x19
  System_String_o *v16; // x20
  System_String_o *v17; // x1
  System_String_o *v18; // x0
  struct UILabel_o *v19; // x20
  System_String_o *mText; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *linkageButtonLabel; // x20
  System_String_o *v24; // x0
  System_DateTimeOffset_o v25; // [xsp+8h] [xbp-48h] BYREF
  uint64_t v26; // [xsp+18h] [xbp-38h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  System_DateTimeOffset_o v28; // 0:x0.16
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2B6E4 & 1) == 0 )
  {
    sub_1C93AD4(&AccountLinkageParams_TypeInfo);
    sub_1C93AD4(&System_DateTimeOffset_TypeInfo);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1865/*"ACCOUNT_LINKAGE_DATE"*/);
    sub_1C93AD4(&StringLiteral_1894/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/);
    sub_1C93AD4(&StringLiteral_25326/*"yyyy/MM/dd"*/);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_1860/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/);
    sub_1C93AD4(&StringLiteral_1859/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/);
    sub_1C93AD4(&StringLiteral_1895/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/);
    sub_1C93AD4(&StringLiteral_1877/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/);
    byte_4D2B6E4 = 1;
  }
  entity = 0;
  *(_QWORD *)&v25.fields._offsetMinutes = 0;
  v26 = 0;
  v25.fields._dateTime.fields._dateData = 0;
  linkageDateLabel = this->fields.linkageDateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1865/*"ACCOUNT_LINKAGE_DATE"*/, 0);
  if ( !linkageDateLabel )
    goto LABEL_43;
  UILabel__set_text(linkageDateLabel, (System_String_o *)SelfUserAccountLinkage, 0);
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0);
  if ( (SelfUserAccountLinkage & 1) == 0 )
  {
    linkageStatusLabel = this->fields.linkageStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_30:
    SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1895/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, 0);
    if ( !linkageStatusLabel )
      goto LABEL_43;
    UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0);
    if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
    {
      v19 = this->fields.linkageStatusLabel;
      if ( !v19 )
        goto LABEL_43;
      mText = v19->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_1877/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0);
      v22 = System_String__Concat_64425724(mText, v21, 0);
      UILabel__set_text(v19, v22, 0);
    }
    linkageButtonLabel = this->fields.linkageButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1860/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, 0);
    if ( linkageButtonLabel )
    {
      UILabel__set_text(linkageButtonLabel, (System_String_o *)SelfUserAccountLinkage, 0);
      SelfUserAccountLinkage = (uint64_t)this->fields.linkageButtonLabel;
      if ( SelfUserAccountLinkage )
      {
        v30.fields.r = 0.0;
        v30.fields.g = 0.0;
        v30.fields.b = 0.0;
        v30.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v30, 0);
        v15 = this->fields.linkageDateLabel;
        if ( v15 )
        {
          v18 = v15->fields.mText;
          v17 = (System_String_o *)StringLiteral_859/*"-"*/;
          goto LABEL_42;
        }
      }
    }
LABEL_43:
    sub_1C93D2C(SelfUserAccountLinkage, v5);
  }
  if ( !entity )
    goto LABEL_43;
  type = entity->fields.type;
  linkageStatusLabel = this->fields.linkageStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( type != 1 )
    goto LABEL_30;
  SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1894/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, 0);
  if ( !linkageStatusLabel )
    goto LABEL_43;
  UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0);
  if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    v8 = this->fields.linkageStatusLabel;
    if ( !v8 )
      goto LABEL_43;
    v9 = v8->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1877/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0);
    v11 = System_String__Concat_64425724(v9, v10, 0);
    UILabel__set_text(v8, v11, 0);
  }
  v12 = this->fields.linkageButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1859/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, 0);
  if ( !v12 )
    goto LABEL_43;
  UILabel__set_text(v12, (System_String_o *)SelfUserAccountLinkage, 0);
  SelfUserAccountLinkage = (uint64_t)this->fields.linkageButtonLabel;
  if ( !SelfUserAccountLinkage )
    goto LABEL_43;
  v29.fields.r = 1.0;
  v29.fields.g = 1.0;
  v29.fields.b = 1.0;
  v29.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v29, 0);
  if ( !entity )
    goto LABEL_43;
  linkedAt = entity->fields.linkedAt;
  if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
  v25 = System_DateTimeOffset__FromUnixTimeSeconds(linkedAt, 0);
  v28.fields._dateTime.fields._dateData = (uint64_t)&v25;
  *(_QWORD *)&v28.fields._offsetMinutes = 0;
  SelfUserAccountLinkage = System_DateTimeOffset__get_LocalDateTime(v28, v14).fields._dateData;
  v26 = SelfUserAccountLinkage;
  v15 = this->fields.linkageDateLabel;
  if ( !v15 )
    goto LABEL_43;
  v16 = v15->fields.mText;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v17 = System_DateTime__ToString_65823908((System_DateTime_o)&v26, (System_String_o *)StringLiteral_25326/*"yyyy/MM/dd"*/, 0);
  v18 = v16;
LABEL_42:
  v24 = System_String__Concat_64425724(v18, v17, 0);
  UILabel__set_text(v15, v24, 0);
}