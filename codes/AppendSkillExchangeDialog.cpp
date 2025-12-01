void AppendSkillExchangeDialog___ctor(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CCB2DE & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CCB2DE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AppendSkillExchangeDialog__Awake(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  ;
}


void AppendSkillExchangeDialog__ClearDisplay(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CCB2D7 & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    byte_4CCB2D7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.appendSkillBaseInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.beforeAppendSkillBaseLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.afterAppendSkillBaseLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.appendSkillIconBaseTitleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.appendSkillIconBaseMessageLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.appendSkillTargetInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.beforeAppendSkillTargetLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.afterAppendSkillTargetLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.appendSkillIconTargetTitleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.appendSkillIconTargetMessageLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.appendSkillWarningMessageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = this->fields.remainingCountLabel) == 0)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = this->fields.decideButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0) )
  {
LABEL_19:
    sub_1C71608(titleLabel, method);
  }
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  this->fields.isButtonEnable = 0;
}


void AppendSkillExchangeDialog__Close(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CCB2DA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_AppendSkillExchangeDialog_ClearDisplay__);
    byte_4CCB2DA = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_AppendSkillExchangeDialog_ClearDisplay__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
}


void AppendSkillExchangeDialog__EndOpen(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *AppendSkillExchangeDialog__ExchangeLvText(
        AppendSkillExchangeDialog_o *this,
        int32_t currentLv,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCB2D9 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8264/*"LEVEL_INFO"*/);
    sub_1C713B0(&StringLiteral_1985/*"APPEND_SKILL_EXCHANGE_LOCK"*/);
    byte_4CCB2D9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( currentLv <= 0 )
    return LocalizationManager__Get((System_String_o *)StringLiteral_1985/*"APPEND_SKILL_EXCHANGE_LOCK"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8264/*"LEVEL_INFO"*/, 0);
  v7 = currentLv;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format(v4, v5, 0);
}


void AppendSkillExchangeDialog__OnClickCancel(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CCB2DC & 1) == 0 )
  {
    sub_1C713B0(&Method_AppendSkillExchangeDialog_OnClickCancel__);
    byte_4CCB2DC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_AppendSkillExchangeDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_AppendSkillExchangeDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    AppendSkillExchangeDialog__Close(this, v5);
  }
}


void AppendSkillExchangeDialog__OnClickDecide(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CCB2DB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_AppendSkillExchangeDialog_OnClickDecide__);
    sub_1C713B0(&Method_AppendSkillExchangeDialog__OnClickDecide_b__25_0__);
    byte_4CCB2DB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_AppendSkillExchangeDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_AppendSkillExchangeDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_AppendSkillExchangeDialog__OnClickDecide_b__25_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void AppendSkillExchangeDialog__OnEnable(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CCB2DD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3063/*"BaseWindow/ButtonBase/CancelButton"*/);
    byte_4CCB2DD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45260884(transform, (System_String_o *)StringLiteral_3063/*"BaseWindow/ButtonBase/CancelButton"*/, 0);
}


