void __fastcall NotificationIconDialog___ctor(NotificationIconDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B06B2 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B06B2 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationIconDialog__Close(NotificationIconDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationIconDialog__Close_25792828(this, 0LL, v2);
}


void __fastcall NotificationIconDialog__Close_25792828(
        NotificationIconDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B06AF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_NotificationIconDialog_EndClose__);
    byte_42B06AF = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_NotificationIconDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall NotificationIconDialog__EndClose(NotificationIconDialog_o *this, const MethodInfo *method)
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

  NotificationIconDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B52920(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall NotificationIconDialog__EndOpen(NotificationIconDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationIconDialog__Init(NotificationIconDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_42B06AD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B06AD = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_23;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
      goto LABEL_23;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.okBtnLabel;
    if ( !gameObject )
      goto LABEL_23;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_23:
    sub_B52A5C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationIconDialog__OnClickOk(NotificationIconDialog_o *this, const MethodInfo *method)
{
  int32_t onClickOkSeKind; // w20
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  System_Action_o *clickFunc; // x0

  if ( (byte_42B06B0 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B06B0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    onClickOkSeKind = this->fields.onClickOkSeKind;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(onClickOkSeKind, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v5);
    CommonUI__CloseNotificationIconDialog(Instance, 0LL, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      System_Action__Invoke(clickFunc, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationIconDialog__Open(
        NotificationIconDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t type,
        int32_t objectId,
        System_Action_o *func,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  UnityEngine_Object_o *titleLabel; // x24
  __int64 v15; // x1
  UILabel_o *v16; // x0
  System_String_o *v17; // x1
  UnityEngine_Object_o *messageLabel; // x23
  System_String_o *v19; // x1
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v21; // x22
  UnityEngine_Object_o *itemIconComponent; // x22
  System_Action_o *v23; // x20

  if ( (byte_42B06AE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_NotificationIconDialog_EndOpen__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B06AE = 1;
  }
  this->fields.clickFunc = func;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)message,
    *(System_String_array ***)&type,
    *(System_Boolean_array ***)&objectId,
    (System_Int32_array **)func,
    (System_Int32_array *)method,
    v7);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v16 = this->fields.titleLabel;
    if ( !v16 )
      goto LABEL_37;
    if ( title )
      v17 = title;
    else
      v17 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v16, v17, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v16 = this->fields.messageLabel;
    if ( !v16 )
      goto LABEL_37;
    if ( message )
      v19 = message;
    else
      v19 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v16, v19, v16->fields.mFontSize, 0, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v21 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v21 )
      goto LABEL_37;
    UILabel__set_text(v21, (System_String_o *)v16, 0LL);
  }
  itemIconComponent = (UnityEngine_Object_o *)this->fields.itemIconComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemIconComponent, 0LL, 0LL) )
  {
    v16 = (UILabel_o *)this->fields.itemIconComponent;
    if ( v16 )
    {
      ItemIconComponent__SetGift((ItemIconComponent_o *)v16, type, objectId, -1, 0, 0LL);
      goto LABEL_36;
    }
LABEL_37:
    sub_B52A5C(v16, v15);
  }
LABEL_36:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_NotificationIconDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
}


System_String_o *__fastcall NotificationIconDialog__get_closeBtnPath(
        NotificationIconDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B06B1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15593/*"Window/OkBtn"*/);
    byte_42B06B1 = 1;
  }
  return (System_String_o *)StringLiteral_15593/*"Window/OkBtn"*/;
}