void __fastcall AccountLinkageOverrideTakeOverDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B10D0B & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageOverrideTakeOverDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_439/*"#787878"*/, v3, v4);
    byte_4B10D0B = 1;
  }
  AccountLinkageOverrideTakeOverDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_439/*"#787878"*/;
  sub_1BCA784(AccountLinkageOverrideTakeOverDialog_TypeInfo->static_fields, StringLiteral_439/*"#787878"*/);
}


void __fastcall AccountLinkageOverrideTakeOverDialog___ctor(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10D0A & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10D0A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall AccountLinkageOverrideTakeOverDialog__Close(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageOverrideTakeOverDialog__Close_30670160(this, 0LL, v2);
}


void __fastcall AccountLinkageOverrideTakeOverDialog__Close_30670160(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B10D06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageOverrideTakeOverDialog_EndClose__, callback, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    byte_4B10D06 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(&this->fields.closeEndFunc, callback);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AccountLinkageOverrideTakeOverDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, v11);
}


void __fastcall AccountLinkageOverrideTakeOverDialog__EndClose(
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
    *p_closeEndFunc = 0LL;
    sub_1BCA784(p_closeEndFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__Init(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v7; // x1
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
  const MethodInfo *v18; // x1

  if ( (byte_4B10CFB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B10CFB = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.currentAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.overrideAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.currentAccountDataLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  takeOverAccountDataLabel = (UnityEngine_Object_o *)this->fields.takeOverAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(takeOverAccountDataLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.takeOverAccountDataLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0LL, 0LL) )
  {
    gameObject = this->fields.warningLabel1;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0LL, 0LL) )
  {
    gameObject = this->fields.warningLabel2;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    sub_1BCAA3C(gameObject, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v18);
}


void __fastcall AccountLinkageOverrideTakeOverDialog__OnClickCancel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  struct AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B10D08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageOverrideTakeOverDialog_OnClickCancel__, method, v2);
    byte_4B10D08 = 1;
  }
  v4 = Method_AccountLinkageOverrideTakeOverDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountLinkageOverrideTakeOverDialog_OnClickCancel__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8();
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  if ( this->fields.clickFunc )
  {
    AccountLinkageOverrideTakeOverDialog__Close_30670160(this, 0LL, v6);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_1BCAA3C(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&clickFunc->fields.extra_arg);
    this->fields.clickFunc = 0LL;
    sub_1BCA784(&this->fields.clickFunc, 0LL);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__OnClickDecide(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v6; // x0
  float v7; // s8
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  struct AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B10D07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageOverrideTakeOverDialog_OnClickDecide__, method, v2);
    byte_4B10D07 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  value = UIProgressBar__get_value(checkSlider, 0LL);
  v6 = Method_AccountLinkageOverrideTakeOverDialog_OnClickDecide__;
  v7 = value;
  if ( (*((_BYTE *)Method_AccountLinkageOverrideTakeOverDialog_OnClickDecide__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8();
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  if ( v7 < 1.0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  if ( this->fields.clickFunc )
  {
    AccountLinkageOverrideTakeOverDialog__Close_30670160(this, 0LL, v9);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
      this->fields.clickFunc = 0LL;
      sub_1BCA784(&this->fields.clickFunc, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(checkSlider, method);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__OnEnable(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B10D09 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, method, v2);
    byte_4B10D09 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall AccountLinkageOverrideTakeOverDialog__OnSliderDragFinished(
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
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_1BCAA3C(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  AccountLinkageOverrideTakeOverDialog__SetSlider(this, v7, v8);
}


void __fastcall AccountLinkageOverrideTakeOverDialog__Open(
        AccountLinkageOverrideTakeOverDialog_o *this,
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  UIProgressBar_OnDragFinished_o *v13; // x21
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_4B10D04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageOverrideTakeOverDialog_OnSliderDragFinished__, func, method);
    sub_1BCA7E0(&UIProgressBar_OnDragFinished_TypeInfo, v5, v6);
    byte_4B10D04 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCA784(&this->fields.clickFunc, func);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0LL),
        v9 = this->fields.checkSlider,
        v13 = (UIProgressBar_OnDragFinished_o *)sub_1BCAA2C(UIProgressBar_OnDragFinished_TypeInfo, v10, v11, v12),
        UIProgressBar_OnDragFinished___ctor(
          v13,
          (Il2CppObject *)this,
          Method_AccountLinkageOverrideTakeOverDialog_OnSliderDragFinished__,
          0LL),
        !v9) )
  {
    sub_1BCAA3C(checkSlider, v7);
  }
  v9->fields.onDragFinished = v13;
  sub_1BCA784(&v9->fields.onDragFinished, v13);
  AccountLinkageOverrideTakeOverDialog__SetSlider(this, 0, v14);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, v15);
}


void __fastcall AccountLinkageOverrideTakeOverDialog__SetAccountTitleLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  __int64 v11; // x1
  UILabel_o *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  __int64 v16; // x1
  UILabel_o *v17; // x19

  if ( (byte_4B10CFE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_2030/*"ACCOUNT_LINKAGE_TAKEOVER_OVERRIDE_TITLE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_2027/*"ACCOUNT_LINKAGE_TAKEOVER_CURRENT_TITLE"*/, v8, v9);
    byte_4B10CFE = 1;
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0LL, 0LL) )
  {
    v12 = this->fields.currentAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2027/*"ACCOUNT_LINKAGE_TAKEOVER_CURRENT_TITLE"*/, 0LL);
    if ( !v12 )
      goto LABEL_18;
    UILabel__set_text(v12, v13, 0LL);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0LL, 0LL) )
  {
    v17 = this->fields.overrideAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2030/*"ACCOUNT_LINKAGE_TAKEOVER_OVERRIDE_TITLE"*/, 0LL);
    if ( v17 )
    {
      UILabel__set_text(v17, v13, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(v13, v14);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__SetButtonCancelLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *buttonCancel,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancelLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4B10D02 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, buttonCancel, method);
    byte_4B10D02 = 1;
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buttonCancel);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonCancelLabel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UILabel__set_text(v7, buttonCancel, 0LL);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__SetButtonDecideLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *buttonDecide,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4B10D03 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, buttonDecide, method);
    byte_4B10D03 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buttonDecide);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonDecideLabel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UILabel__set_text(v7, buttonDecide, 0LL);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__SetCurrentAccountDataLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *currentAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentAccountDataLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4B10CFF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, currentAccountData, method);
    byte_4B10CFF = 1;
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, currentAccountData);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0LL, 0LL) )
  {
    v7 = this->fields.currentAccountDataLabel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UILabel__set_text(v7, currentAccountData, 0LL);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__SetMessageLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4B10CFD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, method);
    byte_4B10CFD = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v7 = this->fields.messageLabel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UILabel__set_text(v7, message, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageOverrideTakeOverDialog__SetSlider(
        AccountLinkageOverrideTakeOverDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UISprite_o *sliderSprite; // x0
  System_String_o **v10; // x8
  __int64 v11; // x1
  AccountLinkageOverrideTakeOverDialog_c *v12; // x0
  __int64 v13; // x1
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B10D05 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageOverrideTakeOverDialog_TypeInfo, sliderOn, method);
    sub_1BCA7E0(&StringLiteral_20689/*"img_slider_thumb_locked"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_20688/*"img_slider_thumb"*/, v7, v8);
    byte_4B10D05 = 1;
  }
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_17;
  v10 = (System_String_o **)&StringLiteral_20688/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v10 = (System_String_o **)&StringLiteral_20689/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v10, 0LL);
  v12 = AccountLinkageOverrideTakeOverDialog_TypeInfo;
  if ( !AccountLinkageOverrideTakeOverDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageOverrideTakeOverDialog_TypeInfo, v11);
    v12 = AccountLinkageOverrideTakeOverDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v12->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &v18, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  if ( !sliderSprite )
    goto LABEL_17;
  v13 = sliderOn ? 0LL : 3LL;
  ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
    sliderSprite,
    v13,
    1LL,
    sliderSprite->klass->vtable._15_OnInit.methodPtr);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( !sliderOn )
  {
    g = v18.fields.g;
    r = v18.fields.r;
    b = v18.fields.b;
    a = v18.fields.a;
  }
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0LL),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}


