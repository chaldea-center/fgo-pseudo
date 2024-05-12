void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E4B7 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438E4B7 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Awake(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Close(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_438E4B1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_438E4B1 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__EndOpen(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Init(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_438E4AF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E4AF = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.buffExistsMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailTitle;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailLeft;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailCenter;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailRight;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.settingLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.execLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B7769C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_438E4B2 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_438E4B2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_438E4B4 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_438E4B4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 1, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct UnityEngine_GameObject_o *settingDialogPrefab; // x21
  System_Int32_array **v15; // x0
  UnityEngine_Transform_o **v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Component_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  PartyOrganizationAutoOrganizationSettingDialog_o *v32; // x21
  AutoOrganizationManager_c *v33; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v37; // x23
  const MethodInfo *v38; // x5

  if ( (byte_438E4B3 & 1) == 0 )
  {
    sub_B775C4(&AutoOrganizationManager_TypeInfo);
    sub_B775C4(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    sub_B775C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__0__);
    sub_B775C4(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_TypeInfo);
    byte_438E4B3 = 1;
  }
  v3 = sub_B77694(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_TypeInfo);
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___ctor(
    (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_24;
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 2 )
  {
    v12 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B775CC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v13 = (System_Reflection_MethodBase_o *)sub_B775A8(v12, v12[3]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    settingDialogPrefab = this->fields.settingDialogPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)settingDialogPrefab,
                                   (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v15;
    v16 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_B77560((BattleServantConfConponent_o *)(v3 + 24), v15, v17, v18, v19, v20, v21, v22);
    v23 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v23, parent, 0LL);
      transform = *v16;
      if ( *v16 )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_srcLineSprite;
        sub_B77560((BattleServantConfConponent_o *)(v3 + 16), Component_srcLineSprite, v26, v27, v28, v29, v30, v31);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          LODWORD(transform[17].klass) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v32 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          if ( !byte_4388BC0 )
          {
            sub_B775C4(&AutoOrganizationManager_TypeInfo);
            byte_4388BC0 = 1;
          }
          v33 = AutoOrganizationManager_TypeInfo;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v33 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v33->static_fields->autoOrganizationInfo;
          v37 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_B77694(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v37,
            (Il2CppObject *)v3,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__0__,
            0LL);
          if ( v32 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v32, autoOrganizationInfo, eventId, preQuest, v37, v38);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_B7769C(transform, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Open(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        int32_t eventId,
        bool preQuest,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UILabel_o *titleLabel; // x22
  __int64 autoOrganizationInfo; // x0
  const MethodInfo *v14; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *buffExistsMessageLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *settingLabel; // x22
  UILabel_o *execLabel; // x22
  UILabel_o *detailTitle; // x22
  UILabel_o *detailLeft; // x22
  UILabel_o *detailCenter; // x22
  struct UILabel_o *v23; // x21
  System_String_o *mText; // x22
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  struct UILabel_o *v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  AutoOrganizationManager_c *v31; // x0
  System_String_o *String_36337972; // x21
  __int64 v33; // x8
  __int64 v34; // x21
  unsigned __int64 v35; // x24
  AutoOrganizationManager_c *v36; // x0
  System_Action_o *v37; // x20
  __int64 v38; // x0

  if ( (byte_438E4B0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AutoOrganizationManager_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_B775C4(&StringLiteral_1844/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_B775C4(&StringLiteral_1834/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/);
    sub_B775C4(&StringLiteral_1831/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_1843/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_B775C4(&StringLiteral_1842/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1833/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/);
    sub_B775C4(&StringLiteral_1837/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/);
    sub_B775C4(&StringLiteral_1845/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_2286/*"AutoOrganizationBonusFilterEventId"*/);
    sub_B775C4(&StringLiteral_1838/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/);
    sub_B775C4(&StringLiteral_1832/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_1841/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_438E4B0 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = preQuest;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)func,
    (System_String_array **)preQuest,
    (System_String_array **)func,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1845/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_54;
  UILabel__set_text(titleLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1842/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_54;
  UILabel__set_text(messageLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1843/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_54;
  UILabel__set_text(buffExistsMessageLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1831/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_54;
  UILabel__set_text(cancelLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1844/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_54;
  UILabel__set_text(settingLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1832/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_54;
  UILabel__set_text(execLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1841/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitle )
    goto LABEL_54;
  UILabel__set_text(detailTitle, (System_String_o *)autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1837/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0LL);
  if ( !detailLeft )
    goto LABEL_54;
  UILabel__set_text(detailLeft, (System_String_o *)autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1833/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0LL);
  if ( !detailCenter )
    goto LABEL_54;
  UILabel__set_text(detailCenter, (System_String_o *)autoOrganizationInfo, 0LL);
  if ( preQuest )
  {
    v23 = this->fields.detailLeft;
    if ( !v23 )
      goto LABEL_54;
    mText = v23->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1838/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0LL);
    v26 = System_String__Concat_44901936(mText, v25, 0LL);
    UILabel__set_text(v23, v26, 0LL);
    v27 = this->fields.detailCenter;
    if ( !v27 )
      goto LABEL_54;
    v28 = v27->fields.mText;
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_1834/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0LL);
    v30 = System_String__Concat_44901936(v28, v29, 0LL);
    UILabel__set_text(v27, v30, 0LL);
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4388BC0 )
  {
    sub_B775C4(&AutoOrganizationManager_TypeInfo);
    byte_4388BC0 = 1;
  }
  v31 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v31 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (__int64)v31->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_54;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0LL);
  if ( eventId >= 1 )
  {
    String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972((System_String_o *)StringLiteral_2286/*"AutoOrganizationBonusFilterEventId"*/, 0LL);
    autoOrganizationInfo = System_String__IsNullOrEmpty(String_36337972, 0LL);
    if ( (autoOrganizationInfo & 1) == 0 )
    {
      if ( !String_36337972 )
        goto LABEL_54;
      if ( String_36337972->fields.m_stringLength >= 1 )
      {
        autoOrganizationInfo = sub_B775DC(char___TypeInfo, 1LL);
        if ( !autoOrganizationInfo )
          goto LABEL_54;
        if ( !*(_DWORD *)(autoOrganizationInfo + 24) )
          goto LABEL_55;
        *(_WORD *)(autoOrganizationInfo + 32) = 44;
        autoOrganizationInfo = (__int64)System_String__Split(
                                          String_36337972,
                                          (System_Char_array *)autoOrganizationInfo,
                                          0LL);
        if ( !autoOrganizationInfo )
          goto LABEL_54;
        v33 = *(_QWORD *)(autoOrganizationInfo + 24);
        v34 = autoOrganizationInfo;
        if ( (int)v33 >= 1 )
        {
          v35 = 0LL;
          while ( v35 < (unsigned int)v33 )
          {
            autoOrganizationInfo = System_Int32__Parse(*(System_String_o **)(v34 + 32 + 8 * v35), 0LL);
            if ( (_DWORD)autoOrganizationInfo == eventId )
              goto LABEL_53;
            LODWORD(v33) = *(_DWORD *)(v34 + 24);
            if ( (__int64)++v35 >= (int)v33 )
              goto LABEL_43;
          }
LABEL_55:
          v38 = sub_B776C8(autoOrganizationInfo);
          sub_B77668(v38, 0LL);
        }
      }
    }
LABEL_43:
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_4388BC0 )
    {
      sub_B775C4(&AutoOrganizationManager_TypeInfo);
      byte_4388BC0 = 1;
    }
    v36 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v36 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (__int64)v36->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_53;
    }
LABEL_54:
    sub_B7769C(autoOrganizationInfo, v14);
  }
LABEL_53:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v14);
  this->fields.state = 1;
  v37 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_34330684; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  unsigned __int64 v8; // x22
  __int64 v9; // x23
  bool v10; // cf
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  _BOOL4 v12; // w23
  _BOOL4 v13; // w24
  UILabel_o *detailRight; // x23
  struct UILabel_o *v15; // x23
  System_String_o *v16; // x0
  __int64 v17; // x23
  unsigned __int64 v18; // x9
  int v19; // w11
  unsigned __int64 v20; // x8
  int v21; // w13
  unsigned __int64 v22; // x10
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  struct UILabel_o *v28; // x23
  System_String_o *mText; // x24
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  struct UILabel_o *v32; // x23
  System_String_o *v33; // x0
  unsigned __int64 v34; // x9
  int v35; // w8
  __int64 v36; // x11
  struct UILabel_o *v37; // x21
  int v38; // w25
  System_String_o *v39; // x22
  System_String_o *v40; // x23
  __int64 v41; // x2
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  int32_t autoOrganizationMode; // w9
  System_String_o *v46; // x20
  __int64 *v47; // x8
  System_String_o *v48; // x0
  struct UILabel_o *v49; // x19
  System_String_o *v50; // x0
  __int64 v51; // x0
  int v52; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438E4B5 & 1) == 0 )
  {
    sub_B775C4(&AutoOrganizationManager_TypeInfo);
    sub_B775C4(&bool___TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_1839/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_B775C4(&StringLiteral_1840/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_B775C4(&StringLiteral_82/*" "*/);
    sub_B775C4(&StringLiteral_12109/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_B775C4(&StringLiteral_1835/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/);
    sub_B775C4(&StringLiteral_12108/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_B775C4(&StringLiteral_12287/*"SERVANT_UNIT"*/);
    sub_B775C4(&StringLiteral_12107/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_B775C4(&StringLiteral_12105/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_B775C4(&StringLiteral_1836/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/);
    sub_B775C4(&StringLiteral_12106/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_438E4B5 = 1;
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4388BC0 )
  {
    sub_B775C4(&AutoOrganizationManager_TypeInfo);
    byte_4388BC0 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  Filter_34330684 = sub_B775DC(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_103;
  v7 = Filter_34330684;
  v8 = 0LL;
  v9 = Filter_34330684 + 32;
  do
  {
    Filter_34330684 = ListViewSort__GetFilter_34330684(autoOrganizationInfo, v8, 0LL);
    if ( !v7 )
      goto LABEL_103;
    if ( v8 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_102;
    v10 = v8 >= 0xC;
    *(_BYTE *)(v9 + v8++) = Filter_34330684 & 1;
  }
  while ( !v10 );
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  if ( *(_DWORD *)(v7 + 24) < 2u )
  {
LABEL_102:
    v51 = sub_B776C8(Filter_34330684);
    sub_B77668(v51, 0LL);
  }
  v12 = *(_BYTE *)(v7 + 32) == 0;
  v13 = *(unsigned __int8 *)(v7 + 33) != 0;
  if ( *(_BYTE *)(v7 + 32) || !*(_BYTE *)(v7 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_34330684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1836/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0LL);
    if ( !v11 )
      goto LABEL_103;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_34330684,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( v13 || v12 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_34330684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1835/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0LL);
    if ( !v11 )
      goto LABEL_103;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_34330684,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  }
  detailRight = this->fields.detailRight;
  Filter_34330684 = (__int64)System_String__Join_44957380(
                               (System_String_o *)StringLiteral_82/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v11,
                               0LL);
  if ( !detailRight )
    goto LABEL_103;
  UILabel__set_text(detailRight, (System_String_o *)Filter_34330684, 0LL);
  v15 = this->fields.detailRight;
  if ( !v15 )
    goto LABEL_103;
  v16 = System_String__Concat_44901936(v15->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(v15, v16, 0LL);
  if ( !v11 )
    goto LABEL_103;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_34330684 = sub_B775DC(bool___TypeInfo, 5LL);
  v17 = Filter_34330684;
  v18 = 0LL;
  LOBYTE(v19) = 1;
  do
  {
    if ( v18 + 2 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_102;
    if ( !Filter_34330684 )
      goto LABEL_103;
    v20 = *(unsigned int *)(Filter_34330684 + 24);
    if ( v18 >= v20 )
      goto LABEL_102;
    v21 = *(unsigned __int8 *)(v7 + 34 + v18);
    *(_BYTE *)(Filter_34330684 + 32 + v18) = v21;
    v10 = v18++ >= 4;
    v19 = (unsigned __int8)v19 & (v21 == 0);
  }
  while ( !v10 );
  if ( v19 )
  {
    v22 = 0LL;
    while ( v22 < v20 )
    {
      v10 = v22 >= 4;
      *(_BYTE *)(Filter_34330684 + 32 + v22++) = 1;
      if ( v10 )
        goto LABEL_45;
    }
    goto LABEL_102;
  }
LABEL_45:
  if ( (unsigned int)v20 <= 4 )
    goto LABEL_102;
  if ( *(_BYTE *)(Filter_34330684 + 36) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12108/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    v20 = *(_QWORD *)(v17 + 24);
    if ( (unsigned int)v20 <= 3 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v17 + 35) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    v20 = *(_QWORD *)(v17 + 24);
    if ( (unsigned int)v20 <= 2 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v17 + 34) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12106/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    v20 = *(_QWORD *)(v17 + 24);
    if ( (unsigned int)v20 <= 1 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v17 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    v20 = *(_QWORD *)(v17 + 24);
  }
  if ( !(_DWORD)v20 )
    goto LABEL_102;
  if ( *(_BYTE *)(v17 + 32) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  }
  v28 = this->fields.detailRight;
  if ( !v28 )
    goto LABEL_103;
  mText = v28->fields.mText;
  v30 = System_String__Join_44957380(
          (System_String_o *)StringLiteral_82/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v11,
          0LL);
  v31 = System_String__Concat_44901936(mText, v30, 0LL);
  UILabel__set_text(v28, v31, 0LL);
  v32 = this->fields.detailRight;
  if ( !v32 )
    goto LABEL_103;
  v33 = System_String__Concat_44901936(v32->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(v32, v33, 0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_34330684 = sub_B775DC(bool___TypeInfo, 6LL);
  v34 = 0LL;
  v35 = 0;
  v36 = v7 + 39;
  do
  {
    if ( v34 + 7 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_102;
    if ( !Filter_34330684 )
      goto LABEL_103;
    if ( v34 >= *(unsigned int *)(Filter_34330684 + 24) )
      goto LABEL_102;
    if ( *(_BYTE *)(v36 + v34) )
      v35 = v34 + 1;
    v10 = v34 >= 5;
    *(_BYTE *)(Filter_34330684 + 32 + v34) = *(_BYTE *)(v36 + v34);
    ++v34;
  }
  while ( !v10 );
  v37 = this->fields.detailRight;
  v38 = v35 ? v35 : 6;
  if ( !v37 )
LABEL_103:
    sub_B7769C(Filter_34330684, v6);
  v39 = v37->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12287/*"SERVANT_UNIT"*/, 0LL);
  v52 = v38;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v41);
  v43 = System_String__Format(v40, v42, 0LL);
  v44 = System_String__Concat_44901936(v39, v43, 0LL);
  UILabel__set_text(v37, v44, 0LL);
  if ( this->fields.preQuest )
  {
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    v46 = (System_String_o *)StringLiteral_26/*"\n"*/;
    if ( autoOrganizationMode == 1 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v47 = &StringLiteral_1839/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v47 = &StringLiteral_1840/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    }
    v48 = LocalizationManager__Get((System_String_o *)*v47, 0LL);
    Filter_34330684 = (__int64)System_String__Concat_44901936(v46, v48, 0LL);
    v49 = this->fields.detailRight;
    if ( v49 )
    {
      v50 = System_String__Concat_44901936(v49->fields.mText, (System_String_o *)Filter_34330684, 0LL);
      UILabel__set_text(v49, v50, 0LL);
      return;
    }
    goto LABEL_103;
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v11; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438E4AD & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_438E4AD = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E4B6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_2849/*"BaseWindow/CancelButton"*/);
    byte_438E4B6 = 1;
  }
  return (System_String_o *)StringLiteral_2849/*"BaseWindow/CancelButton"*/;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438E4AE & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_438E4AE = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_438A0AD & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438A0AD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *v4; // x19
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  AutoOrganizationManager_c *v13; // x0

  v4 = this;
  if ( (byte_438A0AB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AutoOrganizationManager_TypeInfo);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)sub_B775C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__1__);
    byte_438A0AB = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !settingDialog )
    goto LABEL_19;
  PartyOrganizationAutoOrganizationSettingDialog__Close_31208468(settingDialog, _9__1, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_4388BC0 )
    {
      sub_B775C4(&AutoOrganizationManager_TypeInfo);
      byte_4388BC0 = 1;
    }
    v13 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v13 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)v13->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)v4->fields.__4__this;
      if ( this )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (PartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          0LL);
        return;
      }
    }
LABEL_19:
    sub_B7769C(this, isDecide);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_438A0AC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A0AC = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(go, 0LL);
}