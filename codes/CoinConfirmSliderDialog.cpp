void CoinConfirmSliderDialog___ctor(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0

  if ( (byte_593C5AA & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593C5AA = 1;
  }
  v3 = BaseDialog_TypeInfo;
  this->fields.DisableColor = (struct UnityEngine_Color_o)xmmword_E93440;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CoinConfirmSliderDialog__Close(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmSliderDialog__Close_55359868(this, 0, v2);
}


void CoinConfirmSliderDialog__Close_55359868(
        CoinConfirmSliderDialog_o *this,
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

  if ( (byte_593C5A5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CoinConfirmSliderDialog_EndClose__);
    byte_593C5A5 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinConfirmSliderDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void CoinConfirmSliderDialog__DestroyList(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_593C5A8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C5A8 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0, 0) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_21FFECC(0, v4);
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void CoinConfirmSliderDialog__EndClose(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
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

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
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

  if ( (byte_593C5A7 & 1) == 0 )
  {
    sub_21FFC50(&Method_CoinConfirmSliderDialog_OnClickCancel__);
    byte_593C5A7 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CoinConfirmSliderDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CoinConfirmSliderDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    CoinConfirmSliderDialog__Close_55359868(this, 0, v5);
  }
}


void CoinConfirmSliderDialog__OnClickDecide(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
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

  if ( (byte_593C5A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_CoinConfirmSliderDialog_OnClickDecide__);
    byte_593C5A6 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( checkSlider )
    {
      value = UIProgressBar__get_value(checkSlider, 0);
      v5 = Method_CoinConfirmSliderDialog_OnClickDecide__;
      if ( value < 1.0 )
      {
        if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickDecide__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_21FFC68(Method_CoinConfirmSliderDialog_OnClickDecide__);
        v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
        return;
      }
      if ( (*((_BYTE *)Method_CoinConfirmSliderDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_CoinConfirmSliderDialog_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      CoinConfirmSliderDialog__Close_55359868(this, 0, v8);
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


void CoinConfirmSliderDialog__OnEnable(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_593C5A9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_593C5A9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void CoinConfirmSliderDialog__OnSliderDragFinished(CoinConfirmSliderDialog_o *this, const MethodInfo *method)
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
  CoinConfirmSliderDialog__SetSlider(this, v6, v7);
}


void CoinConfirmSliderDialog__Open(
        CoinConfirmSliderDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *canStrengthDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UILabel_o *titleLabel; // x21
  __int64 v17; // x1
  CoinRoomUtility_c *v18; // x0
  int32_t v19; // w22
  System_String_o *v20; // x23
  UILabel_o *detailLabel_1; // x21
  Il2CppObject *v22; // x0
  UILabel_o *detailLabel_2; // x21
  struct UISlider_o *checkSlider; // x21
  UIProgressBar_OnDragFinished_o *v25; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x5
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593C5A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_CoinConfirmSliderDialog_OnSliderDragFinished__);
    sub_21FFC50(&CoinRoomUtility_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_21FFC50(&StringLiteral_3695/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/);
    sub_21FFC50(&StringLiteral_3696/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/);
    sub_21FFC50(&StringLiteral_3697/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/);
    byte_593C5A3 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.onDecide = onDecide;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3697/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    v18 = CoinRoomUtility_TypeInfo;
    if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v17);
    v19 = CoinRoomUtility__MaxPoint((const MethodInfo *)v18);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3695/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_1"*/, 0);
    detailLabel_1 = this->fields.detailLabel_1;
    v34 = v19;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v34);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v22, 0);
    if ( !detailLabel_1 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_1, (System_String_o *)gameObject, 0);
    detailLabel_2 = this->fields.detailLabel_2;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3696/*"COIN_ROOM_SLIDER_CONFIRM_DIALOG_DETAIL_2"*/, 0);
    if ( !detailLabel_2 )
      goto LABEL_17;
    UILabel__set_text(detailLabel_2, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.checkSlider;
    if ( !gameObject )
      goto LABEL_17;
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0);
    checkSlider = this->fields.checkSlider;
    v25 = (UIProgressBar_OnDragFinished_o *)sub_21FFEBC(UIProgressBar_OnDragFinished_TypeInfo);
    UIProgressBar_OnDragFinished___ctor(
      v25,
      (Il2CppObject *)this,
      Method_CoinConfirmSliderDialog_OnSliderDragFinished__,
      0);
    if ( !checkSlider
      || (checkSlider->fields.onDragFinished = v25,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&checkSlider->fields.onDragFinished,
            (int32_t)v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31),
          CoinConfirmSliderDialog__SetSlider(this, 0, v32),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0) )
    {
LABEL_17:
      sub_21FFECC(gameObject, v8);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      canStrengthDic,
      0,
      0,
      0,
      v33);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinConfirmSliderDialog__SetSlider(CoinConfirmSliderDialog_o *this, bool sliderOn, const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  __int64 *v6; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED

  if ( (byte_593C5A4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21535/*"img_slider_thumb_locked"*/);
    sub_21FFC50(&StringLiteral_21534/*"img_slider_thumb"*/);
    byte_593C5A4 = 1;
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