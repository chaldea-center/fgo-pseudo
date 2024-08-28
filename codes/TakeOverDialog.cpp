void __fastcall TakeOverDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4A03C77 & 1) == 0 )
  {
    sub_1B686D4(&TakeOverDialog_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_444/*"#787878"*/, v2);
    byte_4A03C77 = 1;
  }
  TakeOverDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_444/*"#787878"*/;
  sub_1B68678(TakeOverDialog_TypeInfo->static_fields);
}


void __fastcall TakeOverDialog___ctor(TakeOverDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A03C76 & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A03C76 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall TakeOverDialog__Close(TakeOverDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TakeOverDialog__Close_30281824(this, 0LL, v2);
}


void __fastcall TakeOverDialog__Close_30281824(
        TakeOverDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4A03C72 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_TakeOverDialog_EndClose__, v5);
    byte_4A03C72 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B68678(&this->fields.closeEndFunc);
  v6 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TakeOverDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
}


void __fastcall TakeOverDialog__EndClose(TakeOverDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  TakeOverDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0LL;
    sub_1B68678(p_closeEndFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall TakeOverDialog__Init(TakeOverDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *takeOverAccountTitleLabel; // x20
  UnityEngine_Object_o *takeOverAccountDataLabel; // x20
  UnityEngine_Object_o *warningLabel1; // x20
  UnityEngine_Object_o *warningLabel2; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4A03C69 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&StringLiteral_1/*""*/, v3);
    byte_4A03C69 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_40;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  takeOverAccountTitleLabel = (UnityEngine_Object_o *)this->fields.takeOverAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(takeOverAccountTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.takeOverAccountTitleLabel;
    if ( !gameObject )
      goto LABEL_40;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  takeOverAccountDataLabel = (UnityEngine_Object_o *)this->fields.takeOverAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(takeOverAccountDataLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.takeOverAccountDataLabel;
    if ( !gameObject )
      goto LABEL_40;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  warningLabel1 = (UnityEngine_Object_o *)this->fields.warningLabel1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel1, 0LL, 0LL) )
  {
    gameObject = this->fields.warningLabel1;
    if ( !gameObject )
      goto LABEL_40;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  warningLabel2 = (UnityEngine_Object_o *)this->fields.warningLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel2, 0LL, 0LL) )
  {
    gameObject = this->fields.warningLabel2;
    if ( !gameObject )
      goto LABEL_40;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_40;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_40;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_40:
    sub_1B68930(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v13);
}


void __fastcall TakeOverDialog__OnClickCancel(TakeOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  struct TakeOverDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A03C74 & 1) == 0 )
  {
    sub_1B686D4(&Method_TakeOverDialog_OnClickCancel__, method);
    byte_4A03C74 = 1;
  }
  v3 = Method_TakeOverDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_TakeOverDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC();
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  if ( this->fields.clickFunc )
  {
    TakeOverDialog__Close_30281824(this, 0LL, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_1B68930(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&clickFunc->fields.extra_arg);
    this->fields.clickFunc = 0LL;
    sub_1B68678(&this->fields.clickFunc);
  }
}


void __fastcall TakeOverDialog__OnClickDecide(TakeOverDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  _QWORD *v5; // x0
  float v6; // s8
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct TakeOverDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A03C73 & 1) == 0 )
  {
    sub_1B686D4(&Method_TakeOverDialog_OnClickDecide__, method);
    byte_4A03C73 = 1;
  }
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  value = UIProgressBar__get_value(checkSlider, 0LL);
  v5 = Method_TakeOverDialog_OnClickDecide__;
  v6 = value;
  if ( (*((_BYTE *)Method_TakeOverDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B686EC();
  v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
  if ( v6 < 1.0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
  if ( this->fields.clickFunc )
  {
    TakeOverDialog__Close_30281824(this, 0LL, v8);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
      this->fields.clickFunc = 0LL;
      sub_1B68678(&this->fields.clickFunc);
      return;
    }
LABEL_12:
    sub_1B68930(checkSlider, method);
  }
}


void __fastcall TakeOverDialog__OnEnable(TakeOverDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A03C75 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_15583/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4A03C75 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41516588(transform, (System_String_o *)StringLiteral_15583/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall TakeOverDialog__OnSliderDragFinished(TakeOverDialog_o *this, const MethodInfo *method)
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
    sub_1B68930(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  TakeOverDialog__SetSlider(this, v7, v8);
}


void __fastcall TakeOverDialog__Open(
        TakeOverDialog_o *this,
        TakeOverDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v8; // x20
  UIProgressBar_OnDragFinished_o *v9; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_4A03C70 & 1) == 0 )
  {
    sub_1B686D4(&UIProgressBar_OnDragFinished_TypeInfo, func);
    sub_1B686D4(&Method_TakeOverDialog_OnSliderDragFinished__, v5);
    byte_4A03C70 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B68678(&this->fields.clickFunc);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0LL),
        v8 = this->fields.checkSlider,
        v9 = (UIProgressBar_OnDragFinished_o *)sub_1B68920(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(v9, (Il2CppObject *)this, Method_TakeOverDialog_OnSliderDragFinished__, 0LL),
        !v8) )
  {
    sub_1B68930(checkSlider, v6);
  }
  v8->fields.onDragFinished = v9;
  sub_1B68678(&v8->fields.onDragFinished);
  TakeOverDialog__SetSlider(this, 0, v10);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, v11);
}


