void __fastcall AccountLinkageReConfirmDialog___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438CDCD & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageReConfirmDialog_TypeInfo);
    sub_B775C4(&StringLiteral_365/*"#787878"*/);
    byte_438CDCD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AccountLinkageReConfirmDialog_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_365/*"#787878"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_365/*"#787878"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall AccountLinkageReConfirmDialog___ctor(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_438CDCC & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438CDCC = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AccountLinkageReConfirmDialog__Close(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageReConfirmDialog__Close_28540352(this, 0LL, v2);
}


void __fastcall AccountLinkageReConfirmDialog__Close_28540352(
        AccountLinkageReConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438CDC8 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageReConfirmDialog_EndClose__);
    sub_B775C4(&System_Action_TypeInfo);
    byte_438CDC8 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AccountLinkageReConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall AccountLinkageReConfirmDialog__EndClose(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  AccountLinkageReConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B77560(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall AccountLinkageReConfirmDialog__Init(AccountLinkageReConfirmDialog_o *this, const MethodInfo *method)
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

  if ( (byte_438CDBD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CDBD = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.currentAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.overrideAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.currentAccountDataLabel;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.overrideAccountDataLabel;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0LL, 0LL) )
  {
    gameObject = this->fields.warningLabel1;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0LL, 0LL) )
  {
    gameObject = this->fields.warningLabel2;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_65;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_65:
    sub_B7769C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AccountLinkageReConfirmDialog__OnClickCancel(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  AccountLinkageReConfirmDialog_ClickDelegate_o *clickFunc; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438CDCA & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageReConfirmDialog_OnClickCancel__);
    byte_438CDCA = 1;
  }
  v3 = Method_AccountLinkageReConfirmDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC(Method_AccountLinkageReConfirmDialog_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_28540352(this, 0LL, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_B7769C(0LL, v6);
    AccountLinkageReConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
    this->fields.clickFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.clickFunc, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall AccountLinkageReConfirmDialog__OnClickDecide(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438CDC9 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageReConfirmDialog_OnClickDecide__);
    byte_438CDC9 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  value = UIProgressBar__get_value(checkSlider, 0LL);
  v5 = Method_AccountLinkageReConfirmDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_AccountLinkageReConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC(Method_AccountLinkageReConfirmDialog_OnClickDecide__);
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  if ( value < 1.0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
  if ( this->fields.clickFunc )
  {
    AccountLinkageReConfirmDialog__Close_28540352(this, 0LL, v7);
    checkSlider = (UIProgressBar_o *)this->fields.clickFunc;
    if ( checkSlider )
    {
      AccountLinkageReConfirmDialog_ClickDelegate__Invoke(
        (AccountLinkageReConfirmDialog_ClickDelegate_o *)checkSlider,
        1,
        0LL);
      this->fields.clickFunc = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.clickFunc, 0LL, v8, v9, v10, v11, v12, v13);
      return;
    }
LABEL_12:
    sub_B7769C(checkSlider, method);
  }
}


void __fastcall AccountLinkageReConfirmDialog__OnEnable(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_438CDCB & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&StringLiteral_15776/*"Window/Objects/Buttons/CancelButton"*/);
    byte_438CDCB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_23834620(transform, (System_String_o *)StringLiteral_15776/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall AccountLinkageReConfirmDialog__OnSliderDragFinished(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  const MethodInfo *v5; // x2
  AccountLinkageReConfirmDialog_o *v6; // x0
  bool v7; // w1

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_B7769C(checkSlider, method);
  }
  if ( value >= 0.9 )
  {
    UIProgressBar__set_value(checkSlider, 1.0, 0LL);
    v7 = 1;
    v6 = this;
  }
  else
  {
    UIProgressBar__set_value(checkSlider, 0.0, 0LL);
    v6 = this;
    v7 = 0;
  }
  AccountLinkageReConfirmDialog__SetSlider(v6, v7, v5);
}


