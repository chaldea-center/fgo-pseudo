void ExchangeSvtCoinSliderAlertDialog___ctor(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB11BA & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB11BA = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_CEC8E0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinSliderAlertDialog__Awake(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinSliderAlertDialog__Close(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExchangeSvtCoinSliderAlertDialog__Close_33294272(this, 0, v2);
}


void ExchangeSvtCoinSliderAlertDialog__Close_33294272(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CB11B6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinSliderAlertDialog_EndClose__);
    byte_4CB11B6 = 1;
  }
  this->fields.onClose = callback;
  sub_1C6B9AC(&this->fields.onClose, callback);
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ExchangeSvtCoinSliderAlertDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void ExchangeSvtCoinSliderAlertDialog__EndClose(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_onClose; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *onClose; // t1

  ExchangeSvtCoinSliderAlertDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v4 = onClose;
  if ( onClose )
  {
    *p_onClose = 0;
    sub_1C6B9AC(p_onClose, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void ExchangeSvtCoinSliderAlertDialog__Init(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  this->fields.onDecide = 0;
  sub_1C6B9AC(&this->fields.onDecide, 0);
  this->fields.onCancel = 0;
  sub_1C6B9AC(&this->fields.onCancel, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinSliderAlertDialog__OnClickCancel(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onCancel; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CB11B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__);
    byte_4CB11B8 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ExchangeSvtCoinSliderAlertDialog__Close_33294272(this, 0, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0;
    v7 = sub_1C6B9AC(&this->fields.onCancel, 0);
    if ( !onCancel )
      sub_1C6BC60(v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))onCancel->fields.invoke_impl)(
      onCancel->fields.method_code,
      onCancel->fields.method);
  }
}


void ExchangeSvtCoinSliderAlertDialog__OnClickDecide(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  struct System_Action_o *onDecide; // x21

  if ( (byte_4CB11B7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__);
    byte_4CB11B7 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_13;
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C6BA20(Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
    if ( value < 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    ExchangeSvtCoinSliderAlertDialog__Close_33294272(this, 0, v7);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0;
    checkSlider = (UIProgressBar_o *)sub_1C6B9AC(&this->fields.onDecide, 0);
    if ( !onDecide )
LABEL_13:
      sub_1C6BC60(checkSlider, method);
    ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      onDecide->fields.method);
  }
}


void ExchangeSvtCoinSliderAlertDialog__OnEnable(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CB11B9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4CB11B9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void ExchangeSvtCoinSliderAlertDialog__OnSliderDragFinished(
        ExchangeSvtCoinSliderAlertDialog_o *this,
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
    || (value = UIProgressBar__get_value(checkSlider, 0),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0) )
  {
    sub_1C6BC60(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  ExchangeSvtCoinSliderAlertDialog__SetSlider(this, v7, v8);
}


void ExchangeSvtCoinSliderAlertDialog__Open(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        int32_t buyCount,
        int32_t needCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x23
  System_String_o *checkSlider; // x0
  __int64 v15; // x1
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  UILabel_o *detailLabel_1; // x23
  UILabel_o *detailLabel_2; // x23
  UILabel_o *needCountNameLabel; // x23
  System_String_o *v21; // x0
  UILabel_o *needCountLabel; // x23
  System_String_o *v23; // x24
  Il2CppObject *v24; // x0
  UILabel_o *buyCountNameLabel; // x22
  System_String_o *v26; // x23
  UILabel_o *buyCountLabel; // x22
  Il2CppObject *v28; // x0
  struct UISlider_o *v29; // x21
  UIProgressBar_OnDragFinished_o *v30; // x22
  const MethodInfo *v31; // x2
  Il2CppObject *Master_object; // x21
  int64_t v33; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v36; // x22
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB11B4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinSliderAlertDialog_OnSliderDragFinished__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C6BA08(&StringLiteral_5769/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_1"*/);
    sub_1C6BA08(&StringLiteral_5773/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_5768/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DECIDE_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_5772/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_TEXT"*/);
    sub_1C6BA08(&StringLiteral_5766/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_NAME"*/);
    sub_1C6BA08(&StringLiteral_5767/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_TEXT"*/);
    sub_1C6BA08(&StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_5770/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_2"*/);
    sub_1C6BA08(&StringLiteral_5771/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_NAME"*/);
    byte_4CB11B4 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1C6B9AC(&this->fields.onDecide, onDecideFunc);
    this->fields.onCancel = onCancelFunc;
    sub_1C6B9AC(&this->fields.onCancel, onCancelFunc);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5773/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_31;
    UILabel__set_text(titleLabel, checkSlider, 0);
    decideButtonLabel = this->fields.decideButtonLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5768/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DECIDE_BUTTON"*/, 0);
    if ( !decideButtonLabel )
      goto LABEL_31;
    UILabel__set_text(decideButtonLabel, checkSlider, 0);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLabel )
      goto LABEL_31;
    UILabel__set_text(cancelButtonLabel, checkSlider, 0);
    detailLabel_1 = this->fields.detailLabel_1;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5769/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_1"*/, 0);
    if ( !detailLabel_1 )
      goto LABEL_31;
    UILabel__set_text(detailLabel_1, checkSlider, 0);
    detailLabel_2 = this->fields.detailLabel_2;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_2"*/, 0);
    if ( !detailLabel_2 )
      goto LABEL_31;
    UILabel__set_text(detailLabel_2, checkSlider, 0);
    needCountNameLabel = this->fields.needCountNameLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5771/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_NAME"*/, 0);
    if ( !needCountNameLabel )
      goto LABEL_31;
    UILabel__set_text(needCountNameLabel, checkSlider, 0);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_TEXT"*/, 0);
    needCountLabel = this->fields.needCountLabel;
    v23 = v21;
    v38 = needCount;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    checkSlider = System_String__Format(v23, v24, 0);
    if ( !needCountLabel )
      goto LABEL_31;
    UILabel__set_text(needCountLabel, checkSlider, 0);
    buyCountNameLabel = this->fields.buyCountNameLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5766/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_NAME"*/, 0);
    if ( !buyCountNameLabel )
      goto LABEL_31;
    UILabel__set_text(buyCountNameLabel, checkSlider, 0);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5767/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_TEXT"*/, 0);
    buyCountLabel = this->fields.buyCountLabel;
    v37 = buyCount;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    checkSlider = System_String__Format(v26, v28, 0);
    if ( !buyCountLabel )
      goto LABEL_31;
    UILabel__set_text(buyCountLabel, checkSlider, 0);
    checkSlider = (System_String_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_31;
    UIProgressBar__set_value((UIProgressBar_o *)checkSlider, 0.0, 0);
    v29 = this->fields.checkSlider;
    v30 = (UIProgressBar_OnDragFinished_o *)sub_1C6BC54(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v30,
      (Il2CppObject *)this,
      Method_ExchangeSvtCoinSliderAlertDialog_OnSliderDragFinished__,
      0);
    if ( !v29 )
      goto LABEL_31;
    v29->fields.onDragFinished = v30;
    sub_1C6B9AC(&v29->fields.onDragFinished, v30);
    ExchangeSvtCoinSliderAlertDialog__SetSlider(this, 0, v31);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    checkSlider = (System_String_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      checkSlider = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v33 = *(_QWORD *)(*(_QWORD *)&checkSlider[7].fields + 64LL),
          checkSlider = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v33,
                               (int32_t)checkSlider,
                               0),
          itemIcon = this->fields.itemIcon,
          v36 = EntityDefinitely,
          checkSlider = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !v36)
      || !itemIcon )
    {
LABEL_31:
      sub_1C6BC60(checkSlider, v15);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)checkSlider, v36->fields.num, 0, 0);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ExchangeSvtCoinSliderAlertDialog__SetSlider(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED
  __int64 v11; // x1

  if ( (byte_4CB11B5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_20647/*"img_slider_thumb_locked"*/);
    sub_1C6BA08(&StringLiteral_20646/*"img_slider_thumb"*/);
    byte_4CB11B5 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v6 = (System_String_o **)&StringLiteral_20646/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20647/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0);
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
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0)
    || (!sliderOn ? (v11 = 3) : (v11 = 0),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, const MethodInfo *))sliderSprite->klass->vtable._14_OnEnable.methodPtr)(
          sliderSprite,
          v11,
          1,
          sliderSprite->klass->vtable._14_OnEnable.method),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0) )
  {
LABEL_15:
    sub_1C6BC60(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}