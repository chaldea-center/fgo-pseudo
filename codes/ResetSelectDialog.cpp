void ResetSelectDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ResetSelectDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596FC20 & 1) == 0 )
  {
    sub_2213A60(&ResetSelectDialog_TypeInfo);
    sub_2213A60(&StringLiteral_18197/*"btn_bg_01"*/);
    sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596FC20 = 1;
  }
  v7 = StringLiteral_18197/*"btn_bg_01"*/;
  ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01 = (struct System_String_o *)StringLiteral_18197/*"btn_bg_01"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)ResetSelectDialog_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_18200/*"btn_bg_03"*/;
  static_fields = ResetSelectDialog_TypeInfo->static_fields;
  static_fields->BTN_NAME_03 = (struct System_String_o *)StringLiteral_18200/*"btn_bg_03"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->BTN_NAME_03, v8, v10, v11, v12, v13, v14, v15);
  *(_OWORD *)&ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH = xmmword_E9D1F0;
}


void ResetSelectDialog___ctor(ResetSelectDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0
  int v4; // w9

  if ( (byte_596FC1F & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596FC1F = 1;
  }
  v3 = BaseDialog_TypeInfo;
  *(_OWORD *)&this->fields.twoButtonLeftX = xmmword_E9C640;
  *(_OWORD *)&this->fields.threeButtonCenterX = xmmword_E9CCF0;
  *(_OWORD *)&this->fields.threeButtonCancelFontSize = xmmword_E9CF10;
  *(_OWORD *)&this->fields.twoButtonFontSize = xmmword_E9C760;
  this->fields.threeButtonRightY = -111.0;
  *(_QWORD *)&this->fields.threeButtonNoCancelMessageSize = 0x1E0000001ALL;
  this->fields.oneButtonCenterY = -162.5;
  v4 = *(&v3->_2.cctor_finished + 1);
  this->fields.oneButtonMessageSize = 25;
  this->fields.rightButtonNo = 2;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ResetSelectDialog__Awake(ResetSelectDialog_o *this, const MethodInfo *method)
{
  ;
}


void ResetSelectDialog__Close(ResetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ResetSelectDialog__Close_47917224(this, 0, v2);
}


void ResetSelectDialog__Close_47917224(ResetSelectDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_596FC1A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ResetSelectDialog_EndClose__);
    byte_596FC1A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ResetSelectDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ResetSelectDialog__EndClose(ResetSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  ResetSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_596FC17 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FC17 = 1;
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
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ResetSelectDialog__OnClickCenter(ResetSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  struct ResetSelectDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596FC1C & 1) == 0 )
  {
    sub_2213A60(&Method_ResetSelectDialog_OnClickCenter__);
    byte_596FC1C = 1;
  }
  if ( !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v3 = Method_ResetSelectDialog_OnClickCenter__;
    v4 = 8 * this->fields.isCenterDecide;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ResetSelectDialog_OnClickCenter__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0, 0);
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

  if ( (byte_596FC1B & 1) == 0 )
  {
    sub_2213A60(&Method_ResetSelectDialog_OnClickLeft__);
    byte_596FC1B = 1;
  }
  if ( !this->fields.isNoCancel && !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v3 = Method_ResetSelectDialog_OnClickLeft__;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ResetSelectDialog_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596FC1D & 1) == 0 )
  {
    sub_2213A60(&Method_ResetSelectDialog_OnClickRight__);
    byte_596FC1D = 1;
  }
  if ( !this->fields.isEnd )
  {
    this->fields.isEnd = 1;
    v3 = Method_ResetSelectDialog_OnClickRight__;
    if ( (*((_BYTE *)Method_ResetSelectDialog_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ResetSelectDialog_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596FC1E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16265/*"Window/LeftButton"*/);
    byte_596FC1E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16265/*"Window/LeftButton"*/, 0);
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
  System_String_o *centerButton; // x0
  __int64 v17; // x1
  bool IsNullOrEmpty; // w8
  UISprite_o *leftButtonSprite; // x24
  int32_t *p_twoButtonMessageSize; // x8
  int32_t v21; // w24
  UISprite_o *v22; // x24
  int32_t threeButtonNoCancelMessageSize; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Action_c *v32; // x0
  System_Action_o *v33; // x20
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FC18 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ResetSelectDialog_EndOpen__);
    sub_2213A60(&ResetSelectDialog_TypeInfo);
    sub_2213A60(&StringLiteral_5794/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_CANCEL"*/);
    byte_596FC18 = 1;
  }
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, title);
  centerButton = LocalizationManager__Get((System_String_o *)StringLiteral_5794/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_CANCEL"*/, 0);
  if ( !leftButtonLabel )
    goto LABEL_57;
  UILabel__set_text(leftButtonLabel, centerButton, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(centerText, 0);
  centerButton = (System_String_o *)this->fields.centerButton;
  if ( IsNullOrEmpty )
  {
    if ( !centerButton )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 0, 0);
    centerButton = (System_String_o *)this->fields.leftButton;
    if ( !centerButton )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 1, 0);
    centerButton = (System_String_o *)this->fields.rightButton;
    if ( !centerButton )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 1, 0);
    centerButton = (System_String_o *)this->fields.rightButtonLabel;
    if ( !centerButton )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)centerButton, rightText, 0);
    v34.fields.z = 0.0;
    v34.fields.x = this->fields.twoButtonLeftX;
    v34.fields.y = this->fields.twoButtonLeftY;
    GameObjectExtensions__SetLocalPosition(this->fields.leftButton, v34, 0);
    v35.fields.z = 0.0;
    v35.fields.x = this->fields.twoButtonRightX;
    v35.fields.y = this->fields.twoButtonRightY;
    GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v35, 0);
    leftButtonSprite = this->fields.leftButtonSprite;
    centerButton = (System_String_o *)ResetSelectDialog_TypeInfo;
    if ( !*(&ResetSelectDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ResetSelectDialog_TypeInfo, v17);
    if ( !leftButtonSprite )
      goto LABEL_57;
    UISprite__set_spriteName(leftButtonSprite, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01, 0);
    centerButton = (System_String_o *)this->fields.rightButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UISprite__set_spriteName((UISprite_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01, 0);
    centerButton = (System_String_o *)this->fields.leftButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_width((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH, 0);
    centerButton = (System_String_o *)this->fields.leftButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_height((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_01_HEIGHT, 0);
    centerButton = (System_String_o *)this->fields.rightButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_width((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH, 0);
    centerButton = (System_String_o *)this->fields.rightButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_height((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_01_HEIGHT, 0);
    centerButton = (System_String_o *)this->fields.leftButtonLabel;
    if ( !centerButton )
      goto LABEL_57;
    UILabel__set_fontSize((UILabel_o *)centerButton, this->fields.twoButtonFontSize, 0);
    centerButton = (System_String_o *)this->fields.rightButtonLabel;
    if ( !centerButton )
      goto LABEL_57;
    UILabel__set_fontSize((UILabel_o *)centerButton, this->fields.twoButtonFontSize, 0);
    centerButton = (System_String_o *)this->fields.messageLabel;
    if ( !centerButton )
      goto LABEL_57;
    p_twoButtonMessageSize = &this->fields.twoButtonMessageSize;
    v21 = 1;
  }
  else
  {
    if ( !centerButton )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 1, 0);
    centerButton = (System_String_o *)this->fields.leftButton;
    if ( !centerButton )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 1, 0);
    centerButton = (System_String_o *)this->fields.rightButton;
    if ( !centerButton )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 1, 0);
    centerButton = (System_String_o *)this->fields.centerButtonLabel;
    if ( !centerButton )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)centerButton, centerText, 0);
    centerButton = (System_String_o *)this->fields.rightButtonLabel;
    if ( !centerButton )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)centerButton, rightText, 0);
    v36.fields.z = 0.0;
    v36.fields.x = this->fields.threeButtonLeftX;
    v36.fields.y = this->fields.threeButtonLeftY;
    GameObjectExtensions__SetLocalPosition(this->fields.leftButton, v36, 0);
    v37.fields.z = 0.0;
    v37.fields.x = this->fields.threeButtonCenterX;
    v37.fields.y = this->fields.threeButtonCenterY;
    GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v37, 0);
    v38.fields.z = 0.0;
    v38.fields.x = this->fields.threeButtonRightX;
    v38.fields.y = this->fields.threeButtonRightY;
    GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v38, 0);
    v22 = this->fields.leftButtonSprite;
    centerButton = (System_String_o *)ResetSelectDialog_TypeInfo;
    if ( !*(&ResetSelectDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ResetSelectDialog_TypeInfo, v17);
    if ( !v22 )
      goto LABEL_57;
    UISprite__set_spriteName(v22, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_01, 0);
    centerButton = (System_String_o *)this->fields.centerButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UISprite__set_spriteName((UISprite_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_03, 0);
    centerButton = (System_String_o *)this->fields.rightButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UISprite__set_spriteName((UISprite_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_NAME_03, 0);
    centerButton = (System_String_o *)this->fields.leftButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_width((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_01_WIDTH, 0);
    centerButton = (System_String_o *)this->fields.leftButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_height((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_01_HEIGHT, 0);
    centerButton = (System_String_o *)this->fields.centerButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_width((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_03_WIDTH, 0);
    centerButton = (System_String_o *)this->fields.centerButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_height((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_03_HEIGHT, 0);
    centerButton = (System_String_o *)this->fields.rightButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_width((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_03_WIDTH, 0);
    centerButton = (System_String_o *)this->fields.rightButtonSprite;
    if ( !centerButton )
      goto LABEL_57;
    UIWidget__set_height((UIWidget_o *)centerButton, ResetSelectDialog_TypeInfo->static_fields->BTN_03_HEIGHT, 0);
    if ( isNoCancel )
    {
      v39.fields.z = 0.0;
      v39.fields.x = this->fields.twoButtonLeftX;
      v39.fields.y = this->fields.twoButtonLeftY;
      GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v39, 0);
      v40.fields.z = 0.0;
      v40.fields.x = this->fields.twoButtonRightX;
      v40.fields.y = this->fields.twoButtonRightY;
      GameObjectExtensions__SetLocalPosition(this->fields.rightButton, v40, 0);
      centerButton = (System_String_o *)this->fields.messageLabel;
      if ( !centerButton )
        goto LABEL_57;
      threeButtonNoCancelMessageSize = this->fields.threeButtonNoCancelMessageSize;
    }
    else
    {
      centerButton = (System_String_o *)this->fields.titleLabel;
      if ( !centerButton )
        goto LABEL_57;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)centerButton, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.threeButtonTitleY, 0);
      centerButton = (System_String_o *)this->fields.messageLabel;
      if ( !centerButton )
        goto LABEL_57;
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)centerButton, 0);
      GameObjectExtensions__SetLocalPositionY(v25, (float)this->fields.threeButtonMessageY, 0);
      centerButton = (System_String_o *)this->fields.windowSprite;
      if ( !centerButton )
        goto LABEL_57;
      UIWidget__set_height((UIWidget_o *)centerButton, this->fields.threeButtonWindowSize, 0);
      centerButton = (System_String_o *)this->fields.messageLabel;
      if ( !centerButton )
        goto LABEL_57;
      threeButtonNoCancelMessageSize = this->fields.threeButtonMessageSize;
    }
    UILabel__set_fontSize((UILabel_o *)centerButton, threeButtonNoCancelMessageSize, 0);
    centerButton = (System_String_o *)this->fields.leftButtonLabel;
    if ( !centerButton )
      goto LABEL_57;
    UILabel__set_fontSize((UILabel_o *)centerButton, this->fields.threeButtonCancelFontSize, 0);
    centerButton = (System_String_o *)this->fields.centerButtonLabel;
    if ( !centerButton )
      goto LABEL_57;
    UILabel__set_fontSize((UILabel_o *)centerButton, this->fields.threeButtonFontSize, 0);
    centerButton = (System_String_o *)this->fields.rightButtonLabel;
    if ( !centerButton )
      goto LABEL_57;
    p_twoButtonMessageSize = &this->fields.threeButtonFontSize;
    v21 = 2;
  }
  UILabel__set_fontSize((UILabel_o *)centerButton, *p_twoButtonMessageSize, 0);
  this->fields.rightButtonNo = v21;
  this->fields.isNoCancel = isNoCancel;
  if ( isNoCancel )
  {
    centerButton = (System_String_o *)this->fields.leftButton;
    if ( !centerButton )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)centerButton, 0, 0);
    GameObjectExtensions__SetLocalPositionX(this->fields.centerButton, this->fields.twoButtonLeftX, 0);
    GameObjectExtensions__SetLocalPositionX(this->fields.rightButton, this->fields.twoButtonRightX, 0);
  }
  centerButton = (System_String_o *)this->fields.titleLabel;
  if ( !centerButton
    || (UILabel__set_text((UILabel_o *)centerButton, title, 0),
        (centerButton = (System_String_o *)this->fields.messageLabel) == 0) )
  {
LABEL_57:
    sub_2213CDC(centerButton, v17);
  }
  WrapControlText__fontSizeAdjust((UILabel_o *)centerButton, message, centerButton[17].fields._stringLength, 0);
  this->fields.clickFunc = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v26, v27, v28, v29, v30, v31);
  v32 = System_Action_TypeInfo;
  this->fields.isEnd = 0;
  v33 = (System_Action_o *)sub_2213CCC(v32);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_ResetSelectDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_c *v19; // x0
  System_Action_o *v20; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FC19 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ResetSelectDialog_EndOpen__);
    sub_2213A60(&ResetSelectDialog_TypeInfo);
    byte_596FC19 = 1;
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
  if ( !*(&ResetSelectDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResetSelectDialog_TypeInfo, title);
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
  v21.fields.z = 0.0;
  v21.fields.x = this->fields.oneButtonCenterX;
  v21.fields.y = this->fields.oneButtonCenterY;
  GameObjectExtensions__SetLocalPosition(this->fields.centerButton, v21, 0);
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
    sub_2213CDC(centerButton, title);
  }
  WrapControlText__fontSizeAdjust((UILabel_o *)centerButton, message, *((_DWORD *)centerButton + 106), 0);
  this->fields.clickFunc = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v13, v14, v15, v16, v17, v18);
  v19 = System_Action_TypeInfo;
  this->fields.isEnd = 0;
  v20 = (System_Action_o *)sub_2213CCC(v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ResetSelectDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
}


void ResetSelectDialog_ClickDelegate___ctor(
        ResetSelectDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200D218;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200D1D0;
}


System_IAsyncResult_o *ResetSelectDialog_ClickDelegate__BeginInvoke(
        ResetSelectDialog_ClickDelegate_o *this,
        int32_t selectNo,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = selectNo;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void ResetSelectDialog_ClickDelegate__EndInvoke(
        ResetSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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