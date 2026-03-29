void CombineLimitUpWarningDialog___ctor(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A7C6 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2A7C6 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_D01050;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CombineLimitUpWarningDialog__Close(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
  BaseDialog__Close((BaseDialog_o *)this, 0, 0);
}


void CombineLimitUpWarningDialog__EndOpen(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void CombineLimitUpWarningDialog__Init(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v5; // x21
  const MethodInfo *v6; // x2
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A7C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CombineLimitUpWarningDialog_OnSliderDragFinished__);
    sub_1C93AD4(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A7C0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_12;
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v7, 0);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_12;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0);
  checkSlider = this->fields.checkSlider;
  v5 = (UIProgressBar_OnDragFinished_o *)sub_1C93D20(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CombineLimitUpWarningDialog_OnSliderDragFinished__,
    0);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v5,
        sub_1C93A78(&checkSlider->fields.onDragFinished, v5),
        CombineLimitUpWarningDialog__SetSlider(this, 0, v6),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_12:
    sub_1C93D2C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CombineLimitUpWarningDialog__OnClickCancel(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2A7C4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CombineLimitUpWarningDialog_OnClickCancel__);
    sub_1C93AD4(&Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__);
    byte_4D2A7C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CombineLimitUpWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CombineLimitUpWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CombineLimitUpWarningDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void CombineLimitUpWarningDialog__OnClickDecide(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4D2A7C3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CombineLimitUpWarningDialog_OnClickDecide__);
    sub_1C93AD4(&Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__);
    byte_4D2A7C3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C93D2C(0, method);
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_CombineLimitUpWarningDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CombineLimitUpWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_CombineLimitUpWarningDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    if ( value >= 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      this->fields.state = 3;
      v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__, 0);
      BaseDialog__Close((BaseDialog_o *)this, v7, 0);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void CombineLimitUpWarningDialog__OnEnable(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2A7C5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4D2A7C5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void CombineLimitUpWarningDialog__OnSliderDragFinished(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
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
    sub_1C93D2C(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  CombineLimitUpWarningDialog__SetSlider(this, v7, v8);
}


void CombineLimitUpWarningDialog__Open(
        CombineLimitUpWarningDialog_o *this,
        CombineLimitUpWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v12; // x20

  if ( (byte_4D2A7C2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CombineLimitUpWarningDialog_EndOpen__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8316/*"LIMITUP_CHECK_COMBINE_TITLE"*/);
    sub_1C93AD4(&StringLiteral_8315/*"LIMITUP_CHECK_COMBINE_BODY"*/);
    sub_1C93AD4(&StringLiteral_3708/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8317/*"LIMITUP_CHECK_WARNING_SLIDER"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4D2A7C2 = 1;
  }
  CombineLimitUpWarningDialog__Init(this, (const MethodInfo *)closeCallback);
  this->fields.closeFunc = closeCallback;
  sub_1C93A78(&this->fields.closeFunc, closeCallback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8316/*"LIMITUP_CHECK_COMBINE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, v6, 0);
  warningLabel = this->fields.warningLabel;
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8315/*"LIMITUP_CHECK_COMBINE_BODY"*/, 0);
  if ( !warningLabel )
    goto LABEL_11;
  UILabel__set_text(warningLabel, v6, 0);
  reInforeceLabel = this->fields.reInforeceLabel;
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8317/*"LIMITUP_CHECK_WARNING_SLIDER"*/, 0);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, v6, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, v6, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_11:
    sub_1C93D2C(v6, v7);
  }
  UILabel__set_text(cancelButtonLabel, v6, 0);
  v12 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineLimitUpWarningDialog__SetSlider(
        CombineLimitUpWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  __int64 v10; // x1
  UnityEngine_Color_o DisableColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A7C1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20815/*"img_slider_thumb_locked"*/);
    sub_1C93AD4(&StringLiteral_20814/*"img_slider_thumb"*/);
    byte_4D2A7C1 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v6 = (System_String_o **)&StringLiteral_20814/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20815/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  DisableColor.fields.a = 1.0;
  DisableColor.fields.b = 1.0;
  DisableColor.fields.g = 1.0;
  DisableColor.fields.r = 1.0;
  if ( !sliderOn )
    DisableColor = this->fields.DisableColor;
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, DisableColor, 0),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0)
    || (!sliderOn ? (v10 = 3) : (v10 = 0),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, const MethodInfo *))sliderSprite->klass->vtable._14_OnEnable.methodPtr)(
          sliderSprite,
          v10,
          1,
          sliderSprite->klass->vtable._14_OnEnable.method),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_15:
    sub_1C93D2C(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}


void CombineLimitUpWarningDialog___OnClickCancel_b__24_0(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  struct CombineLimitUpWarningDialog_ClickDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    0,
    closeFunc->fields.method);
}


void CombineLimitUpWarningDialog___OnClickDecide_b__23_0(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  struct CombineLimitUpWarningDialog_ClickDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    1,
    closeFunc->fields.method);
}


void CombineLimitUpWarningDialog_ClickDelegate___ctor(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
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
  sub_1C93A78(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ABF468;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ABF420;
}


System_IAsyncResult_o *CombineLimitUpWarningDialog_ClickDelegate__BeginInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4D2A7C7 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2A7C7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void CombineLimitUpWarningDialog_ClickDelegate__EndInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void CombineLimitUpWarningDialog_ClickDelegate__Invoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}