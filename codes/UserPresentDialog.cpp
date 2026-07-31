void UserPresentDialog___cctor(const MethodInfo *method)
{
  struct UserPresentDialog_StaticFields *static_fields; // x8

  if ( (byte_593736F & 1) == 0 )
  {
    sub_21FFC50(&UserPresentDialog_TypeInfo);
    byte_593736F = 1;
  }
  static_fields = UserPresentDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_RECIEVE_POS_Y = 0xFFFFFF6200000032LL;
  static_fields->SUB_TITLE_RECIEVE_POS_Y = -98;
}


void UserPresentDialog___ctor(UserPresentDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0);
}


void UserPresentDialog__Init(UserPresentDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0);
}


void UserPresentDialog__OpenRecieve(
        UserPresentDialog_o *this,
        System_String_o *message,
        System_Action_o *closeAction,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  UserPresentDialog_c *v9; // x0
  UnityEngine_GameObject_o *messageRoot; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *subtitle; // x23
  System_String_o *decideButton; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *subtitleSmall; // x23
  System_String_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  BalanceConfig_c *v21; // x8
  System_String_o *v22; // x24
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x19
  int32_t PresentBoxCheckMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593736D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UserPresentDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_10880/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_10883/*"PRESENT_RECIEVE_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_10882/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/);
    sub_21FFC50(&StringLiteral_10881/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/);
    sub_21FFC50(&StringLiteral_10879/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/);
    byte_593736D = 1;
  }
  v9 = UserPresentDialog_TypeInfo;
  messageRoot = this->fields.messageRoot;
  if ( !*(&UserPresentDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentDialog_TypeInfo, message, closeAction);
    v9 = UserPresentDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(messageRoot, (float)v9->static_fields->MESSAGE_RECIEVE_POS_Y, 0);
  subtitle = this->fields.subtitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10881/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, 0);
  if ( !subtitle )
    goto LABEL_16;
  UILabel__set_text(subtitle, decideButton, 0);
  decideButton = (System_String_o *)this->fields.subtitle;
  if ( !decideButton )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)decideButton, 0);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)UserPresentDialog_TypeInfo->static_fields->SUB_TITLE_RECIEVE_POS_Y,
    0);
  subtitleSmall = this->fields.subtitleSmall;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10882/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, 0);
  v21 = BalanceConfig_TypeInfo;
  v22 = v18;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v20);
    v21 = BalanceConfig_TypeInfo;
  }
  PresentBoxCheckMax = v21->static_fields->PresentBoxCheckMax;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &PresentBoxCheckMax);
  decideButton = System_String__Format(v22, v23, 0);
  if ( !subtitleSmall )
    goto LABEL_16;
  UILabel__set_text(subtitleSmall, decideButton, 0);
  GameObjectExtensions__SetLocalPositionX(
    this->fields.closeButton,
    (float)UserPresentDialog_TypeInfo->static_fields->LEFT_POS_X,
    0);
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, 0);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v24, message, closeAction, decideAction, 0);
  closeLabel = this->fields.closeLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10879/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, 0);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, decideButton, 0),
        decideLabel = this->fields.decideLabel,
        decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10880/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, 0),
        !decideLabel) )
  {
LABEL_16:
    sub_21FFECC(decideButton, v15);
  }
  UILabel__set_text(decideLabel, decideButton, 0);
}


System_String_o *UserPresentDialog__get_closeBtnPath(UserPresentDialog_o *this, const MethodInfo *method)
{
  if ( (byte_593736E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    byte_593736E = 1;
  }
  return (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/;
}