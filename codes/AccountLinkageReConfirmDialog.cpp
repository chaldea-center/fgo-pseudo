void AccountLinkageReConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_5969E12 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageReConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_439/*"#787878"*/);
    byte_5969E12 = 1;
  }
  v1 = StringLiteral_439/*"#787878"*/;
  AccountLinkageReConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_439/*"#787878"*/;
  sub_2213A04(AccountLinkageReConfirmDialog_TypeInfo->static_fields, v1);
}


void AccountLinkageReConfirmDialog___ctor(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5969E11 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969E11 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountLinkageReConfirmDialog__Close(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageReConfirmDialog__Close_37280220(this, 0, v2);
}


void AccountLinkageReConfirmDialog__Close_37280220(
        AccountLinkageReConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5969E0D & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageReConfirmDialog_EndClose__);
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969E0D = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_2213A04(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_AccountLinkageReConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void AccountLinkageReConfirmDialog__EndClose(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  AccountLinkageReConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_2213A04(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void AccountLinkageReConfirmDialog__Init(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *currentAccountDataLabel; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *overrideAccountDataLabel; // x20
  __int64 v17; // x2
  UnityEngine_Object_o *warningLabel1; // x20
  __int64 v19; // x2
  UnityEngine_Object_o *warningLabel2; // x20
  __int64 v21; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v23; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v25; // x1

  if ( (byte_5969E02 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969E02 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0, 0) )
  {
    gameObject = this->fields.currentAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0, 0) )
  {
    gameObject = this->fields.overrideAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0, 0) )
  {
    gameObject = this->fields.currentAccountDataLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v15);
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0, 0) )
  {
    gameObject = this->fields.overrideAccountDataLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v17);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0, 0) )
  {
    gameObject = this->fields.warningLabel1;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v19);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0, 0) )
  {
    gameObject = this->fields.warningLabel2;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v21);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v23);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_55:
    sub_2213CDC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v25);
}


void AccountLinkageReConfirmDialog__OnClickCancel(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  struct AccountLinkageReConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5969E0F & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageReConfirmDialog_OnClickCancel__);
    byte_5969E0F = 1;
  }
  v3 = Method_AccountLinkageReConfirmDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78();
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_37280220(this, 0, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_2213CDC(v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      0,
      clickFunc->fields.method);
    this->fields.clickFunc = 0;
    sub_2213A04(&this->fields.clickFunc, 0);
  }
}


void AccountLinkageReConfirmDialog__OnClickDecide(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct AccountLinkageReConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5969E0E & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageReConfirmDialog_OnClickDecide__);
    byte_5969E0E = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_14;
  value = UIProgressBar__get_value(checkSlider, 0);
  v5 = Method_AccountLinkageReConfirmDialog_OnClickDecide__;
  if ( value < 1.0 )
  {
    if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78();
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    return;
  }
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78();
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_37280220(this, 0, v8);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
      this->fields.clickFunc = 0;
      sub_2213A04(&this->fields.clickFunc, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(checkSlider, method);
  }
}


void AccountLinkageReConfirmDialog__OnEnable(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5969E10 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_5969E10 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void AccountLinkageReConfirmDialog__OnSliderDragFinished(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  float v5; // s1
  bool v6; // w20
  const MethodInfo *v7; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_6;
  value = UIProgressBar__get_value(checkSlider, 0);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( value < 0.9 )
  {
    v5 = 0.0;
    if ( checkSlider )
      goto LABEL_4;
LABEL_6:
    sub_2213CDC(checkSlider, method);
  }
  v5 = 1.0;
  if ( !checkSlider )
    goto LABEL_6;
LABEL_4:
  v6 = value >= 0.9;
  UIProgressBar__set_value(checkSlider, v5, 0);
  AccountLinkageReConfirmDialog__SetSlider(this, v6, v7);
}


void AccountLinkageReConfirmDialog__Open(
        AccountLinkageReConfirmDialog_o *this,
        AccountLinkageReConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v7; // x20
  UIProgressBar_OnDragFinished_o *v8; // x21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x4

  if ( (byte_5969E0B & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__);
    sub_2213A60(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_5969E0B = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(&this->fields.clickFunc, func);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v7 = this->fields.checkSlider,
        v8 = (UIProgressBar_OnDragFinished_o *)sub_2213CCC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v8,
          (Il2CppObject *)this,
          Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__,
          0),
        !v7) )
  {
    sub_2213CDC(checkSlider, v5);
  }
  v7->fields.onDragFinished = v8;
  sub_2213A04(&v7->fields.onDragFinished, v8);
  AccountLinkageReConfirmDialog__SetSlider(this, 0, v9);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, v10);
}


