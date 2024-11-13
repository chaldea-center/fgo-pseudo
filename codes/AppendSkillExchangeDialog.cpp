void __fastcall AppendSkillExchangeDialog___ctor(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1996C & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1996C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AppendSkillExchangeDialog__Close(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall AppendSkillExchangeDialog__EndOpen(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AppendSkillExchangeDialog__ExchangeLvText(
        AppendSkillExchangeDialog_o *this,
        int32_t currentLv,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x20
  Il2CppObject *v11; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19968 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&currentLv, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_2108/*"APPEND_SKILL_EXCHANGE_LOCK"*/, v8, v9);
    byte_4B19968 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&currentLv);
  if ( currentLv <= 0 )
    return LocalizationManager__Get((System_String_o *)StringLiteral_2108/*"APPEND_SKILL_EXCHANGE_LOCK"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
  v13 = currentLv;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return System_String__Format(v10, v11, 0LL);
}


void __fastcall AppendSkillExchangeDialog__Init(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B19966 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B19966 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillBaseInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.beforeAppendSkillBaseLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.afterAppendSkillBaseLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillIconBaseTitleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillIconBaseMessageLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillTargetInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.beforeAppendSkillTargetLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.afterAppendSkillTargetLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillIconTargetTitleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillIconTargetMessageLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillWarningMessageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.remainingCountLabel) == 0LL)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.decideButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.cancelButtonLabel) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AppendSkillExchangeDialog__OnClickCancel(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B1996A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AppendSkillExchangeDialog_OnClickCancel__, method, v2);
    byte_4B1996A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v4 = Method_AppendSkillExchangeDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_AppendSkillExchangeDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall AppendSkillExchangeDialog__OnClickDecide(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B19969 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AppendSkillExchangeDialog_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&Method_AppendSkillExchangeDialog__OnClickDecide_b__24_0__, v6, v7);
    byte_4B19969 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v8 = Method_AppendSkillExchangeDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_AppendSkillExchangeDialog_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_AppendSkillExchangeDialog__OnClickDecide_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall AppendSkillExchangeDialog__OnEnable(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B1996B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3215/*"BaseWindow/ButtonBase/CancelButton"*/, method, v2);
    byte_4B1996B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_3215/*"BaseWindow/ButtonBase/CancelButton"*/, 0LL);
}


