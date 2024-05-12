void __fastcall AccountLinkageNotificationDialog___cctor(const MethodInfo *method)
{
  if ( (byte_438CDA4 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageNotificationDialog_TypeInfo);
    byte_438CDA4 = 1;
  }
  AccountLinkageNotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_POS_Y = 36.0;
  AccountLinkageNotificationDialog_TypeInfo->static_fields->MESSAGE_FONT_SIZE = 27;
}


void __fastcall AccountLinkageNotificationDialog___ctor(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438CDA3 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438CDA3 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AccountLinkageNotificationDialog__Close(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageNotificationDialog__Close_28531656(this, 0LL, v2);
}


void __fastcall AccountLinkageNotificationDialog__Close_28531656(
        AccountLinkageNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438CDA0 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageNotificationDialog_EndClose__);
    sub_B775C4(&System_Action_TypeInfo);
    byte_438CDA0 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AccountLinkageNotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall AccountLinkageNotificationDialog__EndClose(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  AccountLinkageNotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B77560(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall AccountLinkageNotificationDialog__Init(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *buttonLabel; // x20

  if ( (byte_438CD9E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CD9E = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_17;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonLabel;
    if ( !gameObject )
      goto LABEL_17;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_17:
    sub_B7769C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AccountLinkageNotificationDialog__OnClickOk(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_clickFunc; // x0
  System_Action_o *clickFunc; // x20

  if ( (byte_438CDA1 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageNotificationDialog_OnClickOk__);
    byte_438CDA1 = 1;
  }
  v3 = Method_AccountLinkageNotificationDialog_OnClickOk__;
  if ( (*((_BYTE *)Method_AccountLinkageNotificationDialog_OnClickOk__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC(Method_AccountLinkageNotificationDialog_OnClickOk__);
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    p_clickFunc->klass = 0LL;
    sub_B77560(p_clickFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(clickFunc, 0LL);
  }
  else
  {
    AccountLinkageNotificationDialog__Close_28531656(this, 0LL, (const MethodInfo *)v5);
  }
}


void __fastcall AccountLinkageNotificationDialog__OnEnable(
        AccountLinkageNotificationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_438CDA2 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&StringLiteral_15779/*"Window/OkBtn"*/);
    byte_438CDA2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_23834620(transform, (System_String_o *)StringLiteral_15779/*"Window/OkBtn"*/, 0LL);
}


void __fastcall AccountLinkageNotificationDialog__Open(
        AccountLinkageNotificationDialog_o *this,
        System_String_o *message,
        System_Action_o *func,
        System_Nullable_float__o msgPosY,
        System_Nullable_int__o msgFontSize,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Nullable_int__o v8; // x21
  UnityEngine_Object_o *messageLabel; // x23
  __int64 v14; // x1
  float value; // s8
  AccountLinkageNotificationDialog_c *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  AccountLinkageNotificationDialog_c *v19; // x0
  System_String_o *v20; // x1
  UnityEngine_Object_o *buttonLabel; // x20
  UILabel_o *v22; // x20

  v8 = msgFontSize;
  if ( (byte_438CD9F & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageNotificationDialog_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_int__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_float__get_HasValue__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CD9F = 1;
  }
  this->fields.clickFunc = func;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)func,
    *(System_String_array ***)&msgPosY,
    *(System_Boolean_array ***)&msgFontSize,
    (System_Int32_array **)method,
    v6,
    v7);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    if ( (*(_QWORD *)&msgPosY & 0xFF00000000LL) != 0 )
    {
      value = msgPosY.fields.value;
    }
    else
    {
      v16 = AccountLinkageNotificationDialog_TypeInfo;
      if ( (BYTE3(AccountLinkageNotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AccountLinkageNotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageNotificationDialog_TypeInfo);
        v16 = AccountLinkageNotificationDialog_TypeInfo;
      }
      value = v16->static_fields->MESSAGE_BASE_POS_Y;
    }
    v17 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v17 )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0LL);
    if ( (*(_QWORD *)&v8 & 0xFF00000000LL) == 0 )
    {
      v19 = AccountLinkageNotificationDialog_TypeInfo;
      if ( (BYTE3(AccountLinkageNotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AccountLinkageNotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageNotificationDialog_TypeInfo);
        v19 = AccountLinkageNotificationDialog_TypeInfo;
      }
      v8.fields.value = v19->static_fields->MESSAGE_FONT_SIZE;
    }
    v17 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v17 )
      goto LABEL_35;
    UILabel__set_fontSize((UILabel_o *)v17, v8.fields.value, 0LL);
    v17 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v17 )
      goto LABEL_35;
    if ( message )
      v20 = message;
    else
      v20 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v17, v20, 0LL);
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonLabel, 0LL, 0LL) )
  {
    v22 = this->fields.buttonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v22 )
    {
      UILabel__set_text(v22, (System_String_o *)v17, 0LL);
      goto LABEL_34;
    }
LABEL_35:
    sub_B7769C(v17, v14);
  }
LABEL_34:
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}