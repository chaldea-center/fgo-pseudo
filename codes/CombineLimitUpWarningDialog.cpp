// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog___ctor(CombineLimitUpWarningDialog_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v7; // s0
  int v8; // s1
  int v9; // s2
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40F9929 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F9929 = 1;
  }
  v7 = 1050320830;
  v10 = (struct UnityEngine_Color_o)0LL;
  v8 = 1050320830;
  v9 = 1050320830;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.DisableColor = v10;
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
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *warningLabel; // x0
  UILabel_o *decideButtonLabel; // x0
  UILabel_o *cancelButtonLabel; // x0
  UIWidget_o *v9; // x20
  int v10; // s0
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UIProgressBar_OnDragFinished_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9923 & 1) == 0 )
  {
    sub_B16FFC(&Method_CombineLimitUpWarningDialog_OnSliderDragFinished__, method);
    sub_B16FFC(&UIProgressBar_OnDragFinished_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F9923 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_12;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !decideButtonLabel )
    goto LABEL_12;
  UILabel__set_text(decideButtonLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  if ( !cancelButtonLabel )
    goto LABEL_12;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)StringLiteral_1, 0LL);
  v9 = (UIWidget_o *)this->fields.titleLabel;
  *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
  if ( !v9 )
    goto LABEL_12;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v10, 0LL);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_12;
  UIProgressBar__set_value(checkSlider, 0.0, 0LL);
  v15 = this->fields.checkSlider;
  v20 = (UIProgressBar_OnDragFinished_o *)sub_B170CC(UIProgressBar_OnDragFinished_TypeInfo, v16, v17, v18, v19);
  UIProgressBar_OnDragFinished___ctor(
    v20,
    (Il2CppObject *)this,
    Method_CombineLimitUpWarningDialog_OnSliderDragFinished__,
    0LL);
  if ( !v15
    || (v15->fields.onDragFinished = v20,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v15->fields.onDragFinished,
          (System_Int32_array **)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        CombineLimitUpWarningDialog__SetSlider(this, 0, v27),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CombineLimitUpWarningDialog__OnClickCancel(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40F9927 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9927 = 1;
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
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickCancel_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


void __fastcall CombineLimitUpWarningDialog__OnClickDecide(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIProgressBar_o *checkSlider; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *v10; // x20

  if ( (byte_40F9926 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9926 = 1;
  }
  if ( this->fields.state == 2 )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_B170D4();
    if ( UIProgressBar__get_value(checkSlider, 0LL) >= 1.0 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.state = 3;
      v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog__OnClickDecide_b__23_0__, 0LL);
      BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F9928 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15422, v3);
    byte_40F9928 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_15422, 0LL);
}


void __fastcall CombineLimitUpWarningDialog__OnSliderDragFinished(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  UIProgressBar_o *v5; // x0
  const MethodInfo *v6; // x2
  CombineLimitUpWarningDialog_o *v7; // x0
  bool v8; // w1

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL), (v5 = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_B170D4();
  }
  if ( value >= 0.9 )
  {
    UIProgressBar__set_value(v5, 1.0, 0LL);
    v8 = 1;
    v7 = this;
  }
  else
  {
    UIProgressBar__set_value(v5, 0.0, 0LL);
    v7 = this;
    v8 = 0;
  }
  CombineLimitUpWarningDialog__SetSlider(v7, v8, v6);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *v19; // x0
  UILabel_o *warningLabel; // x20
  System_String_o *v21; // x0
  UILabel_o *reInforeceLabel; // x20
  System_String_o *v23; // x0
  UILabel_o *decideButtonLabel; // x20
  System_String_o *v25; // x0
  UILabel_o *cancelButtonLabel; // x20
  System_String_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_o *v32; // x20

  if ( (byte_40F9925 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, closeCallback);
    sub_B16FFC(&Method_CombineLimitUpWarningDialog_EndOpen__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8353, v7);
    sub_B16FFC(&StringLiteral_8352, v8);
    sub_B16FFC(&StringLiteral_3253, v9);
    sub_B16FFC(&StringLiteral_8354, v10);
    sub_B16FFC(&StringLiteral_3251, v11);
    byte_40F9925 = 1;
  }
  CombineLimitUpWarningDialog__Init(this, (const MethodInfo *)closeCallback);
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8353, 0LL);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, v19, 0LL);
  warningLabel = this->fields.warningLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8352, 0LL);
  if ( !warningLabel )
    goto LABEL_12;
  UILabel__set_text(warningLabel, v21, 0LL);
  reInforeceLabel = this->fields.reInforeceLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8354, 0LL);
  if ( !reInforeceLabel
    || (UILabel__set_text(reInforeceLabel, v23, 0LL),
        decideButtonLabel = this->fields.decideButtonLabel,
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL),
        !decideButtonLabel)
    || (UILabel__set_text(decideButtonLabel, v25, 0LL),
        cancelButtonLabel = this->fields.cancelButtonLabel,
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL),
        !cancelButtonLabel) )
  {
LABEL_12:
    sub_B170D4();
  }
  UILabel__set_text(cancelButtonLabel, v27, 0LL);
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_CombineLimitUpWarningDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
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
  UIButtonColor_o *decideButton; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UIButtonColor_o *v13; // x0
  __int64 v14; // x1
  struct UIButtonColor_o *v15; // x0

  if ( (byte_40F9924 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19559, sliderOn);
    sub_B16FFC(&StringLiteral_19558, v5);
    byte_40F9924 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_16;
  v7 = (System_String_o **)&StringLiteral_19558;
  if ( !sliderOn )
    v7 = (System_String_o **)&StringLiteral_19559;
  UISprite__set_spriteName(sliderSprite, *v7, 0LL);
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
  v13 = this->fields.decideButton;
  if ( !v13
    || (!sliderOn ? (v14 = 3LL) : (v14 = 0LL),
        ((void (__fastcall *)(struct UIButtonColor_o *, __int64, __int64, void *))v13->klass->vtable._14_SetState.method)(
          v13,
          v14,
          1LL,
          v13->klass[1]._1.image),
        (v15 = this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIButtonColor_o *, bool, Il2CppMethodPointer))v15->klass->vtable._5_set_isEnabled.method)(
    v15,
    sliderOn,
    v15->klass->vtable._6_OnInit.methodPtr);
}


void __fastcall CombineLimitUpWarningDialog___OnClickCancel_b__24_0(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  CombineLimitUpWarningDialog_ClickDelegate_o *closeFunc; // x0

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B170D4();
  CombineLimitUpWarningDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
}


void __fastcall CombineLimitUpWarningDialog___OnClickDecide_b__23_0(
        CombineLimitUpWarningDialog_o *this,
        const MethodInfo *method)
{
  CombineLimitUpWarningDialog_ClickDelegate_o *closeFunc; // x0

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B170D4();
  CombineLimitUpWarningDialog_ClickDelegate__Invoke(closeFunc, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineLimitUpWarningDialog_ClickDelegate___ctor(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40F7111 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F7111 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CombineLimitUpWarningDialog_ClickDelegate__EndInvoke(
        CombineLimitUpWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CombineLimitUpWarningDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CombineLimitUpWarningDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}