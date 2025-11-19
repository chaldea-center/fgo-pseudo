void ResetSelectDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ResetSelectDialog_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB57E2 & 1) == 0 )
  {
    sub_1C6BA08(&ResetSelectDialog_TypeInfo);
    sub_1C6BA08(&StringLiteral_17450/*"btn_bg_01"*/);
    sub_1C6BA08(&StringLiteral_17453/*"btn_bg_03"*/);
    byte_4CB57E2 = 1;
  }
  ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01 = (struct System_String_o *)StringLiteral_17450/*"btn_bg_01"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)ResetSelectDialog_TypeInfo->static_fields, StringLiteral_17450/*"btn_bg_01"*/, v1, v2);
  v3 = StringLiteral_17453/*"btn_bg_03"*/;
  static_fields = ResetSelectDialog_TypeInfo->static_fields;
  static_fields->BTN_NAME_03 = (struct System_String_o *)StringLiteral_17453/*"btn_bg_03"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->BTN_NAME_03, v3, v5, v6);
  *(_OWORD *)&ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH = xmmword_CECB90;
}


void ResetSelectDialog___ctor(ResetSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB57E1 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB57E1 = 1;
  }
  this->fields.threeButtonRightY = -111.0;
  *(_OWORD *)&this->fields.twoButtonLeftX = xmmword_CEB8C0;
  *(_OWORD *)&this->fields.threeButtonCenterX = xmmword_CECE60;
  *(_OWORD *)&this->fields.twoButtonFontSize = xmmword_CEBC90;
  this->fields.oneButtonCenterY = -162.5;
  *(_OWORD *)&this->fields.threeButtonCancelFontSize = xmmword_CED010;
  *(_QWORD *)&this->fields.threeButtonNoCancelMessageSize = 0x1E0000001ALL;
  this->fields.oneButtonMessageSize = 25;
  this->fields.rightButtonNo = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ResetSelectDialog__Awake(ResetSelectDialog_o *this, const MethodInfo *method)
{
  ;
}


void ResetSelectDialog__Close(ResetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ResetSelectDialog__Close_41276968(this, 0, v2);
}


void ResetSelectDialog__Close_41276968(ResetSelectDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4CB57DC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ResetSelectDialog_EndClose__);
    byte_4CB57DC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ResetSelectDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ResetSelectDialog__EndClose(ResetSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  ResetSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ResetSelectDialog__EndOpen(ResetSelectDialog_o *this, const MethodInfo *method)
{
  ;
}


void ResetSelectDialog__Init(ResetSelectDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CB57D9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB57D9 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.leftButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.centerButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.rightButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C6BC60(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ResetSelectDialog__OnClickCenter(ResetSelectDialog_o *this, const MethodInfo *method)
{
  _BOOL4 isCenterDecide; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ResetSelectDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB57DE & 1) == 0 )
  {
    sub_1C6BA08(&Method_ResetSelectDialog_OnClickCenter__);
    byte_4CB57DE = 1;
  }
  if ( !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    isCenterDecide = this->fields.isCenterDecide;
    v4 = Method_ResetSelectDialog_OnClickCenter__;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickCenter__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C6BA20(Method_ResetSelectDialog_OnClickCenter__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isCenterDecide, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void ResetSelectDialog__OnClickLeft(ResetSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ResetSelectDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB57DD & 1) == 0 )
  {
    sub_1C6BA08(&Method_ResetSelectDialog_OnClickLeft__);
    byte_4CB57DD = 1;
  }
  if ( !this->fields.isNoCancel && !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v3 = Method_ResetSelectDialog_OnClickLeft__;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ResetSelectDialog_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void ResetSelectDialog__OnClickRight(ResetSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ResetSelectDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB57DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_ResetSelectDialog_OnClickRight__);
    byte_4CB57DF = 1;
  }
  if ( !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v3 = Method_ResetSelectDialog_OnClickRight__;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ResetSelectDialog_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        (unsigned int)this->fields.rightButtonNo,
        clickFunc->fields.method);
  }
}


void ResetSelectDialog__OnEnable(ResetSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CB57E0 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15644/*"Window/LeftButton"*/);
    byte_4CB57E0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_15644/*"Window/LeftButton"*/, 0);
}


