void __fastcall AccountLinkageMenu___ctor(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F7973 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F7973 = 1;
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
  UILabel_o *warningLabel; // x20
  const MethodInfo *v8; // x1

  if ( (byte_49F7971 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_2008/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, v3);
    sub_1B640C8(&StringLiteral_2009/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, v4);
    byte_49F7971 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2008/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v6, 0LL),
        warningLabel = this->fields.warningLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2009/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, 0LL),
        !warningLabel) )
  {
    sub_1B64324(v6);
  }
  UILabel__set_text(warningLabel, v6, 0LL);
  AccountLinkageMenu__UpdateView(this, v8);
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
  int32_t type; // w21
  UILabel_o *linkageStatusLabel; // x20
  struct UILabel_o *v18; // x20
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  UILabel_o *v22; // x20
  int64_t linkedAt; // x20
  const MethodInfo *v24; // x2
  struct UILabel_o *v25; // x19
  System_String_o *v26; // x20
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  struct UILabel_o *v29; // x20
  System_String_o *mText; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *linkageButtonLabel; // x20
  System_String_o *v34; // x0
  System_DateTimeOffset_o v35; // [xsp+8h] [xbp-48h] BYREF
  __int64 v36; // [xsp+18h] [xbp-38h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v38; // 0:x0.8
  System_DateTimeOffset_o v39; // 0:x0.16
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F7972 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams_TypeInfo, method);
    sub_1B640C8(&System_DateTimeOffset_TypeInfo, v3);
    sub_1B640C8(&System_DateTime_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1999/*"ACCOUNT_LINKAGE_DATE"*/, v6);
    sub_1B640C8(&StringLiteral_2028/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, v7);
    sub_1B640C8(&StringLiteral_24785/*"yyyy/MM/dd"*/, v8);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v9);
    sub_1B640C8(&StringLiteral_1994/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, v10);
    sub_1B640C8(&StringLiteral_1993/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, v11);
    sub_1B640C8(&StringLiteral_2029/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, v12);
    sub_1B640C8(&StringLiteral_2011/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, v13);
    byte_49F7972 = 1;
  }
  entity = 0LL;
  v36 = 0LL;
  v35 = (System_DateTimeOffset_o)0LL;
  linkageDateLabel = this->fields.linkageDateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1999/*"ACCOUNT_LINKAGE_DATE"*/, 0LL);
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
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2029/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, 0LL);
    if ( !linkageStatusLabel )
      goto LABEL_43;
    UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
    if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
    {
      v29 = this->fields.linkageStatusLabel;
      if ( !v29 )
        goto LABEL_43;
      mText = v29->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2011/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
      v32 = System_String__Concat_61375396(mText, v31, 0LL);
      UILabel__set_text(v29, v32, 0LL);
    }
    linkageButtonLabel = this->fields.linkageButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1994/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, 0LL);
    if ( linkageButtonLabel )
    {
      UILabel__set_text(linkageButtonLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
      SelfUserAccountLinkage = (__int64)this->fields.linkageButtonLabel;
      if ( SelfUserAccountLinkage )
      {
        v41.fields.r = 0.0;
        v41.fields.g = 0.0;
        v41.fields.b = 0.0;
        v41.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v41, 0LL);
        v25 = this->fields.linkageDateLabel;
        if ( v25 )
        {
          v28 = v25->fields.mText;
          v27 = (System_String_o *)StringLiteral_920/*"-"*/;
          goto LABEL_42;
        }
      }
    }
LABEL_43:
    sub_1B64324(SelfUserAccountLinkage);
  }
  if ( !entity )
    goto LABEL_43;
  type = entity->fields.type;
  linkageStatusLabel = this->fields.linkageStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( type != 1 )
    goto LABEL_30;
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2028/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, 0LL);
  if ( !linkageStatusLabel )
    goto LABEL_43;
  UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
  if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    v18 = this->fields.linkageStatusLabel;
    if ( !v18 )
      goto LABEL_43;
    v19 = v18->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2011/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
    v21 = System_String__Concat_61375396(v19, v20, 0LL);
    UILabel__set_text(v18, v21, 0LL);
  }
  v22 = this->fields.linkageButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1993/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, 0LL);
  if ( !v22 )
    goto LABEL_43;
  UILabel__set_text(v22, (System_String_o *)SelfUserAccountLinkage, 0LL);
  SelfUserAccountLinkage = (__int64)this->fields.linkageButtonLabel;
  if ( !SelfUserAccountLinkage )
    goto LABEL_43;
  v40.fields.r = 1.0;
  v40.fields.g = 1.0;
  v40.fields.b = 1.0;
  v40.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v40, 0LL);
  if ( !entity )
    goto LABEL_43;
  linkedAt = entity->fields.linkedAt;
  if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
  v35 = System_DateTimeOffset__FromUnixTimeSeconds(linkedAt, 0LL);
  v39.fields._dateTime.fields._dateData = (uint64_t)&v35;
  *(_QWORD *)&v39.fields._offsetMinutes = 0LL;
  SelfUserAccountLinkage = System_DateTimeOffset__get_LocalDateTime(v39, v24).fields._dateData;
  v36 = SelfUserAccountLinkage;
  v25 = this->fields.linkageDateLabel;
  if ( !v25 )
    goto LABEL_43;
  v26 = v25->fields.mText;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v38.fields._dateData = (uint64_t)&v36;
  v27 = System_DateTime__ToString_62066032(v38, (System_String_o *)StringLiteral_24785/*"yyyy/MM/dd"*/, 0LL);
  v28 = v26;
LABEL_42:
  v34 = System_String__Concat_61375396(v28, v27, 0LL);
  UILabel__set_text(v25, v34, 0LL);
}