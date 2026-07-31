void AccountDeleteConfirmDialog___ctor(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5931C3A & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5931C3A = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountDeleteConfirmDialog__Close(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountDeleteConfirmDialog__Close_37183548(this, 0, v2);
}


void AccountDeleteConfirmDialog__Close_37183548(
        AccountDeleteConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5931C36 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountDeleteConfirmDialog_EndClose__);
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5931C36 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_21FFBF4(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
    sub_21FFBF4(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void AccountDeleteConfirmDialog__Init(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *warningLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v15; // x1

  if ( (byte_5931C33 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5931C33 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  warningLabel = (UnityEngine_Object_o *)this->fields.warningLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(warningLabel, 0, 0) )
  {
    gameObject = this->fields.warningLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
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
    sub_21FFECC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v15);
}


void AccountDeleteConfirmDialog__OnClickCancel(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  struct AccountDeleteConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5931C38 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountDeleteConfirmDialog_OnClickCancel__);
    byte_5931C38 = 1;
  }
  v3 = Method_AccountDeleteConfirmDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountDeleteConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68();
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountDeleteConfirmDialog__Close_37183548(this, 0, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_21FFECC(v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      0,
      clickFunc->fields.method);
    this->fields.clickFunc = 0;
    sub_21FFBF4(&this->fields.clickFunc, 0);
  }
}


void AccountDeleteConfirmDialog__OnClickDecide(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct AccountDeleteConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5931C37 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountDeleteConfirmDialog_OnClickDecide__);
    byte_5931C37 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_14;
  value = UIProgressBar__get_value(checkSlider, 0);
  v5 = Method_AccountDeleteConfirmDialog_OnClickDecide__;
  if ( value < 1.0 )
  {
    if ( (*((_BYTE *)Method_AccountDeleteConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68();
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    return;
  }
  if ( (*((_BYTE *)Method_AccountDeleteConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68();
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountDeleteConfirmDialog__Close_37183548(this, 0, v8);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
      this->fields.clickFunc = 0;
      sub_21FFBF4(&this->fields.clickFunc, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(checkSlider, method);
  }
}


void AccountDeleteConfirmDialog__OnEnable(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5931C39 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_5931C39 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void AccountDeleteConfirmDialog__OnSliderDragFinished(AccountDeleteConfirmDialog_o *this, const MethodInfo *method)
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
    sub_21FFECC(checkSlider, method);
  }
  v5 = 1.0;
  if ( !checkSlider )
    goto LABEL_6;
LABEL_4:
  v6 = value >= 0.9;
  UIProgressBar__set_value(checkSlider, v5, 0);
  AccountDeleteConfirmDialog__SetSlider(this, v6, v7);
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

  if ( (byte_5931C34 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountDeleteConfirmDialog_OnSliderDragFinished__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_21FFC50(&StringLiteral_1923/*"ACCOUNT_DELETE_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_1922/*"ACCOUNT_DELETE_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_1924/*"ACCOUNT_DELETE_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1926/*"ACCOUNT_DELETE_CONFIRM_WARNING"*/);
    sub_21FFC50(&StringLiteral_1925/*"ACCOUNT_DELETE_CONFIRM_TITLE"*/);
    byte_5931C34 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, func, method);
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1925/*"ACCOUNT_DELETE_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, checkSlider, 0);
  messageLabel = this->fields.messageLabel;
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1924/*"ACCOUNT_DELETE_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, checkSlider, 0);
  warningLabel = this->fields.warningLabel;
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1926/*"ACCOUNT_DELETE_CONFIRM_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_13;
  UILabel__set_text(warningLabel, checkSlider, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1922/*"ACCOUNT_DELETE_CONFIRM_CANCEL"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_13;
  UILabel__set_text(buttonCancelLabel, checkSlider, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_1923/*"ACCOUNT_DELETE_CONFIRM_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_13;
  UILabel__set_text(buttonDecideLabel, checkSlider, 0);
  this->fields.clickFunc = func;
  sub_21FFBF4(&this->fields.clickFunc, func);
  checkSlider = (System_String_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value((UIProgressBar_o *)checkSlider, 0.0, 0),
        v12 = this->fields.checkSlider,
        v13 = (UIProgressBar_OnDragFinished_o *)sub_21FFEBC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v13,
          (Il2CppObject *)this,
          Method_AccountDeleteConfirmDialog_OnSliderDragFinished__,
          0),
        !v12) )
  {
LABEL_13:
    sub_21FFECC(checkSlider, v7);
  }
  v12->fields.onDragFinished = v13;
  sub_21FFBF4(&v12->fields.onDragFinished, v13);
  AccountDeleteConfirmDialog__SetSlider(this, 0, v14);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, v15);
}


// local variable allocation has failed, the output may be wrong!
void AccountDeleteConfirmDialog__SetSlider(AccountDeleteConfirmDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  void *sliderSprite; // x0
  __int64 *v6; // x8
  float v7; // s0 OVERLAPPED
  float v8; // s1
  float v9; // s2
  float v10; // s3

  if ( (byte_5931C35 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21535/*"img_slider_thumb_locked"*/);
    sub_21FFC50(&StringLiteral_21534/*"img_slider_thumb"*/);
    byte_5931C35 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_14;
  v6 = &StringLiteral_21534/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = &StringLiteral_21535/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName((UISprite_o *)sliderSprite, (System_String_o *)*v6, 0);
  sliderSprite = this->fields.decideButton;
  if ( !sliderSprite )
LABEL_14:
    sub_21FFECC(sliderSprite, sliderOn);
  (*(void (**)(void))(*(_QWORD *)sliderSprite + 536LL))();
  sliderSprite = this->fields.decideButton;
  if ( sliderOn )
  {
    v7 = 1.0;
    v8 = 1.0;
    v9 = 1.0;
    v10 = 1.0;
    if ( !sliderSprite )
      goto LABEL_14;
  }
  else
  {
    if ( !sliderSprite )
      goto LABEL_14;
    v7 = *((float *)sliderSprite + 18);
    v8 = *((float *)sliderSprite + 19);
    v9 = *((float *)sliderSprite + 20);
    v10 = *((float *)sliderSprite + 21);
  }
  UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&v7, 0);
  sliderSprite = this->fields.decideButton;
  if ( !sliderSprite )
    goto LABEL_14;
  (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)sliderSprite + 392LL))(
    sliderSprite,
    sliderOn,
    *(_QWORD *)(*(_QWORD *)sliderSprite + 400LL));
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
  sub_21FFBF4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FEB3E8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEB3A0;
}


System_IAsyncResult_o *AccountDeleteConfirmDialog_ClickDelegate__BeginInvoke(
        AccountDeleteConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void AccountDeleteConfirmDialog_ClickDelegate__EndInvoke(
        AccountDeleteConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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