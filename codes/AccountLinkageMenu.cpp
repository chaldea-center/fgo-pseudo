void __fastcall AccountLinkageMenu___ctor(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BF896D & 1) == 0 )
  {
    sub_1C2E12C(&BaseMenu_TypeInfo, method);
    byte_4BF896D = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall AccountLinkageMenu__Awake(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AccountLinkageMenu__Close(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  BaseMenu__Close((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall AccountLinkageMenu__InitView(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *messageLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *warningLabel; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4BF896B & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_1987/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, v3);
    sub_1C2E12C(&StringLiteral_1988/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, v4);
    byte_4BF896B = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1987/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v6, 0LL),
        warningLabel = this->fields.warningLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1988/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, 0LL),
        !warningLabel) )
  {
    sub_1C2E388(v6, v7);
  }
  UILabel__set_text(warningLabel, v6, 0LL);
  AccountLinkageMenu__UpdateView(this, v9);
}


void __fastcall AccountLinkageMenu__Open(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  AccountLinkageMenu__InitView(this, method);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall AccountLinkageMenu__UpdateView(AccountLinkageMenu_o *this, const MethodInfo *method)
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
  UILabel_o *linkageDateLabel; // x20
  __int64 SelfUserAccountLinkage; // x0
  __int64 v16; // x1
  int32_t type; // w21
  UILabel_o *linkageStatusLabel; // x20
  struct UILabel_o *v19; // x20
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *v23; // x20
  int64_t linkedAt; // x20
  const MethodInfo *v25; // x2
  struct UILabel_o *v26; // x19
  System_String_o *v27; // x20
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  struct UILabel_o *v30; // x20
  System_String_o *mText; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UILabel_o *linkageButtonLabel; // x20
  System_String_o *v35; // x0
  System_DateTimeOffset_o v36; // [xsp+8h] [xbp-48h] BYREF
  __int64 v37; // [xsp+18h] [xbp-38h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v39; // 0:x0.8
  System_DateTimeOffset_o v40; // 0:x0.16
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BF896C & 1) == 0 )
  {
    sub_1C2E12C(&AccountLinkageParams_TypeInfo, method);
    sub_1C2E12C(&System_DateTimeOffset_TypeInfo, v3);
    sub_1C2E12C(&System_DateTime_TypeInfo, v4);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_1978/*"ACCOUNT_LINKAGE_DATE"*/, v6);
    sub_1C2E12C(&StringLiteral_2007/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, v7);
    sub_1C2E12C(&StringLiteral_25352/*"yyyy/MM/dd"*/, v8);
    sub_1C2E12C(&StringLiteral_897/*"-"*/, v9);
    sub_1C2E12C(&StringLiteral_1973/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, v10);
    sub_1C2E12C(&StringLiteral_1972/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, v11);
    sub_1C2E12C(&StringLiteral_2008/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, v12);
    sub_1C2E12C(&StringLiteral_1990/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, v13);
    byte_4BF896C = 1;
  }
  entity = 0LL;
  v37 = 0LL;
  v36 = (System_DateTimeOffset_o)0LL;
  linkageDateLabel = this->fields.linkageDateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1978/*"ACCOUNT_LINKAGE_DATE"*/, 0LL);
  if ( !linkageDateLabel )
    goto LABEL_43;
  UILabel__set_text(linkageDateLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( (SelfUserAccountLinkage & 1) == 0 )
  {
    linkageStatusLabel = this->fields.linkageStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
LABEL_30:
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2008/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, 0LL);
    if ( !linkageStatusLabel )
      goto LABEL_43;
    UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
    if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
    {
      v30 = this->fields.linkageStatusLabel;
      if ( !v30 )
        goto LABEL_43;
      mText = v30->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_1990/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
      v33 = System_String__Concat_63235584(mText, v32, 0LL);
      UILabel__set_text(v30, v33, 0LL);
    }
    linkageButtonLabel = this->fields.linkageButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1973/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, 0LL);
    if ( linkageButtonLabel )
    {
      UILabel__set_text(linkageButtonLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
      SelfUserAccountLinkage = (__int64)this->fields.linkageButtonLabel;
      if ( SelfUserAccountLinkage )
      {
        v42.fields.r = 0.0;
        v42.fields.g = 0.0;
        v42.fields.b = 0.0;
        v42.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v42, 0LL);
        v26 = this->fields.linkageDateLabel;
        if ( v26 )
        {
          v29 = v26->fields.mText;
          v28 = (System_String_o *)StringLiteral_897/*"-"*/;
          goto LABEL_42;
        }
      }
    }
LABEL_43:
    sub_1C2E388(SelfUserAccountLinkage, v16);
  }
  if ( !entity )
    goto LABEL_43;
  type = entity->fields.type;
  linkageStatusLabel = this->fields.linkageStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( type != 1 )
    goto LABEL_30;
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2007/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, 0LL);
  if ( !linkageStatusLabel )
    goto LABEL_43;
  UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
  if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    v19 = this->fields.linkageStatusLabel;
    if ( !v19 )
      goto LABEL_43;
    v20 = v19->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_1990/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
    v22 = System_String__Concat_63235584(v20, v21, 0LL);
    UILabel__set_text(v19, v22, 0LL);
  }
  v23 = this->fields.linkageButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1972/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, 0LL);
  if ( !v23 )
    goto LABEL_43;
  UILabel__set_text(v23, (System_String_o *)SelfUserAccountLinkage, 0LL);
  SelfUserAccountLinkage = (__int64)this->fields.linkageButtonLabel;
  if ( !SelfUserAccountLinkage )
    goto LABEL_43;
  v41.fields.r = 1.0;
  v41.fields.g = 1.0;
  v41.fields.b = 1.0;
  v41.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v41, 0LL);
  if ( !entity )
    goto LABEL_43;
  linkedAt = entity->fields.linkedAt;
  if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
  v36 = System_DateTimeOffset__FromUnixTimeSeconds(linkedAt, 0LL);
  v40.fields._dateTime.fields._dateData = (uint64_t)&v36;
  *(_QWORD *)&v40.fields._offsetMinutes = 0LL;
  SelfUserAccountLinkage = System_DateTimeOffset__get_LocalDateTime(v40, v25).fields._dateData;
  v37 = SelfUserAccountLinkage;
  v26 = this->fields.linkageDateLabel;
  if ( !v26 )
    goto LABEL_43;
  v27 = v26->fields.mText;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v39.fields._dateData = (uint64_t)&v37;
  v28 = System_DateTime__ToString_63926556(v39, (System_String_o *)StringLiteral_25352/*"yyyy/MM/dd"*/, 0LL);
  v29 = v27;
LABEL_42:
  v35 = System_String__Concat_63235584(v29, v28, 0LL);
  UILabel__set_text(v26, v35, 0LL);
}