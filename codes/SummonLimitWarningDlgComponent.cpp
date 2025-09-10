void SummonLimitWarningDlgComponent___ctor(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C238D4 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C238D4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SummonLimitWarningDlgComponent__Close(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonLimitWarningDlgComponent__Close_35424644(this, 0, v2);
}


void SummonLimitWarningDlgComponent__Close_35424644(
        SummonLimitWarningDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C238CF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_EndClose__);
    byte_4C238CF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void SummonLimitWarningDlgComponent__EndClose(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  SummonLimitWarningDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void SummonLimitWarningDlgComponent__EndOpen(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SummonLimitWarningDlgComponent__Init(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C238CB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C238CB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel;
  if ( !gameObject
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.otherLabel2) == 0)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel2) == 0)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.settingLabel) == 0) )
  {
LABEL_17:
    sub_1C2D6EC(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SummonLimitWarningDlgComponent__OnClickCancel(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4C238D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_OnClickCancel__);
    byte_4C238D2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SummonLimitWarningDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SummonLimitWarningDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v5);
    SummonLimitWarningDlgComponent__callback(this, 0, v6);
  }
}


void SummonLimitWarningDlgComponent__OnClickDecide(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4C238D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_OnClickDecide__);
    byte_4C238D0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SummonLimitWarningDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SummonLimitWarningDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v5);
    SummonLimitWarningDlgComponent__callback(this, 2, v6);
  }
}


void SummonLimitWarningDlgComponent__OnClickOtherScene(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4C238D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_OnClickOtherScene__);
    byte_4C238D1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SummonLimitWarningDlgComponent_OnClickOtherScene__;
    if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickOtherScene__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SummonLimitWarningDlgComponent_OnClickOtherScene__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v5);
    SummonLimitWarningDlgComponent__callback(this, 1, v6);
  }
}


void SummonLimitWarningDlgComponent__OnClickSetting(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v8; // x21

  if ( (byte_4C238D3 & 1) == 0 )
  {
    sub_1C2D490(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_OnClickSetting__);
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_settingResult__);
    byte_4C238D3 = 1;
  }
  v3 = Method_SummonLimitWarningDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonLimitWarningDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SummonLimitWarningDlgComponent_OnClickSetting__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1C2D6DC(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonLimitWarningDlgComponent_settingResult__,
          0),
        !autoSaleDlgInfo) )
  {
    sub_1C2D6EC(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0);
}


void SummonLimitWarningDlgComponent__OpenManaWarning(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x20
  UILabel_o *titleLabel; // x21
  UILabel_o *msgLabel; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_String_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  BalanceConfig_c *v24; // x8
  Il2CppObject *v25; // x20
  Il2CppObject *v26; // x0
  UILabel_o *otherLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v30; // x2
  System_Action_o *v31; // x20
  int32_t UserItemMax; // [xsp+8h] [xbp-38h] BYREF
  int klass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C238CD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_EndOpen__);
    sub_1C2D490(&StringLiteral_12451/*"SUMMON_MANA_LIMIT_WARNING_DECIDE"*/);
    sub_1C2D490(&StringLiteral_12410/*"SUMMON_AUTOSALE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_12452/*"SUMMON_MANA_LIMIT_WARNING_MSG"*/);
    sub_1C2D490(&StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/);
    sub_1C2D490(&StringLiteral_12453/*"SUMMON_MANA_LIMIT_WARNING_TITLE"*/);
    byte_4C238CD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v11,
    v12);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.otherButton )
    goto LABEL_37;
  v13 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12453/*"SUMMON_MANA_LIMIT_WARNING_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12452/*"SUMMON_MANA_LIMIT_WARNING_MSG"*/, 0);
  if ( !v13 )
    goto LABEL_37;
  v19 = (System_String_o *)gameObject;
  klass = (int)v13[8].klass;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &klass, v16, v17, v18);
  v24 = BalanceConfig_TypeInfo;
  v25 = (Il2CppObject *)v20;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v24->static_fields->UserItemMax;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserItemMax, v21, v22, v23);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(v19, v25, v26, 0);
  if ( !msgLabel )
    goto LABEL_37;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0);
  otherLabel = this->fields.otherLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"SUMMON_MANA_LIMIT_WARNING_DECIDE"*/, 0);
  if ( !otherLabel
    || (UILabel__set_text(otherLabel, (System_String_o *)gameObject, 0),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12410/*"SUMMON_AUTOSALE_BUTTON"*/, 0),
        !settingLabel) )
  {
LABEL_37:
    sub_1C2D6EC(gameObject, v8);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v30);
  this->fields.state = 1;
  v31 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0);
}


