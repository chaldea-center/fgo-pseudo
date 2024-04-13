// local variable allocation has failed, the output may be wrong!
void __fastcall CoinConfirmSliderDialog___ctor(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
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

  if ( (byte_42EA92D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA92D = 1;
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


void __fastcall CoinConfirmSliderDialog__Close(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmSliderDialog__Close_28903112(this, 0LL, v2);
}


void __fastcall CoinConfirmSliderDialog__Close_28903112(
        CoinConfirmSliderDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EA928 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CoinConfirmSliderDialog_EndClose__, v10, v11, v12);
    byte_42EA928 = 1;
  }
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CoinConfirmSliderDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall CoinConfirmSliderDialog__DestroyList(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *viewManager; // x20
  __int64 v6; // x1
  CoinRoomCoinListViewManager_o *v7; // x0

  if ( (byte_42EA92B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA92B = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v7 = this->fields.viewManager;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    CoinRoomCoinListViewManager__DestroyList(v7, 0LL);
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
    sub_B5D560(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EA92A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA92A = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CoinConfirmSliderDialog__Close_28903112(this, 0LL, v5);
  }
}


void __fastcall CoinConfirmSliderDialog__OnClickDecide(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UIProgressBar_o *checkSlider; // x0
  const MethodInfo *v6; // x2
  System_Action_o *onDecide; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA929 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA929 = 1;
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
      CoinConfirmSliderDialog__Close_28903112(this, 0LL, v6);
      onDecide = this->fields.onDecide;
      this->fields.onDecide = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v8, v9, v10, v11, v12, v13);
      if ( onDecide )
      {
        System_Action__Invoke(onDecide, 0LL);
        return;
      }
    }
    sub_B5D69C(checkSlider, method);
  }
}


void __fastcall CoinConfirmSliderDialog__OnEnable(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42EA92C & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15675/*"Window/Objects/Buttons/CancelButton"*/, v5, v6, v7);
    byte_42EA92C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_15675/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  CoinConfirmSliderDialog__SetSlider(v6, v7, v5);
}


void __fastcall CoinConfirmSliderDialog__Open(
        CoinConfirmSliderDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *canStrengthDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UILabel_o *titleLabel; // x21
  int32_t v37; // w22
  System_String_o *v38; // x0
  UILabel_o *detailLabel_1; // x21
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  UILabel_o *detailLabel_2; // x21
  struct UISlider_o *checkSlider; // x21
  UIProgressBar_OnDragFinished_o *v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x2
  int32_t v52; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA926 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CoinConfirmSliderDialog_OnSliderDragFinished__, (_DWORD)canStrengthDic, (_DWORD)onDecide, method);
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UIProgressBar_OnDragFinished_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3210/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3211/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3212/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, v25, v26, v27);
    byte_42EA926 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3212/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_19;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v37 = CoinRoomUtility__MaxPoint(0LL);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3210/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, 0LL);
    detailLabel_1 = this->fields.detailLabel_1;
    v40 = v38;
    v52 = v37;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v40, v41, 0LL);
    if ( !detailLabel_1 )
      goto LABEL_19;
    UILabel__set_text(detailLabel_1, (System_String_o *)gameObject, 0LL);
    detailLabel_2 = this->fields.detailLabel_2;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3211/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, 0LL);
    if ( !detailLabel_2 )
      goto LABEL_19;
    UILabel__set_text(detailLabel_2, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.checkSlider;
    if ( !gameObject )
      goto LABEL_19;
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0LL);
    checkSlider = this->fields.checkSlider;
    v44 = (UIProgressBar_OnDragFinished_o *)sub_B5D694(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v44,
      (Il2CppObject *)this,
      Method_CoinConfirmSliderDialog_OnSliderDragFinished__,
      0LL);
    if ( !checkSlider
      || (checkSlider->fields.onDragFinished = v44,
          sub_B5D560(
            (BattleServantConfConponent_o *)&checkSlider->fields.onDragFinished,
            (System_Int32_array **)v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50),
          CoinConfirmSliderDialog__SetSlider(this, 0, v51),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_19:
      sub_B5D69C(gameObject, v29);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      canStrengthDic,
      0,
      1,
      0,
      0LL);
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

  if ( (byte_42EA927 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19882/*"img_slider_thumb_locked"*/, sliderOn, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19881/*"img_slider_thumb"*/, v6, v7, v8);
    byte_42EA927 = 1;
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