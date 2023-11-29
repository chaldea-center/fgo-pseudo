void __fastcall SummonLimitWarningDlgComponent___ctor(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FD4A7 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD4A7 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__Close(SummonLimitWarningDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonLimitWarningDlgComponent__Close_31134284(this, 0LL, v2);
}


void __fastcall SummonLimitWarningDlgComponent__Close_31134284(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FD4A2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SummonLimitWarningDlgComponent_EndClose__, v10);
    byte_40FD4A2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__EndClose(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SummonLimitWarningDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
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
  UILabel_o *titleLabel; // x0
  UILabel_o *msgLabel; // x0
  UILabel_o *titleLabel2; // x0
  UILabel_o *warningLabel; // x0
  UILabel_o *confirmLabel; // x0
  UILabel_o *qpLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *otherLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *otherLabel2; // x0
  UILabel_o *cancelLabel2; // x0
  UILabel_o *settingLabel; // x0

  if ( (byte_40FD49E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FD49E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !msgLabel )
    goto LABEL_17;
  UILabel__set_text(msgLabel, (System_String_o *)StringLiteral_1, 0LL);
  titleLabel2 = this->fields.titleLabel2;
  if ( !titleLabel2 )
    goto LABEL_17;
  UILabel__set_text(titleLabel2, (System_String_o *)StringLiteral_1, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_17;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL);
  confirmLabel = this->fields.confirmLabel;
  if ( !confirmLabel )
    goto LABEL_17;
  UILabel__set_text(confirmLabel, (System_String_o *)StringLiteral_1, 0LL);
  qpLabel = this->fields.qpLabel;
  if ( !qpLabel )
    goto LABEL_17;
  UILabel__set_text(qpLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !decideLabel )
    goto LABEL_17;
  UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1, 0LL);
  otherLabel = this->fields.otherLabel;
  if ( !otherLabel )
    goto LABEL_17;
  UILabel__set_text(otherLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelLabel = this->fields.cancelLabel;
  if ( !cancelLabel
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1, 0LL),
        (otherLabel2 = this->fields.otherLabel2) == 0LL)
    || (UILabel__set_text(otherLabel2, (System_String_o *)StringLiteral_1, 0LL),
        (cancelLabel2 = this->fields.cancelLabel2) == 0LL)
    || (UILabel__set_text(cancelLabel2, (System_String_o *)StringLiteral_1, 0LL),
        (settingLabel = this->fields.settingLabel) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  UILabel__set_text(settingLabel, (System_String_o *)StringLiteral_1, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__OnClickCancel(
        SummonLimitWarningDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2

  if ( (byte_40FD4A5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD4A5 = 1;
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

  if ( (byte_40FD4A3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD4A3 = 1;
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

  if ( (byte_40FD4A4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD4A4 = 1;
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
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  AutomaticSaleDlgComponent_CallbackFunc_o *v11; // x21

  if ( (byte_40FD4A6 & 1) == 0 )
  {
    sub_B16FFC(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SummonLimitWarningDlgComponent_settingResult__, v4);
    byte_40FD4A6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v11 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                            AutomaticSaleDlgComponent_CallbackFunc_TypeInfo,
                                                            v7,
                                                            v8,
                                                            v9,
                                                            v10),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_SummonLimitWarningDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_B170D4();
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v11, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v30; // x20
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Component_o *otherButton2; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Component_o *cancelButton2; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Component_o *titleLabel; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Component_o *msgLabel; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Component_o *titleLabel2; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *warningLabel; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *confirmLabel; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Component_o *qpLabel; // x0
  UnityEngine_GameObject_o *v51; // x0
  UILabel_o *v52; // x21
  System_String_o *v53; // x0
  UILabel_o *v54; // x21
  System_String_o *v55; // x0
  System_String_o *v56; // x22
  Il2CppObject *v57; // x20
  BalanceConfig_c *v58; // x8
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  UILabel_o *otherLabel; // x20
  System_String_o *v62; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v64; // x0
  UILabel_o *settingLabel; // x20
  System_String_o *v66; // x0
  const MethodInfo *v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Action_o *v72; // x20
  int32_t UserItemMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t mana; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD4A0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&BalanceConfig_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_B16FFC(&StringLiteral_12392, v11);
    sub_B16FFC(&StringLiteral_12357, v12);
    sub_B16FFC(&StringLiteral_12393, v13);
    sub_B16FFC(&StringLiteral_12391, v14);
    sub_B16FFC(&StringLiteral_12394, v15);
    byte_40FD4A0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_39;
  v30 = SelfUserGame;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !v31 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v31, 1, 0LL);
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_39;
  v33 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( !v33 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v33, 1, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_39;
  v35 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !v35 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v35, 0, 0LL);
  otherButton2 = (UnityEngine_Component_o *)this->fields.otherButton2;
  if ( !otherButton2 )
    goto LABEL_39;
  v37 = UnityEngine_Component__get_gameObject(otherButton2, 0LL);
  if ( !v37 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v37, 0, 0LL);
  cancelButton2 = (UnityEngine_Component_o *)this->fields.cancelButton2;
  if ( !cancelButton2 )
    goto LABEL_39;
  v39 = UnityEngine_Component__get_gameObject(cancelButton2, 0LL);
  if ( !v39 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v39, 0, 0LL);
  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_39;
  v41 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
  if ( !v41 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v41, 1, 0LL);
  msgLabel = (UnityEngine_Component_o *)this->fields.msgLabel;
  if ( !msgLabel )
    goto LABEL_39;
  v43 = UnityEngine_Component__get_gameObject(msgLabel, 0LL);
  if ( !v43 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v43, 1, 0LL);
  titleLabel2 = (UnityEngine_Component_o *)this->fields.titleLabel2;
  if ( !titleLabel2 )
    goto LABEL_39;
  v45 = UnityEngine_Component__get_gameObject(titleLabel2, 0LL);
  if ( !v45 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v45, 0, 0LL);
  warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_39;
  v47 = UnityEngine_Component__get_gameObject(warningLabel, 0LL);
  if ( !v47 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v47, 0, 0LL);
  confirmLabel = (UnityEngine_Component_o *)this->fields.confirmLabel;
  if ( !confirmLabel )
    goto LABEL_39;
  v49 = UnityEngine_Component__get_gameObject(confirmLabel, 0LL);
  if ( !v49 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v49, 0, 0LL);
  qpLabel = (UnityEngine_Component_o *)this->fields.qpLabel;
  if ( !qpLabel )
    goto LABEL_39;
  v51 = UnityEngine_Component__get_gameObject(qpLabel, 0LL);
  if ( !v51 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v51, 0, 0LL);
  v52 = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12394, 0LL);
  if ( !v52 )
    goto LABEL_39;
  UILabel__set_text(v52, v53, 0LL);
  v54 = this->fields.msgLabel;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12393, 0LL);
  if ( !v30 )
    goto LABEL_39;
  v56 = v55;
  mana = v30->fields.mana;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &mana);
  v58 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v58 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v58->static_fields->UserItemMax;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserItemMax);
  v60 = System_String__Format_43739268(v56, v57, v59, 0LL);
  if ( !v54 )
    goto LABEL_39;
  UILabel__set_text(v54, v60, 0LL);
  otherLabel = this->fields.otherLabel;
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12392, 0LL);
  if ( !otherLabel
    || (UILabel__set_text(otherLabel, v62, 0LL),
        cancelLabel = this->fields.cancelLabel,
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12391, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, v64, 0LL),
        settingLabel = this->fields.settingLabel,
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12357, 0LL),
        !settingLabel) )
  {
LABEL_39:
    sub_B170D4();
  }
  UILabel__set_text(settingLabel, v66, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v67);
  this->fields.state = 1;
  v72 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v68, v69, v70, v71);
  System_Action___ctor(v72, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0LL);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *otherButton2; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *cancelButton2; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Component_o *titleLabel; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Component_o *msgLabel; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *titleLabel2; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Component_o *warningLabel; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *confirmLabel; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Component_o *qpLabel; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Component_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UILabel_o *v61; // x21
  System_String_o *v62; // x0
  UILabel_o *v63; // x21
  System_String_o *v64; // x0
  UILabel_o *v65; // x21
  System_String_o *v66; // x0
  UILabel_o *v67; // x21
  System_String_o *v68; // x0
  System_String_o *v69; // x22
  Il2CppObject *v70; // x20
  BalanceConfig_c *v71; // x8
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v75; // x0
  UILabel_o *otherLabel2; // x20
  System_String_o *v77; // x0
  UILabel_o *cancelLabel2; // x20
  System_String_o *v79; // x0
  UILabel_o *settingLabel; // x20
  System_String_o *v81; // x0
  const MethodInfo *v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  System_Action_o *v87; // x20
  int32_t QpMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD49F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&BalanceConfig_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_B16FFC(&StringLiteral_12357, v11);
    sub_B16FFC(&StringLiteral_12401, v12);
    sub_B16FFC(&StringLiteral_12399, v13);
    sub_B16FFC(&StringLiteral_3253, v14);
    sub_B16FFC(&StringLiteral_12404, v15);
    sub_B16FFC(&StringLiteral_12391, v16);
    sub_B16FFC(&StringLiteral_12402, v17);
    sub_B16FFC(&StringLiteral_12400, v18);
    byte_40FD49F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_45;
  v33 = SelfUserGame;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !v34 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v34, 0, 0LL);
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_45;
  v36 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( !v36 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v36, 0, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_45;
  v38 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !v38 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v38, 1, 0LL);
  otherButton2 = (UnityEngine_Component_o *)this->fields.otherButton2;
  if ( !otherButton2 )
    goto LABEL_45;
  v40 = UnityEngine_Component__get_gameObject(otherButton2, 0LL);
  if ( !v40 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v40, 1, 0LL);
  cancelButton2 = (UnityEngine_Component_o *)this->fields.cancelButton2;
  if ( !cancelButton2 )
    goto LABEL_45;
  v42 = UnityEngine_Component__get_gameObject(cancelButton2, 0LL);
  if ( !v42 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v42, 1, 0LL);
  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_45;
  v44 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
  if ( !v44 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v44, 0, 0LL);
  msgLabel = (UnityEngine_Component_o *)this->fields.msgLabel;
  if ( !msgLabel )
    goto LABEL_45;
  v46 = UnityEngine_Component__get_gameObject(msgLabel, 0LL);
  if ( !v46 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v46, 0, 0LL);
  titleLabel2 = (UnityEngine_Component_o *)this->fields.titleLabel2;
  if ( !titleLabel2 )
    goto LABEL_45;
  v48 = UnityEngine_Component__get_gameObject(titleLabel2, 0LL);
  if ( !v48 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v48, 1, 0LL);
  warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_45;
  v50 = UnityEngine_Component__get_gameObject(warningLabel, 0LL);
  if ( !v50 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v50, 1, 0LL);
  confirmLabel = (UnityEngine_Component_o *)this->fields.confirmLabel;
  if ( !confirmLabel )
    goto LABEL_45;
  v52 = UnityEngine_Component__get_gameObject(confirmLabel, 0LL);
  if ( !v52 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v52, 1, 0LL);
  qpLabel = (UnityEngine_Component_o *)this->fields.qpLabel;
  if ( !qpLabel )
    goto LABEL_45;
  v54 = UnityEngine_Component__get_gameObject(qpLabel, 0LL);
  if ( !v54 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v54, 1, 0LL);
  v55 = (UnityEngine_Component_o *)this->fields.titleLabel2;
  if ( !v55 )
    goto LABEL_45;
  v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v56, 8.0, 152.0, 0LL);
  v57 = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !v57 )
    goto LABEL_45;
  v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v58, 8.0, 87.0, 0LL);
  v59 = (UnityEngine_Component_o *)this->fields.confirmLabel;
  if ( !v59 )
    goto LABEL_45;
  v60 = UnityEngine_Component__get_gameObject(v59, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v60, 2.0, 49.0, 0LL);
  v61 = this->fields.titleLabel2;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12402, 0LL);
  if ( !v61 )
    goto LABEL_45;
  UILabel__set_text(v61, v62, 0LL);
  v63 = this->fields.warningLabel;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12404, 0LL);
  if ( !v63 )
    goto LABEL_45;
  UILabel__set_text(v63, v64, 0LL);
  v65 = this->fields.confirmLabel;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12399, 0LL);
  if ( !v65 )
    goto LABEL_45;
  UILabel__set_text(v65, v66, 0LL);
  v67 = this->fields.qpLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12401, 0LL);
  if ( !v33 )
    goto LABEL_45;
  v69 = v68;
  qp = v33->fields.qp;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  v71 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v71 = BalanceConfig_TypeInfo;
  }
  QpMax = v71->static_fields->QpMax;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &QpMax);
  v73 = System_String__Format_43739268(v69, v70, v72, 0LL);
  if ( !v67 )
    goto LABEL_45;
  UILabel__set_text(v67, v73, 0LL);
  decideLabel = this->fields.decideLabel;
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, v75, 0LL);
  otherLabel2 = this->fields.otherLabel2;
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12400, 0LL);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, v77, 0LL),
        cancelLabel2 = this->fields.cancelLabel2,
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12391, 0LL),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, v79, 0LL),
        settingLabel = this->fields.settingLabel,
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12357, 0LL),
        !settingLabel) )
  {
LABEL_45:
    sub_B170D4();
  }
  UILabel__set_text(settingLabel, v81, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v82);
  this->fields.state = 1;
  v87 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v83, v84, v85, v86);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *otherButton2; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *cancelButton2; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Component_o *titleLabel; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Component_o *msgLabel; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *titleLabel2; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Component_o *warningLabel; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *confirmLabel; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Component_o *qpLabel; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Component_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UILabel_o *v61; // x21
  System_String_o *v62; // x0
  UILabel_o *v63; // x21
  System_String_o *v64; // x0
  UILabel_o *v65; // x21
  System_String_o *v66; // x0
  UILabel_o *v67; // x21
  System_String_o *v68; // x0
  System_String_o *v69; // x22
  Il2CppObject *v70; // x20
  BalanceConfig_c *v71; // x8
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v75; // x0
  UILabel_o *otherLabel2; // x20
  System_String_o *v77; // x0
  UILabel_o *cancelLabel2; // x20
  System_String_o *v79; // x0
  UILabel_o *settingLabel; // x20
  System_String_o *v81; // x0
  const MethodInfo *v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  System_Action_o *v87; // x20
  int32_t QpMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD4A1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&BalanceConfig_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SummonLimitWarningDlgComponent_EndOpen__, v10);
    sub_B16FFC(&StringLiteral_12405, v11);
    sub_B16FFC(&StringLiteral_12357, v12);
    sub_B16FFC(&StringLiteral_12401, v13);
    sub_B16FFC(&StringLiteral_12403, v14);
    sub_B16FFC(&StringLiteral_12399, v15);
    sub_B16FFC(&StringLiteral_3253, v16);
    sub_B16FFC(&StringLiteral_12391, v17);
    sub_B16FFC(&StringLiteral_12400, v18);
    byte_40FD4A1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (System_Int32_array **)autoSaleDialogCloseCallback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.otherButton )
    goto LABEL_45;
  v33 = SelfUserGame;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.otherButton, 0LL);
  if ( !v34 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v34, 0, 0LL);
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_45;
  v36 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( !v36 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v36, 0, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_45;
  v38 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !v38 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v38, 1, 0LL);
  otherButton2 = (UnityEngine_Component_o *)this->fields.otherButton2;
  if ( !otherButton2 )
    goto LABEL_45;
  v40 = UnityEngine_Component__get_gameObject(otherButton2, 0LL);
  if ( !v40 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v40, 1, 0LL);
  cancelButton2 = (UnityEngine_Component_o *)this->fields.cancelButton2;
  if ( !cancelButton2 )
    goto LABEL_45;
  v42 = UnityEngine_Component__get_gameObject(cancelButton2, 0LL);
  if ( !v42 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v42, 1, 0LL);
  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_45;
  v44 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
  if ( !v44 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v44, 0, 0LL);
  msgLabel = (UnityEngine_Component_o *)this->fields.msgLabel;
  if ( !msgLabel )
    goto LABEL_45;
  v46 = UnityEngine_Component__get_gameObject(msgLabel, 0LL);
  if ( !v46 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v46, 0, 0LL);
  titleLabel2 = (UnityEngine_Component_o *)this->fields.titleLabel2;
  if ( !titleLabel2 )
    goto LABEL_45;
  v48 = UnityEngine_Component__get_gameObject(titleLabel2, 0LL);
  if ( !v48 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v48, 1, 0LL);
  warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_45;
  v50 = UnityEngine_Component__get_gameObject(warningLabel, 0LL);
  if ( !v50 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v50, 1, 0LL);
  confirmLabel = (UnityEngine_Component_o *)this->fields.confirmLabel;
  if ( !confirmLabel )
    goto LABEL_45;
  v52 = UnityEngine_Component__get_gameObject(confirmLabel, 0LL);
  if ( !v52 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v52, 1, 0LL);
  qpLabel = (UnityEngine_Component_o *)this->fields.qpLabel;
  if ( !qpLabel )
    goto LABEL_45;
  v54 = UnityEngine_Component__get_gameObject(qpLabel, 0LL);
  if ( !v54 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v54, 1, 0LL);
  v55 = (UnityEngine_Component_o *)this->fields.titleLabel2;
  if ( !v55 )
    goto LABEL_45;
  v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v56, 8.0, 140.0, 0LL);
  v57 = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !v57 )
    goto LABEL_45;
  v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v58, 8.0, 74.0, 0LL);
  v59 = (UnityEngine_Component_o *)this->fields.confirmLabel;
  if ( !v59 )
    goto LABEL_45;
  v60 = UnityEngine_Component__get_gameObject(v59, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v60, 3.0, 49.0, 0LL);
  v61 = this->fields.titleLabel2;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12403, 0LL);
  if ( !v61 )
    goto LABEL_45;
  UILabel__set_text(v61, v62, 0LL);
  v63 = this->fields.warningLabel;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12405, 0LL);
  if ( !v63 )
    goto LABEL_45;
  UILabel__set_text(v63, v64, 0LL);
  v65 = this->fields.confirmLabel;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12399, 0LL);
  if ( !v65 )
    goto LABEL_45;
  UILabel__set_text(v65, v66, 0LL);
  v67 = this->fields.qpLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12401, 0LL);
  if ( !v33 )
    goto LABEL_45;
  v69 = v68;
  qp = v33->fields.qp;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  v71 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v71 = BalanceConfig_TypeInfo;
  }
  QpMax = v71->static_fields->QpMax;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &QpMax);
  v73 = System_String__Format_43739268(v69, v70, v72, 0LL);
  if ( !v67 )
    goto LABEL_45;
  UILabel__set_text(v67, v73, 0LL);
  decideLabel = this->fields.decideLabel;
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, v75, 0LL);
  otherLabel2 = this->fields.otherLabel2;
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12400, 0LL);
  if ( !otherLabel2
    || (UILabel__set_text(otherLabel2, v77, 0LL),
        cancelLabel2 = this->fields.cancelLabel2,
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12391, 0LL),
        !cancelLabel2)
    || (UILabel__set_text(cancelLabel2, v79, 0LL),
        settingLabel = this->fields.settingLabel,
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12357, 0LL),
        !settingLabel) )
  {
LABEL_45:
    sub_B170D4();
  }
  UILabel__set_text(settingLabel, v81, 0LL);
  SummonLimitWarningDlgComponent__SetButtonEnable(this, 1, v82);
  this->fields.state = 1;
  v87 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v83, v84, v85, v86);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_SummonLimitWarningDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
}


