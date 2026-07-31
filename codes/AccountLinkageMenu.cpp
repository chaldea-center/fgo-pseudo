void AccountLinkageMenu___ctor(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59332FD & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_59332FD = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
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
  __int64 v2; // x2
  UILabel_o *messageLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *warningLabel; // x20
  const MethodInfo *v8; // x1

  if ( (byte_59332FB & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1959/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1960/*"ACCOUNT_LINKAGE_MENU_WARNING"*/);
    byte_59332FB = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1959/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, 0);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v5, 0),
        warningLabel = this->fields.warningLabel,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1960/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, 0),
        !warningLabel) )
  {
    sub_21FFECC(v5, v6);
  }
  UILabel__set_text(warningLabel, v5, 0);
  AccountLinkageMenu__UpdateView(this, v8);
}


void AccountLinkageMenu__Open(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  AccountLinkageMenu__InitView(this, method);
  BaseMenu__Open((BaseMenu_o *)this, 0, 0);
}


void AccountLinkageMenu__UpdateView(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *linkageDateLabel; // x20
  int v5; // w8
  uint64_t SelfUserAccountLinkage; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  LocalizationManager_c *v9; // x0
  UILabel_o *linkageStatusLabel; // x20
  int v11; // w8
  __int64 v12; // x2
  struct UILabel_o *v13; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  UILabel_o *v17; // x20
  __int64 v18; // x2
  int64_t linkedAt; // x20
  const MethodInfo *v20; // x2
  System_DateTime_o v21; // x2
  struct UILabel_o *v22; // x19
  System_String_o *v23; // x20
  System_DateTime_o v24; // x0
  System_String_o *v25; // x1
  System_String_o *v26; // x0
  __int64 v27; // x2
  struct UILabel_o *v28; // x20
  System_String_o *mText; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UILabel_o *linkageButtonLabel; // x20
  System_String_o *v33; // x0
  System_DateTimeOffset_o v34; // [xsp+8h] [xbp-48h] BYREF
  uint64_t v35; // [xsp+18h] [xbp-38h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  System_DateTimeOffset_o v37; // 0:x0.16
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59332FC & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&System_DateTimeOffset_TypeInfo);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1950/*"ACCOUNT_LINKAGE_DATE"*/);
    sub_21FFC50(&StringLiteral_1979/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/);
    sub_21FFC50(&StringLiteral_26330/*"yyyy/MM/dd"*/);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    sub_21FFC50(&StringLiteral_1945/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/);
    sub_21FFC50(&StringLiteral_1944/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/);
    sub_21FFC50(&StringLiteral_1980/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/);
    sub_21FFC50(&StringLiteral_1962/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/);
    byte_59332FC = 1;
  }
  linkageDateLabel = this->fields.linkageDateLabel;
  entity = 0;
  v5 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)&v34.fields._offsetMinutes = 0;
  v35 = 0;
  v34.fields._dateTime.fields._dateData = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1950/*"ACCOUNT_LINKAGE_DATE"*/, 0);
  if ( !linkageDateLabel )
    goto LABEL_44;
  UILabel__set_text(linkageDateLabel, (System_String_o *)SelfUserAccountLinkage, 0);
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0);
  if ( (SelfUserAccountLinkage & 1) == 0 )
  {
    v9 = LocalizationManager_TypeInfo;
    linkageStatusLabel = this->fields.linkageStatusLabel;
    v11 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    goto LABEL_29;
  }
  if ( !entity )
    goto LABEL_44;
  v9 = LocalizationManager_TypeInfo;
  linkageStatusLabel = this->fields.linkageStatusLabel;
  v11 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( entity->fields.type != 1 )
  {
LABEL_29:
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
    SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1980/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, 0);
    if ( linkageStatusLabel )
    {
      UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0);
      if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
      {
        v28 = this->fields.linkageStatusLabel;
        if ( !v28 )
          goto LABEL_44;
        mText = v28->fields.mText;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v27);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_1962/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0);
        v31 = System_String__Concat_75438412(mText, v30, 0);
        UILabel__set_text(v28, v31, 0);
      }
      linkageButtonLabel = this->fields.linkageButtonLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v27);
      SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1945/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, 0);
      if ( linkageButtonLabel )
      {
        UILabel__set_text(linkageButtonLabel, (System_String_o *)SelfUserAccountLinkage, 0);
        SelfUserAccountLinkage = (uint64_t)this->fields.linkageButtonLabel;
        if ( SelfUserAccountLinkage )
        {
          v39.fields.r = 0.0;
          v39.fields.g = 0.0;
          v39.fields.b = 0.0;
          v39.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v39, 0);
          v22 = this->fields.linkageDateLabel;
          if ( v22 )
          {
            v26 = v22->fields.mText;
            v25 = (System_String_o *)StringLiteral_923/*"-"*/;
            goto LABEL_43;
          }
        }
      }
    }
LABEL_44:
    sub_21FFECC(SelfUserAccountLinkage, v7);
  }
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1979/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, 0);
  if ( !linkageStatusLabel )
    goto LABEL_44;
  UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0);
  if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    v13 = this->fields.linkageStatusLabel;
    if ( !v13 )
      goto LABEL_44;
    v14 = v13->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v12);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1962/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0);
    v16 = System_String__Concat_75438412(v14, v15, 0);
    UILabel__set_text(v13, v16, 0);
  }
  v17 = this->fields.linkageButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v12);
  SelfUserAccountLinkage = (uint64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1944/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, 0);
  if ( !v17 )
    goto LABEL_44;
  UILabel__set_text(v17, (System_String_o *)SelfUserAccountLinkage, 0);
  SelfUserAccountLinkage = (uint64_t)this->fields.linkageButtonLabel;
  if ( !SelfUserAccountLinkage )
    goto LABEL_44;
  v38.fields.r = 1.0;
  v38.fields.g = 1.0;
  v38.fields.b = 1.0;
  v38.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)SelfUserAccountLinkage, v38, 0);
  if ( !entity )
    goto LABEL_44;
  linkedAt = entity->fields.linkedAt;
  if ( !*(&System_DateTimeOffset_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo, v7, v18);
  v34 = System_DateTimeOffset__FromUnixTimeSeconds(linkedAt, 0);
  v37.fields._dateTime.fields._dateData = (uint64_t)&v34;
  *(_QWORD *)&v37.fields._offsetMinutes = 0;
  SelfUserAccountLinkage = System_DateTimeOffset__get_LocalDateTime(v37, v20).fields._dateData;
  v22 = this->fields.linkageDateLabel;
  v35 = SelfUserAccountLinkage;
  if ( !v22 )
    goto LABEL_44;
  v23 = v22->fields.mText;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v7, v21.fields._dateData);
  v24.fields._dateData = (uint64_t)&v35;
  v25 = System_DateTime__ToString_76814468(v24, (System_String_o *)StringLiteral_26330/*"yyyy/MM/dd"*/, 0);
  v26 = v23;
LABEL_43:
  v33 = System_String__Concat_75438412(v26, v25, 0);
  UILabel__set_text(v22, v33, 0);
}