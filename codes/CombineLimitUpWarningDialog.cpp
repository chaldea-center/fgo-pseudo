void CombineLimitUpWarningDialog___ctor(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5932194 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5932194 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_E93440;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593218E & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineLimitUpWarningDialog_OnSliderDragFinished__);
    sub_21FFC50(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593218E = 1;
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
  v13.fields.r = 1.0;
  v13.fields.g = 1.0;
  v13.fields.b = 1.0;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v13, 0);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_12;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0);
  checkSlider = this->fields.checkSlider;
  v5 = (UIProgressBar_OnDragFinished_o *)sub_21FFEBC(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CombineLimitUpWarningDialog_OnSliderDragFinished__,
    0);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v5,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&checkSlider->fields.onDragFinished,
          (int32_t)v5,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        CombineLimitUpWarningDialog__SetSlider(this, 0, v12),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_12:
    sub_21FFECC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CombineLimitUpWarningDialog__OnClickCancel(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_5932192 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineLimitUpWarningDialog_OnClickCancel__);
    sub_21FFC50(&Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__);
    byte_5932192 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CombineLimitUpWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CombineLimitUpWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineLimitUpWarningDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.state = 3;
    v6 = (System_Action_o *)sub_21FFEBC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void CombineLimitUpWarningDialog__OnClickDecide(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_o *v8; // x20

  if ( (byte_5932191 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineLimitUpWarningDialog_OnClickDecide__);
    sub_21FFC50(&Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__);
    byte_5932191 = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_21FFECC(0, method);
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_CombineLimitUpWarningDialog_OnClickDecide__;
    if ( value >= 1.0 )
    {
      if ( (*((_BYTE *)Method_CombineLimitUpWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_CombineLimitUpWarningDialog_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      this->fields.state = 3;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__, 0);
      BaseDialog__Close((BaseDialog_o *)this, v8, 0);
    }
    else
    {
      if ( (*((_BYTE *)Method_CombineLimitUpWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_CombineLimitUpWarningDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void CombineLimitUpWarningDialog__OnEnable(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5932193 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_5932193 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void CombineLimitUpWarningDialog__OnSliderDragFinished(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
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
  CombineLimitUpWarningDialog__SetSlider(this, v6, v7);
}


void CombineLimitUpWarningDialog__Open(
        CombineLimitUpWarningDialog_o *this,
        CombineLimitUpWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *v14; // x0
  __int64 v15; // x1
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v20; // x20

  if ( (byte_5932190 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineLimitUpWarningDialog_EndOpen__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8603/*"LIMITUP_CHECK_COMBINE_TITLE"*/);
    sub_21FFC50(&StringLiteral_8602/*"LIMITUP_CHECK_COMBINE_BODY"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8604/*"LIMITUP_CHECK_WARNING_SLIDER"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    byte_5932190 = 1;
  }
  CombineLimitUpWarningDialog__Init(this, (const MethodInfo *)closeCallback);
  this->fields.closeFunc = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8603/*"LIMITUP_CHECK_COMBINE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, v14, 0);
  warningLabel = this->fields.warningLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8602/*"LIMITUP_CHECK_COMBINE_BODY"*/, 0);
  if ( !warningLabel )
    goto LABEL_11;
  UILabel__set_text(warningLabel, v14, 0);
  reInforeceLabel = this->fields.reInforeceLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8604/*"LIMITUP_CHECK_WARNING_SLIDER"*/, 0);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, v14, 0),
        decideButtonLabel = this->fields.decideButtonLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, v14, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_11:
    sub_21FFECC(v14, v15);
  }
  UILabel__set_text(cancelButtonLabel, v14, 0);
  v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineLimitUpWarningDialog__SetSlider(
        CombineLimitUpWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  __int64 *v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED

  if ( (byte_593218F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21535/*"img_slider_thumb_locked"*/);
    sub_21FFC50(&StringLiteral_21534/*"img_slider_thumb"*/);
    byte_593218F = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_12;
  v6 = &StringLiteral_21534/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = &StringLiteral_21535/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, (System_String_o *)*v6, 0);
  a = 1.0;
  b = 1.0;
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  g = 1.0;
  r = 1.0;
  if ( !sliderOn )
  {
    r = this->fields.DisableColor.fields.r;
    g = this->fields.DisableColor.fields.g;
    b = this->fields.DisableColor.fields.b;
    a = this->fields.DisableColor.fields.a;
  }
  if ( !sliderSprite
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0)
    || (sliderSprite->klass->vtable._14_OnEnable.methodPtr(),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_12:
    sub_21FFECC(sliderSprite, sliderOn);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEBF1C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FEBED4;
}


System_IAsyncResult_o *CombineLimitUpWarningDialog_ClickDelegate__BeginInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
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


void CombineLimitUpWarningDialog_ClickDelegate__EndInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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