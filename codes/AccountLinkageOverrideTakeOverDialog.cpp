void AccountLinkageOverrideTakeOverDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4C3CC72 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageOverrideTakeOverDialog_TypeInfo);
    sub_1C37058(&StringLiteral_414/*"#787878"*/);
    byte_4C3CC72 = 1;
  }
  AccountLinkageOverrideTakeOverDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_414/*"#787878"*/;
  sub_1C36FFC(AccountLinkageOverrideTakeOverDialog_TypeInfo->static_fields, StringLiteral_414/*"#787878"*/);
}


void AccountLinkageOverrideTakeOverDialog___ctor(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3CC71 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3CC71 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountLinkageOverrideTakeOverDialog__Close(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageOverrideTakeOverDialog__Close_31110144(this, 0, v2);
}


void AccountLinkageOverrideTakeOverDialog__Close_31110144(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C3CC6D & 1) == 0 )
  {
    sub_1C37058(&Method_AccountLinkageOverrideTakeOverDialog_EndClose__);
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3CC6D = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C36FFC(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_AccountLinkageOverrideTakeOverDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void AccountLinkageOverrideTakeOverDialog__EndClose(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  AccountLinkageOverrideTakeOverDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1C36FFC(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void AccountLinkageOverrideTakeOverDialog__Init(AccountLinkageOverrideTakeOverDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  UnityEngine_Object_o *currentAccountDataLabel; // x20
  UnityEngine_Object_o *takeOverAccountDataLabel; // x20
  UnityEngine_Object_o *warningLabel1; // x20
  UnityEngine_Object_o *warningLabel2; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v14; // x1

  if ( (byte_4C3CC62 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3CC62 = 1;
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
  takeOverAccountDataLabel = (UnityEngine_Object_o *)this->fields.takeOverAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(takeOverAccountDataLabel, 0, 0) )
  {
    gameObject = this->fields.takeOverAccountDataLabel;
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
    sub_1C372B4(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v14);
}


void AccountLinkageOverrideTakeOverDialog__OnClickCancel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  struct AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C3CC6F & 1) == 0 )
  {
    sub_1C37058(&Method_AccountLinkageOverrideTakeOverDialog_OnClickCancel__);
    byte_4C3CC6F = 1;
  }
  v3 = Method_AccountLinkageOverrideTakeOverDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountLinkageOverrideTakeOverDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070();
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountLinkageOverrideTakeOverDialog__Close_31110144(this, 0, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_1C372B4(v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      0,
      clickFunc->fields.method);
    this->fields.clickFunc = 0;
    sub_1C36FFC(&this->fields.clickFunc, 0);
  }
}


void AccountLinkageOverrideTakeOverDialog__OnClickDecide(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  float v6; // s8
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C3CC6E & 1) == 0 )
  {
    sub_1C37058(&Method_AccountLinkageOverrideTakeOverDialog_OnClickDecide__);
    byte_4C3CC6E = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  value = UIProgressBar__get_value(checkSlider, 0);
  v5 = Method_AccountLinkageOverrideTakeOverDialog_OnClickDecide__;
  v6 = value;
  if ( (*((_BYTE *)Method_AccountLinkageOverrideTakeOverDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070();
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  if ( v6 < 1.0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountLinkageOverrideTakeOverDialog__Close_31110144(this, 0, v8);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
      this->fields.clickFunc = 0;
      sub_1C36FFC(&this->fields.clickFunc, 0);
      return;
    }
LABEL_12:
    sub_1C372B4(checkSlider);
  }
}


void AccountLinkageOverrideTakeOverDialog__OnEnable(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3CC70 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C3CC70 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44960000(transform, (System_String_o *)StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void AccountLinkageOverrideTakeOverDialog__OnSliderDragFinished(
        AccountLinkageOverrideTakeOverDialog_o *this,
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
    sub_1C372B4(checkSlider);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  AccountLinkageOverrideTakeOverDialog__SetSlider(this, v7, v8);
}


void AccountLinkageOverrideTakeOverDialog__Open(
        AccountLinkageOverrideTakeOverDialog_o *this,
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v6; // x20
  UIProgressBar_OnDragFinished_o *v7; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x4

  if ( (byte_4C3CC6B & 1) == 0 )
  {
    sub_1C37058(&Method_AccountLinkageOverrideTakeOverDialog_OnSliderDragFinished__);
    sub_1C37058(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_4C3CC6B = 1;
  }
  this->fields.clickFunc = func;
  sub_1C36FFC(&this->fields.clickFunc, func);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v6 = this->fields.checkSlider,
        v7 = (UIProgressBar_OnDragFinished_o *)sub_1C372A4(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v7,
          (Il2CppObject *)this,
          Method_AccountLinkageOverrideTakeOverDialog_OnSliderDragFinished__,
          0),
        !v6) )
  {
    sub_1C372B4(checkSlider);
  }
  v6->fields.onDragFinished = v7;
  sub_1C36FFC(&v6->fields.onDragFinished, v7);
  AccountLinkageOverrideTakeOverDialog__SetSlider(this, 0, v8);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, v9);
}


void AccountLinkageOverrideTakeOverDialog__SetAccountTitleLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *v5; // x0
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  UILabel_o *v7; // x19

  if ( (byte_4C3CC65 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1906/*"ACCOUNT_LINKAGE_TAKEOVER_OVERRIDE_TITLE"*/);
    sub_1C37058(&StringLiteral_1903/*"ACCOUNT_LINKAGE_TAKEOVER_CURRENT_TITLE"*/);
    byte_4C3CC65 = 1;
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0, 0) )
  {
    v4 = this->fields.currentAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1903/*"ACCOUNT_LINKAGE_TAKEOVER_CURRENT_TITLE"*/, 0);
    if ( !v4 )
      goto LABEL_18;
    UILabel__set_text(v4, v5, 0);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0, 0) )
  {
    v7 = this->fields.overrideAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1906/*"ACCOUNT_LINKAGE_TAKEOVER_OVERRIDE_TITLE"*/, 0);
    if ( v7 )
    {
      UILabel__set_text(v7, v5, 0);
      return;
    }
LABEL_18:
    sub_1C372B4(v5);
  }
}


