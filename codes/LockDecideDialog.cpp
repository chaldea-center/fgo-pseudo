void LockDecideDialog___ctor(LockDecideDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0

  if ( (byte_593B87B & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593B87B = 1;
  }
  v3 = BaseDialog_TypeInfo;
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_E93440;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LockDecideDialog__Close(LockDecideDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LockDecideDialog__Close_53790028(this, 0, v2);
}


void LockDecideDialog__Close_53790028(LockDecideDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_593B877 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_LockDecideDialog_EndClose__);
    byte_593B877 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_LockDecideDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void LockDecideDialog__EndClose(LockDecideDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  LockDecideDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void LockDecideDialog__Init(LockDecideDialog_o *this, const MethodInfo *method)
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

  if ( (byte_593B874 & 1) == 0 )
  {
    sub_21FFC50(&Method_LockDecideDialog_OnSliderDragFinished__);
    sub_21FFC50(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B874 = 1;
  }
  titleLabel = this->fields.titleLabel;
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
  titleLabel = this->fields.infoLabel;
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
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_12;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0);
  checkSlider = this->fields.checkSlider;
  v5 = (UIProgressBar_OnDragFinished_o *)sub_21FFEBC(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(v5, (Il2CppObject *)this, Method_LockDecideDialog_OnSliderDragFinished__, 0);
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
        LockDecideDialog__SetSlider(this, 0, v12),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_12:
    sub_21FFECC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void LockDecideDialog__OnClickCancel(LockDecideDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_593B879 & 1) == 0 )
  {
    sub_21FFC50(&Method_LockDecideDialog_OnClickCancel__);
    byte_593B879 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_LockDecideDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_LockDecideDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_LockDecideDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void LockDecideDialog__OnClickDecide(LockDecideDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_593B878 & 1) == 0 )
  {
    sub_21FFC50(&Method_LockDecideDialog_OnClickDecide__);
    byte_593B878 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_21FFECC(0, method);
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_LockDecideDialog_OnClickDecide__;
    if ( value >= 1.0 )
    {
      if ( (*((_BYTE *)Method_LockDecideDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_LockDecideDialog_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
      clickFunc = this->fields.clickFunc;
      if ( clickFunc )
        ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
          clickFunc->fields.method_code,
          1,
          clickFunc->fields.method);
    }
    else
    {
      if ( (*((_BYTE *)Method_LockDecideDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_LockDecideDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void LockDecideDialog__OnEnable(LockDecideDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_593B87A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_593B87A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void LockDecideDialog__OnSliderDragFinished(LockDecideDialog_o *this, const MethodInfo *method)
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
  LockDecideDialog__SetSlider(this, v6, v7);
}


void LockDecideDialog__Open(
        LockDecideDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        CommonConfirmDialog_ClickDelegate_o *clickCallBack,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UnityEngine_Object_o *titleLabel; // x22
  __int64 v17; // x1
  UILabel_o *v18; // x0
  System_String_o *v19; // x1
  UnityEngine_Object_o *infoLabel; // x21
  struct UILabel_o *v21; // x8
  System_String_o *v22; // x1
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20

  if ( (byte_593B876 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_16645/*"\\n"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B876 = 1;
  }
  LockDecideDialog__Init(this, (const MethodInfo *)title);
  this->fields.clickFunc = clickCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)clickCallBack,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v18 = this->fields.titleLabel;
    if ( !v18 )
      goto LABEL_25;
    if ( title )
      v19 = title;
    else
      v19 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v18, v19, 0);
  }
  infoLabel = (UnityEngine_Object_o *)this->fields.infoLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  v18 = (UILabel_o *)UnityEngine_Object__op_Inequality(infoLabel, 0, 0);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    if ( !message )
      goto LABEL_25;
    v18 = (UILabel_o *)System_String__Replace_75490096(
                         message,
                         (System_String_o *)StringLiteral_16645/*"\\n"*/,
                         (System_String_o *)StringLiteral_43/*"\n"*/,
                         0);
    v21 = this->fields.infoLabel;
    if ( !v21 )
      goto LABEL_25;
    if ( v18 )
      v22 = (System_String_o *)v18;
    else
      v22 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(this->fields.infoLabel, v22, v21->fields.mFontSize, 0, 0);
  }
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v18 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)v18, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v18 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_25:
    sub_21FFECC(v18, v17);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)v18, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void LockDecideDialog__SetSlider(LockDecideDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  __int64 *v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED

  if ( (byte_593B875 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21535/*"img_slider_thumb_locked"*/);
    sub_21FFC50(&StringLiteral_21534/*"img_slider_thumb"*/);
    byte_593B875 = 1;
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