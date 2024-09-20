void __fastcall AccountLinkageMenu___ctor(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A56630 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A56630 = 1;
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
  UILabel_o *messageLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *warningLabel; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4A5662E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2006/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_2007/*"ACCOUNT_LINKAGE_MENU_WARNING"*/);
    byte_4A5662E = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2006/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v4, 0LL),
        warningLabel = this->fields.warningLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2007/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, 0LL),
        !warningLabel) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(warningLabel, v4, 0LL);
  AccountLinkageMenu__UpdateView(this, v7);
}


void __fastcall AccountLinkageMenu__Open(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  AccountLinkageMenu__InitView(this, method);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall AccountLinkageMenu__UpdateView(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  UILabel_o *linkageDateLabel; // x20
  __int64 SelfUserAccountLinkage; // x0
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
  __int64 v26; // [xsp+18h] [xbp-38h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v28; // 0:x0.8
  System_DateTimeOffset_o v29; // 0:x0.16
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5662F & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&System_DateTimeOffset_TypeInfo);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1997/*"ACCOUNT_LINKAGE_DATE"*/);
    sub_1B885B0(&StringLiteral_2026/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/);
    sub_1B885B0(&StringLiteral_24884/*"yyyy/MM/dd"*/);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_1992/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/);
    sub_1B885B0(&StringLiteral_1991/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/);
    sub_1B885B0(&StringLiteral_2027/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/);
    sub_1B885B0(&StringLiteral_2009/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/);
    byte_4A5662F = 1;
  }
  entity = 0LL;
  v26 = 0LL;
  v25 = (System_DateTimeOffset_o)0LL;
  linkageDateLabel = this->fields.linkageDateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1997/*"ACCOUNT_LINKAGE_DATE"*/, 0LL);
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
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2027/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, 0LL);
    if ( !linkageStatusLabel )
      goto LABEL_43;
    UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
    if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
    {
      v19 = this->fields.linkageStatusLabel;
      if ( !v19 )
        goto LABEL_43;
      mText = v19->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2009/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
      v22 = System_String__Concat_61707032(mText, v21, 0LL);
      UILabel__set_text(v19, v22, 0LL);
    }
    linkageButtonLabel = this->fields.linkageButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1992/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, 0LL);
    if ( linkageButtonLabel )
    {
      UILabel__set_text(linkageButtonLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
      SelfUserAccountLinkage = (__int64)this->fields.linkageButtonLabel;
      if ( SelfUserAccountLinkage )
      {
        v31.fields.r = 0.0;
        v31.fields.g = 0.0;
        v31.fields.b = 0.0;
        v31.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v31, 0LL);
        v15 = this->fields.linkageDateLabel;
        if ( v15 )
        {
          v18 = v15->fields.mText;
          v17 = (System_String_o *)StringLiteral_919/*"-"*/;
          goto LABEL_42;
        }
      }
    }
LABEL_43:
    sub_1B8880C(SelfUserAccountLinkage, v5);
  }
  if ( !entity )
    goto LABEL_43;
  type = entity->fields.type;
  linkageStatusLabel = this->fields.linkageStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( type != 1 )
    goto LABEL_30;
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2026/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, 0LL);
  if ( !linkageStatusLabel )
    goto LABEL_43;
  UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
  if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    v8 = this->fields.linkageStatusLabel;
    if ( !v8 )
      goto LABEL_43;
    v9 = v8->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2009/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
    v11 = System_String__Concat_61707032(v9, v10, 0LL);
    UILabel__set_text(v8, v11, 0LL);
  }
  v12 = this->fields.linkageButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1991/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, 0LL);
  if ( !v12 )
    goto LABEL_43;
  UILabel__set_text(v12, (System_String_o *)SelfUserAccountLinkage, 0LL);
  SelfUserAccountLinkage = (__int64)this->fields.linkageButtonLabel;
  if ( !SelfUserAccountLinkage )
    goto LABEL_43;
  v30.fields.r = 1.0;
  v30.fields.g = 1.0;
  v30.fields.b = 1.0;
  v30.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v30, 0LL);
  if ( !entity )
    goto LABEL_43;
  linkedAt = entity->fields.linkedAt;
  if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
  v25 = System_DateTimeOffset__FromUnixTimeSeconds(linkedAt, 0LL);
  v29.fields._dateTime.fields._dateData = (uint64_t)&v25;
  *(_QWORD *)&v29.fields._offsetMinutes = 0LL;
  SelfUserAccountLinkage = System_DateTimeOffset__get_LocalDateTime(v29, v14).fields._dateData;
  v26 = SelfUserAccountLinkage;
  v15 = this->fields.linkageDateLabel;
  if ( !v15 )
    goto LABEL_43;
  v16 = v15->fields.mText;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v28.fields._dateData = (uint64_t)&v26;
  v17 = System_DateTime__ToString_62397676(v28, (System_String_o *)StringLiteral_24884/*"yyyy/MM/dd"*/, 0LL);
  v18 = v16;
LABEL_42:
  v24 = System_String__Concat_61707032(v18, v17, 0LL);
  UILabel__set_text(v15, v24, 0LL);
}