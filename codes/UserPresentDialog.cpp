void __fastcall UserPresentDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8083 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentDialog_TypeInfo, v1);
    byte_40F8083 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *messageRoot; // x23
  UserPresentDialog_c *v18; // x0
  UILabel_o *subtitle; // x23
  System_String_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *subtitleSmall; // x23
  System_String_o *v24; // x24
  BalanceConfig_c *v25; // x8
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  UnityEngine_GameObject_o *decideButton; // x0
  System_String_o *v29; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v31; // x0
  UILabel_o *decideLabel; // x19
  System_String_o *v33; // x0
  int32_t PresentBoxCheckMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F8081 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, message);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&UserPresentDialog_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_10483, v12);
    sub_B16FFC(&StringLiteral_10486, v13);
    sub_B16FFC(&StringLiteral_10485, v14);
    sub_B16FFC(&StringLiteral_10484, v15);
    sub_B16FFC(&StringLiteral_10482, v16);
    byte_40F8081 = 1;
  }
  messageRoot = this->fields.messageRoot;
  v18 = UserPresentDialog_TypeInfo;
  if ( (BYTE3(UserPresentDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentDialog_TypeInfo);
    v18 = UserPresentDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(messageRoot, (float)v18->static_fields->MESSAGE_RECIEVE_POS_Y, 0LL);
  subtitle = this->fields.subtitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10484, 0LL);
  if ( !subtitle )
    goto LABEL_19;
  UILabel__set_text(subtitle, v20, 0LL);
  v21 = (UnityEngine_Component_o *)this->fields.subtitle;
  if ( !v21 )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)UserPresentDialog_TypeInfo->static_fields->SUB_TITLE_RECIEVE_POS_Y,
    0LL);
  subtitleSmall = this->fields.subtitleSmall;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10485, 0LL);
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  PresentBoxCheckMax = v25->static_fields->PresentBoxCheckMax;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PresentBoxCheckMax);
  v27 = System_String__Format(v24, v26, 0LL);
  if ( !subtitleSmall )
    goto LABEL_19;
  UILabel__set_text(subtitleSmall, v27, 0LL);
  GameObjectExtensions__SetLocalPositionX(
    this->fields.closeButton,
    (float)UserPresentDialog_TypeInfo->static_fields->LEFT_POS_X,
    0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(decideButton, 1, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10486, 0LL);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v29, message, closeAction, decideAction, 0LL);
  closeLabel = this->fields.closeLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10482, 0LL);
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, v31, 0LL),
        decideLabel = this->fields.decideLabel,
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10483, 0LL),
        !decideLabel) )
  {
LABEL_19:
    sub_B170D4();
  }
  UILabel__set_text(decideLabel, v33, 0LL);
}


System_String_o *__fastcall UserPresentDialog__get_closeBtnPath(UserPresentDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F8082 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15416, method);
    byte_40F8082 = 1;
  }
  return (System_String_o *)StringLiteral_15416;
}