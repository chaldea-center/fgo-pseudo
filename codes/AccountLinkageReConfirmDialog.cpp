void __fastcall AccountLinkageReConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49F746D & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageReConfirmDialog_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_445/*"#787878"*/, v2);
    byte_49F746D = 1;
  }
  AccountLinkageReConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_445/*"#787878"*/;
  sub_1B6406C(AccountLinkageReConfirmDialog_TypeInfo->static_fields);
}


void __fastcall AccountLinkageReConfirmDialog___ctor(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F746C & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F746C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall AccountLinkageReConfirmDialog__Close(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageReConfirmDialog__Close_30254916(this, 0LL, v2);
}


void __fastcall AccountLinkageReConfirmDialog__Close_30254916(
        AccountLinkageReConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_49F7468 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageReConfirmDialog_EndClose__, callback);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    byte_49F7468 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B6406C(&this->fields.closeEndFunc);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_AccountLinkageReConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, v9);
}


void __fastcall AccountLinkageReConfirmDialog__EndClose(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
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
    *p_closeEndFunc = 0LL;
    sub_1B6406C(p_closeEndFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall AccountLinkageReConfirmDialog__Init(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  UnityEngine_Object_o *currentAccountDataLabel; // x20
  UnityEngine_Object_o *overrideAccountDataLabel; // x20
  UnityEngine_Object_o *warningLabel1; // x20
  UnityEngine_Object_o *warningLabel2; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v15; // x1

  if ( (byte_49F745D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F745D = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.currentAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.overrideAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.currentAccountDataLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.overrideAccountDataLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0LL, 0LL) )
  {
    gameObject = this->fields.warningLabel1;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0LL, 0LL) )
  {
    gameObject = this->fields.warningLabel2;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_55:
    sub_1B64324(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v15);
}


void __fastcall AccountLinkageReConfirmDialog__OnClickCancel(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  struct AccountLinkageReConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_49F746A & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageReConfirmDialog_OnClickCancel__, method);
    byte_49F746A = 1;
  }
  v3 = Method_AccountLinkageReConfirmDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0();
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_30254916(this, 0LL, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_1B64324(v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&clickFunc->fields.extra_arg);
    this->fields.clickFunc = 0LL;
    sub_1B6406C(&this->fields.clickFunc);
  }
}


void __fastcall AccountLinkageReConfirmDialog__OnClickDecide(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  float v6; // s8
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct AccountLinkageReConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_49F7469 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageReConfirmDialog_OnClickDecide__, method);
    byte_49F7469 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  value = UIProgressBar__get_value(checkSlider, 0LL);
  v5 = Method_AccountLinkageReConfirmDialog_OnClickDecide__;
  v6 = value;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0();
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( v6 < 1.0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_30254916(this, 0LL, v8);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
      this->fields.clickFunc = 0LL;
      sub_1B6406C(&this->fields.clickFunc);
      return;
    }
LABEL_12:
    sub_1B64324(checkSlider);
  }
}


void __fastcall AccountLinkageReConfirmDialog__OnEnable(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49F746B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15581/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_49F746B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_15581/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall AccountLinkageReConfirmDialog__OnSliderDragFinished(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  bool v5; // nf
  float v6; // s0
  bool v7; // w20
  const MethodInfo *v8; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_1B64324(checkSlider);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  AccountLinkageReConfirmDialog__SetSlider(this, v7, v8);
}


void __fastcall AccountLinkageReConfirmDialog__Open(
        AccountLinkageReConfirmDialog_o *this,
        AccountLinkageReConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UIProgressBar_OnDragFinished_o *v10; // x21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3

  if ( (byte_49F7466 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__, func);
    sub_1B640C8(&UIProgressBar_OnDragFinished_TypeInfo, v5);
    byte_49F7466 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B6406C(&this->fields.clickFunc);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0LL),
        v7 = this->fields.checkSlider,
        v10 = (UIProgressBar_OnDragFinished_o *)sub_1B64314(UIProgressBar_OnDragFinished_TypeInfo, v8, v9),
        UIProgressBar_OnDragFinished___ctor(
          v10,
          (Il2CppObject *)this,
          Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__,
          0LL),
        !v7) )
  {
    sub_1B64324(checkSlider);
  }
  v7->fields.onDragFinished = v10;
  sub_1B6406C(&v7->fields.onDragFinished);
  AccountLinkageReConfirmDialog__SetSlider(this, 0, v11);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, v12);
}


