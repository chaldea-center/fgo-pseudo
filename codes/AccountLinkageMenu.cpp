void __fastcall AccountLinkageMenu___ctor(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438CD9D & 1) == 0 )
  {
    sub_B775C4(&BaseMenu_TypeInfo);
    byte_438CD9D = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
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

  if ( (byte_438CD9B & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_1688/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1689/*"ACCOUNT_LINKAGE_MENU_WARNING"*/);
    byte_438CD9B = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1688/*"ACCOUNT_LINKAGE_MENU_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v4, 0LL),
        warningLabel = this->fields.warningLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1689/*"ACCOUNT_LINKAGE_MENU_WARNING"*/, 0LL),
        !warningLabel) )
  {
    sub_B7769C(v4, v5);
  }
  UILabel__set_text(warningLabel, v4, 0LL);
  AccountLinkageMenu__UpdateView(this, v7);
}


void __fastcall AccountLinkageMenu__Open(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  AccountLinkageMenu__InitView(this, method);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageMenu__UpdateView(AccountLinkageMenu_o *this, const MethodInfo *method)
{
  UILabel_o *linkageDateLabel; // x20
  __int64 SelfUserAccountLinkage; // x0
  __int64 v5; // x1
  LocalizationManager_c *v6; // x0
  UILabel_o *linkageStatusLabel; // x20
  struct UILabel_o *v8; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  UILabel_o *v12; // x20
  UIWidget_o *v13; // x20
  int v14; // s0
  int64_t linkedAt; // x20
  const MethodInfo *v19; // x2
  struct UILabel_o *v20; // x19
  System_String_o *v21; // x20
  System_String_o *v22; // x1
  System_String_o *v23; // x0
  struct UILabel_o *v24; // x20
  System_String_o *mText; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  UILabel_o *linkageButtonLabel; // x20
  UIWidget_o *v29; // x20
  int v30; // s0
  System_String_o *v34; // x0
  System_DateTimeOffset_o v35; // [xsp+0h] [xbp-40h] BYREF
  __int64 v36; // [xsp+10h] [xbp-30h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v38; // 0:x0.8
  System_DateTimeOffset_o v39; // 0:x0.16

  if ( (byte_438CD9C & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&System_DateTimeOffset_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_1679/*"ACCOUNT_LINKAGE_DATE"*/);
    sub_B775C4(&StringLiteral_1708/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/);
    sub_B775C4(&StringLiteral_23928/*"yyyy/MM/dd"*/);
    sub_B775C4(&StringLiteral_762/*"-"*/);
    sub_B775C4(&StringLiteral_1674/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/);
    sub_B775C4(&StringLiteral_1673/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/);
    sub_B775C4(&StringLiteral_1709/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/);
    sub_B775C4(&StringLiteral_1691/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/);
    byte_438CD9C = 1;
  }
  entity = 0LL;
  v36 = 0LL;
  v35 = (System_DateTimeOffset_o)0LL;
  linkageDateLabel = this->fields.linkageDateLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1679/*"ACCOUNT_LINKAGE_DATE"*/, 0LL);
  if ( !linkageDateLabel )
    goto LABEL_57;
  UILabel__set_text(linkageDateLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( (SelfUserAccountLinkage & 1) == 0 )
  {
    v6 = LocalizationManager_TypeInfo;
    linkageStatusLabel = this->fields.linkageStatusLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      goto LABEL_37;
    goto LABEL_39;
  }
  if ( !entity )
    goto LABEL_57;
  v6 = LocalizationManager_TypeInfo;
  linkageStatusLabel = this->fields.linkageStatusLabel;
  if ( entity->fields.type != 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
LABEL_37:
      if ( !v6->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v6);
    }
LABEL_39:
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1709/*"ACCOUNT_LINKAGE_STATUS_NOT_LINKED"*/, 0LL);
    if ( !linkageStatusLabel )
      goto LABEL_57;
    UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
    SelfUserAccountLinkage = (__int64)AccountLinkageParams_TypeInfo;
    if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
      SelfUserAccountLinkage = (__int64)AccountLinkageParams_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(SelfUserAccountLinkage + 184) + 4LL) )
    {
      v24 = this->fields.linkageStatusLabel;
      if ( !v24 )
        goto LABEL_57;
      mText = v24->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_1691/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
      v27 = System_String__Concat_44901936(mText, v26, 0LL);
      UILabel__set_text(v24, v27, 0LL);
    }
    linkageButtonLabel = this->fields.linkageButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1674/*"ACCOUNT_LINKAGE_BUTTON_LINK"*/, 0LL);
    if ( linkageButtonLabel )
    {
      UILabel__set_text(linkageButtonLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
      v29 = (UIWidget_o *)this->fields.linkageButtonLabel;
      *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_black(0LL);
      if ( v29 )
      {
        UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v30, 0LL);
        v20 = this->fields.linkageDateLabel;
        if ( v20 )
        {
          v23 = v20->fields.mText;
          v22 = (System_String_o *)StringLiteral_762/*"-"*/;
          goto LABEL_56;
        }
      }
    }
