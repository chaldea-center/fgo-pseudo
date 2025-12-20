void CoinConfirmSliderDialog___ctor(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D30600 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D30600 = 1;
  }
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_CFF190;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CoinConfirmSliderDialog__Close(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmSliderDialog__Close_49050920(this, 0, v2);
}


void CoinConfirmSliderDialog__Close_49050920(
        CoinConfirmSliderDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D305FB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CoinConfirmSliderDialog_EndClose__);
    byte_4D305FB = 1;
  }
  this->fields.onClose = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinConfirmSliderDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void CoinConfirmSliderDialog__DestroyList(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_4D305FE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D305FE = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0, 0) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_1C942F0(0, v4);
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void CoinConfirmSliderDialog__EndClose(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
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

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  onClose = this->fields.onClose;
  p_onClose = (GrandQuestFolderBoardItem_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_1C9403C(p_onClose, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void CoinConfirmSliderDialog__Init(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CoinConfirmSliderDialog__OnClickCancel(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D305FD & 1) == 0 )
  {
    sub_1C94098(&Method_CoinConfirmSliderDialog_OnClickCancel__);
    byte_4D305FD = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CoinConfirmSliderDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CoinConfirmSliderDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    CoinConfirmSliderDialog__Close_49050920(this, 0, v5);
  }
}


void CoinConfirmSliderDialog__OnClickDecide(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4D305FC & 1) == 0 )
  {
    sub_1C94098(&Method_CoinConfirmSliderDialog_OnClickDecide__);
    byte_4D305FC = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      goto LABEL_13;
    value = UIProgressBar__get_value(checkSlider, 0);
    v5 = Method_CoinConfirmSliderDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_CoinConfirmSliderDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
    if ( value < 1.0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
      return;
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    CoinConfirmSliderDialog__Close_49050920(this, 0, v7);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onDecide, 0, v9, v10, v11, v12, v13, v14);
    if ( !onDecide )
LABEL_13:
      sub_1C942F0(checkSlider, method);
    ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      onDecide->fields.method);
  }
}


void CoinConfirmSliderDialog__OnEnable(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D305FF & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15706/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4D305FF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45761432(transform, (System_String_o *)StringLiteral_15706/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void CoinConfirmSliderDialog__OnSliderDragFinished(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
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
    sub_1C942F0(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  CoinConfirmSliderDialog__SetSlider(this, v7, v8);
}


void CoinConfirmSliderDialog__Open(
        CoinConfirmSliderDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *canStrengthDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UILabel_o *titleLabel; // x21
  CoinRoomUtility_c *v16; // x0
  int32_t v17; // w22
  System_String_o *v18; // x0
  UILabel_o *detailLabel_1; // x21
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  UILabel_o *detailLabel_2; // x21
  struct UISlider_o *checkSlider; // x21
  UIProgressBar_OnDragFinished_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x5
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D305F9 & 1) == 0 )
  {
    sub_1C94098(&Method_CoinConfirmSliderDialog_OnSliderDragFinished__);
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C94098(&StringLiteral_3563/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/);
    sub_1C94098(&StringLiteral_3564/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/);
    sub_1C94098(&StringLiteral_3565/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/);
    byte_4D305F9 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.onDecide = onDecide;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onDecide, (int32_t)onDecide, v9, v10, v11, v12, v13, v14);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3565/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    v16 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v17 = CoinRoomUtility__MaxPoint((const MethodInfo *)v16);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3563/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, 0);
    detailLabel_1 = this->fields.detailLabel_1;
    v20 = v18;
    v33 = v17;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v21, 0);
    if ( !detailLabel_1 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_1, (System_String_o *)gameObject, 0);
    detailLabel_2 = this->fields.detailLabel_2;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3564/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, 0);
    if ( !detailLabel_2 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_2, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.checkSlider;
    if ( !gameObject )
      goto LABEL_17;
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0);
    checkSlider = this->fields.checkSlider;
    v24 = (UIProgressBar_OnDragFinished_o *)sub_1C942E4(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v24,
      (Il2CppObject *)this,
      Method_CoinConfirmSliderDialog_OnSliderDragFinished__,
      0);
    if ( !checkSlider
      || (checkSlider->fields.onDragFinished = v24,
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&checkSlider->fields.onDragFinished,
            (int32_t)v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30),
          CoinConfirmSliderDialog__SetSlider(this, 0, v31),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0) )
    {
LABEL_17:
      sub_1C942F0(gameObject, v8);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      canStrengthDic,
      0,
      1,
      0,
      v32);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinConfirmSliderDialog__SetSlider(CoinConfirmSliderDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED
  __int64 v11; // x1

  if ( (byte_4D305FA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20759/*"img_slider_thumb_locked"*/);
    sub_1C94098(&StringLiteral_20758/*"img_slider_thumb"*/);
    byte_4D305FA = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_15;
  v6 = (System_String_o **)&StringLiteral_20758/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20759/*"img_slider_thumb_locked"*/;
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
    sub_1C942F0(sliderSprite, sliderOn);
  }
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
}