void __fastcall AccountLinkageReConfirmDialog__SetAccountTitleLabel(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  UILabel_o *v10; // x19

  if ( (byte_49F7460 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_2020/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_TITLE"*/, v4);
    sub_1B640C8(&StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_CURRENT_TITLE"*/, v5);
    byte_49F7460 = 1;
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.currentAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_CURRENT_TITLE"*/, 0LL);
    if ( !v7 )
      goto LABEL_18;
    UILabel__set_text(v7, v8, 0LL);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0LL, 0LL) )
  {
    v10 = this->fields.overrideAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2020/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_TITLE"*/, 0LL);
    if ( v10 )
    {
      UILabel__set_text(v10, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1B64324(v8);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetButtonCancelLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *buttonCancel,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancelLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_49F7464 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, buttonCancel);
    byte_49F7464 = 1;
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v6 = this->fields.buttonCancelLabel;
    if ( !v6 )
      sub_1B64324(0LL);
    UILabel__set_text(v6, buttonCancel, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetButtonDecideLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *buttonDecide,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_49F7465 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, buttonDecide);
    byte_49F7465 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v6 = this->fields.buttonDecideLabel;
    if ( !v6 )
      sub_1B64324(0LL);
    UILabel__set_text(v6, buttonDecide, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetCurrentAccountDataLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *currentAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentAccountDataLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_49F7461 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, currentAccountData);
    byte_49F7461 = 1;
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0LL, 0LL) )
  {
    v6 = this->fields.currentAccountDataLabel;
    if ( !v6 )
      sub_1B64324(0LL);
    UILabel__set_text(v6, currentAccountData, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetMessageLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_49F745F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    byte_49F745F = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v6 = this->fields.messageLabel;
    if ( !v6 )
      sub_1B64324(0LL);
    UILabel__set_text(v6, message, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetOverrideAccountDataLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *overrideAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overrideAccountDataLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_49F7462 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, overrideAccountData);
    byte_49F7462 = 1;
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0LL, 0LL) )
  {
    v6 = this->fields.overrideAccountDataLabel;
    if ( !v6 )
      sub_1B64324(0LL);
    UILabel__set_text(v6, overrideAccountData, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageReConfirmDialog__SetSlider(
        AccountLinkageReConfirmDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UISprite_o *sliderSprite; // x0
  System_String_o **v8; // x8
  AccountLinkageReConfirmDialog_c *v9; // x0
  __int64 v10; // x1
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_49F7467 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageReConfirmDialog_TypeInfo, sliderOn);
    sub_1B640C8(&StringLiteral_20389/*"img_slider_thumb_locked"*/, v5);
    sub_1B640C8(&StringLiteral_20388/*"img_slider_thumb"*/, v6);
    byte_49F7467 = 1;
  }
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_17;
  v8 = (System_String_o **)&StringLiteral_20388/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v8 = (System_String_o **)&StringLiteral_20389/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v8, 0LL);
  v9 = AccountLinkageReConfirmDialog_TypeInfo;
  if ( !AccountLinkageReConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageReConfirmDialog_TypeInfo);
    v9 = AccountLinkageReConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v9->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &v15, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  if ( !sliderSprite )
    goto LABEL_17;
  v10 = sliderOn ? 0LL : 3LL;
  ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
    sliderSprite,
    v10,
    1LL,
    sliderSprite->klass->vtable._15_OnInit.methodPtr);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( !sliderOn )
  {
    g = v15.fields.g;
    r = v15.fields.r;
    b = v15.fields.b;
    a = v15.fields.a;
  }
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0LL),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_17:
    sub_1B64324(sliderSprite);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}


void __fastcall AccountLinkageReConfirmDialog__SetTitleLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_49F745E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, title);
    byte_49F745E = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v6 = this->fields.titleLabel;
    if ( !v6 )
      sub_1B64324(0LL);
    UILabel__set_text(v6, title, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetWarningLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *warning1,
        System_String_o *warning2,
        const MethodInfo *method)
{
  UnityEngine_Object_o *warningLabel1; // x22
  UILabel_o *v8; // x0
  UnityEngine_Object_o *warningLabel2; // x21

  if ( (byte_49F7463 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, warning1);
    byte_49F7463 = 1;
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0LL, 0LL) )
  {
    v8 = this->fields.warningLabel1;
    if ( !v8 )
      goto LABEL_14;
    UILabel__set_text(v8, warning1, 0LL);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0LL, 0LL) )
  {
    v8 = this->fields.warningLabel2;
    if ( v8 )
    {
      UILabel__set_text(v8, warning2, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageReConfirmDialog_ClickDelegate___ctor(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A436C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A4324;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall AccountLinkageReConfirmDialog_ClickDelegate__BeginInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_49F746E & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isDecide);
    byte_49F746E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall AccountLinkageReConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall AccountLinkageReConfirmDialog_ClickDelegate__Invoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}