void ResetSelectDialog__Open(
        ResetSelectDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *centerText,
        System_String_o *rightText,
        bool isNoCancel,
        ResetSelectDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UILabel_o *leftButtonLabel; // x26
  System_String_o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  UISprite_o *leftButtonSprite; // x24
  int32_t *p_twoButtonMessageSize; // x8
  int32_t v20; // w24
  UISprite_o *v21; // x24
  int32_t threeButtonNoCancelMessageSize; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_o *v27; // x20
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB57DA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_ResetSelectDialog_EndOpen__);
    sub_1C6BA08(&ResetSelectDialog_TypeInfo);
    sub_1C6BA08(&StringLiteral_5584/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_CANCEL"*/);
    byte_4CB57DA = 1;
  }
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_5584/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_CANCEL"*/, 0);
  if ( !leftButtonLabel )
    goto LABEL_56;
  UILabel__set_text(leftButtonLabel, IsNullOrEmpty, 0);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(centerText, 0);
  if ( !this->fields.centerButton )
    goto LABEL_56;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.centerButton, 0, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.leftButton;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButton;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UILabel__set_text((UILabel_o *)IsNullOrEmpty, rightText, 0);
    v28.fields.x = this->fields.twoButtonLeftX;
    v28.fields.y = this->fields.twoButtonLeftY;
    v28.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.leftButton, v28, 0);
    v29.fields.x = this->fields.twoButtonRightX;
    v29.fields.y = this->fields.twoButtonRightY;
    v29.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v29, 0);
    leftButtonSprite = this->fields.leftButtonSprite;
    IsNullOrEmpty = (System_String_o *)ResetSelectDialog_TypeInfo;
    if ( !ResetSelectDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ResetSelectDialog_TypeInfo);
    if ( !leftButtonSprite )
      goto LABEL_56;
    UISprite__set_spriteName(leftButtonSprite, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.leftButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_width((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.leftButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_height((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_01_HEIGHT, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_width((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_height((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_01_HEIGHT, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.leftButtonLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UILabel__set_fontSize((UILabel_o *)IsNullOrEmpty, this->fields.twoButtonFontSize, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UILabel__set_fontSize((UILabel_o *)IsNullOrEmpty, this->fields.twoButtonFontSize, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.messageLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    p_twoButtonMessageSize = &this->fields.twoButtonMessageSize;
    v20 = 1;
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.centerButton, 1, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.leftButton;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButton;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.centerButtonLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UILabel__set_text((UILabel_o *)IsNullOrEmpty, centerText, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UILabel__set_text((UILabel_o *)IsNullOrEmpty, rightText, 0);
    v30.fields.x = this->fields.threeButtonLeftX;
    v30.fields.y = this->fields.threeButtonLeftY;
    v30.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.leftButton, v30, 0);
    v31.fields.x = this->fields.threeButtonCenterX;
    v31.fields.y = this->fields.threeButtonCenterY;
    v31.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v31, 0);
    v32.fields.x = this->fields.threeButtonRightX;
    v32.fields.y = this->fields.threeButtonRightY;
    v32.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v32, 0);
    v21 = this->fields.leftButtonSprite;
    IsNullOrEmpty = (System_String_o *)ResetSelectDialog_TypeInfo;
    if ( !ResetSelectDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ResetSelectDialog_TypeInfo);
    if ( !v21 )
      goto LABEL_56;
    UISprite__set_spriteName(v21, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.centerButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_03, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_03, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.leftButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_width((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.leftButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_height((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_01_HEIGHT, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.centerButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_width((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_03_WIDTH, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.centerButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_height((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_03_HEIGHT, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_width((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_03_WIDTH, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UIWidget__set_height((UIWidget_o *)IsNullOrEmpty, ResetSelectDialog_TypeInfo->static_fields->BTN_03_HEIGHT, 0);
    if ( isNoCancel )
    {
      v33.fields.x = this->fields.twoButtonLeftX;
      v33.fields.y = this->fields.twoButtonLeftY;
      v33.fields.z = 0.0;
      GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v33, 0);
      v34.fields.x = this->fields.twoButtonRightX;
      v34.fields.y = this->fields.twoButtonRightY;
      v34.fields.z = 0.0;
      GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v34, 0);
      IsNullOrEmpty = (System_String_o *)this->fields.messageLabel;
      if ( !IsNullOrEmpty )
        goto LABEL_56;
      threeButtonNoCancelMessageSize = this->fields.threeButtonNoCancelMessageSize;
    }
    else
    {
      IsNullOrEmpty = (System_String_o *)this->fields.titleLabel;
      if ( !IsNullOrEmpty )
        goto LABEL_56;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.threeButtonTitleY, 0);
      IsNullOrEmpty = (System_String_o *)this->fields.messageLabel;
      if ( !IsNullOrEmpty )
        goto LABEL_56;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
      GameObjectExtensions__SetLocalPositionY(v24, (float)this->fields.threeButtonMessageY, 0);
      IsNullOrEmpty = (System_String_o *)this->fields.windowSprite;
      if ( !IsNullOrEmpty )
        goto LABEL_56;
      UIWidget__set_height((UIWidget_o *)IsNullOrEmpty, this->fields.threeButtonWindowSize, 0);
      IsNullOrEmpty = (System_String_o *)this->fields.messageLabel;
      if ( !IsNullOrEmpty )
        goto LABEL_56;
      threeButtonNoCancelMessageSize = this->fields.threeButtonMessageSize;
    }
    UILabel__set_fontSize((UILabel_o *)IsNullOrEmpty, threeButtonNoCancelMessageSize, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.leftButtonLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UILabel__set_fontSize((UILabel_o *)IsNullOrEmpty, this->fields.threeButtonCancelFontSize, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.centerButtonLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UILabel__set_fontSize((UILabel_o *)IsNullOrEmpty, this->fields.threeButtonFontSize, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.rightButtonLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    p_twoButtonMessageSize = &this->fields.threeButtonFontSize;
    v20 = 2;
  }
  UILabel__set_fontSize((UILabel_o *)IsNullOrEmpty, *p_twoButtonMessageSize, 0);
  this->fields.rightButtonNo = v20;
  this->fields.isNoCancel = isNoCancel;
  if ( isNoCancel )
  {
    IsNullOrEmpty = (System_String_o *)this->fields.leftButton;
    if ( !IsNullOrEmpty )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
    GameObjectExtensions__SetLocalPositionX(this->fields.centerButton, this->fields.twoButtonLeftX, 0);
    GameObjectExtensions__SetLocalPositionX(this->fields.rightButton, this->fields.twoButtonRightX, 0);
  }
  IsNullOrEmpty = (System_String_o *)this->fields.titleLabel;
  if ( !IsNullOrEmpty
    || (UILabel__set_text((UILabel_o *)IsNullOrEmpty, title, 0),
        (IsNullOrEmpty = (System_String_o *)this->fields.messageLabel) == 0) )
  {
LABEL_56:
    sub_1C6BC60(IsNullOrEmpty, v17);
  }
  WrapControlText__fontSizeAdjust((UILabel_o *)IsNullOrEmpty, message, IsNullOrEmpty[17].fields._stringLength, 0);
  this->fields.clickFunc = func;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v25, v26);
  this->fields.isEnd = 0;
  v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ResetSelectDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0, 0);
}


void ResetSelectDialog__OpenSingleButton(
        ResetSelectDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *buttonText,
        ResetSelectDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  void *centerButton; // x0
  UISprite_o *centerButtonSprite; // x24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o *v15; // x20
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB57DB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ResetSelectDialog_EndOpen__);
    sub_1C6BA08(&ResetSelectDialog_TypeInfo);
    byte_4CB57DB = 1;
  }
  centerButton = this->fields.centerButton;
  if ( !centerButton )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 1, 0);
  centerButton = this->fields.leftButton;
  if ( !centerButton )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 0, 0);
  centerButton = this->fields.rightButton;
  if ( !centerButton )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 0, 0);
  centerButton = ResetSelectDialog_TypeInfo;
  centerButtonSprite = this->fields.centerButtonSprite;
  if ( !ResetSelectDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResetSelectDialog_TypeInfo);
  if ( !centerButtonSprite )
    goto LABEL_17;
  UISprite__set_spriteName(centerButtonSprite, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01, 0);
  centerButton = this->fields.centerButtonLabel;
  if ( !centerButton )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)centerButton, buttonText, 0);
  centerButton = this->fields.centerButtonLabel;
  if ( !centerButton )
    goto LABEL_17;
  UILabel__set_fontSize((UILabel_o *)centerButton, this->fields.oneButtonFontSize, 0);
  v16.fields.x = this->fields.oneButtonCenterX;
  v16.fields.y = this->fields.oneButtonCenterY;
  v16.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v16, 0);
  centerButton = this->fields.centerButtonSprite;
  if ( !centerButton )
    goto LABEL_17;
  UIWidget__set_width((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH, 0);
  centerButton = this->fields.centerButtonSprite;
  if ( !centerButton
    || (UIWidget__set_height((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_01_HEIGHT, 0),
        (centerButton = this->fields.messageLabel) == 0)
    || (UILabel__set_fontSize((UILabel_o *)centerButton, this->fields.oneButtonMessageSize, 0),
        centerButton = this->fields.titleLabel,
        this->fields.isCenterDecide = 1,
        !centerButton)
    || (UILabel__set_text((UILabel_o *)centerButton, title, 0), (centerButton = this->fields.messageLabel) == 0) )
  {
LABEL_17:
    sub_1C6BC60(centerButton, title);
  }
  WrapControlText__fontSizeAdjust((UILabel_o *)centerButton, message, *((_DWORD *)centerButton + 106), 0);
  this->fields.clickFunc = func;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v13, v14);
  this->fields.isEnd = 0;
  v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ResetSelectDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
}


void ResetSelectDialog_ClickDelegate___ctor(
        ResetSelectDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA1D10;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA1CC8;
}


System_IAsyncResult_o *ResetSelectDialog_ClickDelegate__BeginInvoke(
        ResetSelectDialog_ClickDelegate_o *this,
        int32_t selectNo,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = selectNo;
  if ( (byte_4CB57E3 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    byte_4CB57E3 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ResetSelectDialog_ClickDelegate__EndInvoke(
        ResetSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void ResetSelectDialog_ClickDelegate__Invoke(
        ResetSelectDialog_ClickDelegate_o *this,
        int32_t selectNo,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    selectNo,
    this->fields.method);
}