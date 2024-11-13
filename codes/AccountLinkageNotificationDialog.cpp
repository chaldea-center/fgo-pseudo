void __fastcall AccountLinkageNotificationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B10CFA & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageNotificationDialog_TypeInfo, v1, v2);
    byte_4B10CFA = 1;
  }
  *AccountLinkageNotificationDialog_TypeInfo->static_fields = (struct AccountLinkageNotificationDialog_StaticFields)0x1B42100000LL;
}


void __fastcall AccountLinkageNotificationDialog___ctor(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10CF9 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10CF9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall AccountLinkageNotificationDialog__Close(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageNotificationDialog__Close_30666660(this, 0LL, v2);
}


void __fastcall AccountLinkageNotificationDialog__Close_30666660(
        AccountLinkageNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B10CF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageNotificationDialog_EndClose__, callback, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    byte_4B10CF6 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(&this->fields.closeEndFunc, callback);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AccountLinkageNotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, v11);
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
    sub_1BCA784(p_closeEndFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall AccountLinkageNotificationDialog__Init(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v7; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonLabel; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4B10CF4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B10CF4 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_15;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    sub_1BCAA3C(gameObject, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v10);
}


void __fastcall AccountLinkageNotificationDialog__OnClickOk(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct System_Action_o **p_clickFunc; // x0
  struct System_Action_o *clickFunc; // x20

  if ( (byte_4B10CF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageNotificationDialog_OnClickOk__, method, v2);
    byte_4B10CF7 = 1;
  }
  v4 = Method_AccountLinkageNotificationDialog_OnClickOk__;
  if ( (*((_BYTE *)Method_AccountLinkageNotificationDialog_OnClickOk__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8();
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  p_clickFunc = &this->fields.clickFunc;
  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    *p_clickFunc = 0LL;
    sub_1BCA784(p_clickFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      *(_QWORD *)&clickFunc->fields.extra_arg);
  }
  else
  {
    AccountLinkageNotificationDialog__Close_30666660(this, 0LL, v6);
  }
}


void __fastcall AccountLinkageNotificationDialog__OnEnable(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B10CF8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15819/*"Window/OkBtn"*/, method, v2);
    byte_4B10CF8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15819/*"Window/OkBtn"*/, 0LL);
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  UnityEngine_Object_o *messageLabel; // x24
  unsigned __int64 MESSAGE_FONT_SIZE; // x1
  float value; // s8
  AccountLinkageNotificationDialog_c *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  AccountLinkageNotificationDialog_c *v37; // x0
  System_String_o *v38; // x1
  UnityEngine_Object_o *buttonLabel; // x20
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  UILabel_o *v42; // x20

  if ( (byte_4B10CF5 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageNotificationDialog_TypeInfo, message, func);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v15, v16);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v17, v18);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v19, v20);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B10CF5 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCA784(&this->fields.clickFunc, func);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    if ( msgPosY.fields.hasValue )
    {
      value = msgPosY.fields.value;
    }
    else
    {
      v33 = AccountLinkageNotificationDialog_TypeInfo;
      if ( !AccountLinkageNotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageNotificationDialog_TypeInfo, MESSAGE_FONT_SIZE);
        v33 = AccountLinkageNotificationDialog_TypeInfo;
      }
      value = v33->static_fields->MESSAGE_BASE_POS_Y;
    }
    v34 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v34 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject(v34, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0LL);
    if ( msgFontSize.fields.hasValue )
    {
      MESSAGE_FONT_SIZE = HIDWORD(*(unsigned __int64 *)&msgFontSize);
    }
    else
    {
      v37 = AccountLinkageNotificationDialog_TypeInfo;
      if ( !AccountLinkageNotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageNotificationDialog_TypeInfo, v36);
        v37 = AccountLinkageNotificationDialog_TypeInfo;
      }
      MESSAGE_FONT_SIZE = (unsigned int)v37->static_fields->MESSAGE_FONT_SIZE;
    }
    v34 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v34 )
      goto LABEL_32;
    UILabel__set_fontSize((UILabel_o *)v34, MESSAGE_FONT_SIZE, 0LL);
    v34 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v34 )
      goto LABEL_32;
    v38 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v34, v38, 0LL);
    v34 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v34 )
      goto LABEL_32;
    UILabel__set_spacingY((UILabel_o *)v34, spacingY, 0LL);
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, MESSAGE_FONT_SIZE);
  if ( UnityEngine_Object__op_Inequality(buttonLabel, 0LL, 0LL) )
  {
    v42 = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
    v34 = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v42 )
    {
      UILabel__set_text(v42, (System_String_o *)v34, 0LL);
      goto LABEL_31;
    }
LABEL_32:
    sub_1BCAA3C(v34, MESSAGE_FONT_SIZE);
  }
LABEL_31:
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, v41);
}