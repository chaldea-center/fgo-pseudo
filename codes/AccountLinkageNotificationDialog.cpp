void __fastcall AccountLinkageNotificationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A1AA8A & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageNotificationDialog_TypeInfo, v1);
    byte_4A1AA8A = 1;
  }
  *AccountLinkageNotificationDialog_TypeInfo->static_fields = (struct AccountLinkageNotificationDialog_StaticFields)0x1B42100000LL;
}


void __fastcall AccountLinkageNotificationDialog___ctor(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A1AA89 & 1) == 0 )
  {
    sub_1B715CC(&BaseDialog_TypeInfo, method);
    byte_4A1AA89 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall AccountLinkageNotificationDialog__Close(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageNotificationDialog__Close_30301808(this, 0LL, v2);
}


void __fastcall AccountLinkageNotificationDialog__Close_30301808(
        AccountLinkageNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4A1AA86 & 1) == 0 )
  {
    sub_1B715CC(&Method_AccountLinkageNotificationDialog_EndClose__, callback);
    sub_1B715CC(&System_Action_TypeInfo, v5);
    byte_4A1AA86 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B71570(&this->fields.closeEndFunc);
  v6 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageNotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
}


void __fastcall AccountLinkageNotificationDialog__EndClose(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
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
    *p_closeEndFunc = 0LL;
    sub_1B71570(p_closeEndFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall AccountLinkageNotificationDialog__Init(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonLabel; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4A1AA84 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&StringLiteral_1/*""*/, v3);
    byte_4A1AA84 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_15:
    sub_1B71828(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v8);
}


void __fastcall AccountLinkageNotificationDialog__OnClickOk(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o **p_clickFunc; // x0
  struct System_Action_o *clickFunc; // x20

  if ( (byte_4A1AA87 & 1) == 0 )
  {
    sub_1B715CC(&Method_AccountLinkageNotificationDialog_OnClickOk__, method);
    byte_4A1AA87 = 1;
  }
  v3 = Method_AccountLinkageNotificationDialog_OnClickOk__;
  if ( (*((_BYTE *)Method_AccountLinkageNotificationDialog_OnClickOk__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B715E4();
  v4 = (System_Reflection_MethodBase_o *)sub_1B715B0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  p_clickFunc = &this->fields.clickFunc;
  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    *p_clickFunc = 0LL;
    sub_1B71570(p_clickFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      *(_QWORD *)&clickFunc->fields.extra_arg);
  }
  else
  {
    AccountLinkageNotificationDialog__Close_30301808(this, 0LL, v5);
  }
}


void __fastcall AccountLinkageNotificationDialog__OnEnable(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A1AA88 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_15602/*"Window/OkBtn"*/, method);
    byte_4A1AA88 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41734596(transform, (System_String_o *)StringLiteral_15602/*"Window/OkBtn"*/, 0LL);
}


void __fastcall AccountLinkageNotificationDialog__Open(
        AccountLinkageNotificationDialog_o *this,
        System_String_o *message,
        System_Action_o *func,
        System_Nullable_float__o msgPosY,
        System_Nullable_int__o msgFontSize,
        int32_t spacingY,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *messageLabel; // x24
  unsigned __int64 MESSAGE_FONT_SIZE; // x1
  float value; // s8
  AccountLinkageNotificationDialog_c *v24; // x0
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  AccountLinkageNotificationDialog_c *v27; // x0
  System_String_o *v28; // x1
  UnityEngine_Object_o *buttonLabel; // x20
  const MethodInfo *v30; // x3
  UILabel_o *v31; // x20

  if ( (byte_4A1AA85 & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageNotificationDialog_TypeInfo, message);
    sub_1B715CC(&LocalizationManager_TypeInfo, v13);
    sub_1B715CC(&Method_System_Nullable_float__GetValueOrDefault__, v14);
    sub_1B715CC(&Method_System_Nullable_int__GetValueOrDefault__, v15);
    sub_1B715CC(&Method_System_Nullable_float__get_HasValue__, v16);
    sub_1B715CC(&Method_System_Nullable_int__get_HasValue__, v17);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v18);
    sub_1B715CC(&StringLiteral_3738/*"COMMON_CONFIRM_CLOSE"*/, v19);
    sub_1B715CC(&StringLiteral_1/*""*/, v20);
    byte_4A1AA85 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B71570(&this->fields.clickFunc);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    if ( msgPosY.fields.hasValue )
    {
      value = msgPosY.fields.value;
    }
    else
    {
      v24 = AccountLinkageNotificationDialog_TypeInfo;
      if ( !AccountLinkageNotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageNotificationDialog_TypeInfo);
        v24 = AccountLinkageNotificationDialog_TypeInfo;
      }
      value = v24->static_fields->MESSAGE_BASE_POS_Y;
    }
    v25 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v25 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject(v25, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0LL);
    if ( msgFontSize.fields.hasValue )
    {
      MESSAGE_FONT_SIZE = HIDWORD(*(unsigned __int64 *)&msgFontSize);
    }
    else
    {
      v27 = AccountLinkageNotificationDialog_TypeInfo;
      if ( !AccountLinkageNotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageNotificationDialog_TypeInfo);
        v27 = AccountLinkageNotificationDialog_TypeInfo;
      }
      MESSAGE_FONT_SIZE = (unsigned int)v27->static_fields->MESSAGE_FONT_SIZE;
    }
    v25 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v25 )
      goto LABEL_32;
    UILabel__set_fontSize((UILabel_o *)v25, MESSAGE_FONT_SIZE, 0LL);
    v25 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v25 )
      goto LABEL_32;
    v28 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v25, v28, 0LL);
    v25 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v25 )
      goto LABEL_32;
    UILabel__set_spacingY((UILabel_o *)v25, spacingY, 0LL);
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonLabel, 0LL, 0LL) )
  {
    v31 = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v31 )
    {
      UILabel__set_text(v31, (System_String_o *)v25, 0LL);
      goto LABEL_31;
    }
LABEL_32:
    sub_1B71828(v25, MESSAGE_FONT_SIZE);
  }
LABEL_31:
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, v30);
}