void AppendSkillExchangeDialog__Open(
        AppendSkillExchangeDialog_o *this,
        SetLevelUpData_o *baseData,
        SetLevelUpData_o *targetData,
        int32_t remainingCount,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UILabel_o *titleLabel; // x23
  System_String_o *appendSkillBaseIconComp; // x0
  __int64 v19; // x1
  UILabel_o *appendSkillBaseInfo; // x23
  UILabel_o *beforeAppendSkillBaseLvInfo; // x23
  AppendSkillExchangeDialog_o *v22; // x0
  const MethodInfo *v23; // x2
  UILabel_o *afterAppendSkillBaseLvInfo; // x23
  const MethodInfo *v25; // x2
  System_String_o *v26; // x24
  Il2CppObject *appended; // x0
  UILabel_o *appendSkillTargetInfo; // x23
  UILabel_o *beforeAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v30; // x0
  const MethodInfo *v31; // x2
  UILabel_o *afterAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v33; // x0
  int32_t currentLv; // w1
  System_String_o *v35; // x22
  const MethodInfo *v36; // x2
  Il2CppObject *v37; // x0
  bool IsExchangeLimited; // w0
  UILabel_o *appendSkillWarningMessageLabel; // x21
  bool v40; // w22
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  System_String_o *v43; // x22
  Il2CppObject *v44; // x0
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v47; // x20
  int32_t v48; // [xsp+8h] [xbp-48h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCB2D8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_AppendSkillExchangeDialog_EndOpen__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1996/*"APPEND_SKILL_EXCHANGE_UNLIMITED_MSG"*/);
    sub_1C713B0(&StringLiteral_1994/*"APPEND_SKILL_EXCHANGE_TARGET"*/);
    sub_1C713B0(&StringLiteral_1975/*"APPEND_SKILL_EXCHANGE_BASE"*/);
    sub_1C713B0(&StringLiteral_1987/*"APPEND_SKILL_EXCHANGE_MSG"*/);
    sub_1C713B0(&StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_LV"*/);
    sub_1C713B0(&StringLiteral_1995/*"APPEND_SKILL_EXCHANGE_TITLE"*/);
    sub_1C713B0(&StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_REMAINING_COUNT"*/);
    byte_4CCB2D8 = 1;
  }
  AppendSkillExchangeDialog__ClearDisplay(this, (const MethodInfo *)baseData);
  this->fields.onDecide = decideAction;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onDecide,
    (int32_t)decideAction,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"APPEND_SKILL_EXCHANGE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, appendSkillBaseIconComp, 0);
  appendSkillBaseInfo = this->fields.appendSkillBaseInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1975/*"APPEND_SKILL_EXCHANGE_BASE"*/, 0);
  if ( !appendSkillBaseInfo )
    goto LABEL_32;
  UILabel__set_text(appendSkillBaseInfo, appendSkillBaseIconComp, 0);
  if ( !baseData )
    goto LABEL_32;
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillBaseIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, baseData->fields.currentId, 0);
  beforeAppendSkillBaseLvInfo = this->fields.beforeAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v22, baseData->fields.currentLv, v23);
  if ( !beforeAppendSkillBaseLvInfo )
    goto LABEL_32;
  UILabel__set_text(beforeAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0);
  afterAppendSkillBaseLvInfo = this->fields.afterAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_LV"*/, 0);
  if ( !targetData )
    goto LABEL_32;
  v26 = appendSkillBaseIconComp;
  appended = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(
                               (AppendSkillExchangeDialog_o *)appendSkillBaseIconComp,
                               targetData->fields.currentLv,
                               v25);
  appendSkillBaseIconComp = System_String__Format(v26, appended, 0);
  if ( !afterAppendSkillBaseLvInfo )
    goto LABEL_32;
  UILabel__set_text(afterAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconBaseTitleLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, baseData->fields.targetName, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconBaseMessageLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, baseData->fields.targetDetail, 0);
  appendSkillTargetInfo = this->fields.appendSkillTargetInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1994/*"APPEND_SKILL_EXCHANGE_TARGET"*/, 0);
  if ( !appendSkillTargetInfo )
    goto LABEL_32;
  UILabel__set_text(appendSkillTargetInfo, appendSkillBaseIconComp, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillTargetIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, targetData->fields.currentId, 0);
  beforeAppendSkillTargetLvInfo = this->fields.beforeAppendSkillTargetLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v30, targetData->fields.currentLv, v31);
  if ( !beforeAppendSkillTargetLvInfo )
    goto LABEL_32;
  UILabel__set_text(beforeAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0);
  afterAppendSkillTargetLvInfo = this->fields.afterAppendSkillTargetLvInfo;
  v33 = (AppendSkillExchangeDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1986/*"APPEND_SKILL_EXCHANGE_LV"*/, 0);
  currentLv = baseData->fields.currentLv;
  v35 = (System_String_o *)v33;
  v37 = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(v33, currentLv, v36);
  appendSkillBaseIconComp = System_String__Format(v35, v37, 0);
  if ( !afterAppendSkillTargetLvInfo
    || (UILabel__set_text(afterAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0),
        (appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetTitleLabel) == 0)
    || (UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetName, 0),
        (appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetMessageLabel) == 0) )
  {
LABEL_32:
    sub_1C71608(appendSkillBaseIconComp, v19);
  }
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetDetail, 0);
  IsExchangeLimited = UserServantAppendPassiveSkillMaster__IsExchangeLimited(0);
  appendSkillWarningMessageLabel = this->fields.appendSkillWarningMessageLabel;
  v40 = IsExchangeLimited;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v40 )
      goto LABEL_22;
LABEL_26:
    appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1996/*"APPEND_SKILL_EXCHANGE_UNLIMITED_MSG"*/, 0);
    if ( !appendSkillWarningMessageLabel )
      goto LABEL_32;
    goto LABEL_27;
  }
  if ( !IsExchangeLimited )
    goto LABEL_26;
LABEL_22:
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_1987/*"APPEND_SKILL_EXCHANGE_MSG"*/, 0);
  v49 = remainingCount;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  appendSkillBaseIconComp = System_String__Format(v41, v42, 0);
  if ( !appendSkillWarningMessageLabel )
    goto LABEL_32;
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0);
  appendSkillWarningMessageLabel = this->fields.remainingCountLabel;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_REMAINING_COUNT"*/, 0);
  v48 = remainingCount;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  appendSkillBaseIconComp = System_String__Format(v43, v44, 0);
  if ( !appendSkillWarningMessageLabel )
    goto LABEL_32;
LABEL_27:
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_32;
  UILabel__set_text(decideButtonLabel, appendSkillBaseIconComp, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_32;
  UILabel__set_text(cancelButtonLabel, appendSkillBaseIconComp, 0);
  v47 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_AppendSkillExchangeDialog_EndOpen__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v47, 0, 0);
}


void AppendSkillExchangeDialog___OnClickDecide_b__25_0(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.onDecide, 0);
  AppendSkillExchangeDialog__ClearDisplay(this, v3);
}