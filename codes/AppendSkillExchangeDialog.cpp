void AppendSkillExchangeDialog___ctor(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AF89 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2AF89 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AppendSkillExchangeDialog__Close(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0, 0);
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
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2AF85 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8256/*"LEVEL_INFO"*/);
    sub_1C2D490(&StringLiteral_1988/*"APPEND_SKILL_EXCHANGE_LOCK"*/);
    byte_4C2AF85 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( currentLv <= 0 )
    return LocalizationManager__Get((System_String_o *)StringLiteral_1988/*"APPEND_SKILL_EXCHANGE_LOCK"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8256/*"LEVEL_INFO"*/, 0);
  v10 = currentLv;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v5, v6, v7);
  return System_String__Format(v4, v8, 0);
}


void AppendSkillExchangeDialog__Init(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C2AF83 & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    byte_4C2AF83 = 1;
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
    sub_1C2D6EC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  this->fields.isButtonEnable = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void AppendSkillExchangeDialog__OnClickCancel(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C2AF87 & 1) == 0 )
  {
    sub_1C2D490(&Method_AppendSkillExchangeDialog_OnClickCancel__);
    byte_4C2AF87 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_AppendSkillExchangeDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_AppendSkillExchangeDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void AppendSkillExchangeDialog__OnClickDecide(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C2AF86 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AppendSkillExchangeDialog_OnClickDecide__);
    sub_1C2D490(&Method_AppendSkillExchangeDialog__OnClickDecide_b__24_0__);
    byte_4C2AF86 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_AppendSkillExchangeDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_AppendSkillExchangeDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_AppendSkillExchangeDialog__OnClickDecide_b__24_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void AppendSkillExchangeDialog__OnEnable(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C2AF88 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3066/*"BaseWindow/ButtonBase/CancelButton"*/);
    byte_4C2AF88 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_3066/*"BaseWindow/ButtonBase/CancelButton"*/, 0);
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
  const MethodInfo *v12; // x3
  UILabel_o *titleLabel; // x23
  System_String_o *appendSkillBaseIconComp; // x0
  __int64 v15; // x1
  UILabel_o *appendSkillBaseInfo; // x23
  UILabel_o *beforeAppendSkillBaseLvInfo; // x23
  AppendSkillExchangeDialog_o *v18; // x0
  const MethodInfo *v19; // x2
  UILabel_o *afterAppendSkillBaseLvInfo; // x23
  const MethodInfo *v21; // x2
  System_String_o *v22; // x24
  Il2CppObject *appended; // x0
  UILabel_o *appendSkillTargetInfo; // x23
  UILabel_o *beforeAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v26; // x0
  const MethodInfo *v27; // x2
  UILabel_o *afterAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v29; // x0
  int32_t currentLv; // w1
  System_String_o *v31; // x22
  const MethodInfo *v32; // x2
  Il2CppObject *v33; // x0
  bool IsExchangeLimited; // w0
  UILabel_o *appendSkillWarningMessageLabel; // x21
  bool v36; // w22
  System_String_o *v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v49; // x20
  int32_t v50; // [xsp+8h] [xbp-48h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2AF84 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AppendSkillExchangeDialog_EndOpen__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1999/*"APPEND_SKILL_EXCHANGE_UNLIMITED_MSG"*/);
    sub_1C2D490(&StringLiteral_1997/*"APPEND_SKILL_EXCHANGE_TARGET"*/);
    sub_1C2D490(&StringLiteral_1978/*"APPEND_SKILL_EXCHANGE_BASE"*/);
    sub_1C2D490(&StringLiteral_1990/*"APPEND_SKILL_EXCHANGE_MSG"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_1989/*"APPEND_SKILL_EXCHANGE_LV"*/);
    sub_1C2D490(&StringLiteral_1998/*"APPEND_SKILL_EXCHANGE_TITLE"*/);
    sub_1C2D490(&StringLiteral_1994/*"APPEND_SKILL_EXCHANGE_REMAINING_COUNT"*/);
    byte_4C2AF84 = 1;
  }
  AppendSkillExchangeDialog__Init(this, (const MethodInfo *)baseData);
  this->fields.onDecide = decideAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)decideAction, v11, v12);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1998/*"APPEND_SKILL_EXCHANGE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, appendSkillBaseIconComp, 0);
  appendSkillBaseInfo = this->fields.appendSkillBaseInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1978/*"APPEND_SKILL_EXCHANGE_BASE"*/, 0);
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
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v18, baseData->fields.currentLv, v19);
  if ( !beforeAppendSkillBaseLvInfo )
    goto LABEL_32;
  UILabel__set_text(beforeAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0);
  afterAppendSkillBaseLvInfo = this->fields.afterAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1989/*"APPEND_SKILL_EXCHANGE_LV"*/, 0);
  if ( !targetData )
    goto LABEL_32;
  v22 = appendSkillBaseIconComp;
  appended = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(
                               (AppendSkillExchangeDialog_o *)appendSkillBaseIconComp,
                               targetData->fields.currentLv,
                               v21);
  appendSkillBaseIconComp = System_String__Format(v22, appended, 0);
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
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1997/*"APPEND_SKILL_EXCHANGE_TARGET"*/, 0);
  if ( !appendSkillTargetInfo )
    goto LABEL_32;
  UILabel__set_text(appendSkillTargetInfo, appendSkillBaseIconComp, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillTargetIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, targetData->fields.currentId, 0);
  beforeAppendSkillTargetLvInfo = this->fields.beforeAppendSkillTargetLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v26, targetData->fields.currentLv, v27);
  if ( !beforeAppendSkillTargetLvInfo )
    goto LABEL_32;
  UILabel__set_text(beforeAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0);
  afterAppendSkillTargetLvInfo = this->fields.afterAppendSkillTargetLvInfo;
  v29 = (AppendSkillExchangeDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1989/*"APPEND_SKILL_EXCHANGE_LV"*/, 0);
  currentLv = baseData->fields.currentLv;
  v31 = (System_String_o *)v29;
  v33 = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(v29, currentLv, v32);
  appendSkillBaseIconComp = System_String__Format(v31, v33, 0);
  if ( !afterAppendSkillTargetLvInfo
    || (UILabel__set_text(afterAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0),
        (appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetTitleLabel) == 0)
    || (UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetName, 0),
        (appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetMessageLabel) == 0) )
  {
LABEL_32:
    sub_1C2D6EC(appendSkillBaseIconComp, v15);
  }
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetDetail, 0);
  IsExchangeLimited = UserServantAppendPassiveSkillMaster__IsExchangeLimited(0);
  appendSkillWarningMessageLabel = this->fields.appendSkillWarningMessageLabel;
  v36 = IsExchangeLimited;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v36 )
      goto LABEL_22;
