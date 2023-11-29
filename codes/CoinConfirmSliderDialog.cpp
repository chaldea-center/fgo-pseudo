// local variable allocation has failed, the output may be wrong!
void __fastcall CoinConfirmSliderDialog___ctor(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v7; // s0
  int v8; // s1
  int v9; // s2
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40F9A11 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F9A11 = 1;
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


void __fastcall CoinConfirmSliderDialog__Close(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmSliderDialog__Close_24362220(this, 0LL, v2);
}


void __fastcall CoinConfirmSliderDialog__Close_24362220(
        CoinConfirmSliderDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F9A0C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_CoinConfirmSliderDialog_EndClose__, v10);
    byte_40F9A0C = 1;
  }
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CoinConfirmSliderDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall CoinConfirmSliderDialog__DestroyList(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_40F9A0F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9A0F = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_B170D4();
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void __fastcall CoinConfirmSliderDialog__EndClose(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_onClose; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_B16F98(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall CoinConfirmSliderDialog__Init(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmSliderDialog__OnClickCancel(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F9A0E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A0E = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CoinConfirmSliderDialog__Close_24362220(this, 0LL, v3);
  }
}


void __fastcall CoinConfirmSliderDialog__OnClickDecide(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  const MethodInfo *v4; // x2
  System_Action_o *onDecide; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F9A0D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A0D = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( checkSlider )
    {
      if ( UIProgressBar__get_value(checkSlider, 0LL) < 1.0 )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        return;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      CoinConfirmSliderDialog__Close_24362220(this, 0LL, v4);
      onDecide = this->fields.onDecide;
      this->fields.onDecide = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v6, v7, v8, v9, v10, v11);
      if ( onDecide )
      {
        System_Action__Invoke(onDecide, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall CoinConfirmSliderDialog__OnEnable(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F9A10 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15422, v3);
    byte_40F9A10 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_15422, 0LL);
}


void __fastcall CoinConfirmSliderDialog__OnSliderDragFinished(
        CoinConfirmSliderDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  UIProgressBar_o *v5; // x0
  const MethodInfo *v6; // x2
  CoinConfirmSliderDialog_o *v7; // x0
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
  CoinConfirmSliderDialog__SetSlider(v7, v8, v6);
}


void __fastcall CoinConfirmSliderDialog__Open(
        CoinConfirmSliderDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *canStrengthDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v22; // x0
  CoinRoomUtility_c *v23; // x0
  int32_t v24; // w22
  System_String_o *v25; // x0
  UILabel_o *detailLabel_1; // x21
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *detailLabel_2; // x21
  System_String_o *v31; // x0
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  UIProgressBar_OnDragFinished_o *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x5
  CoinRoomCoinListViewManager_o *viewManager; // x0
  int32_t v48; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9A0A & 1) == 0 )
  {
    sub_B16FFC(&Method_CoinConfirmSliderDialog_OnSliderDragFinished__, canStrengthDic);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UIProgressBar_OnDragFinished_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_3136, v11);
    sub_B16FFC(&StringLiteral_3137, v12);
    sub_B16FFC(&StringLiteral_3138, v13);
    byte_40F9A0A = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3138, 0LL);
    if ( !titleLabel )
      goto LABEL_19;
    UILabel__set_text(titleLabel, v22, 0LL);
    v23 = CoinRoomUtility_TypeInfo;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v24 = CoinRoomUtility__MaxPoint((const MethodInfo *)v23);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3136, 0LL);
    detailLabel_1 = this->fields.detailLabel_1;
    v27 = v25;
    v48 = v24;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v29 = System_String__Format(v27, v28, 0LL);
    if ( !detailLabel_1 )
      goto LABEL_19;
    UILabel__set_text(detailLabel_1, v29, 0LL);
    detailLabel_2 = this->fields.detailLabel_2;
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3137, 0LL);
    if ( !detailLabel_2 )
      goto LABEL_19;
    UILabel__set_text(detailLabel_2, v31, 0LL);
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_19;
    UIProgressBar__set_value(checkSlider, 0.0, 0LL);
    v33 = this->fields.checkSlider;
    v38 = (UIProgressBar_OnDragFinished_o *)sub_B170CC(UIProgressBar_OnDragFinished_TypeInfo, v34, v35, v36, v37);
    UIProgressBar_OnDragFinished___ctor(
      v38,
      (Il2CppObject *)this,
      Method_CoinConfirmSliderDialog_OnSliderDragFinished__,
      0LL);
    if ( !v33
      || (v33->fields.onDragFinished = v38,
          sub_B16F98(
            (BattleServantConfConponent_o *)&v33->fields.onDragFinished,
            (System_Int32_array **)v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44),
          CoinConfirmSliderDialog__SetSlider(this, 0, v45),
          (viewManager = this->fields.viewManager) == 0LL) )
    {
LABEL_19:
      sub_B170D4();
    }
    CoinRoomCoinListViewManager__CreateConfirmList(viewManager, canStrengthDic, 0, 1, 0, v46);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinConfirmSliderDialog__SetSlider(
        CoinConfirmSliderDialog_o *this,
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

  if ( (byte_40F9A0B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19559, sliderOn);
    sub_B16FFC(&StringLiteral_19558, v5);
    byte_40F9A0B = 1;
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