void __fastcall Shop17SliderAlertDialog___ctor(Shop17SliderAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11C80 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11C80 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_BD2D90;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17SliderAlertDialog__Awake(Shop17SliderAlertDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17SliderAlertDialog__Close(Shop17SliderAlertDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  Shop17SliderAlertDialog__Close_32290736(this, 0LL, v2);
}


void __fastcall Shop17SliderAlertDialog__Close_32290736(
        Shop17SliderAlertDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11C7C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_Shop17SliderAlertDialog_EndClose__, v5, v6);
    byte_4B11C7C = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(&this->fields.onClose, callback);
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_Shop17SliderAlertDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall Shop17SliderAlertDialog__EndClose(Shop17SliderAlertDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_onClose; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *onClose; // t1

  Shop17SliderAlertDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v4 = onClose;
  if ( onClose )
  {
    *p_onClose = 0LL;
    sub_1BCA784(p_onClose, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall Shop17SliderAlertDialog__Init(Shop17SliderAlertDialog_o *this, const MethodInfo *method)
{
  this->fields.onDecide = 0LL;
  sub_1BCA784(&this->fields.onDecide, 0LL);
  this->fields.onCancel = 0LL;
  sub_1BCA784(&this->fields.onCancel, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17SliderAlertDialog__OnClickCancel(Shop17SliderAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct System_Action_o *onCancel; // x20
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B11C7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Shop17SliderAlertDialog_OnClickCancel__, method, v2);
    byte_4B11C7E = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_Shop17SliderAlertDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_Shop17SliderAlertDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_Shop17SliderAlertDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    Shop17SliderAlertDialog__Close_32290736(this, 0LL, v6);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0LL;
    v8 = sub_1BCA784(&this->fields.onCancel, 0LL);
    if ( !onCancel )
      sub_1BCAA3C(v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onCancel->fields.m_target)(
      onCancel->fields.original_method_info,
      *(_QWORD *)&onCancel->fields.extra_arg);
  }
}


void __fastcall Shop17SliderAlertDialog__OnClickDecide(Shop17SliderAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct System_Action_o *onDecide; // x21

  if ( (byte_4B11C7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Shop17SliderAlertDialog_OnClickDecide__, method, v2);
    byte_4B11C7D = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_13;
    value = UIProgressBar__get_value(checkSlider, 0LL);
    v6 = Method_Shop17SliderAlertDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_Shop17SliderAlertDialog_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_Shop17SliderAlertDialog_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    if ( value < 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Shop17SliderAlertDialog__Close_32290736(this, 0LL, v8);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0LL;
    checkSlider = (UIProgressBar_o *)sub_1BCA784(&this->fields.onDecide, 0LL);
    if ( !onDecide )
LABEL_13:
      sub_1BCAA3C(checkSlider, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall Shop17SliderAlertDialog__OnEnable(Shop17SliderAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B11C7F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, method, v2);
    byte_4B11C7F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall Shop17SliderAlertDialog__OnSliderDragFinished(
        Shop17SliderAlertDialog_o *this,
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
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_1BCAA3C(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  Shop17SliderAlertDialog__SetSlider(this, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17SliderAlertDialog__Open(
        Shop17SliderAlertDialog_o *this,
        int32_t buyCount,
        int32_t needCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  UILabel_o *titleLabel; // x23
  int64_t checkSlider; // x0
  __int64 v46; // x1
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  UILabel_o *detailLabel_1; // x23
  UILabel_o *detailLabel_2; // x23
  UILabel_o *needCountNameLabel; // x23
  System_String_o *v52; // x0
  UILabel_o *needCountLabel; // x23
  System_String_o *v54; // x24
  Il2CppObject *v55; // x0
  UILabel_o *buyCountNameLabel; // x22
  System_String_o *v57; // x23
  UILabel_o *buyCountLabel; // x22
  Il2CppObject *v59; // x0
  struct UISlider_o *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  UIProgressBar_OnDragFinished_o *v64; // x22
  const MethodInfo *v65; // x2
  __int64 v66; // x1
  __int64 v67; // x1
  Il2CppObject *Master_object; // x21
  int64_t v69; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v72; // x22
  int32_t v73; // [xsp+8h] [xbp-48h] BYREF
  int32_t v74; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B11C7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, *(_QWORD *)&buyCount, *(_QWORD *)&needCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&UIProgressBar_OnDragFinished_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_Shop17SliderAlertDialog_OnSliderDragFinished__, v23, v24);
    sub_1BCA7E0(&StringLiteral_5857/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_1"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_5861/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_5856/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DECIDE_BUTTON"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_5860/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_TEXT"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_5854/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_NAME"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5855/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_TEXT"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_5858/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_2"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_5859/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_NAME"*/, v41, v42);
    byte_4B11C7A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1BCA784(&this->fields.onDecide, onDecideFunc);
    this->fields.onCancel = onCancelFunc;
    sub_1BCA784(&this->fields.onCancel, onCancelFunc);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
    checkSlider = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5861/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)checkSlider, 0LL);
    decideButtonLabel = this->fields.decideButtonLabel;
    checkSlider = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5856/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DECIDE_BUTTON"*/, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_27;
    UILabel__set_text(decideButtonLabel, (System_String_o *)checkSlider, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    checkSlider = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLabel )
      goto LABEL_27;
    UILabel__set_text(cancelButtonLabel, (System_String_o *)checkSlider, 0LL);
    detailLabel_1 = this->fields.detailLabel_1;
    checkSlider = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5857/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_1"*/, 0LL);
    if ( !detailLabel_1 )
      goto LABEL_27;
    UILabel__set_text(detailLabel_1, (System_String_o *)checkSlider, 0LL);
    detailLabel_2 = this->fields.detailLabel_2;
    checkSlider = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5858/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_DETAIL_2"*/, 0LL);
    if ( !detailLabel_2 )
      goto LABEL_27;
    UILabel__set_text(detailLabel_2, (System_String_o *)checkSlider, 0LL);
    needCountNameLabel = this->fields.needCountNameLabel;
    checkSlider = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5859/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_NAME"*/, 0LL);
    if ( !needCountNameLabel )
      goto LABEL_27;
    UILabel__set_text(needCountNameLabel, (System_String_o *)checkSlider, 0LL);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_5860/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_NEED_COUNT_TEXT"*/, 0LL);
    needCountLabel = this->fields.needCountLabel;
    v54 = v52;
    v74 = needCount;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
    checkSlider = (int64_t)System_String__Format(v54, v55, 0LL);
    if ( !needCountLabel )
      goto LABEL_27;
    UILabel__set_text(needCountLabel, (System_String_o *)checkSlider, 0LL);
    buyCountNameLabel = this->fields.buyCountNameLabel;
    checkSlider = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5854/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_NAME"*/, 0LL);
    if ( !buyCountNameLabel )
      goto LABEL_27;
    UILabel__set_text(buyCountNameLabel, (System_String_o *)checkSlider, 0LL);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_5855/*"EXCHANGE_SVT_COIN_SLIDER_ALERT_DIALOG_BUY_COUNT_TEXT"*/, 0LL);
    buyCountLabel = this->fields.buyCountLabel;
    v73 = buyCount;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
    checkSlider = (int64_t)System_String__Format(v57, v59, 0LL);
    if ( !buyCountLabel )
      goto LABEL_27;
    UILabel__set_text(buyCountLabel, (System_String_o *)checkSlider, 0LL);
    checkSlider = (int64_t)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_27;
    UIProgressBar__set_value((UIProgressBar_o *)checkSlider, 0.0, 0LL);
    v60 = this->fields.checkSlider;
    v64 = (UIProgressBar_OnDragFinished_o *)sub_1BCAA2C(UIProgressBar_OnDragFinished_TypeInfo, v61, v62, v63);
    UIProgressBar_OnDragFinished___ctor(
      v64,
      (Il2CppObject *)this,
      Method_Shop17SliderAlertDialog_OnSliderDragFinished__,
      0LL);
    if ( !v60 )
      goto LABEL_27;
    v60->fields.onDragFinished = v64;
    sub_1BCA784(&v60->fields.onDragFinished, v64);
    Shop17SliderAlertDialog__SetSlider(this, 0, v65);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v67);
    checkSlider = NetworkManager__get_UserId(0LL);
    if ( !shopEntity
      || (v69 = checkSlider, checkSlider = ShopEntity__get_TargetId(shopEntity, 0LL), !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v69,
                               checkSlider,
                               0LL),
          itemIcon = this->fields.itemIcon,
          v72 = EntityDefinitely,
          checkSlider = ShopEntity__get_TargetId(shopEntity, 0LL),
          !v72)
      || !itemIcon )
    {
LABEL_27:
      sub_1BCAA3C(checkSlider, v46);
    }
    ItemIconComponent__SetCombineItem(itemIcon, checkSlider, v72->fields.num, 0LL);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17SliderAlertDialog__SetSlider(
        Shop17SliderAlertDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UISprite_o *sliderSprite; // x0
  System_String_o **v8; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v13; // x1

  if ( (byte_4B11C7B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20689/*"img_slider_thumb_locked"*/, sliderOn, method);
    sub_1BCA7E0(&StringLiteral_20688/*"img_slider_thumb"*/, v5, v6);
    byte_4B11C7B = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v8 = (System_String_o **)&StringLiteral_20688/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v8 = (System_String_o **)&StringLiteral_20689/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v8, 0LL);
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
    || (UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0LL),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL)
    || (!sliderOn ? (v13 = 3LL) : (v13 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v13,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}