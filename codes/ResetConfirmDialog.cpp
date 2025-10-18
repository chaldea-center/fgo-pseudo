void ResetConfirmDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C424C7 & 1) == 0 )
  {
    sub_1C37058(&ResetConfirmDialog_TypeInfo);
    sub_1C37058(&StringLiteral_408/*"#494949"*/);
    byte_4C424C7 = 1;
  }
  ResetConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_408/*"#494949"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)ResetConfirmDialog_TypeInfo->static_fields, StringLiteral_408/*"#494949"*/, v1, v2);
}


void ResetConfirmDialog___ctor(ResetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C424C6 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C424C6 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ResetConfirmDialog__Awake(ResetConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void ResetConfirmDialog__Close(ResetConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ResetConfirmDialog__Close_41043756(this, 0, v2);
}


void ResetConfirmDialog__Close_41043756(
        ResetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C424C2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ResetConfirmDialog_EndClose__);
    byte_4C424C2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ResetConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ResetConfirmDialog__EndClose(ResetConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ResetConfirmDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void ResetConfirmDialog__Init(ResetConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C424BF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C424BF = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_9:
    sub_1C372B4(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ResetConfirmDialog__OnClickCancel(ResetConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  struct ResetConfirmDialog_ClickDelegate_o *clickFunc; // x8
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C424C4 & 1) == 0 )
  {
    sub_1C37058(&Method_ResetConfirmDialog_OnClickCancel__);
    byte_4C424C4 = 1;
  }
  if ( !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v3 = Method_ResetConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ResetConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_ResetConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.clickFunc )
    {
      ResetConfirmDialog__Close_41043756(this, 0, v5);
      clickFunc = this->fields.clickFunc;
      if ( !clickFunc )
        sub_1C372B4(v6);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
      this->fields.clickFunc = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.clickFunc, 0, v8, v9);
    }
  }
}


void ResetConfirmDialog__OnClickDecide(ResetConfirmDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct ResetConfirmDialog_ClickDelegate_o *clickFunc; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C424C3 & 1) == 0 )
  {
    sub_1C37058(&Method_ResetConfirmDialog_OnClickDecide__);
    byte_4C424C3 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_15;
  if ( UIProgressBar__get_value(checkSlider, 0) < 1.0 )
  {
    v4 = Method_ResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_ResetConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
    return;
  }
  if ( !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v6 = Method_ResetConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ResetConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C37070(Method_ResetConfirmDialog_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
    if ( this->fields.clickFunc )
    {
      ResetConfirmDialog__Close_41043756(this, 0, v8);
      clickFunc = this->fields.clickFunc;
      if ( clickFunc )
      {
        ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
          clickFunc->fields.method_code,
          1,
          clickFunc->fields.method);
        this->fields.clickFunc = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.clickFunc, 0, v10, v11);
        return;
      }
LABEL_15:
      sub_1C372B4(checkSlider);
    }
  }
}


void ResetConfirmDialog__OnEnable(ResetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C424C5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C424C5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44960000(transform, (System_String_o *)StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void ResetConfirmDialog__OnSliderDragFinished(ResetConfirmDialog_o *this, const MethodInfo *method)
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
  ResetConfirmDialog__SetSlider(this, v7, v8);
}


void ResetConfirmDialog__Open(
        ResetConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        bool isBack,
        ResetConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *cancelButtonLabel; // x22
  __int64 *v13; // x8
  UILabel_o *decideButtonLabel; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  if ( (byte_4C424C0 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C37058(&Method_ResetConfirmDialog_OnSliderDragFinished__);
    sub_1C37058(&StringLiteral_5590/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_5589/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_BACK"*/);
    sub_1C37058(&StringLiteral_5591/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_DECIDE"*/);
    byte_4C424C0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel || (UILabel__set_text(titleLabel, title, 0), (titleLabel = this->fields.messageLabel) == 0) )
LABEL_17:
    sub_1C372B4(titleLabel);
  WrapControlText__fontSizeAdjust(titleLabel, message, titleLabel->fields.mFontSize, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isBack )
      goto LABEL_7;
LABEL_9:
    v13 = &StringLiteral_5590/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_CANCEL"*/;
    goto LABEL_10;
  }
  if ( !isBack )
    goto LABEL_9;
LABEL_7:
  v13 = &StringLiteral_5589/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_BACK"*/;
LABEL_10:
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)*v13, 0);
  if ( !cancelButtonLabel )
    goto LABEL_17;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)titleLabel, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_17;
  UILabel__set_text(decideButtonLabel, (System_String_o *)titleLabel, 0);
  this->fields.clickFunc = func;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v15, v16);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_17;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0);
  checkSlider = this->fields.checkSlider;
  v18 = (UIProgressBar_OnDragFinished_o *)sub_1C372A4(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(v18, (Il2CppObject *)this, Method_ResetConfirmDialog_OnSliderDragFinished__, 0);
  if ( !checkSlider )
    goto LABEL_17;
  checkSlider->fields.onDragFinished = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&checkSlider->fields.onDragFinished, (int32_t)v18, v19, v20);
  ResetConfirmDialog__SetSlider(this, 0, v21);
  this->fields.isEnd = 0;
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void ResetConfirmDialog__SetSlider(ResetConfirmDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  ResetConfirmDialog_c *v7; // x0
  __int64 v8; // x1
  UnityEngine_Color_o v9; // kr00_16
  UnityEngine_Color_o v10; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4C424C1 & 1) == 0 )
  {
    sub_1C37058(&ResetConfirmDialog_TypeInfo);
    sub_1C37058(&StringLiteral_20582/*"img_slider_thumb_locked"*/);
    sub_1C37058(&StringLiteral_20581/*"img_slider_thumb"*/);
    byte_4C424C1 = 1;
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
  v7 = ResetConfirmDialog_TypeInfo;
  if ( !ResetConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResetConfirmDialog_TypeInfo);
    v7 = ResetConfirmDialog_TypeInfo;
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


void ResetConfirmDialog_ClickDelegate___ctor(
        ResetConfirmDialog_ClickDelegate_o *this,
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7B97C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7B934;
}


System_IAsyncResult_o *ResetConfirmDialog_ClickDelegate__BeginInvoke(
        ResetConfirmDialog_ClickDelegate_o *this,
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
  if ( (byte_4C424C8 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C424C8 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void ResetConfirmDialog_ClickDelegate__EndInvoke(
        ResetConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ResetConfirmDialog_ClickDelegate__Invoke(
        ResetConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}