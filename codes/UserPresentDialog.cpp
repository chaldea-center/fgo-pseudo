void __fastcall UserPresentDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6A4D & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentDialog_TypeInfo, v1, v2, v3);
    byte_42E6A4D = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  UnityEngine_GameObject_o *messageRoot; // x23
  UserPresentDialog_c *v34; // x0
  UILabel_o *subtitle; // x23
  System_String_o *decideButton; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *subtitleSmall; // x23
  System_String_o *v40; // x24
  BalanceConfig_c *v41; // x8
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x19
  int32_t PresentBoxCheckMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E6A4B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)message, (_DWORD)closeAction, decideAction);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UserPresentDialog_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_10633/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_10636/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10635/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_10634/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_10632/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, v30, v31, v32);
    byte_42E6A4B = 1;
  }
  messageRoot = this->fields.messageRoot;
  v34 = UserPresentDialog_TypeInfo;
  if ( (BYTE3(UserPresentDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentDialog_TypeInfo);
    v34 = UserPresentDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(messageRoot, (float)v34->static_fields->MESSAGE_RECIEVE_POS_Y, 0LL);
  subtitle = this->fields.subtitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10634/*"PRESENT_RECIEVE_DIALOG_SUBTITLE"*/, 0LL);
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
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10635/*"PRESENT_RECIEVE_DIALOG_SUBTITLE_SMALL"*/, 0LL);
  v41 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  PresentBoxCheckMax = v41->static_fields->PresentBoxCheckMax;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxCheckMax);
  decideButton = System_String__Format(v40, v42, 0LL);
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
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_10636/*"PRESENT_RECIEVE_DIALOG_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v43, message, closeAction, decideAction, 0LL);
  closeLabel = this->fields.closeLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10632/*"PRESENT_RECIEVE_DIALOG_CANCEL"*/, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, decideButton, 0LL),
        decideLabel = this->fields.decideLabel,
        decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_10633/*"PRESENT_RECIEVE_DIALOG_DECIDE"*/, 0LL),
        !decideLabel) )
  {
LABEL_19:
    sub_B5D69C(decideButton, v37);
  }
  UILabel__set_text(decideLabel, decideButton, 0LL);
}


System_String_o *__fastcall UserPresentDialog__get_closeBtnPath(UserPresentDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6A4C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15669/*"Window/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E6A4C = 1;
  }
  return (System_String_o *)StringLiteral_15669/*"Window/CloseButton"*/;
}