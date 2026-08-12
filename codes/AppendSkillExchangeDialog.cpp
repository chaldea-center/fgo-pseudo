void AppendSkillExchangeDialog___ctor(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59749A0 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_59749A0 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AppendSkillExchangeDialog__Awake(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  ;
}


void AppendSkillExchangeDialog__ClearDisplay(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.appendSkillBaseInfo;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.beforeAppendSkillBaseLvInfo;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.afterAppendSkillBaseLvInfo;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.appendSkillIconBaseTitleLabel;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.appendSkillIconBaseMessageLabel;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.appendSkillTargetInfo;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.beforeAppendSkillTargetLvInfo;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.afterAppendSkillTargetLvInfo;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.appendSkillIconTargetTitleLabel;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.appendSkillIconTargetMessageLabel;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.appendSkillWarningMessageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0),
        (titleLabel = this->fields.remainingCountLabel) == 0)
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0),
        (titleLabel = this->fields.decideButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0) )
  {
LABEL_17:
    sub_2213CDC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  this->fields.isButtonEnable = 0;
}


void AppendSkillExchangeDialog__Close(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_597499C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AppendSkillExchangeDialog_ClearDisplay__);
    byte_597499C = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_AppendSkillExchangeDialog_ClearDisplay__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
}


void AppendSkillExchangeDialog__EndOpen(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *AppendSkillExchangeDialog__ExchangeLvText(
        AppendSkillExchangeDialog_o *this,
        int32_t currentLv,
        const MethodInfo *method)
{
  int v4; // w8
  System_String_o *v5; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597499B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8611/*"LEVEL_INFO"*/);
    sub_2213A60(&StringLiteral_2086/*"APPEND_SKILL_EXCHANGE_LOCK"*/);
    byte_597499B = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( currentLv <= 0 )
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&currentLv);
    return LocalizationManager__Get((System_String_o *)StringLiteral_2086/*"APPEND_SKILL_EXCHANGE_LOCK"*/, 0);
  }
  else
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&currentLv);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8611/*"LEVEL_INFO"*/, 0);
    v8 = currentLv;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
    return System_String__Format(v5, v6, 0);
  }
}


void AppendSkillExchangeDialog__OnClickCancel(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_597499E & 1) == 0 )
  {
    sub_2213A60(&Method_AppendSkillExchangeDialog_OnClickCancel__);
    byte_597499E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_AppendSkillExchangeDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_AppendSkillExchangeDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    AppendSkillExchangeDialog__Close(this, v5);
  }
}


void AppendSkillExchangeDialog__OnClickDecide(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_597499D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AppendSkillExchangeDialog_OnClickDecide__);
    sub_2213A60(&Method_AppendSkillExchangeDialog__OnClickDecide_b__27_0__);
    byte_597499D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_AppendSkillExchangeDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_AppendSkillExchangeDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_AppendSkillExchangeDialog__OnClickDecide_b__27_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void AppendSkillExchangeDialog__OnDisable(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  ActionExtensions__Call(this->fields.onEndProcess, 0);
  this->fields.onEndProcess = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onEndProcess, 0, v3, v4, v5, v6, v7, v8);
}


void AppendSkillExchangeDialog__OnEnable(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_597499F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3191/*"BaseWindow/ButtonBase/CancelButton"*/);
    byte_597499F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_3191/*"BaseWindow/ButtonBase/CancelButton"*/, 0);
}


