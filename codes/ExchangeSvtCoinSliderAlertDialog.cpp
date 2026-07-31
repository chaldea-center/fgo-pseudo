void ExchangeSvtCoinSliderAlertDialog___ctor(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5933383 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933383 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_E93440;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinSliderAlertDialog__Awake(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinSliderAlertDialog__Close(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExchangeSvtCoinSliderAlertDialog__Close_39779596(this, 0, v2);
}


void ExchangeSvtCoinSliderAlertDialog__Close_39779596(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_593337F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExchangeSvtCoinSliderAlertDialog_EndClose__);
    byte_593337F = 1;
  }
  this->fields.onClose = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ExchangeSvtCoinSliderAlertDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ExchangeSvtCoinSliderAlertDialog__EndClose(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_onClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  ExchangeSvtCoinSliderAlertDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = (MissionNaviTransitionBoardItem_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_21FFBF4(p_onClose, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ExchangeSvtCoinSliderAlertDialog__Init(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.onDecide = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v2, v3, v4, v5, v6, v7);
  this->fields.onCancel = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onCancel, 0, v9, v10, v11, v12, v13, v14);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_5933381 & 1) == 0 )
  {
    sub_21FFC50(&Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__);
    byte_5933381 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ExchangeSvtCoinSliderAlertDialog__Close_39779596(this, 0, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onCancel, 0, v7, v8, v9, v10, v11, v12);
    if ( !onCancel )
      sub_21FFECC(v13, v14);
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
  float value; // s0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct System_Action_o *onDecide; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5933380 & 1) == 0 )
  {
    sub_21FFC50(&Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__);
    byte_5933380 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( checkSlider )
    {
      value = UIProgressBar__get_value(checkSlider, 0);
      v5 = Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__;
      if ( value < 1.0 )
      {
        if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_21FFC68(Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__);
        v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
        return;
      }
      if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      ExchangeSvtCoinSliderAlertDialog__Close_39779596(this, 0, v8);
      onDecide = this->fields.onDecide;
      this->fields.onDecide = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v10, v11, v12, v13, v14, v15);
      if ( onDecide )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
          onDecide->fields.method_code,
          onDecide->fields.method);
        return;
      }
    }
    sub_21FFECC(checkSlider, method);
  }
}


