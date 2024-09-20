void __fastcall CoinConfirmSliderDialog___ctor(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E683 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5E683 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_BB4BE0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmSliderDialog__Close(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmSliderDialog__Close_44561128(this, 0LL, v2);
}


void __fastcall CoinConfirmSliderDialog__Close_44561128(
        CoinConfirmSliderDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5E67E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CoinConfirmSliderDialog_EndClose__);
    byte_4A5E67E = 1;
  }
  this->fields.onClose = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CoinConfirmSliderDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall CoinConfirmSliderDialog__DestroyList(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_4A5E681 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E681 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void __fastcall CoinConfirmSliderDialog__EndClose(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_onClose; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *onClose; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
  v6 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1B88554(p_onClose, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall CoinConfirmSliderDialog__Init(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmSliderDialog__OnClickCancel(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A5E680 & 1) == 0 )
  {
    sub_1B885B0(&Method_CoinConfirmSliderDialog_OnClickCancel__);
    byte_4A5E680 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CoinConfirmSliderDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CoinConfirmSliderDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    CoinConfirmSliderDialog__Close_44561128(this, 0LL, v5);
  }
}


void __fastcall CoinConfirmSliderDialog__OnClickDecide(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  struct System_Action_o *onDecide; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5E67F & 1) == 0 )
  {
    sub_1B885B0(&Method_CoinConfirmSliderDialog_OnClickDecide__);
    byte_4A5E67F = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_13;
    value = UIProgressBar__get_value(checkSlider, 0LL);
    v5 = Method_CoinConfirmSliderDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_CoinConfirmSliderDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    if ( value < 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    CoinConfirmSliderDialog__Close_44561128(this, 0LL, v7);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, 0, v9, v10);
    if ( !onDecide )
LABEL_13:
      sub_1B8880C(checkSlider, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall CoinConfirmSliderDialog__OnEnable(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A5E682 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4A5E682 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall CoinConfirmSliderDialog__OnSliderDragFinished(
        CoinConfirmSliderDialog_o *this,
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
    sub_1B8880C(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  CoinConfirmSliderDialog__SetSlider(this, v7, v8);
}


void __fastcall CoinConfirmSliderDialog__Open(
        CoinConfirmSliderDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *canStrengthDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  UILabel_o *titleLabel; // x21
  CoinRoomUtility_c *v12; // x0
  int32_t v13; // w22
  System_String_o *v14; // x0
  UILabel_o *detailLabel_1; // x21
  System_String_o *v16; // x23
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  UILabel_o *detailLabel_2; // x21
  struct UISlider_o *checkSlider; // x21
  UIProgressBar_OnDragFinished_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x5
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E67C & 1) == 0 )
  {
    sub_1B885B0(&Method_CoinConfirmSliderDialog_OnSliderDragFinished__);
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1B885B0(&StringLiteral_3638/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/);
    sub_1B885B0(&StringLiteral_3639/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/);
    sub_1B885B0(&StringLiteral_3640/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/);
    byte_4A5E67C = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v9, v10);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    v12 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v13 = CoinRoomUtility__MaxPoint((const MethodInfo *)v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3638/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, 0LL);
    detailLabel_1 = this->fields.detailLabel_1;
    v16 = v14;
    v28 = v13;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v17, v18, v19);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v16, v20, 0LL);
    if ( !detailLabel_1 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_1, (System_String_o *)gameObject, 0LL);
    detailLabel_2 = this->fields.detailLabel_2;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3639/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, 0LL);
    if ( !detailLabel_2 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_2, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.checkSlider;
    if ( !gameObject )
      goto LABEL_17;
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0LL);
    checkSlider = this->fields.checkSlider;
    v23 = (UIProgressBar_OnDragFinished_o *)sub_1B887FC(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v23,
      (Il2CppObject *)this,
      Method_CoinConfirmSliderDialog_OnSliderDragFinished__,
      0LL);
    if ( !checkSlider
      || (checkSlider->fields.onDragFinished = v23,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&checkSlider->fields.onDragFinished, (int32_t)v23, v24, v25),
          CoinConfirmSliderDialog__SetSlider(this, 0, v26),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_17:
      sub_1B8880C(gameObject, v8);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      canStrengthDic,
      0,
      1,
      0,
      v27);
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
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v11; // x1

  if ( (byte_4A5E67D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20470/*"img_slider_thumb_locked"*/);
    sub_1B885B0(&StringLiteral_20469/*"img_slider_thumb"*/);
    byte_4A5E67D = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v6 = (System_String_o **)&StringLiteral_20469/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20470/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0LL);
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
    || (!sliderOn ? (v11 = 3LL) : (v11 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v11,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}