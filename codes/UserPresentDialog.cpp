void __fastcall UserPresentDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct UserPresentDialog_StaticFields *static_fields; // x8

  if ( (byte_49FD8D5 & 1) == 0 )
  {
    sub_1B64A00(&UserPresentDialog_TypeInfo, v1);
    byte_49FD8D5 = 1;
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
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *subtitleSmall; // x23
  System_String_o *v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  BalanceConfig_c *v28; // x8
  System_String_o *v29; // x24
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x5
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x19
  int32_t PresentBoxCheckMax; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FD8D3 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, message);
    sub_1B64A00(&int_TypeInfo, v9);
    sub_1B64A00(&LocalizationManager_TypeInfo, v10);
    sub_1B64A00(&UserPresentDialog_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_10412/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, v12);
    sub_1B64A00(&StringLiteral_10415/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, v13);
    sub_1B64A00(&StringLiteral_10414/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, v14);
    sub_1B64A00(&StringLiteral_10413/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, v15);
    sub_1B64A00(&StringLiteral_10411/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, v16);
    byte_49FD8D3 = 1;
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
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10413/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, 0LL);
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
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10414/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, 0LL);
  v28 = BalanceConfig_TypeInfo;
  v29 = v24;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  PresentBoxCheckMax = v28->static_fields->PresentBoxCheckMax;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxCheckMax, v25, v26, v27);
  decideButton = System_String__Format(v29, v30, 0LL);
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
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v31, message, closeAction, decideAction, v32);
  closeLabel = this->fields.closeLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10411/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, decideButton, 0LL),
        decideLabel = this->fields.decideLabel,
        decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10412/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, 0LL),
        !decideLabel) )
  {
LABEL_16:
    sub_1B64C5C(decideButton, v21);
  }
  UILabel__set_text(decideLabel, decideButton, 0LL);
}


System_String_o *__fastcall UserPresentDialog__get_closeBtnPath(UserPresentDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FD8D4 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15578/*"Window/CloseButton"*/, method);
    byte_49FD8D4 = 1;
  }
  return (System_String_o *)StringLiteral_15578/*"Window/CloseButton"*/;
}