void AppendSkillExchangeDialog__Open(
        AppendSkillExchangeDialog_o *this,
        SetLevelUpData_o *baseData,
        SetLevelUpData_o *targetData,
        int32_t remainingCount,
        System_Action_o *decideAction,
        System_Action_o *onEndProcessAction,
        const MethodInfo *method)
{
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  UILabel_o *titleLabel; // x23
  System_String_o *appendSkillBaseIconComp; // x0
  __int64 v28; // x1
  UILabel_o *appendSkillBaseInfo; // x23
  UILabel_o *beforeAppendSkillBaseLvInfo; // x23
  AppendSkillExchangeDialog_o *v31; // x0
  const MethodInfo *v32; // x2
  UILabel_o *afterAppendSkillBaseLvInfo; // x23
  const MethodInfo *v34; // x2
  System_String_o *v35; // x24
  Il2CppObject *appended; // x0
  UILabel_o *appendSkillTargetInfo; // x23
  UILabel_o *beforeAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v39; // x0
  const MethodInfo *v40; // x2
  UILabel_o *afterAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v42; // x0
  int32_t currentLv; // w1
  System_String_o *v44; // x22
  const MethodInfo *v45; // x2
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  bool IsExchangeLimited; // w8
  UILabel_o *appendSkillWarningMessageLabel; // x21
  int v50; // w9
  System_String_o *v51; // x22
  Il2CppObject *v52; // x0
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v58; // x20
  int32_t v59; // [xsp+8h] [xbp-48h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_597499A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AppendSkillExchangeDialog_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2097/*"APPEND_SKILL_EXCHANGE_UNLIMITED_MSG"*/);
    sub_2213A60(&StringLiteral_2095/*"APPEND_SKILL_EXCHANGE_TARGET"*/);
    sub_2213A60(&StringLiteral_2076/*"APPEND_SKILL_EXCHANGE_BASE"*/);
    sub_2213A60(&StringLiteral_2088/*"APPEND_SKILL_EXCHANGE_MSG"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2087/*"APPEND_SKILL_EXCHANGE_LV"*/);
    sub_2213A60(&StringLiteral_2096/*"APPEND_SKILL_EXCHANGE_TITLE"*/);
    sub_2213A60(&StringLiteral_2092/*"APPEND_SKILL_EXCHANGE_REMAINING_COUNT"*/);
    byte_597499A = 1;
  }
  if ( this->fields.baseState )
    return;
  AppendSkillExchangeDialog__ClearDisplay(this, (const MethodInfo *)baseData);
  this->fields.onDecide = decideAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
    (int32_t)decideAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.onEndProcess = onEndProcessAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onEndProcess,
    (int32_t)onEndProcessAction,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2096/*"APPEND_SKILL_EXCHANGE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_36;
  UILabel__set_text(titleLabel, appendSkillBaseIconComp, 0);
  appendSkillBaseInfo = this->fields.appendSkillBaseInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2076/*"APPEND_SKILL_EXCHANGE_BASE"*/, 0);
  if ( !appendSkillBaseInfo )
    goto LABEL_36;
  UILabel__set_text(appendSkillBaseInfo, appendSkillBaseIconComp, 0);
  if ( !baseData )
    goto LABEL_36;
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillBaseIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_36;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, baseData->fields.currentId, 0);
  beforeAppendSkillBaseLvInfo = this->fields.beforeAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v31, baseData->fields.currentLv, v32);
  if ( !beforeAppendSkillBaseLvInfo )
    goto LABEL_36;
  UILabel__set_text(beforeAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0);
  afterAppendSkillBaseLvInfo = this->fields.afterAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2087/*"APPEND_SKILL_EXCHANGE_LV"*/, 0);
  if ( !targetData )
    goto LABEL_36;
  v35 = appendSkillBaseIconComp;
  appended = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(
                               (AppendSkillExchangeDialog_o *)appendSkillBaseIconComp,
                               targetData->fields.currentLv,
                               v34);
  appendSkillBaseIconComp = System_String__Format(v35, appended, 0);
  if ( !afterAppendSkillBaseLvInfo )
    goto LABEL_36;
  UILabel__set_text(afterAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconBaseTitleLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, baseData->fields.targetName, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconBaseMessageLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, baseData->fields.targetDetail, 0);
  appendSkillTargetInfo = this->fields.appendSkillTargetInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2095/*"APPEND_SKILL_EXCHANGE_TARGET"*/, 0);
  if ( !appendSkillTargetInfo )
    goto LABEL_36;
  UILabel__set_text(appendSkillTargetInfo, appendSkillBaseIconComp, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillTargetIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_36;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, targetData->fields.currentId, 0);
  beforeAppendSkillTargetLvInfo = this->fields.beforeAppendSkillTargetLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v39, targetData->fields.currentLv, v40);
  if ( !beforeAppendSkillTargetLvInfo )
    goto LABEL_36;
  UILabel__set_text(beforeAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0);
  afterAppendSkillTargetLvInfo = this->fields.afterAppendSkillTargetLvInfo;
  v42 = (AppendSkillExchangeDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2087/*"APPEND_SKILL_EXCHANGE_LV"*/, 0);
  currentLv = baseData->fields.currentLv;
  v44 = (System_String_o *)v42;
  v46 = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(v42, currentLv, v45);
  appendSkillBaseIconComp = System_String__Format(v44, v46, 0);
  if ( !afterAppendSkillTargetLvInfo )
    goto LABEL_36;
  UILabel__set_text(afterAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetTitleLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetName, 0);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetMessageLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetDetail, 0);
  IsExchangeLimited = UserServantAppendPassiveSkillMaster__IsExchangeLimited(0);
  appendSkillWarningMessageLabel = this->fields.appendSkillWarningMessageLabel;
  v50 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsExchangeLimited )
  {
    if ( !v50 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2088/*"APPEND_SKILL_EXCHANGE_MSG"*/, 0);
    v60 = remainingCount;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v60);
    appendSkillBaseIconComp = System_String__Format(v51, v52, 0);
    if ( !appendSkillWarningMessageLabel )
      goto LABEL_36;
    UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0);
    appendSkillWarningMessageLabel = this->fields.remainingCountLabel;
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2092/*"APPEND_SKILL_EXCHANGE_REMAINING_COUNT"*/, 0);
    v59 = remainingCount;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v59);
    appendSkillBaseIconComp = System_String__Format(v53, v54, 0);
    if ( !appendSkillWarningMessageLabel )
      goto LABEL_36;
    goto LABEL_30;
  }
  if ( !v50 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2097/*"APPEND_SKILL_EXCHANGE_UNLIMITED_MSG"*/, 0);
  if ( !appendSkillWarningMessageLabel )
LABEL_36:
    sub_2213CDC(appendSkillBaseIconComp, v28);
LABEL_30:
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_36;
  UILabel__set_text(decideButtonLabel, appendSkillBaseIconComp, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_36;
  UILabel__set_text(cancelButtonLabel, appendSkillBaseIconComp, 0);
  v58 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_AppendSkillExchangeDialog_EndOpen__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v58, 0, 0);
}


void AppendSkillExchangeDialog___OnClickDecide_b__27_0(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.onDecide, 0);
  AppendSkillExchangeDialog__ClearDisplay(this, v3);
}