void AccountLinkageReConfirmDialog__SetAccountTitleLabel(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *v13; // x19

  if ( (byte_5969E05 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1972/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_TITLE"*/);
    sub_2213A60(&StringLiteral_1966/*"ACCOUNT_LINKAGE_RECONFIRM_CURRENT_TITLE"*/);
    byte_5969E05 = 1;
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0, 0) )
  {
    v7 = this->fields.currentAccountTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1966/*"ACCOUNT_LINKAGE_RECONFIRM_CURRENT_TITLE"*/, 0);
    if ( !v7 )
      goto LABEL_18;
    UILabel__set_text(v7, v8, 0);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0, 0) )
  {
    v13 = this->fields.overrideAccountTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1972/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_TITLE"*/, 0);
    if ( v13 )
    {
      UILabel__set_text(v13, v8, 0);
      return;
    }
LABEL_18:
    sub_2213CDC(v8, v9);
  }
}


void AccountLinkageReConfirmDialog__SetButtonCancelLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *buttonCancel,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancelLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_5969E09 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E09 = 1;
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buttonCancel, method);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    v7 = this->fields.buttonCancelLabel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UILabel__set_text(v7, buttonCancel, 0);
  }
}


void AccountLinkageReConfirmDialog__SetButtonDecideLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *buttonDecide,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_5969E0A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E0A = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buttonDecide, method);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v7 = this->fields.buttonDecideLabel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UILabel__set_text(v7, buttonDecide, 0);
  }
}


void AccountLinkageReConfirmDialog__SetCurrentAccountDataLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *currentAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentAccountDataLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_5969E06 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E06 = 1;
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, currentAccountData, method);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0, 0) )
  {
    v7 = this->fields.currentAccountDataLabel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UILabel__set_text(v7, currentAccountData, 0);
  }
}


void AccountLinkageReConfirmDialog__SetMessageLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_5969E04 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E04 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, method);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v7 = this->fields.messageLabel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UILabel__set_text(v7, message, 0);
  }
}


void AccountLinkageReConfirmDialog__SetOverrideAccountDataLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *overrideAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overrideAccountDataLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_5969E07 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E07 = 1;
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, overrideAccountData, method);
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0, 0) )
  {
    v7 = this->fields.overrideAccountDataLabel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UILabel__set_text(v7, overrideAccountData, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void AccountLinkageReConfirmDialog__SetSlider(
        AccountLinkageReConfirmDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  __int64 *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  AccountLinkageReConfirmDialog_c *v9; // x0
  UnityEngine_Color_o v10; // kr00_16
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_5969E0C & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageReConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_21576/*"img_slider_thumb_locked"*/);
    sub_2213A60(&StringLiteral_21575/*"img_slider_thumb"*/);
    byte_5969E0C = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  *(_QWORD *)&v11.fields.r = 0;
  *(_QWORD *)&v11.fields.b = 0;
  if ( !sliderSprite )
    goto LABEL_14;
  v6 = &StringLiteral_21575/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = &StringLiteral_21576/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, (System_String_o *)*v6, 0);
  v9 = AccountLinkageReConfirmDialog_TypeInfo;
  if ( !*(&AccountLinkageReConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageReConfirmDialog_TypeInfo, v7, v8);
    v9 = AccountLinkageReConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v9->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &v11, 0);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  if ( !sliderSprite )
    goto LABEL_14;
  sliderSprite->klass->vtable._14_OnEnable.methodPtr();
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  *(_QWORD *)&v10.fields.r = __PAIR64__(1.0, 1.0);
  *(_QWORD *)&v10.fields.b = __PAIR64__(1.0, 1.0);
  if ( !sliderOn )
    v10 = v11;
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, v10, 0),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_14:
    sub_2213CDC(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}


void AccountLinkageReConfirmDialog__SetTitleLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_5969E03 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E03 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, title, method);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UILabel__set_text(v7, title, 0);
  }
}


void AccountLinkageReConfirmDialog__SetWarningLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *warning1,
        System_String_o *warning2,
        const MethodInfo *method)
{
  UnityEngine_Object_o *warningLabel1; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *v10; // x0
  UnityEngine_Object_o *warningLabel2; // x21

  if ( (byte_5969E08 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E08 = 1;
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, warning1, warning2);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0, 0) )
  {
    v10 = this->fields.warningLabel1;
    if ( !v10 )
      goto LABEL_14;
    UILabel__set_text(v10, warning1, 0);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0, 0) )
  {
    v10 = this->fields.warningLabel2;
    if ( v10 )
    {
      UILabel__set_text(v10, warning2, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v10, v8);
  }
}


void AccountLinkageReConfirmDialog_ClickDelegate___ctor(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
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
  sub_2213A04(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFE500;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFE4B8;
}


System_IAsyncResult_o *AccountLinkageReConfirmDialog_ClickDelegate__BeginInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void AccountLinkageReConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void AccountLinkageReConfirmDialog_ClickDelegate__Invoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}