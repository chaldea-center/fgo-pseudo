void __fastcall AccountLinkageMenu___ctor(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11552 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B11552 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *messageLabel; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *warningLabel; // x20
  const MethodInfo *v12; // x1

  if ( (byte_4B11550 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2003/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_2004/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, v6, v7);
    byte_4B11550 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2003/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v9, 0LL),
        warningLabel = this->fields.warningLabel,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2004/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, 0LL),
        !warningLabel) )
  {
    sub_1BCAA3C(v9, v10);
  }
  UILabel__set_text(warningLabel, v9, 0LL);
  AccountLinkageMenu__UpdateView(this, v12);
}


void __fastcall AccountLinkageMenu__Open(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  AccountLinkageMenu__InitView(this, method);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall AccountLinkageMenu__UpdateView(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
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
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *linkageDateLabel; // x20
  __int64 SelfUserAccountLinkage; // x0
  __int64 v28; // x1
  int32_t type; // w21
  UILabel_o *linkageStatusLabel; // x20
  struct UILabel_o *v31; // x20
  System_String_o *v32; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *v35; // x20
  int64_t linkedAt; // x20
  const MethodInfo *v37; // x2
  struct UILabel_o *v38; // x19
  System_String_o *v39; // x20
  System_String_o *v40; // x1
  System_String_o *v41; // x0
  struct UILabel_o *v42; // x20
  System_String_o *mText; // x21
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  UILabel_o *linkageButtonLabel; // x20
  System_String_o *v47; // x0
  System_DateTimeOffset_o v48; // [xsp+8h] [xbp-48h] BYREF
  __int64 v49; // [xsp+18h] [xbp-38h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v51; // 0:x0.8
  System_DateTimeOffset_o v52; // 0:x0.16
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11551 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&System_DateTimeOffset_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1994/*"ACCOUNT_LINKAGE_DATE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_2023/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_25138/*"yyyy/MM/dd"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1989/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1988/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2024/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_2006/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, v24, v25);
    byte_4B11551 = 1;
  }
  entity = 0LL;
  v49 = 0LL;
  v48 = (System_DateTimeOffset_o)0LL;
  linkageDateLabel = this->fields.linkageDateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1994/*"ACCOUNT_LINKAGE_DATE"*/, 0LL);
  if ( !linkageDateLabel )
    goto LABEL_43;
  UILabel__set_text(linkageDateLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( (SelfUserAccountLinkage & 1) == 0 )
  {
    linkageStatusLabel = this->fields.linkageStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
LABEL_30:
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2024/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, 0LL);
    if ( !linkageStatusLabel )
      goto LABEL_43;
    UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
    if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
    {
      v42 = this->fields.linkageStatusLabel;
      if ( !v42 )
        goto LABEL_43;
      mText = v42->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2006/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
      v45 = System_String__Concat_62401220(mText, v44, 0LL);
      UILabel__set_text(v42, v45, 0LL);
    }
    linkageButtonLabel = this->fields.linkageButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1989/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, 0LL);
    if ( linkageButtonLabel )
    {
      UILabel__set_text(linkageButtonLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
      SelfUserAccountLinkage = (__int64)this->fields.linkageButtonLabel;
      if ( SelfUserAccountLinkage )
      {
        v54.fields.r = 0.0;
        v54.fields.g = 0.0;
        v54.fields.b = 0.0;
        v54.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v54, 0LL);
        v38 = this->fields.linkageDateLabel;
        if ( v38 )
        {
          v41 = v38->fields.mText;
          v40 = (System_String_o *)StringLiteral_915/*"-"*/;
          goto LABEL_42;
        }
      }
    }
LABEL_43:
    sub_1BCAA3C(SelfUserAccountLinkage, v28);
  }
  if ( !entity )
    goto LABEL_43;
  type = entity->fields.type;
  linkageStatusLabel = this->fields.linkageStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  if ( type != 1 )
    goto LABEL_30;
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2023/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, 0LL);
  if ( !linkageStatusLabel )
    goto LABEL_43;
  UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
  if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    v31 = this->fields.linkageStatusLabel;
    if ( !v31 )
      goto LABEL_43;
    v32 = v31->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2006/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
    v34 = System_String__Concat_62401220(v32, v33, 0LL);
    UILabel__set_text(v31, v34, 0LL);
  }
  v35 = this->fields.linkageButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1988/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, 0LL);
  if ( !v35 )
    goto LABEL_43;
  UILabel__set_text(v35, (System_String_o *)SelfUserAccountLinkage, 0LL);
  SelfUserAccountLinkage = (__int64)this->fields.linkageButtonLabel;
  if ( !SelfUserAccountLinkage )
    goto LABEL_43;
  v53.fields.r = 1.0;
  v53.fields.g = 1.0;
  v53.fields.b = 1.0;
  v53.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v53, 0LL);
  if ( !entity )
    goto LABEL_43;
  linkedAt = entity->fields.linkedAt;
  if ( !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo, v28);
  v48 = System_DateTimeOffset__FromUnixTimeSeconds(linkedAt, 0LL);
  v52.fields._dateTime.fields._dateData = (uint64_t)&v48;
  *(_QWORD *)&v52.fields._offsetMinutes = 0LL;
  SelfUserAccountLinkage = System_DateTimeOffset__get_LocalDateTime(v52, v37).fields._dateData;
  v49 = SelfUserAccountLinkage;
  v38 = this->fields.linkageDateLabel;
  if ( !v38 )
    goto LABEL_43;
  v39 = v38->fields.mText;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v28);
  v51.fields._dateData = (uint64_t)&v49;
  v40 = System_DateTime__ToString_63092192(v51, (System_String_o *)StringLiteral_25138/*"yyyy/MM/dd"*/, 0LL);
  v41 = v39;
LABEL_42:
  v47 = System_String__Concat_62401220(v41, v40, 0LL);
  UILabel__set_text(v38, v47, 0LL);
}