void ExchangeSvtCoinSliderAlertDialog___ctor(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC22C7 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC22C7 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_CEF520;
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

  ExchangeSvtCoinSliderAlertDialog__Close_33321824(this, 0, v2);
}


void ExchangeSvtCoinSliderAlertDialog__Close_33321824(
        ExchangeSvtCoinSliderAlertDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC22C3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ExchangeSvtCoinSliderAlertDialog_EndClose__);
    byte_4CC22C3 = 1;
  }
  this->fields.onClose = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ExchangeSvtCoinSliderAlertDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ExchangeSvtCoinSliderAlertDialog__EndClose(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_onClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  ExchangeSvtCoinSliderAlertDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = (GrandQuestFolderBoardItem_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_1C71354(p_onClose, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ExchangeSvtCoinSliderAlertDialog__Init(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.onDecide = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDecide, 0, v2, v3, v4, v5, v6, v7);
  this->fields.onCancel = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onCancel, 0, v9, v10, v11, v12, v13, v14);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4CC22C5 & 1) == 0 )
  {
    sub_1C713B0(&Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__);
    byte_4CC22C5 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ExchangeSvtCoinSliderAlertDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ExchangeSvtCoinSliderAlertDialog__Close_33321824(this, 0, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onCancel, 0, v7, v8, v9, v10, v11, v12);
    if ( !onCancel )
      sub_1C71608(v13, v14);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC22C4 & 1) == 0 )
  {
    sub_1C713B0(&Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__);
    byte_4CC22C4 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_13;
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_ExchangeSvtCoinSliderAlertDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    if ( value < 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    ExchangeSvtCoinSliderAlertDialog__Close_33321824(this, 0, v7);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDecide, 0, v9, v10, v11, v12, v13, v14);
    if ( !onDecide )
LABEL_13:
      sub_1C71608(checkSlider, method);
    ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      onDecide->fields.method);
  }
}


