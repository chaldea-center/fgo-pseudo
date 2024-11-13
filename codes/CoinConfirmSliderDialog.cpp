void __fastcall CoinConfirmSliderDialog___ctor(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B197B1 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B197B1 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_BD2D90;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmSliderDialog__Close(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmSliderDialog__Close_45350224(this, 0LL, v2);
}


void __fastcall CoinConfirmSliderDialog__Close_45350224(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B197AC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CoinConfirmSliderDialog_EndClose__, v10, v11);
    byte_4B197AC = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CoinConfirmSliderDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall CoinConfirmSliderDialog__DestroyList(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v5; // x1
  CoinRoomCoinListViewManager_o *v6; // x0

  if ( (byte_4B197AF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B197AF = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v6 = this->fields.viewManager;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    CoinRoomCoinListViewManager__DestroyList(v6, v5);
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
    sub_1BCA784(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B197AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinConfirmSliderDialog_OnClickCancel__, method, v2);
    byte_4B197AE = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_CoinConfirmSliderDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CoinConfirmSliderDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    CoinConfirmSliderDialog__Close_45350224(this, 0LL, v6);
  }
}


void __fastcall CoinConfirmSliderDialog__OnClickDecide(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *checkSlider; // x0
  float value; // s8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct System_Action_o *onDecide; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B197AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinConfirmSliderDialog_OnClickDecide__, method, v2);
    byte_4B197AD = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_13;
    value = UIProgressBar__get_value(checkSlider, 0LL);
    v6 = Method_CoinConfirmSliderDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_CoinConfirmSliderDialog_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    if ( value < 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    CoinConfirmSliderDialog__Close_45350224(this, 0LL, v8);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onDecide, 0LL, v10, v11, v12, v13, v14, v15);
    if ( !onDecide )
LABEL_13:
      sub_1BCAA3C(checkSlider, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall CoinConfirmSliderDialog__OnEnable(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B197B0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, method, v2);
    byte_4B197B0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
    sub_1BCAA3C(checkSlider, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  UILabel_o *titleLabel; // x21
  __int64 v31; // x1
  CoinRoomUtility_c *v32; // x0
  int32_t v33; // w22
  System_String_o *v34; // x0
  UILabel_o *detailLabel_1; // x21
  System_String_o *v36; // x23
  Il2CppObject *v37; // x0
  UILabel_o *detailLabel_2; // x21
  struct UISlider_o *checkSlider; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  UIProgressBar_OnDragFinished_o *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x5
  int32_t v52; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B197AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinConfirmSliderDialog_OnSliderDragFinished__, canStrengthDic, onDecide);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UIProgressBar_OnDragFinished_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3668/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3669/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3670/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, v19, v20);
    byte_4B197AA = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v23, v24, v25, v26, v27, v28);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    v32 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v31);
    v33 = CoinRoomUtility__MaxPoint((const MethodInfo *)v32);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3668/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, 0LL);
    detailLabel_1 = this->fields.detailLabel_1;
    v36 = v34;
    v52 = v33;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v36, v37, 0LL);
    if ( !detailLabel_1 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_1, (System_String_o *)gameObject, 0LL);
    detailLabel_2 = this->fields.detailLabel_2;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3669/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, 0LL);
    if ( !detailLabel_2 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_2, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.checkSlider;
    if ( !gameObject )
      goto LABEL_17;
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0LL);
    checkSlider = this->fields.checkSlider;
    v43 = (UIProgressBar_OnDragFinished_o *)sub_1BCAA2C(UIProgressBar_OnDragFinished_TypeInfo, v40, v41, v42);
    UIProgressBar_OnDragFinished___ctor(
      v43,
      (Il2CppObject *)this,
      Method_CoinConfirmSliderDialog_OnSliderDragFinished__,
      0LL);
    if ( !checkSlider
      || (checkSlider->fields.onDragFinished = v43,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&checkSlider->fields.onDragFinished,
            (int64_t)v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49),
          CoinConfirmSliderDialog__SetSlider(this, 0, v50),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_17:
      sub_1BCAA3C(gameObject, v22);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      canStrengthDic,
      0,
      1,
      0,
      v51);
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
  __int64 v6; // x2
  UISprite_o *sliderSprite; // x0
  System_String_o **v8; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v13; // x1

  if ( (byte_4B197AB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20689/*"img_slider_thumb_locked"*/, sliderOn, method);
    sub_1BCA7E0(&StringLiteral_20688/*"img_slider_thumb"*/, v5, v6);
    byte_4B197AB = 1;
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