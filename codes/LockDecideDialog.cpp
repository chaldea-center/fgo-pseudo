void LockDecideDialog___ctor(LockDecideDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D332F6 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D332F6 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_D01050;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LockDecideDialog__Close(LockDecideDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LockDecideDialog__Close_46640616(this, 0, v2);
}


void LockDecideDialog__Close_46640616(LockDecideDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D332F2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_LockDecideDialog_EndClose__);
    byte_4D332F2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_LockDecideDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void LockDecideDialog__EndClose(LockDecideDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  LockDecideDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void LockDecideDialog__Init(LockDecideDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D332EF & 1) == 0 )
  {
    sub_1C93AD4(&Method_LockDecideDialog_OnSliderDragFinished__);
    sub_1C93AD4(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D332EF = 1;
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
  v5 = (UIProgressBar_OnDragFinished_o *)sub_1C93D20(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(v5, (Il2CppObject *)this, Method_LockDecideDialog_OnSliderDragFinished__, 0);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v5,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&checkSlider->fields.onDragFinished,
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
    sub_1C93D2C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void LockDecideDialog__OnClickCancel(LockDecideDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D332F4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_LockDecideDialog_OnClickCancel__);
    byte_4D332F4 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_LockDecideDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_LockDecideDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_LockDecideDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
  float value; // s8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D332F3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_LockDecideDialog_OnClickDecide__);
    byte_4D332F3 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C93D2C(0, method);
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_LockDecideDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_LockDecideDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_LockDecideDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    if ( value >= 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      clickFunc = this->fields.clickFunc;
      if ( clickFunc )
        ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
          clickFunc->fields.method_code,
          1,
          clickFunc->fields.method);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
  }
}


void LockDecideDialog__OnEnable(LockDecideDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D332F5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4D332F5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void LockDecideDialog__OnSliderDragFinished(LockDecideDialog_o *this, const MethodInfo *method)
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
  LockDecideDialog__SetSlider(this, v7, v8);
}


void LockDecideDialog__Open(
        LockDecideDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        CommonConfirmDialog_ClickDelegate_o *clickCallBack,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_Object_o *titleLabel; // x22
  __int64 v16; // x1
  UILabel_o *v17; // x0
  System_String_o *v18; // x1
  UnityEngine_Object_o *infoLabel; // x21
  struct UILabel_o *v20; // x8
  System_String_o *v21; // x1
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20

  if ( (byte_4D332F1 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_16142/*"\\n"*/);
    sub_1C93AD4(&StringLiteral_3708/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D332F1 = 1;
  }
  LockDecideDialog__Init(this, (const MethodInfo *)title);
  this->fields.clickFunc = clickCallBack;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc,
    (int32_t)clickCallBack,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v17 = this->fields.titleLabel;
    if ( !v17 )
      goto LABEL_25;
    if ( title )
      v18 = title;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v17, v18, 0);
  }
  infoLabel = (UnityEngine_Object_o *)this->fields.infoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = (UILabel_o *)UnityEngine_Object__op_Inequality(infoLabel, 0, 0);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    if ( !message )
      goto LABEL_25;
    v17 = (UILabel_o *)System_String__Replace_64472288(
                         message,
                         (System_String_o *)StringLiteral_16142/*"\\n"*/,
                         (System_String_o *)StringLiteral_43/*"\n"*/,
                         0);
    v20 = this->fields.infoLabel;
    if ( !v20 )
      goto LABEL_25;
    if ( v17 )
      v21 = (System_String_o *)v17;
    else
      v21 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(this->fields.infoLabel, v21, v20->fields.mFontSize, 0, 0);
  }
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)v17, 0),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v17 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelButtonLabel) )
  {
LABEL_25:
    sub_1C93D2C(v17, v16);
  }
  UILabel__set_text(cancelButtonLabel, (System_String_o *)v17, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void LockDecideDialog__SetSlider(LockDecideDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  __int64 v10; // x1
  UnityEngine_Color_o DisableColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D332F0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20815/*"img_slider_thumb_locked"*/);
    sub_1C93AD4(&StringLiteral_20814/*"img_slider_thumb"*/);
    byte_4D332F0 = 1;
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