void SummonLimitWarningDlgComponent__OpenQpWarning(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *titleLabel2; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *confirmLabel; // x21
  UILabel_o *qpLabel; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_String_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BalanceConfig_c *v29; // x8
  Il2CppObject *v30; // x20
  Il2CppObject *v31; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *otherLabel2; // x20
  UILabel_o *cancelLabel2; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v36; // x2
  System_Action_o *v37; // x20
  int64_t QpMax; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_c *klass; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C238CC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_EndOpen__);
    sub_1C2D490(&StringLiteral_12410/*"SUMMON_AUTOSALE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_12460/*"SUMMON_QP_LIMIT_WARNING_MSG"*/);
    sub_1C2D490(&StringLiteral_12458/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_12463/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/);
    sub_1C2D490(&StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/);
    sub_1C2D490(&StringLiteral_12461/*"SUMMON_QP_LIMIT_WARNING_TITLE"*/);
    sub_1C2D490(&StringLiteral_12459/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/);
    byte_4C238CC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v11,
    v12);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.otherButton )
    goto LABEL_43;
  v13 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_43;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v14, 8.0, 152.0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v15, 8.0, 87.0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v16, 2.0, 49.0, 0);
  titleLabel2 = this->fields.titleLabel2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SUMMON_QP_LIMIT_WARNING_TITLE"*/, 0);
  if ( !titleLabel2 )
    goto LABEL_43;
  UILabel__set_text(titleLabel2, (System_String_o *)gameObject, 0);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_43;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
  confirmLabel = this->fields.confirmLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12458/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, 0);
  if ( !confirmLabel )
    goto LABEL_43;
  UILabel__set_text(confirmLabel, (System_String_o *)gameObject, 0);
  qpLabel = this->fields.qpLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0);
  if ( !v13 )
    goto LABEL_43;
  v24 = (System_String_o *)gameObject;
  klass = v13[4].klass;
  v25 = j_il2cpp_value_box_0(long_TypeInfo, &klass, v21, v22, v23);
  v29 = BalanceConfig_TypeInfo;
  v30 = (Il2CppObject *)v25;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  QpMax = v29->static_fields->QpMax;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &QpMax, v26, v27, v28);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(v24, v30, v31, 0);
  if ( !qpLabel )
    goto LABEL_43;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_43;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
  otherLabel2 = this->fields.otherLabel2;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12459/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, 0);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, (System_String_o *)gameObject, 0),
        cancelLabel2 = this->fields.cancelLabel2,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)gameObject, 0),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12410/*"SUMMON_AUTOSALE_BUTTON"*/, 0),
        !settingLabel) )
  {
LABEL_43:
    sub_1C2D6EC(gameObject, v8);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v36);
  this->fields.state = 1;
  v37 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0);
}


