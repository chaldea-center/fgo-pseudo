void AccountLinkageNotificationDialog___cctor(const MethodInfo *method)
{
  if ( (byte_5969DF0 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageNotificationDialog_TypeInfo);
    byte_5969DF0 = 1;
  }
  *AccountLinkageNotificationDialog_TypeInfo->static_fields = (struct AccountLinkageNotificationDialog_StaticFields)0x1B42100000LL;
}


void AccountLinkageNotificationDialog___ctor(AccountLinkageNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5969DEF & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969DEF = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountLinkageNotificationDialog__Close(AccountLinkageNotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageNotificationDialog__Close_37272596(this, 0, v2);
}


void AccountLinkageNotificationDialog__Close_37272596(
        AccountLinkageNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5969DEC & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageNotificationDialog_EndClose__);
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969DEC = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_2213A04(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_AccountLinkageNotificationDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void AccountLinkageNotificationDialog__EndClose(AccountLinkageNotificationDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  AccountLinkageNotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_2213A04(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void AccountLinkageNotificationDialog__Init(AccountLinkageNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonLabel; // x20
  const MethodInfo *v9; // x1

  if ( (byte_5969DEA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969DEA = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(buttonLabel, 0, 0) )
  {
    gameObject = this->fields.buttonLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_15:
    sub_2213CDC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v9);
}


void AccountLinkageNotificationDialog__OnClickOk(AccountLinkageNotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o **p_clickFunc; // x0
  struct System_Action_o *clickFunc; // x20

  if ( (byte_5969DED & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageNotificationDialog_OnClickOk__);
    byte_5969DED = 1;
  }
  v3 = Method_AccountLinkageNotificationDialog_OnClickOk__;
  if ( (*((_BYTE *)Method_AccountLinkageNotificationDialog_OnClickOk__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78();
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  p_clickFunc = &this->fields.clickFunc;
  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    *p_clickFunc = 0;
    sub_2213A04(p_clickFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      clickFunc->fields.method);
  }
  else
  {
    AccountLinkageNotificationDialog__Close_37272596(this, 0, v5);
  }
}


void AccountLinkageNotificationDialog__OnEnable(AccountLinkageNotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5969DEE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16270/*"Window/OkBtn"*/);
    byte_5969DEE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16270/*"Window/OkBtn"*/, 0);
}


void AccountLinkageNotificationDialog__Open(
        AccountLinkageNotificationDialog_o *this,
        System_String_o *message,
        System_Action_o *func,
        System_Nullable_float__o msgPosY,
        System_Nullable_int__o msgFontSize,
        int32_t spacingY,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *messageLabel; // x24
  unsigned __int64 MESSAGE_FONT_SIZE; // x1
  __int64 v17; // x2
  float value; // s8
  AccountLinkageNotificationDialog_c *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  AccountLinkageNotificationDialog_c *v24; // x0
  System_String_o *v25; // x1
  UnityEngine_Object_o *buttonLabel; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x4
  UILabel_o *v30; // x20

  if ( (byte_5969DEB & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageNotificationDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_float__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969DEB = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(&this->fields.clickFunc, func);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    if ( msgPosY.fields.hasValue )
    {
      value = msgPosY.fields.value;
    }
    else
    {
      v19 = AccountLinkageNotificationDialog_TypeInfo;
      if ( !*(&AccountLinkageNotificationDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageNotificationDialog_TypeInfo, MESSAGE_FONT_SIZE, v17);
        v19 = AccountLinkageNotificationDialog_TypeInfo;
      }
      value = v19->static_fields->MESSAGE_BASE_POS_Y;
    }
    v20 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v20 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject(v20, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0);
    if ( msgFontSize.fields.hasValue )
    {
      MESSAGE_FONT_SIZE = HIDWORD(*(unsigned __int64 *)&msgFontSize);
    }
    else
    {
      v24 = AccountLinkageNotificationDialog_TypeInfo;
      if ( !*(&AccountLinkageNotificationDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageNotificationDialog_TypeInfo, v22, v23);
        v24 = AccountLinkageNotificationDialog_TypeInfo;
      }
      MESSAGE_FONT_SIZE = (unsigned int)v24->static_fields->MESSAGE_FONT_SIZE;
    }
    v20 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v20 )
      goto LABEL_32;
    UILabel__set_fontSize((UILabel_o *)v20, MESSAGE_FONT_SIZE, 0);
    v20 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v20 )
      goto LABEL_32;
    v25 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v20, v25, 0);
    v20 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v20 )
      goto LABEL_32;
    UILabel__set_spacingY((UILabel_o *)v20, spacingY, 0);
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, MESSAGE_FONT_SIZE, v17);
  if ( UnityEngine_Object__op_Inequality(buttonLabel, 0, 0) )
  {
    v30 = this->fields.buttonLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
    v20 = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( v30 )
    {
      UILabel__set_text(v30, (System_String_o *)v20, 0);
      goto LABEL_31;
    }
LABEL_32:
    sub_2213CDC(v20, MESSAGE_FONT_SIZE);
  }
LABEL_31:
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, v29);
}