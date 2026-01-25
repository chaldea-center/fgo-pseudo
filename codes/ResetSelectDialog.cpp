void ResetSelectDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ResetSelectDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEDB09 & 1) == 0 )
  {
    sub_1C7BAE8(&ResetSelectDialog_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17523/*"btn_bg_01"*/);
    sub_1C7BAE8(&StringLiteral_17526/*"btn_bg_03"*/);
    byte_4CEDB09 = 1;
  }
  ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01 = (struct System_String_o *)StringLiteral_17523/*"btn_bg_01"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ResetSelectDialog_TypeInfo->static_fields,
    StringLiteral_17523/*"btn_bg_01"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_17526/*"btn_bg_03"*/;
  static_fields = ResetSelectDialog_TypeInfo->static_fields;
  static_fields->BTN_NAME_03 = (struct System_String_o *)StringLiteral_17526/*"btn_bg_03"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->BTN_NAME_03, v7, v9, v10, v11, v12, v13, v14);
  *(_OWORD *)&ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH = xmmword_CF61B0;
}


void ResetSelectDialog___ctor(ResetSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CEDB08 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEDB08 = 1;
  }
  this->fields.threeButtonRightY = -111.0;
  *(_OWORD *)&this->fields.twoButtonLeftX = xmmword_CF4EC0;
  *(_OWORD *)&this->fields.threeButtonCenterX = xmmword_CF6490;
  *(_OWORD *)&this->fields.twoButtonFontSize = xmmword_CF5290;
  this->fields.oneButtonCenterY = -162.5;
  *(_OWORD *)&this->fields.threeButtonCancelFontSize = xmmword_CF6630;
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

  ResetSelectDialog__Close_41520172(this, 0, v2);
}


void ResetSelectDialog__Close_41520172(ResetSelectDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CEDB03 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ResetSelectDialog_EndClose__);
    byte_4CEDB03 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ResetSelectDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ResetSelectDialog__EndClose(ResetSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  ResetSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4CEDB00 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDB00 = 1;
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
    sub_1C7BD40(titleLabel, method);
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

  if ( (byte_4CEDB05 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ResetSelectDialog_OnClickCenter__);
    byte_4CEDB05 = 1;
  }
  if ( !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    isCenterDecide = this->fields.isCenterDecide;
    v4 = Method_ResetSelectDialog_OnClickCenter__;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickCenter__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_ResetSelectDialog_OnClickCenter__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
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

  if ( (byte_4CEDB04 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ResetSelectDialog_OnClickLeft__);
    byte_4CEDB04 = 1;
  }
  if ( !this->fields.isNoCancel && !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v3 = Method_ResetSelectDialog_OnClickLeft__;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ResetSelectDialog_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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

  if ( (byte_4CEDB06 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ResetSelectDialog_OnClickRight__);
    byte_4CEDB06 = 1;
  }
  if ( !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v3 = Method_ResetSelectDialog_OnClickRight__;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ResetSelectDialog_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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

  if ( (byte_4CEDB07 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15705/*"Window/LeftButton"*/);
    byte_4CEDB07 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_15705/*"Window/LeftButton"*/, 0);
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
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Action_o *v31; // x20
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEDB01 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_ResetSelectDialog_EndOpen__);
    sub_1C7BAE8(&ResetSelectDialog_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5601/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_CANCEL"*/);
    byte_4CEDB01 = 1;
  }
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_5601/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_CANCEL"*/, 0);
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
    v32.fields.x = this->fields.twoButtonLeftX;
    v32.fields.y = this->fields.twoButtonLeftY;
    v32.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.leftButton, v32, 0);
    v33.fields.x = this->fields.twoButtonRightX;
    v33.fields.y = this->fields.twoButtonRightY;
    v33.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v33, 0);
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
    v34.fields.x = this->fields.threeButtonLeftX;
    v34.fields.y = this->fields.threeButtonLeftY;
    v34.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.leftButton, v34, 0);
    v35.fields.x = this->fields.threeButtonCenterX;
    v35.fields.y = this->fields.threeButtonCenterY;
    v35.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v35, 0);
    v36.fields.x = this->fields.threeButtonRightX;
    v36.fields.y = this->fields.threeButtonRightY;
    v36.fields.z = 0.0;
    GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v36, 0);
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
      v37.fields.x = this->fields.twoButtonLeftX;
      v37.fields.y = this->fields.twoButtonLeftY;
      v37.fields.z = 0.0;
      GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v37, 0);
      v38.fields.x = this->fields.twoButtonRightX;
      v38.fields.y = this->fields.twoButtonRightY;
      v38.fields.z = 0.0;
      GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v38, 0);
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
    sub_1C7BD40(IsNullOrEmpty, v17);
  }
  WrapControlText__fontSizeAdjust((UILabel_o *)IsNullOrEmpty, message, IsNullOrEmpty[17].fields._stringLength, 0);
  this->fields.clickFunc = func;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v25, v26, v27, v28, v29, v30);
  this->fields.isEnd = 0;
  v31 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ResetSelectDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0, 0);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Action_o *v19; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEDB02 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ResetSelectDialog_EndOpen__);
    sub_1C7BAE8(&ResetSelectDialog_TypeInfo);
    byte_4CEDB02 = 1;
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
  v20.fields.x = this->fields.oneButtonCenterX;
  v20.fields.y = this->fields.oneButtonCenterY;
  v20.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v20, 0);
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
    sub_1C7BD40(centerButton, title);
  }
  WrapControlText__fontSizeAdjust((UILabel_o *)centerButton, message, *((_DWORD *)centerButton + 106), 0);
  this->fields.clickFunc = func;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v13, v14, v15, v16, v17, v18);
  this->fields.isEnd = 0;
  v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ResetSelectDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
}


void ResetSelectDialog_ClickDelegate___ctor(
        ResetSelectDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB1A3C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB19F4;
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
  if ( (byte_4CEDB0A & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CEDB0A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void ResetSelectDialog_ClickDelegate__EndInvoke(
        ResetSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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