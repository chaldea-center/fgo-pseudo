void __fastcall SummonLimitWarningDlgComponent___ctor(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418AE2B & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AE2B = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__Close(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonLimitWarningDlgComponent__Close_31116268(this, 0LL, v2);
}


void __fastcall SummonLimitWarningDlgComponent__Close_31116268(
        SummonLimitWarningDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418AE26 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SummonLimitWarningDlgComponent_EndClose__, v10);
    byte_418AE26 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__EndClose(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SummonLimitWarningDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall SummonLimitWarningDlgComponent__EndOpen(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SummonLimitWarningDlgComponent__Init(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_418AE22 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418AE22 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherLabel;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel;
  if ( !gameObject
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.otherLabel2) == 0LL)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel2) == 0LL)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.settingLabel) == 0LL) )
  {
LABEL_17:
    sub_B2C434(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OnClickCancel(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2

  if ( (byte_418AE29 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE29 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v3);
    SummonLimitWarningDlgComponent__callback(this, 0, v4);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickDecide(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2

  if ( (byte_418AE27 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE27 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v3);
    SummonLimitWarningDlgComponent__callback(this, 2, v4);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickOtherScene(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2

  if ( (byte_418AE28 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE28 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SummonLimitWarningDlgComponent__SetButtonEnable(this, 0, v3);
    SummonLimitWarningDlgComponent__callback(this, 1, v4);
  }
}


void __fastcall SummonLimitWarningDlgComponent__OnClickSetting(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v8; // x21

  if ( (byte_418AE2A & 1) == 0 )
  {
    sub_B2C35C(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SummonLimitWarningDlgComponent_settingResult__, v4);
    byte_418AE2A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_B2C42C(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonLimitWarningDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_B2C434(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenManaWarning(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_GameObject_o *v30; // x20
  UILabel_o *titleLabel; // x21
  UILabel_o *msgLabel; // x21
  System_String_o *v33; // x22
  Il2CppObject *v34; // x20
  BalanceConfig_c *v35; // x8
  Il2CppObject *v36; // x0
  UILabel_o *otherLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v40; // x2
  System_Action_o *v41; // x20
  int32_t UserItemMax; // [xsp+8h] [xbp-38h] BYREF
  int monitor; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418AE24 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_B2C35C(&StringLiteral_12448/*"SUMMON_MANA_LIMIT_WARNING_DECIDE"*/, v11);
    sub_B2C35C(&StringLiteral_12412/*"SUMMON_AUTOSALE_BUTTON"*/, v12);
    sub_B2C35C(&StringLiteral_12449/*"SUMMON_MANA_LIMIT_WARNING_MSG"*/, v13);
    sub_B2C35C(&StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_12450/*"SUMMON_MANA_LIMIT_WARNING_TITLE"*/, v15);
    byte_418AE24 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_39;
  v30 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12450/*"SUMMON_MANA_LIMIT_WARNING_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SUMMON_MANA_LIMIT_WARNING_MSG"*/, 0LL);
  if ( !v30 )
    goto LABEL_39;
  v33 = (System_String_o *)gameObject;
  monitor = (int)v30[7].monitor;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v35 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v35->static_fields->UserItemMax;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserItemMax);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v33, v34, v36, 0LL);
  if ( !msgLabel )
    goto LABEL_39;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  otherLabel = this->fields.otherLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"SUMMON_MANA_LIMIT_WARNING_DECIDE"*/, 0LL);
  if ( !otherLabel
    || (UILabel__set_text(otherLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL),
        !settingLabel) )
  {
LABEL_39:
    sub_B2C434(gameObject, v17);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v40);
  this->fields.state = 1;
  v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenQpWarning(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *titleLabel2; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *confirmLabel; // x21
  UILabel_o *qpLabel; // x21
  System_String_o *v41; // x22
  Il2CppObject *v42; // x20
  BalanceConfig_c *v43; // x8
  Il2CppObject *v44; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *otherLabel2; // x20
  UILabel_o *cancelLabel2; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v49; // x2
  System_Action_o *v50; // x20
  int32_t QpMax; // [xsp+8h] [xbp-38h] BYREF
  int klass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418AE23 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_B2C35C(&StringLiteral_12412/*"SUMMON_AUTOSALE_BUTTON"*/, v11);
    sub_B2C35C(&StringLiteral_12457/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, v12);
    sub_B2C35C(&StringLiteral_12455/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, v13);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v14);
    sub_B2C35C(&StringLiteral_12460/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, v15);
    sub_B2C35C(&StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, v16);
    sub_B2C35C(&StringLiteral_12458/*"SUMMON_QP_LIMIT_WARNING_TITLE"*/, v17);
    sub_B2C35C(&StringLiteral_12456/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, v18);
    byte_418AE23 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_45;
  v33 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_45;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v34, 8.0, 152.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_45;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v35, 8.0, 87.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_45;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v36, 2.0, 49.0, 0LL);
  titleLabel2 = this->fields.titleLabel2;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12458/*"SUMMON_QP_LIMIT_WARNING_TITLE"*/, 0LL);
  if ( !titleLabel2 )
    goto LABEL_45;
  UILabel__set_text(titleLabel2, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_45;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  confirmLabel = this->fields.confirmLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12455/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_45;
  UILabel__set_text(confirmLabel, (System_String_o *)gameObject, 0LL);
  qpLabel = this->fields.qpLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12457/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  if ( !v33 )
    goto LABEL_45;
  v41 = (System_String_o *)gameObject;
  klass = (int)v33[4].klass;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
  v43 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  QpMax = v43->static_fields->QpMax;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &QpMax);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v41, v42, v44, 0LL);
  if ( !qpLabel )
    goto LABEL_45;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  otherLabel2 = this->fields.otherLabel2;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12456/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, 0LL);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, (System_String_o *)gameObject, 0LL),
        cancelLabel2 = this->fields.cancelLabel2,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0LL),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL),
        !settingLabel) )
  {
LABEL_45:
    sub_B2C434(gameObject, v20);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v49);
  this->fields.state = 1;
  v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OpenQpWarning2(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *titleLabel2; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *confirmLabel; // x21
  UILabel_o *qpLabel; // x21
  System_String_o *v41; // x22
  Il2CppObject *v42; // x20
  BalanceConfig_c *v43; // x8
  Il2CppObject *v44; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *otherLabel2; // x20
  UILabel_o *cancelLabel2; // x20
  UILabel_o *settingLabel; // x20
  const MethodInfo *v49; // x2
  System_Action_o *v50; // x20
  int32_t QpMax; // [xsp+8h] [xbp-38h] BYREF
  int klass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418AE25 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_B2C35C(&StringLiteral_12461/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, v11);
    sub_B2C35C(&StringLiteral_12412/*"SUMMON_AUTOSALE_BUTTON"*/, v12);
    sub_B2C35C(&StringLiteral_12457/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, v13);
    sub_B2C35C(&StringLiteral_12459/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, v14);
    sub_B2C35C(&StringLiteral_12455/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, v15);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v16);
    sub_B2C35C(&StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, v17);
    sub_B2C35C(&StringLiteral_12456/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, v18);
    byte_418AE25 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_45;
  v33 = gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.otherButton2;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton2;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel;
  if ( !gameObject )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel2;
  if ( !gameObject )
    goto LABEL_45;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v34, 8.0, 140.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
  if ( !gameObject )
    goto LABEL_45;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v35, 8.0, 74.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.confirmLabel;
  if ( !gameObject )
    goto LABEL_45;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v36, 3.0, 49.0, 0LL);
  titleLabel2 = this->fields.titleLabel2;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12459/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, 0LL);
  if ( !titleLabel2 )
    goto LABEL_45;
  UILabel__set_text(titleLabel2, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_45;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
  confirmLabel = this->fields.confirmLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12455/*"SUMMON_QP_LIMIT_WARNING_CONFIRM"*/, 0LL);
  if ( !confirmLabel )
    goto LABEL_45;
  UILabel__set_text(confirmLabel, (System_String_o *)gameObject, 0LL);
  qpLabel = this->fields.qpLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12457/*"SUMMON_QP_LIMIT_WARNING_MSG"*/, 0LL);
  if ( !v33 )
    goto LABEL_45;
  v41 = (System_String_o *)gameObject;
  klass = (int)v33[4].klass;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
  v43 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  QpMax = v43->static_fields->QpMax;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &QpMax);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v41, v42, v44, 0LL);
  if ( !qpLabel )
    goto LABEL_45;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  otherLabel2 = this->fields.otherLabel2;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12456/*"SUMMON_QP_LIMIT_WARNING_DECIDE"*/, 0LL);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, (System_String_o *)gameObject, 0LL),
        cancelLabel2 = this->fields.cancelLabel2,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUMMON_LIMIT_WARNING_CANCEL"*/, 0LL),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)gameObject, 0LL),
        settingLabel = this->fields.settingLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL),
        !settingLabel) )
  {
LABEL_45:
    sub_B2C434(gameObject, v20);
  }
  UILabel__set_text(settingLabel, (System_String_o *)gameObject, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v49);
  this->fields.state = 1;
  v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonLimitWarningDlgComponent__SetButtonEnable(
        SummonLimitWarningDlgComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w20

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
    sub_B2C434(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__add_callbackFunc(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonLimitWarningDlgComponent_o *v11; // x0
  SummonLimitWarningDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418AE20 & 1) == 0 )
  {
    sub_B2C35C(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, value);
    byte_418AE20 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonLimitWarningDlgComponent_CallbackFunc_c *)v8->klass != SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SummonLimitWarningDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SummonLimitWarningDlgComponent__callback(
        SummonLimitWarningDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x0
  SummonLimitWarningDlgComponent_CallbackFunc_o *v10; // x20
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonLimitWarningDlgComponent_CallbackFunc__Invoke(v10, result, 0LL);
  }
}