LABEL_57:
    sub_B7769C(SelfUserAccountLinkage, v5);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1708/*"ACCOUNT_LINKAGE_STATUS_LINKED"*/, 0LL);
  if ( !linkageStatusLabel )
    goto LABEL_57;
  UILabel__set_text(linkageStatusLabel, (System_String_o *)SelfUserAccountLinkage, 0LL);
  SelfUserAccountLinkage = (__int64)AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    SelfUserAccountLinkage = (__int64)AccountLinkageParams_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(SelfUserAccountLinkage + 184) + 4LL) )
  {
    v8 = this->fields.linkageStatusLabel;
    if ( !v8 )
      goto LABEL_57;
    v9 = v8->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1691/*"ACCOUNT_LINKAGE_ON_MAINTENANCE"*/, 0LL);
    v11 = System_String__Concat_44901936(v9, v10, 0LL);
    UILabel__set_text(v8, v11, 0LL);
  }
  v12 = this->fields.linkageButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserAccountLinkage = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1673/*"ACCOUNT_LINKAGE_BUTTON_DELINK"*/, 0LL);
  if ( !v12 )
    goto LABEL_57;
  UILabel__set_text(v12, (System_String_o *)SelfUserAccountLinkage, 0LL);
  v13 = (UIWidget_o *)this->fields.linkageButtonLabel;
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
  if ( !v13 )
    goto LABEL_57;
  UIWidget__set_color(v13, *(UnityEngine_Color_o *)&v14, 0LL);
  if ( !entity )
    goto LABEL_57;
  linkedAt = entity->fields.linkedAt;
  if ( (BYTE3(System_DateTimeOffset_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTimeOffset_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTimeOffset_TypeInfo);
  }
  v35 = System_DateTimeOffset__FromUnixTimeSeconds(linkedAt, 0LL);
  v39.fields.m_dateTime.fields.dateData = (uint64_t)&v35;
  *(_QWORD *)&v39.fields.m_offsetMinutes = 0LL;
  SelfUserAccountLinkage = System_DateTimeOffset__get_LocalDateTime(v39, v19).fields.dateData;
  v36 = SelfUserAccountLinkage;
  v20 = this->fields.linkageDateLabel;
  if ( !v20 )
    goto LABEL_57;
  v21 = v20->fields.mText;
  v38.fields.dateData = (uint64_t)&v36;
  v22 = System_DateTime__ToString_15695624(v38, (System_String_o *)StringLiteral_23928/*"yyyy/MM/dd"*/, 0LL);
  v23 = v21;
LABEL_56:
  v34 = System_String__Concat_44901936(v23, v22, 0LL);
  UILabel__set_text(v20, v34, 0LL);
}