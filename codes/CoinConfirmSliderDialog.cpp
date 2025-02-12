void __fastcall CoinConfirmSliderDialog___ctor(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BCB144 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BCB144 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_BFA7B0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmSliderDialog__Close(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmSliderDialog__Close_45884872(this, 0LL, v2);
}


void __fastcall CoinConfirmSliderDialog__Close_45884872(
        CoinConfirmSliderDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4BCB13F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_CoinConfirmSliderDialog_EndClose__, v10);
    byte_4BCB13F = 1;
  }
  this->fields.onClose = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinConfirmSliderDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall CoinConfirmSliderDialog__DestroyList(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_4BCB142 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCB142 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_1C1AE30(0LL, v4);
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void __fastcall CoinConfirmSliderDialog__EndClose(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_onClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1C1AB78(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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

  if ( (byte_4BCB141 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CoinConfirmSliderDialog_OnClickCancel__, method);
    byte_4BCB141 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CoinConfirmSliderDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_CoinConfirmSliderDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    CoinConfirmSliderDialog__Close_45884872(this, 0LL, v5);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BCB140 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CoinConfirmSliderDialog_OnClickDecide__, method);
    byte_4BCB140 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_13;
    value = UIProgressBar__get_value(checkSlider, 0LL);
    v5 = Method_CoinConfirmSliderDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_CoinConfirmSliderDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    if ( value < 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    CoinConfirmSliderDialog__Close_45884872(this, 0LL, v7);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onDecide, 0LL, v9, v10, v11, v12, v13, v14);
    if ( !onDecide )
LABEL_13:
      sub_1C1AE30(checkSlider, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall CoinConfirmSliderDialog__OnEnable(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BCB143 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_15906/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4BCB143 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43042988(transform, (System_String_o *)StringLiteral_15906/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
    sub_1C1AE30(checkSlider, method);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UILabel_o *titleLabel; // x21
  CoinRoomUtility_c *v23; // x0
  int32_t v24; // w22
  System_String_o *v25; // x0
  UILabel_o *detailLabel_1; // x21
  System_String_o *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UILabel_o *detailLabel_2; // x21
  struct UISlider_o *checkSlider; // x21
  UIProgressBar_OnDragFinished_o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x5
  int32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BCB13D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CoinConfirmSliderDialog_OnSliderDragFinished__, canStrengthDic);
    sub_1C1ABD4(&CoinRoomUtility_TypeInfo, v7);
    sub_1C1ABD4(&int_TypeInfo, v8);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v9);
    sub_1C1ABD4(&UIProgressBar_OnDragFinished_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_3683/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, v11);
    sub_1C1ABD4(&StringLiteral_3684/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, v12);
    sub_1C1ABD4(&StringLiteral_3685/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, v13);
    byte_4BCB13D = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v16, v17, v18, v19, v20, v21);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    v23 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v24 = CoinRoomUtility__MaxPoint((const MethodInfo *)v23);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3683/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, 0LL);
    detailLabel_1 = this->fields.detailLabel_1;
    v27 = v25;
    v43 = v24;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v28, v29, v30);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v27, v31, 0LL);
    if ( !detailLabel_1 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_1, (System_String_o *)gameObject, 0LL);
    detailLabel_2 = this->fields.detailLabel_2;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, 0LL);
    if ( !detailLabel_2 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_2, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.checkSlider;
    if ( !gameObject )
      goto LABEL_17;
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0LL);
    checkSlider = this->fields.checkSlider;
    v34 = (UIProgressBar_OnDragFinished_o *)sub_1C1AE20(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v34,
      (Il2CppObject *)this,
      Method_CoinConfirmSliderDialog_OnSliderDragFinished__,
      0LL);
    if ( !checkSlider
      || (checkSlider->fields.onDragFinished = v34,
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&checkSlider->fields.onDragFinished,
            (int64_t)v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40),
          CoinConfirmSliderDialog__SetSlider(this, 0, v41),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_17:
      sub_1C1AE30(gameObject, v15);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      canStrengthDic,
      0,
      1,
      0,
      v42);
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
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v12; // x1

  if ( (byte_4BCB13E & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20821/*"img_slider_thumb_locked"*/, sliderOn);
    sub_1C1ABD4(&StringLiteral_20820/*"img_slider_thumb"*/, v5);
    byte_4BCB13E = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v7 = (System_String_o **)&StringLiteral_20820/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v7 = (System_String_o **)&StringLiteral_20821/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v7, 0LL);
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
    || (!sliderOn ? (v12 = 3LL) : (v12 = 0LL),
        ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
          sliderSprite,
          v12,
          1LL,
          sliderSprite->klass->vtable._15_OnInit.methodPtr),
        (sliderSprite = (UISprite_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1C1AE30(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
}