void __fastcall SummonLimitWarningDlgComponent__remove_callbackFunc(
        SummonLimitWarningDlgComponent_o *this,
        SummonLimitWarningDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonLimitWarningDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonLimitWarningDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonLimitWarningDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418AE21 & 1) == 0 )
  {
    sub_B2C35C(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, value);
    byte_418AE21 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonLimitWarningDlgComponent_CallbackFunc_c *)v8->klass != SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SummonLimitWarningDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonLimitWarningDlgComponent__settingResult(
        SummonLimitWarningDlgComponent_o *this,
        bool res,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *autoSaleDialogCloseCallbackFunc; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close(autoSaleDlgInfo, 0LL);
  if ( !res )
  {
    autoSaleDlgInfo = (AutomaticSaleDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( autoSaleDlgInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSaleDlgInfo, 1, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonLimitWarningDlgComponent__Close_31116268(this, 0LL, v19);
    System_Action__Invoke(autoSaleDialogCloseCallbackFunc, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SummonLimitWarningDlgComponent_CallbackFunc__BeginInvoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_41847C4 & 1) == 0 )
  {
    sub_B2C35C(&SummonLimitWarningDlgComponent_Result_TypeInfo, *(_QWORD *)&result);
    byte_41847C4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SummonLimitWarningDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SummonLimitWarningDlgComponent_CallbackFunc__EndInvoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonLimitWarningDlgComponent_CallbackFunc__Invoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  SummonLimitWarningDlgComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  SummonLimitWarningDlgComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  SummonLimitWarningDlgComponent_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (SummonLimitWarningDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}