void __fastcall SummonLimitWarningDlgComponent__SetButtonEnable(
        SummonLimitWarningDlgComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w20
  UnityEngine_Behaviour_o *cancelButton; // x0

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, v5, 0LL);
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

  if ( (byte_40FD49C & 1) == 0 )
  {
    sub_B16FFC(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FD49C = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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
    sub_B16F98((BattleServantConfConponent_o *)p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B16F98(
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

  if ( (byte_40FD49D & 1) == 0 )
  {
    sub_B16FFC(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FD49D = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SummonLimitWarningDlgComponent__Init(v11, v12);
}


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
  UnityEngine_GameObject_o *gameObject; // x0

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close(autoSaleDlgInfo, 0LL);
  if ( !res )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonLimitWarningDlgComponent__Close_31134284(this, 0LL, v19);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7A93 & 1) == 0 )
  {
    sub_B16FFC(&SummonLimitWarningDlgComponent_Result_TypeInfo, *(_QWORD *)&result);
    byte_40F7A93 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SummonLimitWarningDlgComponent_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SummonLimitWarningDlgComponent_CallbackFunc__EndInvoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonLimitWarningDlgComponent_CallbackFunc__Invoke(
        SummonLimitWarningDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  SummonLimitWarningDlgComponent_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  SummonLimitWarningDlgComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  SummonLimitWarningDlgComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (SummonLimitWarningDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}