void __fastcall AccountLinkageReConfirmDialog__Open(
        AccountLinkageReConfirmDialog_o *this,
        AccountLinkageReConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v12; // x20
  UIProgressBar_OnDragFinished_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_438CDC6 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__);
    sub_B775C4(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_438CDC6 = 1;
  }
  this->fields.clickFunc = func;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0LL),
        v12 = this->fields.checkSlider,
        v13 = (UIProgressBar_OnDragFinished_o *)sub_B77694(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v13,
          (Il2CppObject *)this,
          Method_AccountLinkageReConfirmDialog_OnSliderDragFinished__,
          0LL),
        !v12) )
  {
    sub_B7769C(checkSlider, v10);
  }
  v12->fields.onDragFinished = v13;
  sub_B77560(
    (BattleServantConfConponent_o *)&v12->fields.onDragFinished,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  AccountLinkageReConfirmDialog__SetSlider(this, 0, v20);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall AccountLinkageReConfirmDialog__SetAccountTitleLabel(
        AccountLinkageReConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentAccountTitleLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *overrideAccountTitleLabel; // x20
  UILabel_o *v8; // x19

  if ( (byte_438CDC0 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1700/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_TITLE"*/);
    sub_B775C4(&StringLiteral_1694/*"ACCOUNT_LINKAGE_RECONFIRM_CURRENT_TITLE"*/);
    byte_438CDC0 = 1;
  }
  currentAccountTitleLabel = (UnityEngine_Object_o *)this->fields.currentAccountTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(currentAccountTitleLabel, 0LL, 0LL) )
  {
    v4 = this->fields.currentAccountTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1694/*"ACCOUNT_LINKAGE_RECONFIRM_CURRENT_TITLE"*/, 0LL);
    if ( !v4 )
      goto LABEL_22;
    UILabel__set_text(v4, v5, 0LL);
  }
  overrideAccountTitleLabel = (UnityEngine_Object_o *)this->fields.overrideAccountTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(overrideAccountTitleLabel, 0LL, 0LL) )
  {
    v8 = this->fields.overrideAccountTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1700/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_TITLE"*/, 0LL);
    if ( v8 )
    {
      UILabel__set_text(v8, v5, 0LL);
      return;
    }
LABEL_22:
    sub_B7769C(v5, v6);
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

  if ( (byte_438CDC4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CDC4 = 1;
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonCancelLabel;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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

  if ( (byte_438CDC5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CDC5 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonDecideLabel;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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

  if ( (byte_438CDC1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CDC1 = 1;
  }
  currentAccountDataLabel = (UnityEngine_Object_o *)this->fields.currentAccountDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(currentAccountDataLabel, 0LL, 0LL) )
  {
    v7 = this->fields.currentAccountDataLabel;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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

  if ( (byte_438CDBF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CDBF = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v7 = this->fields.messageLabel;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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

  if ( (byte_438CDC2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CDC2 = 1;
  }
  overrideAccountDataLabel = (UnityEngine_Object_o *)this->fields.overrideAccountDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(overrideAccountDataLabel, 0LL, 0LL) )
  {
    v7 = this->fields.overrideAccountDataLabel;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    UILabel__set_text(v7, overrideAccountData, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageReConfirmDialog__SetSlider(
        AccountLinkageReConfirmDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  AccountLinkageReConfirmDialog_c *v7; // x0
  __int64 v8; // x1
  UIButtonColor_o *decideButton; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_438CDC7 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageReConfirmDialog_TypeInfo);
    sub_B775C4(&StringLiteral_20031/*"img_slider_thumb_locked"*/);
    sub_B775C4(&StringLiteral_20030/*"img_slider_thumb"*/);
    byte_438CDC7 = 1;
  }
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_19;
  v6 = (System_String_o **)&StringLiteral_20030/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20031/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0LL);
  v7 = AccountLinkageReConfirmDialog_TypeInfo;
  if ( (BYTE3(AccountLinkageReConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageReConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageReConfirmDialog_TypeInfo);
    v7 = AccountLinkageReConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v7->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &v14, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  if ( !sliderSprite )
LABEL_19:
    sub_B7769C(sliderSprite, sliderOn);
  if ( sliderOn )
    v8 = 0LL;
  else
    v8 = 3LL;
  sliderSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
                                 sliderSprite,
                                 v8,
                                 1LL,
                                 sliderSprite->klass->vtable._15_OnInit.methodPtr);
  decideButton = this->fields.decideButton;
  if ( sliderOn )
  {
    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
    if ( !decideButton )
      goto LABEL_19;
  }
  else
  {
    g = v14.fields.g;
    r = v14.fields.r;
    b = v14.fields.b;
    a = v14.fields.a;
    if ( !decideButton )
      goto LABEL_19;
  }
  UIButtonColor__set_defaultColor(decideButton, *(UnityEngine_Color_o *)&r, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  if ( !sliderSprite )
    goto LABEL_19;
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

  if ( (byte_438CDBE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CDBE = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_B7769C(0LL, v6);
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

  if ( (byte_438CDC3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CDC3 = 1;
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0LL, 0LL) )
  {
    v9 = this->fields.warningLabel1;
    if ( !v9 )
      goto LABEL_16;
    UILabel__set_text(v9, warning1, 0LL);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0LL, 0LL) )
  {
    v9 = this->fields.warningLabel2;
    if ( v9 )
    {
      UILabel__set_text(v9, warning2, 0LL);
      return;
    }
LABEL_16:
    sub_B7769C(v9, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageReConfirmDialog_ClickDelegate___ctor(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall AccountLinkageReConfirmDialog_ClickDelegate__BeginInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_4389F19 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4389F19 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall AccountLinkageReConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageReConfirmDialog_ClickDelegate__Invoke(
        AccountLinkageReConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  AccountLinkageReConfirmDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  AccountLinkageReConfirmDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  AccountLinkageReConfirmDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (AccountLinkageReConfirmDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}