void AccountLinkageOverrideTakeOverDialog__SetButtonCancelLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *buttonCancel,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancelLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_4C3CC69 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CC69 = 1;
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    v6 = this->fields.buttonCancelLabel;
    if ( !v6 )
      sub_1C372B4(0);
    UILabel__set_text(v6, buttonCancel, 0);
  }
}


void AccountLinkageOverrideTakeOverDialog__SetButtonDecideLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *buttonDecide,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_4C3CC6A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CC6A = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v6 = this->fields.buttonDecideLabel;
    if ( !v6 )
      sub_1C372B4(0);
    UILabel__set_text(v6, buttonDecide, 0);
  }
}


void AccountLinkageOverrideTakeOverDialog__SetCurrentAccountDataLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *currentAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentAccountDataLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_4C3CC66 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CC66 = 1;
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0, 0) )
  {
    v6 = this->fields.currentAccountDataLabel;
    if ( !v6 )
      sub_1C372B4(0);
    UILabel__set_text(v6, currentAccountData, 0);
  }
}


void AccountLinkageOverrideTakeOverDialog__SetMessageLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_4C3CC64 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CC64 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v6 = this->fields.messageLabel;
    if ( !v6 )
      sub_1C372B4(0);
    UILabel__set_text(v6, message, 0);
  }
}


void AccountLinkageOverrideTakeOverDialog__SetSlider(
        AccountLinkageOverrideTakeOverDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  AccountLinkageOverrideTakeOverDialog_c *v7; // x0
  __int64 v8; // x1
  UnityEngine_Color_o v9; // kr00_16
  UnityEngine_Color_o v10; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4C3CC6C & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageOverrideTakeOverDialog_TypeInfo);
    sub_1C37058(&StringLiteral_20582/*"img_slider_thumb_locked"*/);
    sub_1C37058(&StringLiteral_20581/*"img_slider_thumb"*/);
    byte_4C3CC6C = 1;
  }
  *(_QWORD *)&v10.fields.r = 0;
  *(_QWORD *)&v10.fields.b = 0;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_17;
  v6 = (System_String_o **)&StringLiteral_20581/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20582/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0);
  v7 = AccountLinkageOverrideTakeOverDialog_TypeInfo;
  if ( !AccountLinkageOverrideTakeOverDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageOverrideTakeOverDialog_TypeInfo);
    v7 = AccountLinkageOverrideTakeOverDialog_TypeInfo;
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
    sub_1C372B4(sliderSprite);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}


void AccountLinkageOverrideTakeOverDialog__SetTakeOverAccountDataLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *takeOverAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *takeOverAccountDataLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_4C3CC67 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CC67 = 1;
  }
  takeOverAccountDataLabel = (UnityEngine_Object_o *)this->fields.takeOverAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(takeOverAccountDataLabel, 0, 0) )
  {
    v6 = this->fields.takeOverAccountDataLabel;
    if ( !v6 )
      sub_1C372B4(0);
    UILabel__set_text(v6, takeOverAccountData, 0);
  }
}


void AccountLinkageOverrideTakeOverDialog__SetTitleLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_4C3CC63 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CC63 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v6 = this->fields.titleLabel;
    if ( !v6 )
      sub_1C372B4(0);
    UILabel__set_text(v6, title, 0);
  }
}


void AccountLinkageOverrideTakeOverDialog__SetWarningLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *warning1,
        System_String_o *warning2,
        const MethodInfo *method)
{
  UnityEngine_Object_o *warningLabel1; // x22
  UILabel_o *v8; // x0
  UnityEngine_Object_o *warningLabel2; // x21

  if ( (byte_4C3CC68 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CC68 = 1;
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0, 0) )
  {
    v8 = this->fields.warningLabel1;
    if ( !v8 )
      goto LABEL_14;
    UILabel__set_text(v8, warning1, 0);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0, 0) )
  {
    v8 = this->fields.warningLabel2;
    if ( v8 )
    {
      UILabel__set_text(v8, warning2, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v8);
  }
}


void AccountLinkageOverrideTakeOverDialog_ClickDelegate___ctor(
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *this,
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
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A72248;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A72200;
}


System_IAsyncResult_o *AccountLinkageOverrideTakeOverDialog_ClickDelegate__BeginInvoke(
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C3CC73 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3CC73 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void AccountLinkageOverrideTakeOverDialog_ClickDelegate__EndInvoke(
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void AccountLinkageOverrideTakeOverDialog_ClickDelegate__Invoke(
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}