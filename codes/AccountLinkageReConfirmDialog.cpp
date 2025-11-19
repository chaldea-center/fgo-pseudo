void AccountLinkageReConfirmDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4CAFF4C & 1) == 0 )
  {
    sub_1C6BA08(&AccountLinkageReConfirmDialog_TypeInfo);
    sub_1C6BA08(&StringLiteral_413/*"#787878"*/);
    byte_4CAFF4C = 1;
  }
  AccountLinkageReConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_413/*"#787878"*/;
  sub_1C6B9AC(AccountLinkageReConfirmDialog_TypeInfo->static_fields, StringLiteral_413/*"#787878"*/);
}


void AccountLinkageReConfirmDialog___ctor(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CAFF4B & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CAFF4B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountLinkageReConfirmDialog__Close(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageReConfirmDialog__Close_31323700(this, 0, v2);
}


void AccountLinkageReConfirmDialog__Close_31323700(
        AccountLinkageReConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CAFF47 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AccountLinkageReConfirmDialog_EndClose__);
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CAFF47 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C6B9AC(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
    sub_1C6B9AC(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void AccountLinkageReConfirmDialog__Init(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
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

  if ( (byte_4CAFF3C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CAFF3C = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0, 0) )
  {
    gameObject = this->fields.currentAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0, 0) )
  {
    gameObject = this->fields.overrideAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0, 0) )
  {
    gameObject = this->fields.currentAccountDataLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0, 0) )
  {
    gameObject = this->fields.overrideAccountDataLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0, 0) )
  {
    gameObject = this->fields.warningLabel1;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0, 0) )
  {
    gameObject = this->fields.warningLabel2;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C6BC60(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v15);
}


void AccountLinkageReConfirmDialog__OnClickCancel(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  struct AccountLinkageReConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CAFF49 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AccountLinkageReConfirmDialog_OnClickCancel__);
    byte_4CAFF49 = 1;
  }
  v3 = Method_AccountLinkageReConfirmDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20();
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_31323700(this, 0, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_1C6BC60(v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      0,
      clickFunc->fields.method);
    this->fields.clickFunc = 0;
    sub_1C6B9AC(&this->fields.clickFunc, 0);
  }
}


void AccountLinkageReConfirmDialog__OnClickDecide(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  float v6; // s8
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct AccountLinkageReConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CAFF48 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AccountLinkageReConfirmDialog_OnClickDecide__);
    byte_4CAFF48 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  value = UIProgressBar__get_value(checkSlider, 0);
  v5 = Method_AccountLinkageReConfirmDialog_OnClickDecide__;
  v6 = value;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20();
  v7 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  if ( v6 < 1.0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_31323700(this, 0, v8);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
      this->fields.clickFunc = 0;
      sub_1C6B9AC(&this->fields.clickFunc, 0);
      return;
    }
LABEL_12:
    sub_1C6BC60(checkSlider, method);
  }
}


