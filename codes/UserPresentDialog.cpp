void __fastcall UserPresentDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct UserPresentDialog_StaticFields *static_fields; // x8

  if ( (byte_4B15021 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentDialog_TypeInfo, v1, v2);
    byte_4B15021 = 1;
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UserPresentDialog_c *v25; // x0
  UnityEngine_GameObject_o *messageRoot; // x23
  __int64 v27; // x1
  UILabel_o *subtitle; // x23
  System_String_o *decideButton; // x0
  __int64 v30; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *subtitleSmall; // x23
  System_String_o *v33; // x0
  __int64 v34; // x1
  BalanceConfig_c *v35; // x8
  System_String_o *v36; // x24
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x5
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x19
  int32_t PresentBoxCheckMax; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1501F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, message, closeAction);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UserPresentDialog_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_10593/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_10596/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_10595/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10594/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10592/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, v23, v24);
    byte_4B1501F = 1;
  }
  v25 = UserPresentDialog_TypeInfo;
  messageRoot = this->fields.messageRoot;
  if ( !UserPresentDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentDialog_TypeInfo, message);
    v25 = UserPresentDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(messageRoot, (float)v25->static_fields->MESSAGE_RECIEVE_POS_Y, 0LL);
  subtitle = this->fields.subtitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10594/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, 0LL);
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
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10595/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, 0LL);
  v35 = BalanceConfig_TypeInfo;
  v36 = v33;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v34);
    v35 = BalanceConfig_TypeInfo;
  }
  PresentBoxCheckMax = v35->static_fields->PresentBoxCheckMax;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxCheckMax);
  decideButton = System_String__Format(v36, v37, 0LL);
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
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_10596/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v38, message, closeAction, decideAction, v39);
  closeLabel = this->fields.closeLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10592/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, decideButton, 0LL),
        decideLabel = this->fields.decideLabel,
        decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10593/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, 0LL),
        !decideLabel) )
  {
LABEL_16:
    sub_1BCAA3C(decideButton, v30);
  }
  UILabel__set_text(decideLabel, decideButton, 0LL);
}


System_String_o *__fastcall UserPresentDialog__get_closeBtnPath(UserPresentDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15020 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15810/*"Window/CloseButton"*/, method, v2);
    byte_4B15020 = 1;
  }
  return (System_String_o *)StringLiteral_15810/*"Window/CloseButton"*/;
}