void __fastcall UserPresentDialog___cctor(const MethodInfo *method)
{
  if ( (byte_42AE0E6 & 1) == 0 )
  {
    sub_B52984(&UserPresentDialog_TypeInfo);
    byte_42AE0E6 = 1;
  }
  UserPresentDialog_TypeInfo->static_fields->MESSAGE_RECIEVE_POS_Y = 50;
  UserPresentDialog_TypeInfo->static_fields->LEFT_POS_X = -158;
  UserPresentDialog_TypeInfo->static_fields->SUB_TITLE_RECIEVE_POS_Y = -98;
}


void __fastcall UserPresentDialog___ctor(UserPresentDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0LL);
}


void __fastcall UserPresentDialog__Init(UserPresentDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0LL);
}


void __fastcall UserPresentDialog__OpenRecieve(
        UserPresentDialog_o *this,
        System_String_o *message,
        System_Action_o *closeAction,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *messageRoot; // x23
  UserPresentDialog_c *v10; // x0
  UILabel_o *subtitle; // x23
  System_String_o *decideButton; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *subtitleSmall; // x23
  System_String_o *v16; // x24
  BalanceConfig_c *v17; // x8
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x19
  int32_t PresentBoxCheckMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42AE0E4 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UserPresentDialog_TypeInfo);
    sub_B52984(&StringLiteral_10589/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/);
    sub_B52984(&StringLiteral_10592/*"PRESENT_RECIEVE_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_10591/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/);
    sub_B52984(&StringLiteral_10590/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/);
    sub_B52984(&StringLiteral_10588/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/);
    byte_42AE0E4 = 1;
  }
  messageRoot = this->fields.messageRoot;
  v10 = UserPresentDialog_TypeInfo;
  if ( (BYTE3(UserPresentDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentDialog_TypeInfo);
    v10 = UserPresentDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(messageRoot, (float)v10->static_fields->MESSAGE_RECIEVE_POS_Y, 0LL);
  subtitle = this->fields.subtitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10590/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, 0LL);
  if ( !subtitle )
    goto LABEL_19;
  UILabel__set_text(subtitle, decideButton, 0LL);
  decideButton = (System_String_o *)this->fields.subtitle;
  if ( !decideButton )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)decideButton, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)UserPresentDialog_TypeInfo->static_fields->SUB_TITLE_RECIEVE_POS_Y,
    0LL);
  subtitleSmall = this->fields.subtitleSmall;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10591/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, 0LL);
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  PresentBoxCheckMax = v17->static_fields->PresentBoxCheckMax;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxCheckMax);
  decideButton = System_String__Format(v16, v18, 0LL);
  if ( !subtitleSmall )
    goto LABEL_19;
  UILabel__set_text(subtitleSmall, decideButton, 0LL);
  GameObjectExtensions__SetLocalPositionX(
    this->fields.closeButton,
    (float)UserPresentDialog_TypeInfo->static_fields->LEFT_POS_X,
    0LL);
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10592/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v19, message, closeAction, decideAction, 0LL);
  closeLabel = this->fields.closeLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10588/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, decideButton, 0LL),
        decideLabel = this->fields.decideLabel,
        decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10589/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, 0LL),
        !decideLabel) )
  {
LABEL_19:
    sub_B52A5C(decideButton, v13);
  }
  UILabel__set_text(decideLabel, decideButton, 0LL);
}


System_String_o *__fastcall UserPresentDialog__get_closeBtnPath(UserPresentDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42AE0E5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15584/*"Window/CloseButton"*/);
    byte_42AE0E5 = 1;
  }
  return (System_String_o *)StringLiteral_15584/*"Window/CloseButton"*/;
}