void ExchangeSvtCoinSliderAlertDialog__OnEnable(ExchangeSvtCoinSliderAlertDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CC22C6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15653/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4CC22C6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45260884(transform, (System_String_o *)StringLiteral_15653/*"Window/Objects/Buttons/CancelButton"*/, 0);
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
    sub_1C71608(checkSlider, method);
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
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UILabel_o *titleLabel; // x23
  System_String_o *checkSlider; // x0
  __int64 v22; // x1
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  UILabel_o *detailLabel_1; // x23
  UILabel_o *detailLabel_2; // x23
  UILabel_o *needCountNameLabel; // x23
  System_String_o *v28; // x0
  UILabel_o *needCountLabel; // x23
  System_String_o *v30; // x24
  Il2CppObject *v31; // x0
  UILabel_o *buyCountNameLabel; // x22
  System_String_o *v33; // x23
  UILabel_o *buyCountLabel; // x22
  Il2CppObject *v35; // x0
  struct UISlider_o *v36; // x21
  UIProgressBar_OnDragFinished_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  const MethodInfo *v44; // x2
  Il2CppObject *Master_object; // x21
  int64_t v46; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v49; // x22
  int32_t v50; // [xsp+8h] [xbp-48h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CC22C1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_ExchangeSvtCoinSliderAlertDialog_OnSliderDragFinished__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C713B0(&StringLiteral_5772/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_1"*/);
    sub_1C713B0(&StringLiteral_5776/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_5771/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DECIDE_BUTTON"*/);
    sub_1C713B0(&StringLiteral_5775/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_TEXT"*/);
    sub_1C713B0(&StringLiteral_5769/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_NAME"*/);
    sub_1C713B0(&StringLiteral_5770/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_TEXT"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_5773/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_2"*/);
    sub_1C713B0(&StringLiteral_5774/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_NAME"*/);
    byte_4CC22C1 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecideFunc,
      needCount,
      (int32_t)shopEntity,
      (System_String_o *)onDecideFunc,
      (int32_t)onCancelFunc,
      (int64_t)method,
      v7);
    this->fields.onCancel = onCancelFunc;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.onCancel,
      (int32_t)onCancelFunc,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5776/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_31;
    UILabel__set_text(titleLabel, checkSlider, 0);
    decideButtonLabel = this->fields.decideButtonLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5771/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DECIDE_BUTTON"*/, 0);
    if ( !decideButtonLabel )
      goto LABEL_31;
    UILabel__set_text(decideButtonLabel, checkSlider, 0);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLabel )
      goto LABEL_31;
    UILabel__set_text(cancelButtonLabel, checkSlider, 0);
    detailLabel_1 = this->fields.detailLabel_1;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_1"*/, 0);
    if ( !detailLabel_1 )
      goto LABEL_31;
    UILabel__set_text(detailLabel_1, checkSlider, 0);
    detailLabel_2 = this->fields.detailLabel_2;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5773/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_2"*/, 0);
    if ( !detailLabel_2 )
      goto LABEL_31;
    UILabel__set_text(detailLabel_2, checkSlider, 0);
    needCountNameLabel = this->fields.needCountNameLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5774/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_NAME"*/, 0);
    if ( !needCountNameLabel )
      goto LABEL_31;
    UILabel__set_text(needCountNameLabel, checkSlider, 0);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5775/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_TEXT"*/, 0);
    needCountLabel = this->fields.needCountLabel;
    v30 = v28;
    v51 = needCount;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    checkSlider = System_String__Format(v30, v31, 0);
    if ( !needCountLabel )
      goto LABEL_31;
    UILabel__set_text(needCountLabel, checkSlider, 0);
    buyCountNameLabel = this->fields.buyCountNameLabel;
    checkSlider = LocalizationManager__Get((System_String_o *)StringLiteral_5769/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_NAME"*/, 0);
    if ( !buyCountNameLabel )
      goto LABEL_31;
    UILabel__set_text(buyCountNameLabel, checkSlider, 0);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_TEXT"*/, 0);
    buyCountLabel = this->fields.buyCountLabel;
    v50 = buyCount;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    checkSlider = System_String__Format(v33, v35, 0);
    if ( !buyCountLabel )
      goto LABEL_31;
    UILabel__set_text(buyCountLabel, checkSlider, 0);
    checkSlider = (System_String_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_31;
    UIProgressBar__set_value((UIProgressBar_o *)checkSlider, 0.0, 0);
    v36 = this->fields.checkSlider;
    v37 = (UIProgressBar_OnDragFinished_o *)sub_1C715FC(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v37,
      (Il2CppObject *)this,
      Method_ExchangeSvtCoinSliderAlertDialog_OnSliderDragFinished__,
      0);
    if ( !v36 )
      goto LABEL_31;
    v36->fields.onDragFinished = v37;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v36->fields.onDragFinished, (int32_t)v37, v38, v39, v40, v41, v42, v43);
    ExchangeSvtCoinSliderAlertDialog__SetSlider(this, 0, v44);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    checkSlider = (System_String_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      checkSlider = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v46 = *(_QWORD *)(*(_QWORD *)&checkSlider[7].fields + 64LL),
          checkSlider = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v46,
                               (int32_t)checkSlider,
                               0),
          itemIcon = this->fields.itemIcon,
          v49 = EntityDefinitely,
          checkSlider = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !v49)
      || !itemIcon )
    {
LABEL_31:
      sub_1C71608(checkSlider, v22);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)checkSlider, v49->fields.num, 0, 0);
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

  if ( (byte_4CC22C2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20660/*"img_slider_thumb_locked"*/);
    sub_1C713B0(&StringLiteral_20659/*"img_slider_thumb"*/);
    byte_4CC22C2 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v6 = (System_String_o **)&StringLiteral_20659/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20660/*"img_slider_thumb_locked"*/;
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
    sub_1C71608(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}