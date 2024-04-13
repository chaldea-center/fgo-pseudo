// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog___ctor(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  int v9; // s0
  int v10; // s1
  int v11; // s2
  struct UnityEngine_Color_o v12; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42E99CB & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E99CB = 1;
  }
  v9 = 1050320830;
  v12 = (struct UnityEngine_Color_o)0LL;
  v10 = 1050320830;
  v11 = 1050320830;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v12);
  this->fields.DisableColor = v12;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog__Init(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *titleLabel; // x0
  UIWidget_o *v12; // x20
  int v13; // s0
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_42E99C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineLimitUpWarningDialog_OnSliderDragFinished__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UIProgressBar_OnDragFinished_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E99C5 = 1;
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
  v12 = (UIWidget_o *)this->fields.titleLabel;
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
  if ( !v12 )
    goto LABEL_12;
  UIWidget__set_color(v12, *(UnityEngine_Color_o *)&v13, 0LL);
  titleLabel = (UILabel_o *)this->fields.checkSlider;
  if ( !titleLabel )
    goto LABEL_12;
  UIProgressBar__set_value((UIProgressBar_o *)titleLabel, 0.0, 0LL);
  checkSlider = this->fields.checkSlider;
  v18 = (UIProgressBar_OnDragFinished_o *)sub_B5D694(UIProgressBar_OnDragFinished_TypeInfo);
  UIProgressBar_OnDragFinished___ctor(
    v18,
    (Il2CppObject *)this,
    Method_CombineLimitUpWarningDialog_OnSliderDragFinished__,
    0LL);
  if ( !checkSlider
    || (checkSlider->fields.onDragFinished = v18,
        sub_B5D560(
          (BattleServantConfConponent_o *)&checkSlider->fields.onDragFinished,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        CombineLimitUpWarningDialog__SetSlider(this, 0, v25),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CombineLimitUpWarningDialog__OnClickCancel(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E99C9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E99C9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.state = 3;
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall CombineLimitUpWarningDialog__OnClickDecide(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UIProgressBar_o *checkSlider; // x0
  System_Action_o *v12; // x20

  if ( (byte_42E99C8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E99C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_B5D69C(0LL, method);
    if ( UIProgressBar__get_value(checkSlider, 0LL) >= 1.0 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.state = 3;
      v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
  }
}


void __fastcall CombineLimitUpWarningDialog__OnEnable(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42E99CA & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15675/*"Window/Objects/Buttons/CancelButton"*/, v5, v6, v7);
    byte_42E99CA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_15675/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall CombineLimitUpWarningDialog__OnSliderDragFinished(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  const MethodInfo *v5; // x2
  CombineLimitUpWarningDialog_o *v6; // x0
  bool v7; // w1

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_B5D69C(checkSlider, method);
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
  CombineLimitUpWarningDialog__SetSlider(v6, v7, v5);
}


void __fastcall CombineLimitUpWarningDialog__Open(
        CombineLimitUpWarningDialog_o *this,
        CombineLimitUpWarningDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *v34; // x0
  __int64 v35; // x1
  UILabel_o *warningLabel; // x20
  UILabel_o *reInforeceLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v40; // x20

  if ( (byte_42E99C7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)closeCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CombineLimitUpWarningDialog_EndOpen__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_8466/*"LIMITUP_CHECK_COMBINE_TITLE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_8465/*"LIMITUP_CHECK_COMBINE_BODY"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_8467/*"LIMITUP_CHECK_WARNING_SLIDER"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v24, v25, v26);
    byte_42E99C7 = 1;
  }
  CombineLimitUpWarningDialog__Init(this, (const MethodInfo *)closeCallback);
  this->fields.closeFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8466/*"LIMITUP_CHECK_COMBINE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, v34, 0LL);
  warningLabel = this->fields.warningLabel;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8465/*"LIMITUP_CHECK_COMBINE_BODY"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_12;
  UILabel__set_text(warningLabel, v34, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8467/*"LIMITUP_CHECK_WARNING_SLIDER"*/, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, v34, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, v34, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelButtonLabel) )
  {
LABEL_12:
    sub_B5D69C(v34, v35);
  }
  UILabel__set_text(cancelButtonLabel, v34, 0LL);
  v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog__SetSlider(
        CombineLimitUpWarningDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UISprite_o *sliderSprite; // x0
  System_String_o **v10; // x8
  UIButtonColor_o *decideButton; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 v16; // x1

  if ( (byte_42E99C6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19882/*"img_slider_thumb_locked"*/, sliderOn, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19881/*"img_slider_thumb"*/, v6, v7, v8);
    byte_42E99C6 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_16;
  v10 = (System_String_o **)&StringLiteral_19881/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v10 = (System_String_o **)&StringLiteral_19882/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v10, 0LL);
  decideButton = this->fields.decideButton;
  if ( sliderOn )
  {
    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
    if ( !decideButton )
      goto LABEL_16;
  }
  else
  {
    r = this->fields.DisableColor.fields.r;
    g = this->fields.DisableColor.fields.g;
    b = this->fields.DisableColor.fields.b;
    a = this->fields.DisableColor.fields.a;
    if ( !decideButton )
      goto LABEL_16;
  }
  UIButtonColor__set_defaultColor(decideButton, *(UnityEngine_Color_o *)&r, 0LL);
  sliderSprite = (UISprite_o *)this->fields.decideButton;
  if ( !sliderSprite
    || (!sliderOn ? (v16 = 3LL) : (v16 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v16,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(sliderSprite, sliderOn);
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
  CombineLimitUpWarningDialog_ClickDelegate_o *closeFunc; // x0

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B5D69C(0LL, method);
  CombineLimitUpWarningDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
}


void __fastcall CombineLimitUpWarningDialog___OnClickDecide_b__23_0(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  CombineLimitUpWarningDialog_ClickDelegate_o *closeFunc; // x0

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B5D69C(0LL, method);
  CombineLimitUpWarningDialog_ClickDelegate__Invoke(closeFunc, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog_ClickDelegate___ctor(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall CombineLimitUpWarningDialog_ClickDelegate__BeginInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_42E5EB0 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5EB0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CombineLimitUpWarningDialog_ClickDelegate__EndInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog_ClickDelegate__Invoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CombineLimitUpWarningDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CombineLimitUpWarningDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CombineLimitUpWarningDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CombineLimitUpWarningDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
    goto LABEL_37;
  }
}