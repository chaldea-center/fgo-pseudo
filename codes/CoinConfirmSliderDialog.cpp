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

  if ( (byte_42B07E8 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B07E8 = 1;
  }
  v7 = 1050320830;
  v10 = (struct UnityEngine_Color_o)0LL;
  v8 = 1050320830;
  v9 = 1050320830;
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.DisableColor = v10;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmSliderDialog__Close(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmSliderDialog__Close_25913852(this, 0LL, v2);
}


void __fastcall CoinConfirmSliderDialog__Close_25913852(
        CoinConfirmSliderDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B07E3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CoinConfirmSliderDialog_EndClose__);
    byte_42B07E3 = 1;
  }
  this->fields.onClose = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinConfirmSliderDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall CoinConfirmSliderDialog__DestroyList(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_42B07E6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B07E6 = 1;
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
      sub_B52A5C(0LL, v4);
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
    sub_B52920(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42B07E5 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B07E5 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CoinConfirmSliderDialog__Close_25913852(this, 0LL, v3);
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

  if ( (byte_42B07E4 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B07E4 = 1;
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
      CoinConfirmSliderDialog__Close_25913852(this, 0LL, v4);
      onDecide = this->fields.onDecide;
      this->fields.onDecide = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v6, v7, v8, v9, v10, v11);
      if ( onDecide )
      {
        System_Action__Invoke(onDecide, 0LL);
        return;
      }
    }
    sub_B52A5C(checkSlider, method);
  }
}


void __fastcall CoinConfirmSliderDialog__OnEnable(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42B07E7 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&StringLiteral_15590/*"Window/Objects/Buttons/CancelButton"*/);
    byte_42B07E7 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21195324(transform, (System_String_o *)StringLiteral_15590/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall CoinConfirmSliderDialog__OnSliderDragFinished(
        CoinConfirmSliderDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  const MethodInfo *v5; // x2
  CoinConfirmSliderDialog_o *v6; // x0
  bool v7; // w1

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_B52A5C(checkSlider, method);
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
  CoinConfirmSliderDialog__SetSlider(v6, v7, v5);
}


void __fastcall CoinConfirmSliderDialog__Open(
        CoinConfirmSliderDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *canStrengthDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UILabel_o *titleLabel; // x21
  int32_t v16; // w22
  System_String_o *v17; // x0
  UILabel_o *detailLabel_1; // x21
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  UILabel_o *detailLabel_2; // x21
  struct UISlider_o *checkSlider; // x21
  UIProgressBar_OnDragFinished_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x5
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B07E1 & 1) == 0 )
  {
    sub_B52984(&Method_CoinConfirmSliderDialog_OnSliderDragFinished__);
    sub_B52984(&CoinRoomUtility_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_B52984(&StringLiteral_3177/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/);
    sub_B52984(&StringLiteral_3178/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/);
    sub_B52984(&StringLiteral_3179/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/);
    byte_42B07E1 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3179/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_19;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v16 = CoinRoomUtility__MaxPoint(0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3177/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, 0LL);
    detailLabel_1 = this->fields.detailLabel_1;
    v19 = v17;
    v32 = v16;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v19, v20, 0LL);
    if ( !detailLabel_1 )
      goto LABEL_19;
    UILabel__set_text(detailLabel_1, (System_String_o *)gameObject, 0LL);
    detailLabel_2 = this->fields.detailLabel_2;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3178/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, 0LL);
    if ( !detailLabel_2 )
      goto LABEL_19;
    UILabel__set_text(detailLabel_2, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.checkSlider;
    if ( !gameObject )
      goto LABEL_19;
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0LL);
    checkSlider = this->fields.checkSlider;
    v23 = (UIProgressBar_OnDragFinished_o *)sub_B52A54(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v23,
      (Il2CppObject *)this,
      Method_CoinConfirmSliderDialog_OnSliderDragFinished__,
      0LL);
    if ( !checkSlider
      || (checkSlider->fields.onDragFinished = v23,
          sub_B52920(
            (BattleServantConfConponent_o *)&checkSlider->fields.onDragFinished,
            (System_Int32_array **)v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29),
          CoinConfirmSliderDialog__SetSlider(this, 0, v30),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_19:
      sub_B52A5C(gameObject, v8);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      canStrengthDic,
      0,
      1,
      0,
      v31);
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
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  UIButtonColor_o *decideButton; // x21
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 v12; // x1

  if ( (byte_42B07E2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19780/*"img_slider_thumb_locked"*/);
    sub_B52984(&StringLiteral_19779/*"img_slider_thumb"*/);
    byte_42B07E2 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_16;
  v6 = (System_String_o **)&StringLiteral_19779/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_19780/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0LL);
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
    || (!sliderOn ? (v12 = 3LL) : (v12 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v12,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}