void ExchangeSvtCoinSliderAlertDialog__OnEnable(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5933382 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_5933382 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void ExchangeSvtCoinSliderAlertDialog__OnSliderDragFinished(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        const MethodInfo *method)
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
  ExchangeSvtCoinSliderAlertDialog__SetSlider(this, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void ExchangeSvtCoinSliderAlertDialog__Open(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        int32_t buyCount,
        int32_t needCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *titleLabel; // x23
  System_String_o *checkSlider; // x0
  __int64 v24; // x1
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  UILabel_o *detailLabel_1; // x23
  UILabel_o *detailLabel_2; // x23
  UILabel_o *needCountNameLabel; // x23
  System_String_o *v30; // x24
  UILabel_o *needCountLabel; // x23
  Il2CppObject *v32; // x0
  UILabel_o *buyCountNameLabel; // x22
  System_String_o *v34; // x23
  UILabel_o *buyCountLabel; // x22
  Il2CppObject *v36; // x0
  struct UISlider_o *v37; // x21
  UIProgressBar_OnDragFinished_o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  const MethodInfo *v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x2
  Il2CppObject *Master_object; // x21
  int64_t v50; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v53; // x22
  int32_t v54; // [xsp+8h] [xbp-48h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593337D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_ExchangeSvtCoinSliderAlertDialog_OnSliderDragFinished__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_21FFC50(&StringLiteral_5998/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_1"*/);
    sub_21FFC50(&StringLiteral_6002/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_5997/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DECIDE_BUTTON"*/);
    sub_21FFC50(&StringLiteral_6001/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_TEXT"*/);
    sub_21FFC50(&StringLiteral_5995/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_NAME"*/);
    sub_21FFC50(&StringLiteral_5996/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_TEXT"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_5999/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_2"*/);
    sub_21FFC50(&StringLiteral_6000/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_NAME"*/);
    byte_593337D = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecideFunc,
      *(System_String_o **)&needCount,
      (System_String_o *)shopEntity,
      (int32_t)onDecideFunc,
      (int32_t)onCancelFunc,
      (bool)method,
      v7);
    this->fields.onCancel = onCancelFunc;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onCancel,
      (int32_t)onCancelFunc,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_6002/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_31;
    UILabel__set_text(titleLabel, checkSlider, 0);
    decideButtonLabel = this->fields.decideButtonLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5997/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DECIDE_BUTTON"*/, 0);
    if ( !decideButtonLabel )
      goto LABEL_31;
    UILabel__set_text(decideButtonLabel, checkSlider, 0);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLabel )
      goto LABEL_31;
    UILabel__set_text(cancelButtonLabel, checkSlider, 0);
    detailLabel_1 = this->fields.detailLabel_1;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5998/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_1"*/, 0);
    if ( !detailLabel_1 )
      goto LABEL_31;
    UILabel__set_text(detailLabel_1, checkSlider, 0);
    detailLabel_2 = this->fields.detailLabel_2;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5999/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_2"*/, 0);
    if ( !detailLabel_2 )
      goto LABEL_31;
    UILabel__set_text(detailLabel_2, checkSlider, 0);
    needCountNameLabel = this->fields.needCountNameLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_6000/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_NAME"*/, 0);
    if ( !needCountNameLabel )
      goto LABEL_31;
    UILabel__set_text(needCountNameLabel, checkSlider, 0);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_6001/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_TEXT"*/, 0);
    needCountLabel = this->fields.needCountLabel;
    v55 = needCount;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v55);
    checkSlider = System_String__Format(v30, v32, 0);
    if ( !needCountLabel )
      goto LABEL_31;
    UILabel__set_text(needCountLabel, checkSlider, 0);
    buyCountNameLabel = this->fields.buyCountNameLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5995/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_NAME"*/, 0);
    if ( !buyCountNameLabel )
      goto LABEL_31;
    UILabel__set_text(buyCountNameLabel, checkSlider, 0);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5996/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_TEXT"*/, 0);
    buyCountLabel = this->fields.buyCountLabel;
    v54 = buyCount;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v54);
    checkSlider = System_String__Format(v34, v36, 0);
    if ( !buyCountLabel )
      goto LABEL_31;
    UILabel__set_text(buyCountLabel, checkSlider, 0);
    checkSlider = (System_String_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_31;
    UIProgressBar__set_value((UIProgressBar_o *)checkSlider, 0.0, 0);
    v37 = this->fields.checkSlider;
    v38 = (UIProgressBar_OnDragFinished_o *)sub_21FFEBC(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v38,
      (Il2CppObject *)this,
      Method_ExchangeSvtCoinSliderAlertDialog_OnSliderDragFinished__,
      0);
    if ( !v37 )
      goto LABEL_31;
    v37->fields.onDragFinished = v38;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v37->fields.onDragFinished,
      (int32_t)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    ExchangeSvtCoinSliderAlertDialog__SetSlider(this, 0, v45);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v46, v47);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24, v48);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    checkSlider = (System_String_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24, v48);
      checkSlider = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v50 = *(_QWORD *)(*(_QWORD *)&checkSlider[7].fields + 64LL),
          checkSlider = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v50,
                               (int32_t)checkSlider,
                               0),
          itemIcon = this->fields.itemIcon,
          v53 = EntityDefinitely,
          checkSlider = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !v53)
      || !itemIcon )
    {
LABEL_31:
      sub_21FFECC(checkSlider, v24);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)checkSlider, v53->fields.num, 0, 0);
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
  __int64 *v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED

  if ( (byte_593337E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21535/*"img_slider_thumb_locked"*/);
    sub_21FFC50(&StringLiteral_21534/*"img_slider_thumb"*/);
    byte_593337E = 1;
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