void __fastcall AccountLinkageOverrideTakeOverDialog__SetTakeOverAccountDataLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *takeOverAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *takeOverAccountDataLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4B10D00 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, takeOverAccountData, method);
    byte_4B10D00 = 1;
  }
  takeOverAccountDataLabel = (UnityEngine_Object_o *)this->fields.takeOverAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, takeOverAccountData);
  if ( UnityEngine_Object__op_Inequality(takeOverAccountDataLabel, 0LL, 0LL) )
  {
    v7 = this->fields.takeOverAccountDataLabel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UILabel__set_text(v7, takeOverAccountData, 0LL);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__SetTitleLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4B10CFC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, title, method);
    byte_4B10CFC = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, title);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UILabel__set_text(v7, title, 0LL);
  }
}


void __fastcall AccountLinkageOverrideTakeOverDialog__SetWarningLabel(
        AccountLinkageOverrideTakeOverDialog_o *this,
        System_String_o *warning1,
        System_String_o *warning2,
        const MethodInfo *method)
{
  UnityEngine_Object_o *warningLabel1; // x22
  __int64 v8; // x1
  UILabel_o *v9; // x0
  UnityEngine_Object_o *warningLabel2; // x21

  if ( (byte_4B10D01 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, warning1, warning2);
    byte_4B10D01 = 1;
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, warning1);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0LL, 0LL) )
  {
    v9 = this->fields.warningLabel1;
    if ( !v9 )
      goto LABEL_14;
    UILabel__set_text(v9, warning1, 0LL);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0LL, 0LL) )
  {
    v9 = this->fields.warningLabel2;
    if ( v9 )
    {
      UILabel__set_text(v9, warning2, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v9, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageOverrideTakeOverDialog_ClickDelegate___ctor(
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *this,
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A04C00;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04BB8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall AccountLinkageOverrideTakeOverDialog_ClickDelegate__BeginInvoke(
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B10D0C & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B10D0C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall AccountLinkageOverrideTakeOverDialog_ClickDelegate__EndInvoke(
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall AccountLinkageOverrideTakeOverDialog_ClickDelegate__Invoke(
        AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}