void SummonLimitWarningDlgComponent__OpenQpWarning2(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *titleLabel2; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *confirmLabel; // x21
  UILabel_o *qpLabel; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_String_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BalanceConfig_c *v29; // x8
  Il2CppObject *v30; // x20
  Il2CppObject *v31; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *otherLabel2; // x20
  UILabel_o *cancelLabel2; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v36; // x2
  System_Action_o *v37; // x20
  int64_t QpMax; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_c *klass; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C238CE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SummonLimitWarningDlgComponent_EndOpen__);
    sub_1C2D490(&StringLiteral_12464/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/);
    sub_1C2D490(&StringLiteral_12410/*"SUMMON_AUTOSALE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_12460/*"SUMMON_QP_LIMIT_WARNING_MSG"*/);
    sub_1C2D490(&StringLiteral_12462/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/);
    sub_1C2D490(&StringLiteral_12458/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/);
    sub_1C2D490(&StringLiteral_12459/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/);
    byte_4C238CE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v11,
    v12);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.otherButton )
    goto LABEL_43;
  v13 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_43;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v14, 8.0, 140.0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_43;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v15, 8.0, 74.0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_43;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v16, 3.0, 49.0, 0);
  titleLabel2 = this->fields.titleLabel2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, 0);
  if ( !titleLabel2 )
    goto LABEL_43;
  UILabel__set_text(titleLabel2, (System_String_o *)gameObject, 0);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12464/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, 0);
  if ( !warningLabel )
    goto LABEL_43;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
  confirmLabel = this->fields.confirmLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12458/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, 0);
  if ( !confirmLabel )
    goto LABEL_43;
  UILabel__set_text(confirmLabel, (System_String_o *)gameObject, 0);
  qpLabel = this->fields.qpLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0);
  if ( !v13 )
    goto LABEL_43;
  v24 = (System_String_o *)gameObject;
  klass = v13[4].klass;
  v25 = j_il2cpp_value_box_0(long_TypeInfo, &klass, v21, v22, v23);
  v29 = BalanceConfig_TypeInfo;
  v30 = (Il2CppObject *)v25;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  QpMax = v29->static_fields->QpMax;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &QpMax, v26, v27, v28);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(v24, v30, v31, 0);
  if ( !qpLabel )
    goto LABEL_43;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_43;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
  otherLabel2 = this->fields.otherLabel2;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12459/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, 0);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, (System_String_o *)gameObject, 0),
        cancelLabel2 = this->fields.cancelLabel2,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)gameObject, 0),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12410/*"SUMMON_AUTOSALE_BUTTON"*/, 0),
        !settingLabel) )
  {
LABEL_43:
    sub_1C2D6EC(gameObject, v8);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v36);
  this->fields.state = 1;
  v37 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonLimitWarningDlgComponent__SetButtonEnable(
        SummonLimitWarningDlgComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w20

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
    sub_1C2D6EC(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0);
}


void SummonLimitWarningDlgComponent__add_callbackFunc(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SummonLimitWarningDlgComponent_o *v10; // x0
  SummonLimitWarningDlgComponent_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C238C9 & 1) == 0 )
  {
    sub_1C2D490(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    byte_4C238C9 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SummonLimitWarningDlgComponent_CallbackFunc_c *)v7->klass != SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  SummonLimitWarningDlgComponent__remove_callbackFunc(v10, v11, v12);
}


void SummonLimitWarningDlgComponent__callback(
        SummonLimitWarningDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)result,
      callbackFunc->fields.method);
  }
}


void SummonLimitWarningDlgComponent__remove_callbackFunc(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SummonLimitWarningDlgComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C238CA & 1) == 0 )
  {
    sub_1C2D490(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    byte_4C238CA = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SummonLimitWarningDlgComponent_CallbackFunc_c *)v7->klass != SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  SummonLimitWarningDlgComponent__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void SummonLimitWarningDlgComponent__settingResult(
        SummonLimitWarningDlgComponent_o *this,
        bool res,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close(autoSaleDlgInfo, 0);
  if ( !res )
  {
    autoSaleDlgInfo = (AutomaticSaleDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( autoSaleDlgInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSaleDlgInfo, 1, 0);
      return;
    }
LABEL_8:
    sub_1C2D6EC(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonLimitWarningDlgComponent__Close_35424644(this, 0, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))autoSaleDialogCloseCallbackFunc->fields.invoke_impl)(
      autoSaleDialogCloseCallbackFunc->fields.method_code,
      autoSaleDialogCloseCallbackFunc->fields.method);
  }
}


void SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E2D8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E290;
}


System_IAsyncResult_o *SummonLimitWarningDlgComponent_CallbackFunc__BeginInvoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4C238D5 & 1) == 0 )
  {
    sub_1C2D490(&SummonLimitWarningDlgComponent_Result_TypeInfo);
    byte_4C238D5 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(SummonLimitWarningDlgComponent_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void SummonLimitWarningDlgComponent_CallbackFunc__EndInvoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void SummonLimitWarningDlgComponent_CallbackFunc__Invoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}