void __fastcall TakeOverDialog__SetAccountTitleLabel(TakeOverDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *takeOverAccountTitleLabel; // x20
  UILabel_o *v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4A03C6B & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_2033/*"ACCOUNT_LINKAGE_TAKEOVER_OVERRIDE_TITLE"*/, v4);
    byte_4A03C6B = 1;
  }
  takeOverAccountTitleLabel = (UnityEngine_Object_o *)this->fields.takeOverAccountTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(takeOverAccountTitleLabel, 0LL, 0LL) )
  {
    v6 = this->fields.takeOverAccountTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2033/*"ACCOUNT_LINKAGE_TAKEOVER_OVERRIDE_TITLE"*/, 0LL);
    if ( !v6 )
      sub_1B68930(v7, v8);
    UILabel__set_text(v6, v7, 0LL);
  }
}


void __fastcall TakeOverDialog__SetButtonCancelLabel(
        TakeOverDialog_o *this,
        System_String_o *buttonCancel,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonCancelLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4A03C6E & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, buttonCancel);
    byte_4A03C6E = 1;
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonCancelLabel;
    if ( !v7 )
      sub_1B68930(0LL, v6);
    UILabel__set_text(v7, buttonCancel, 0LL);
  }
}


void __fastcall TakeOverDialog__SetButtonDecideLabel(
        TakeOverDialog_o *this,
        System_String_o *buttonDecide,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4A03C6F & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, buttonDecide);
    byte_4A03C6F = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v7 = this->fields.buttonDecideLabel;
    if ( !v7 )
      sub_1B68930(0LL, v6);
    UILabel__set_text(v7, buttonDecide, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TakeOverDialog__SetSlider(TakeOverDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UISprite_o *sliderSprite; // x0
  System_String_o **v8; // x8
  TakeOverDialog_c *v9; // x0
  __int64 v10; // x1
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A03C71 & 1) == 0 )
  {
    sub_1B686D4(&TakeOverDialog_TypeInfo, sliderOn);
    sub_1B686D4(&StringLiteral_20399/*"img_slider_thumb_locked"*/, v5);
    sub_1B686D4(&StringLiteral_20398/*"img_slider_thumb"*/, v6);
    byte_4A03C71 = 1;
  }
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_17;
  v8 = (System_String_o **)&StringLiteral_20398/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v8 = (System_String_o **)&StringLiteral_20399/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v8, 0LL);
  v9 = TakeOverDialog_TypeInfo;
  if ( !TakeOverDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TakeOverDialog_TypeInfo);
    v9 = TakeOverDialog_TypeInfo;
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
    sub_1B68930(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}


void __fastcall TakeOverDialog__SetTakeOverAccountDataLabel(
        TakeOverDialog_o *this,
        System_String_o *takeOverAccountData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *takeOverAccountDataLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4A03C6C & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, takeOverAccountData);
    byte_4A03C6C = 1;
  }
  takeOverAccountDataLabel = (UnityEngine_Object_o *)this->fields.takeOverAccountDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(takeOverAccountDataLabel, 0LL, 0LL) )
  {
    v7 = this->fields.takeOverAccountDataLabel;
    if ( !v7 )
      sub_1B68930(0LL, v6);
    UILabel__set_text(v7, takeOverAccountData, 0LL);
  }
}


void __fastcall TakeOverDialog__SetTitleLabel(TakeOverDialog_o *this, System_String_o *title, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4A03C6A & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, title);
    byte_4A03C6A = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      sub_1B68930(0LL, v6);
    UILabel__set_text(v7, title, 0LL);
  }
}


void __fastcall TakeOverDialog__SetWarningLabel(
        TakeOverDialog_o *this,
        System_String_o *warning1,
        System_String_o *warning2,
        const MethodInfo *method)
{
  UnityEngine_Object_o *warningLabel1; // x22
  __int64 v8; // x1
  UILabel_o *v9; // x0
  UnityEngine_Object_o *warningLabel2; // x21

  if ( (byte_4A03C6D & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, warning1);
    byte_4A03C6D = 1;
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
    sub_1B68930(v9, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TakeOverDialog_ClickDelegate___ctor(
        TakeOverDialog_ClickDelegate_o *this,
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
  sub_1B68678(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A89D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A898C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall TakeOverDialog_ClickDelegate__BeginInvoke(
        TakeOverDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4A03C78 & 1) == 0 )
  {
    sub_1B686D4(&bool_TypeInfo, isDecide);
    byte_4A03C78 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall TakeOverDialog_ClickDelegate__EndInvoke(
        TakeOverDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall TakeOverDialog_ClickDelegate__Invoke(
        TakeOverDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}