void AccountLinkageReConfirmDialog__OnEnable(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CAFF4A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4CAFF4A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void AccountLinkageReConfirmDialog__OnSliderDragFinished(
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
    || (value = UIProgressBar__get_value(checkSlider, 0),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0) )
  {
    sub_1C6BC60(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  AccountLinkageReConfirmDialog__SetSlider(this, v7, v8);
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

  if ( (byte_4CAFF45 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__);
    sub_1C6BA08(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_4CAFF45 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C6B9AC(&this->fields.clickFunc, func);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v7 = this->fields.checkSlider,
        v8 = (UIProgressBar_OnDragFinished_o *)sub_1C6BC54(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v8,
          (Il2CppObject *)this,
          Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__,
          0),
        !v7) )
  {
    sub_1C6BC60(checkSlider, v5);
  }
  v7->fields.onDragFinished = v8;
  sub_1C6B9AC(&v7->fields.onDragFinished, v8);
  AccountLinkageReConfirmDialog__SetSlider(this, 0, v9);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, v10);
}


void AccountLinkageReConfirmDialog__SetAccountTitleLabel(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  UILabel_o *v8; // x19

  if ( (byte_4CAFF3F & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1883/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_TITLE"*/);
    sub_1C6BA08(&StringLiteral_1877/*"ACCOUNT_LINKAGE_RECONFIRM_CURRENT_TITLE"*/);
    byte_4CAFF3F = 1;
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0, 0) )
  {
    v4 = this->fields.currentAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1877/*"ACCOUNT_LINKAGE_RECONFIRM_CURRENT_TITLE"*/, 0);
    if ( !v4 )
      goto LABEL_18;
    UILabel__set_text(v4, v5, 0);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0, 0) )
  {
    v8 = this->fields.overrideAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1883/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_TITLE"*/, 0);
    if ( v8 )
    {
      UILabel__set_text(v8, v5, 0);
      return;
    }
LABEL_18:
    sub_1C6BC60(v5, v6);
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

  if ( (byte_4CAFF43 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CAFF43 = 1;
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    v7 = this->fields.buttonCancelLabel;
    if ( !v7 )
      sub_1C6BC60(0, v6);
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

  if ( (byte_4CAFF44 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CAFF44 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v7 = this->fields.buttonDecideLabel;
    if ( !v7 )
      sub_1C6BC60(0, v6);
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

  if ( (byte_4CAFF40 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CAFF40 = 1;
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0, 0) )
  {
    v7 = this->fields.currentAccountDataLabel;
    if ( !v7 )
      sub_1C6BC60(0, v6);
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

  if ( (byte_4CAFF3E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CAFF3E = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v7 = this->fields.messageLabel;
    if ( !v7 )
      sub_1C6BC60(0, v6);
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

  if ( (byte_4CAFF41 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CAFF41 = 1;
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0, 0) )
  {
    v7 = this->fields.overrideAccountDataLabel;
    if ( !v7 )
      sub_1C6BC60(0, v6);
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
  System_String_o **v6; // x8
  AccountLinkageReConfirmDialog_c *v7; // x0
  __int64 v8; // x1
  UnityEngine_Color_o v9; // kr00_16
  UnityEngine_Color_o v10; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4CAFF46 & 1) == 0 )
  {
    sub_1C6BA08(&AccountLinkageReConfirmDialog_TypeInfo);
    sub_1C6BA08(&StringLiteral_20647/*"img_slider_thumb_locked"*/);
    sub_1C6BA08(&StringLiteral_20646/*"img_slider_thumb"*/);
    byte_4CAFF46 = 1;
  }
  *(_QWORD *)&v10.fields.r = 0;
  *(_QWORD *)&v10.fields.b = 0;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_17;
  v6 = (System_String_o **)&StringLiteral_20646/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20647/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0);
  v7 = AccountLinkageReConfirmDialog_TypeInfo;
  if ( !AccountLinkageReConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageReConfirmDialog_TypeInfo);
    v7 = AccountLinkageReConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v7->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &v10, 0);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  if ( !sliderSprite )
    goto LABEL_17;
  v8 = sliderOn ? 0LL : 3LL;
  ((void (__fastcall *)(UISprite_o *, __int64, __int64, const MethodInfo *))sliderSprite->klass->vtable._14_OnEnable.methodPtr)(
    sliderSprite,
    v8,
    1,
    sliderSprite->klass->vtable._14_OnEnable.method);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  *(_QWORD *)&v9.fields.r = __PAIR64__(1.0, 1.0);
  *(_QWORD *)&v9.fields.b = __PAIR64__(1.0, 1.0);
  if ( !sliderOn )
    v9 = v10;
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, v9, 0),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_17:
    sub_1C6BC60(sliderSprite, sliderOn);
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

  if ( (byte_4CAFF3D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CAFF3D = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_1C6BC60(0, v6);
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
  UILabel_o *v9; // x0
  UnityEngine_Object_o *warningLabel2; // x21

  if ( (byte_4CAFF42 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CAFF42 = 1;
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0, 0) )
  {
    v9 = this->fields.warningLabel1;
    if ( !v9 )
      goto LABEL_14;
    UILabel__set_text(v9, warning1, 0);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0, 0) )
  {
    v9 = this->fields.warningLabel2;
    if ( v9 )
    {
      UILabel__set_text(v9, warning2, 0);
      return;
    }
LABEL_14:
    sub_1C6BC60(v9, v8);
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
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A980CC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A98084;
}


System_IAsyncResult_o *AccountLinkageReConfirmDialog_ClickDelegate__BeginInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CAFF4D & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CAFF4D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void AccountLinkageReConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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