void __fastcall AppendSkillExchangeDialog__Open(
        AppendSkillExchangeDialog_o *this,
        SetLevelUpData_o *baseData,
        SetLevelUpData_o *targetData,
        int32_t remainingCount,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  UILabel_o *titleLabel; // x23
  System_String_o *appendSkillBaseIconComp; // x0
  __int64 v44; // x1
  UILabel_o *appendSkillBaseInfo; // x23
  UILabel_o *beforeAppendSkillBaseLvInfo; // x23
  AppendSkillExchangeDialog_o *v47; // x0
  const MethodInfo *v48; // x2
  UILabel_o *afterAppendSkillBaseLvInfo; // x23
  const MethodInfo *v50; // x2
  System_String_o *v51; // x24
  Il2CppObject *appended; // x0
  UILabel_o *appendSkillTargetInfo; // x23
  UILabel_o *beforeAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v55; // x0
  const MethodInfo *v56; // x2
  UILabel_o *afterAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v58; // x0
  int32_t currentLv; // w1
  System_String_o *v60; // x22
  const MethodInfo *v61; // x2
  Il2CppObject *v62; // x0
  bool IsExchangeLimited; // w0
  __int64 v64; // x1
  UILabel_o *appendSkillWarningMessageLabel; // x21
  bool v66; // w22
  System_String_o *v67; // x22
  Il2CppObject *v68; // x0
  System_String_o *v69; // x22
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_o *v77; // x20
  int32_t v78; // [xsp+8h] [xbp-48h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19967 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, targetData);
    sub_1BCA7E0(&Method_AppendSkillExchangeDialog_EndOpen__, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_2119/*"APPEND_SKILL_EXCHANGE_UNLIMITED_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2117/*"APPEND_SKILL_EXCHANGE_TARGET"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2098/*"APPEND_SKILL_EXCHANGE_BASE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_2110/*"APPEND_SKILL_EXCHANGE_MSG"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_2109/*"APPEND_SKILL_EXCHANGE_LV"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_2118/*"APPEND_SKILL_EXCHANGE_TITLE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_2114/*"APPEND_SKILL_EXCHANGE_REMAINING_COUNT"*/, v33, v34);
    byte_4B19967 = 1;
  }
  AppendSkillExchangeDialog__Init(this, (const MethodInfo *)baseData);
  this->fields.onDecide = decideAction;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)decideAction, v35, v36, v37, v38, v39, v40);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2118/*"APPEND_SKILL_EXCHANGE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, appendSkillBaseIconComp, 0LL);
  appendSkillBaseInfo = this->fields.appendSkillBaseInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2098/*"APPEND_SKILL_EXCHANGE_BASE"*/, 0LL);
  if ( !appendSkillBaseInfo )
    goto LABEL_32;
  UILabel__set_text(appendSkillBaseInfo, appendSkillBaseIconComp, 0LL);
  if ( !baseData )
    goto LABEL_32;
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillBaseIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, baseData->fields.currentId, 0LL);
  beforeAppendSkillBaseLvInfo = this->fields.beforeAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v47, baseData->fields.currentLv, v48);
  if ( !beforeAppendSkillBaseLvInfo )
    goto LABEL_32;
  UILabel__set_text(beforeAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0LL);
  afterAppendSkillBaseLvInfo = this->fields.afterAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2109/*"APPEND_SKILL_EXCHANGE_LV"*/, 0LL);
  if ( !targetData )
    goto LABEL_32;
  v51 = appendSkillBaseIconComp;
  appended = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(
                               (AppendSkillExchangeDialog_o *)appendSkillBaseIconComp,
                               targetData->fields.currentLv,
                               v50);
  appendSkillBaseIconComp = System_String__Format(v51, appended, 0LL);
  if ( !afterAppendSkillBaseLvInfo )
    goto LABEL_32;
  UILabel__set_text(afterAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0LL);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconBaseTitleLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, baseData->fields.targetName, 0LL);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconBaseMessageLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, baseData->fields.targetDetail, 0LL);
  appendSkillTargetInfo = this->fields.appendSkillTargetInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2117/*"APPEND_SKILL_EXCHANGE_TARGET"*/, 0LL);
  if ( !appendSkillTargetInfo )
    goto LABEL_32;
  UILabel__set_text(appendSkillTargetInfo, appendSkillBaseIconComp, 0LL);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillTargetIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, targetData->fields.currentId, 0LL);
  beforeAppendSkillTargetLvInfo = this->fields.beforeAppendSkillTargetLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v55, targetData->fields.currentLv, v56);
  if ( !beforeAppendSkillTargetLvInfo )
    goto LABEL_32;
  UILabel__set_text(beforeAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0LL);
  afterAppendSkillTargetLvInfo = this->fields.afterAppendSkillTargetLvInfo;
  v58 = (AppendSkillExchangeDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2109/*"APPEND_SKILL_EXCHANGE_LV"*/, 0LL);
  currentLv = baseData->fields.currentLv;
  v60 = (System_String_o *)v58;
  v62 = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(v58, currentLv, v61);
  appendSkillBaseIconComp = System_String__Format(v60, v62, 0LL);
  if ( !afterAppendSkillTargetLvInfo
    || (UILabel__set_text(afterAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0LL),
        (appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetTitleLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetName, 0LL),
        (appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetMessageLabel) == 0LL) )
  {
LABEL_32:
    sub_1BCAA3C(appendSkillBaseIconComp, v44);
  }
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetDetail, 0LL);
  IsExchangeLimited = UserServantAppendPassiveSkillMaster__IsExchangeLimited(0LL);
  appendSkillWarningMessageLabel = this->fields.appendSkillWarningMessageLabel;
  v66 = IsExchangeLimited;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
    if ( v66 )
      goto LABEL_22;
LABEL_26:
    appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2119/*"APPEND_SKILL_EXCHANGE_UNLIMITED_MSG"*/, 0LL);
    if ( !appendSkillWarningMessageLabel )
      goto LABEL_32;
    goto LABEL_27;
  }
  if ( !IsExchangeLimited )
    goto LABEL_26;
LABEL_22:
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2110/*"APPEND_SKILL_EXCHANGE_MSG"*/, 0LL);
  v79 = remainingCount;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  appendSkillBaseIconComp = System_String__Format(v67, v68, 0LL);
  if ( !appendSkillWarningMessageLabel )
    goto LABEL_32;
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0LL);
  appendSkillWarningMessageLabel = this->fields.remainingCountLabel;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_2114/*"APPEND_SKILL_EXCHANGE_REMAINING_COUNT"*/, 0LL);
  v78 = remainingCount;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
  appendSkillBaseIconComp = System_String__Format(v69, v70, 0LL);
  if ( !appendSkillWarningMessageLabel )
    goto LABEL_32;
LABEL_27:
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_32;
  UILabel__set_text(decideButtonLabel, appendSkillBaseIconComp, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_32;
  UILabel__set_text(cancelButtonLabel, appendSkillBaseIconComp, 0LL);
  v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_AppendSkillExchangeDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
}


void __fastcall AppendSkillExchangeDialog___OnClickDecide_b__24_0(
        AppendSkillExchangeDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onDecide, 0LL);
}