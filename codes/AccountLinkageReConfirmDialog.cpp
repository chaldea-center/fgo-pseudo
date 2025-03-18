void __fastcall AccountLinkageReConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4C1C879 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageReConfirmDialog_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_420/*"#E6FF00"*/, v2);
    byte_4C1C879 = 1;
  }
  AccountLinkageReConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_420/*"#E6FF00"*/;
  sub_1C3B708(AccountLinkageReConfirmDialog_TypeInfo->static_fields);
}


void __fastcall AccountLinkageReConfirmDialog___ctor(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C1C878 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1C878 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall AccountLinkageReConfirmDialog__Close(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageReConfirmDialog__Close_31140640(this, 0LL, v2);
}


void __fastcall AccountLinkageReConfirmDialog__Close_31140640(
        AccountLinkageReConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4C1C874 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageReConfirmDialog_EndClose__, callback);
    sub_1C3B764(&System_Action_TypeInfo, v5);
    byte_4C1C874 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C3B708(&this->fields.closeEndFunc);
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageReConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
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
    sub_1C3B708(p_closeEndFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall AccountLinkageReConfirmDialog__Init(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
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
  const MethodInfo *v16; // x1

  if ( (byte_4C1C869 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C1C869 = 1;
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
    sub_1C3B9C0(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v16);
}


void __fastcall AccountLinkageReConfirmDialog__OnClickCancel(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  struct AccountLinkageReConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C1C876 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageReConfirmDialog_OnClickCancel__, method);
    byte_4C1C876 = 1;
  }
  v3 = Method_AccountLinkageReConfirmDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C();
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_31140640(this, 0LL, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_1C3B9C0(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&clickFunc->fields.extra_arg);
    this->fields.clickFunc = 0LL;
    sub_1C3B708(&this->fields.clickFunc);
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

  if ( (byte_4C1C875 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageReConfirmDialog_OnClickDecide__, method);
    byte_4C1C875 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  value = UIProgressBar__get_value(checkSlider, 0LL);
  v5 = Method_AccountLinkageReConfirmDialog_OnClickDecide__;
  v6 = value;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C();
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  if ( v6 < 1.0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_31140640(this, 0LL, v8);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
      this->fields.clickFunc = 0LL;
      sub_1C3B708(&this->fields.clickFunc);
      return;
    }
LABEL_12:
    sub_1C3B9C0(checkSlider, method);
  }
}


void __fastcall AccountLinkageReConfirmDialog__OnEnable(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C1C877 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15958/*"_PerspectiveFilter"*/, method);
    byte_4C1C877 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43310944(transform, (System_String_o *)StringLiteral_15958/*"_PerspectiveFilter"*/, 0LL);
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
    sub_1C3B9C0(checkSlider, method);
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
  __int64 v6; // x1
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v8; // x20
  UIProgressBar_OnDragFinished_o *v9; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_4C1C872 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__, func);
    sub_1C3B764(&UIProgressBar_OnDragFinished_TypeInfo, v5);
    byte_4C1C872 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C3B708(&this->fields.clickFunc);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0LL),
        v8 = this->fields.checkSlider,
        v9 = (UIProgressBar_OnDragFinished_o *)sub_1C3B9B0(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v9,
          (Il2CppObject *)this,
          Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__,
          0LL),
        !v8) )
  {
    sub_1C3B9C0(checkSlider, v6);
  }
  v8->fields.onDragFinished = v9;
  sub_1C3B708(&v8->fields.onDragFinished);
  AccountLinkageReConfirmDialog__SetSlider(this, 0, v10);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, v11);
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
  __int64 v9; // x1
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  UILabel_o *v11; // x19

  if ( (byte_4C1C86C & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_1999/*"APPEND_SKILL_EXCHANGE_LIMIT_MSG"*/, v4);
    sub_1C3B764(&StringLiteral_1993/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/, v5);
    byte_4C1C86C = 1;
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.currentAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1993/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/, 0LL);
    if ( !v7 )
      goto LABEL_18;
    UILabel__set_text(v7, v8, 0LL);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0LL, 0LL) )
  {
    v11 = this->fields.overrideAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1999/*"APPEND_SKILL_EXCHANGE_LIMIT_MSG"*/, 0LL);
    if ( v11 )
    {
      UILabel__set_text(v11, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1C3B9C0(v8, v9);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetButtonCancelLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *buttonCancel,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancelLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4C1C870 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, buttonCancel);
    byte_4C1C870 = 1;
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonCancelLabel;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    UILabel__set_text(v7, buttonCancel, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetButtonDecideLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *buttonDecide,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4C1C871 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, buttonDecide);
    byte_4C1C871 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonDecideLabel;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    UILabel__set_text(v7, buttonDecide, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetCurrentAccountDataLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *currentAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentAccountDataLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4C1C86D & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, currentAccountData);
    byte_4C1C86D = 1;
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0LL, 0LL) )
  {
    v7 = this->fields.currentAccountDataLabel;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    UILabel__set_text(v7, currentAccountData, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetMessageLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4C1C86B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, message);
    byte_4C1C86B = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v7 = this->fields.messageLabel;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    UILabel__set_text(v7, message, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetOverrideAccountDataLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *overrideAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overrideAccountDataLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4C1C86E & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, overrideAccountData);
    byte_4C1C86E = 1;
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0LL, 0LL) )
  {
    v7 = this->fields.overrideAccountDataLabel;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    UILabel__set_text(v7, overrideAccountData, 0LL);
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

  if ( (byte_4C1C873 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageReConfirmDialog_TypeInfo, sliderOn);
    sub_1C3B764(&StringLiteral_20884/*"lowLimit is greater than highLimit"*/, v5);
    sub_1C3B764(&StringLiteral_20883/*"low-value"*/, v6);
    byte_4C1C873 = 1;
  }
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_17;
  v8 = (System_String_o **)&StringLiteral_20883/*"low-value"*/;
  if ( !sliderOn )
    v8 = (System_String_o **)&StringLiteral_20884/*"lowLimit is greater than highLimit"*/;
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
    sub_1C3B9C0(sliderSprite, sliderOn);
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
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4C1C86A & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, title);
    byte_4C1C86A = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    UILabel__set_text(v7, title, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__SetWarningLabel(
        AccountLinkageReConfirmDialog_o *this,
        System_String_o *warning1,
        System_String_o *warning2,
        const MethodInfo *method)
{
  UnityEngine_Object_o *warningLabel1; // x22
  __int64 v8; // x1
  UILabel_o *v9; // x0
  UnityEngine_Object_o *warningLabel2; // x21

  if ( (byte_4C1C86F & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, warning1);
    byte_4C1C86F = 1;
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0LL, 0LL) )
  {
    v9 = this->fields.warningLabel1;
    if ( !v9 )
      goto LABEL_14;
    UILabel__set_text(v9, warning1, 0LL);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0LL, 0LL) )
  {
    v9 = this->fields.warningLabel2;
    if ( v9 )
    {
      UILabel__set_text(v9, warning2, 0LL);
      return;
    }
LABEL_14:
    sub_1C3B9C0(v9, v8);
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A7435C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A74314;
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
  if ( (byte_4C1C87A & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isDecide);
    byte_4C1C87A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall AccountLinkageReConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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