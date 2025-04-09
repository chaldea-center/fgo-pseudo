void __fastcall CombineLimitUpWarningDialog___ctor(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49BEBF1 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49BEBF1 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_BAA530;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CombineLimitUpWarningDialog__Close(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall CombineLimitUpWarningDialog__EndOpen(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CombineLimitUpWarningDialog__Init(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49BEBEB & 1) == 0 )
  {
    sub_1B4CF90(&Method_CombineLimitUpWarningDialog_OnSliderDragFinished__, method);
    sub_1B4CF90(&UIProgressBar_OnDragFinished_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BEBEB = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_12;
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v11, 0LL);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_12;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0LL);
  checkSlider = this->fields.checkSlider;
  v7 = (UIProgressBar_OnDragFinished_o *)sub_1B4D1DC(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CombineLimitUpWarningDialog_OnSliderDragFinished__,
    0LL);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v7,
        sub_1B4CF34((CGThumbnailListItem_o *)&checkSlider->fields.onDragFinished, (int32_t)v7, v8, v9),
        CombineLimitUpWarningDialog__SetSlider(this, 0, v10),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1B4D1EC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CombineLimitUpWarningDialog__OnClickCancel(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_49BEBEF & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_CombineLimitUpWarningDialog_OnClickCancel__, v3);
    sub_1B4CF90(&Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__, v4);
    byte_49BEBEF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CombineLimitUpWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CombineLimitUpWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_CombineLimitUpWarningDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    this->fields.state = 3;
    v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall CombineLimitUpWarningDialog__OnClickDecide(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Action_o *v9; // x20

  if ( (byte_49BEBEE & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_CombineLimitUpWarningDialog_OnClickDecide__, v3);
    sub_1B4CF90(&Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__, v4);
    byte_49BEBEE = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1B4D1EC(0LL, method);
    value = UIProgressBar__get_value(checkSlider, 0LL);
    v7 = Method_CombineLimitUpWarningDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CombineLimitUpWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B4CFA8(Method_CombineLimitUpWarningDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
    if ( value >= 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
      this->fields.state = 3;
      v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
    }
  }
}


void __fastcall CombineLimitUpWarningDialog__OnEnable(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49BEBF0 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15349/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_49BEBF0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42438944(transform, (System_String_o *)StringLiteral_15349/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall CombineLimitUpWarningDialog__OnSliderDragFinished(
        CombineLimitUpWarningDialog_o *this,
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
    sub_1B4D1EC(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  CombineLimitUpWarningDialog__SetSlider(this, v7, v8);
}


void __fastcall CombineLimitUpWarningDialog__Open(
        CombineLimitUpWarningDialog_o *this,
        CombineLimitUpWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UILabel_o *titleLabel; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v21; // x20

  if ( (byte_49BEBED & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, closeCallback);
    sub_1B4CF90(&Method_CombineLimitUpWarningDialog_EndOpen__, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_8074/*"LIMITUP_CHECK_COMBINE_TITLE"*/, v7);
    sub_1B4CF90(&StringLiteral_8073/*"LIMITUP_CHECK_COMBINE_BODY"*/, v8);
    sub_1B4CF90(&StringLiteral_3658/*"COMMON_CONFIRM_DECIDE"*/, v9);
    sub_1B4CF90(&StringLiteral_8075/*"LIMITUP_CHECK_WARNING_SLIDER"*/, v10);
    sub_1B4CF90(&StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, v11);
    byte_49BEBED = 1;
  }
  CombineLimitUpWarningDialog__Init(this, (const MethodInfo *)closeCallback);
  this->fields.closeFunc = closeCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v12, v13);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8074/*"LIMITUP_CHECK_COMBINE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, v15, 0LL);
  warningLabel = this->fields.warningLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8073/*"LIMITUP_CHECK_COMBINE_BODY"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_11;
  UILabel__set_text(warningLabel, v15, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8075/*"LIMITUP_CHECK_WARNING_SLIDER"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, v15, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, v15, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_11:
    sub_1B4D1EC(v15, v16);
  }
  UILabel__set_text(cancelButtonLabel, v15, 0LL);
  v21 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog__SetSlider(
        CombineLimitUpWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *sliderSprite; // x0
  System_String_o **v7; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v12; // x1

  if ( (byte_49BEBEC & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20179/*"img_slider_thumb_locked"*/, sliderOn);
    sub_1B4CF90(&StringLiteral_20178/*"img_slider_thumb"*/, v5);
    byte_49BEBEC = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v7 = (System_String_o **)&StringLiteral_20178/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v7 = (System_String_o **)&StringLiteral_20179/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v7, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  a = 1.0;
  b = 1.0;
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
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0LL),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL)
    || (!sliderOn ? (v12 = 3LL) : (v12 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v12,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1B4D1EC(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}


void __fastcall CombineLimitUpWarningDialog___OnClickCancel_b__24_0(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  struct CombineLimitUpWarningDialog_ClickDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1B4D1EC(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    0LL,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}


void __fastcall CombineLimitUpWarningDialog___OnClickDecide_b__23_0(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  struct CombineLimitUpWarningDialog_ClickDelegate_o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1B4D1EC(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog_ClickDelegate___ctor(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A0E0C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A0DC4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CombineLimitUpWarningDialog_ClickDelegate__BeginInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_49BEBF2 & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, isDecide);
    byte_49BEBF2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall CombineLimitUpWarningDialog_ClickDelegate__EndInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall CombineLimitUpWarningDialog_ClickDelegate__Invoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}