void __fastcall UserPresentDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct UserPresentDialog_StaticFields *static_fields; // x8

  if ( (byte_49FB1BD & 1) == 0 )
  {
    sub_1B640C8(&UserPresentDialog_TypeInfo, v1);
    byte_49FB1BD = 1;
  }
  static_fields = UserPresentDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_RECIEVE_POS_Y = 0xFFFFFF6200000032LL;
  static_fields->SUB_TITLE_RECIEVE_POS_Y = -98;
}


void __fastcall UserPresentDialog__OpenRecieve(
        UserPresentDialog_o *this,
        System_String_o *message,
        System_Action_o *closeAction,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UserPresentDialog_c *v17; // x0
  UnityEngine_GameObject_o *messageRoot; // x23
  UILabel_o *subtitle; // x23
  System_String_o *decideButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *subtitleSmall; // x23
  System_String_o *v23; // x0
  BalanceConfig_c *v24; // x8
  System_String_o *v25; // x24
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x5
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x19
  int32_t PresentBoxCheckMax; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FB1BB & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, message);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&UserPresentDialog_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_10410/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, v12);
    sub_1B640C8(&StringLiteral_10413/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, v13);
    sub_1B640C8(&StringLiteral_10412/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, v14);
    sub_1B640C8(&StringLiteral_10411/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, v15);
    sub_1B640C8(&StringLiteral_10409/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, v16);
    byte_49FB1BB = 1;
  }
  v17 = UserPresentDialog_TypeInfo;
  messageRoot = this->fields.messageRoot;
  if ( !UserPresentDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentDialog_TypeInfo);
    v17 = UserPresentDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(messageRoot, (float)v17->static_fields->MESSAGE_RECIEVE_POS_Y, 0LL);
  subtitle = this->fields.subtitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10411/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, 0LL);
  if ( !subtitle )
    goto LABEL_16;
  UILabel__set_text(subtitle, decideButton, 0LL);
  decideButton = (System_String_o *)this->fields.subtitle;
  if ( !decideButton )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)decideButton, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)UserPresentDialog_TypeInfo->static_fields->SUB_TITLE_RECIEVE_POS_Y,
    0LL);
  subtitleSmall = this->fields.subtitleSmall;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10412/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, 0LL);
  v24 = BalanceConfig_TypeInfo;
  v25 = v23;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  PresentBoxCheckMax = v24->static_fields->PresentBoxCheckMax;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxCheckMax);
  decideButton = System_String__Format(v25, v26, 0LL);
  if ( !subtitleSmall )
    goto LABEL_16;
  UILabel__set_text(subtitleSmall, decideButton, 0LL);
  GameObjectExtensions__SetLocalPositionX(
    this->fields.closeButton,
    (float)UserPresentDialog_TypeInfo->static_fields->LEFT_POS_X,
    0LL);
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_10413/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v27, message, closeAction, decideAction, v28);
  closeLabel = this->fields.closeLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10409/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, decideButton, 0LL),
        decideLabel = this->fields.decideLabel,
        decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10410/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, 0LL),
        !decideLabel) )
  {
LABEL_16:
    sub_1B64324(decideButton);
  }
  UILabel__set_text(decideLabel, decideButton, 0LL);
}


System_String_o *__fastcall UserPresentDialog__get_closeBtnPath(UserPresentDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FB1BC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15575/*"Window/CloseButton"*/, method);
    byte_49FB1BC = 1;
  }
  return (System_String_o *)StringLiteral_15575/*"Window/CloseButton"*/;
}