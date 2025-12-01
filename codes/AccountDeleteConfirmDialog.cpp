void AccountDeleteConfirmDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4CC1012 & 1) == 0 )
  {
    sub_1C713B0(&AccountDeleteConfirmDialog_TypeInfo);
    sub_1C713B0(&StringLiteral_407/*"#494949"*/);
    byte_4CC1012 = 1;
  }
  AccountDeleteConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_407/*"#494949"*/;
  sub_1C71354(AccountDeleteConfirmDialog_TypeInfo->static_fields, StringLiteral_407/*"#494949"*/);
}


void AccountDeleteConfirmDialog___ctor(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC1011 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC1011 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountDeleteConfirmDialog__Close(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountDeleteConfirmDialog__Close_31331204(this, 0, v2);
}


void AccountDeleteConfirmDialog__Close_31331204(
        AccountDeleteConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CC100D & 1) == 0 )
  {
    sub_1C713B0(&Method_AccountDeleteConfirmDialog_EndClose__);
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC100D = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C71354(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_AccountDeleteConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void AccountDeleteConfirmDialog__EndClose(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  AccountDeleteConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1C71354(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void AccountDeleteConfirmDialog__Init(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *warningLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4CC100A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC100A = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  warningLabel = (UnityEngine_Object_o *)this->fields.warningLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel, 0, 0) )
  {
    gameObject = this->fields.warningLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_30:
    sub_1C71608(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v10);
}


void AccountDeleteConfirmDialog__OnClickCancel(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  struct AccountDeleteConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CC100F & 1) == 0 )
  {
    sub_1C713B0(&Method_AccountDeleteConfirmDialog_OnClickCancel__);
    byte_4CC100F = 1;
  }
  v3 = Method_AccountDeleteConfirmDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountDeleteConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountDeleteConfirmDialog__Close_31331204(this, 0, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_1C71608(v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      0,
      clickFunc->fields.method);
    this->fields.clickFunc = 0;
    sub_1C71354(&this->fields.clickFunc, 0);
  }
}


void AccountDeleteConfirmDialog__OnClickDecide(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  float v6; // s8
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct AccountDeleteConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CC100E & 1) == 0 )
  {
    sub_1C713B0(&Method_AccountDeleteConfirmDialog_OnClickDecide__);
    byte_4CC100E = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  value = UIProgressBar__get_value(checkSlider, 0);
  v5 = Method_AccountDeleteConfirmDialog_OnClickDecide__;
  v6 = value;
  if ( (*((_BYTE *)Method_AccountDeleteConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C713C8();
  v7 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
  if ( v6 < 1.0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountDeleteConfirmDialog__Close_31331204(this, 0, v8);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
      this->fields.clickFunc = 0;
      sub_1C71354(&this->fields.clickFunc, 0);
      return;
    }
LABEL_12:
    sub_1C71608(checkSlider, method);
  }
}


void AccountDeleteConfirmDialog__OnEnable(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CC1010 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15653/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4CC1010 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45260884(transform, (System_String_o *)StringLiteral_15653/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void AccountDeleteConfirmDialog__OnSliderDragFinished(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
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
    sub_1C71608(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  AccountDeleteConfirmDialog__SetSlider(this, v7, v8);
}


void AccountDeleteConfirmDialog__Open(
        AccountDeleteConfirmDialog_o *this,
        AccountDeleteConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *checkSlider; // x0
  __int64 v7; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  struct UISlider_o *v12; // x20
  UIProgressBar_OnDragFinished_o *v13; // x21
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x4

  if ( (byte_4CC100B & 1) == 0 )
  {
    sub_1C713B0(&Method_AccountDeleteConfirmDialog_OnSliderDragFinished__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C713B0(&StringLiteral_1837/*"ACCOUNT_DELETE_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_1836/*"ACCOUNT_DELETE_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_1838/*"ACCOUNT_DELETE_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_1840/*"ACCOUNT_DELETE_CONFIRM_WARNING"*/);
    sub_1C713B0(&StringLiteral_1839/*"ACCOUNT_DELETE_CONFIRM_TITLE"*/);
    byte_4CC100B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1839/*"ACCOUNT_DELETE_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, checkSlider, 0);
  messageLabel = this->fields.messageLabel;
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1838/*"ACCOUNT_DELETE_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, checkSlider, 0);
  warningLabel = this->fields.warningLabel;
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1840/*"ACCOUNT_DELETE_CONFIRM_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_13;
  UILabel__set_text(warningLabel, checkSlider, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1836/*"ACCOUNT_DELETE_CONFIRM_CANCEL"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_13;
  UILabel__set_text(buttonCancelLabel, checkSlider, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1837/*"ACCOUNT_DELETE_CONFIRM_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_13;
  UILabel__set_text(buttonDecideLabel, checkSlider, 0);
  this->fields.clickFunc = func;
  sub_1C71354(&this->fields.clickFunc, func);
  checkSlider = (System_String_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value((UIProgressBar_o *)checkSlider, 0.0, 0),
        v12 = this->fields.checkSlider,
        v13 = (UIProgressBar_OnDragFinished_o *)sub_1C715FC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v13,
          (Il2CppObject *)this,
          Method_AccountDeleteConfirmDialog_OnSliderDragFinished__,
          0),
        !v12) )
  {
LABEL_13:
    sub_1C71608(checkSlider, v7);
  }
  v12->fields.onDragFinished = v13;
  sub_1C71354(&v12->fields.onDragFinished, v13);
  AccountDeleteConfirmDialog__SetSlider(this, 0, v14);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, v15);
}


// local variable allocation has failed, the output may be wrong!
void AccountDeleteConfirmDialog__SetSlider(AccountDeleteConfirmDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  AccountDeleteConfirmDialog_c *v7; // x0
  __int64 v8; // x1
  UnityEngine_Color_o v9; // kr00_16
  UnityEngine_Color_o v10; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4CC100C & 1) == 0 )
  {
    sub_1C713B0(&AccountDeleteConfirmDialog_TypeInfo);
    sub_1C713B0(&StringLiteral_20660/*"img_slider_thumb_locked"*/);
    sub_1C713B0(&StringLiteral_20659/*"img_slider_thumb"*/);
    byte_4CC100C = 1;
  }
  *(_QWORD *)&v10.fields.r = 0;
  *(_QWORD *)&v10.fields.b = 0;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_17;
  v6 = (System_String_o **)&StringLiteral_20659/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20660/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0);
  v7 = AccountDeleteConfirmDialog_TypeInfo;
  if ( !AccountDeleteConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountDeleteConfirmDialog_TypeInfo);
    v7 = AccountDeleteConfirmDialog_TypeInfo;
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
    sub_1C71608(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}


void AccountDeleteConfirmDialog_ClickDelegate___ctor(
        AccountDeleteConfirmDialog_ClickDelegate_o *this,
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
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9D50C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9D4C4;
}


System_IAsyncResult_o *AccountDeleteConfirmDialog_ClickDelegate__BeginInvoke(
        AccountDeleteConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CC1013 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC1013 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void AccountDeleteConfirmDialog_ClickDelegate__EndInvoke(
        AccountDeleteConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void AccountDeleteConfirmDialog_ClickDelegate__Invoke(
        AccountDeleteConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}