LABEL_26:
    appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_1999/*"APPEND_SKILL_EXCHANGE_UNLIMITED_MSG"*/, 0);
    if ( !appendSkillWarningMessageLabel )
      goto LABEL_32;
    goto LABEL_27;
  }
  if ( !IsExchangeLimited )
    goto LABEL_26;
LABEL_22:
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_1990/*"APPEND_SKILL_EXCHANGE_MSG"*/, 0);
  v51 = remainingCount;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v38, v39, v40);
  appendSkillBaseIconComp = System_String__Format(v37, v41, 0);
  if ( !appendSkillWarningMessageLabel )
    goto LABEL_32;
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0);
  appendSkillWarningMessageLabel = this->fields.remainingCountLabel;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_1994/*"APPEND_SKILL_EXCHANGE_REMAINING_COUNT"*/, 0);
  v50 = remainingCount;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v43, v44, v45);
  appendSkillBaseIconComp = System_String__Format(v42, v46, 0);
  if ( !appendSkillWarningMessageLabel )
    goto LABEL_32;
LABEL_27:
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_32;
  UILabel__set_text(decideButtonLabel, appendSkillBaseIconComp, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_32;
  UILabel__set_text(cancelButtonLabel, appendSkillBaseIconComp, 0);
  v49 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_AppendSkillExchangeDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0);
}


void AppendSkillExchangeDialog___OnClickDecide_b__24_0(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onDecide, 0);
}