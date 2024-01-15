void __fastcall NotificationIconDialog___ctor(NotificationIconDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F9378 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F9378 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationIconDialog__Close(NotificationIconDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationIconDialog__Close_23734340(this, 0LL, v2);
}


void __fastcall NotificationIconDialog__Close_23734340(
        NotificationIconDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F9375 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_NotificationIconDialog_EndClose__, v10);
    byte_40F9375 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_NotificationIconDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall NotificationIconDialog__EndOpen(NotificationIconDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationIconDialog__Init(NotificationIconDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *v5; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v7; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9373 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F9373 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v5 = this->fields.titleLabel;
    if ( !v5 )
      goto LABEL_23;
    UILabel__set_text(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v7 = this->fields.messageLabel;
    if ( !v7 )
      goto LABEL_23;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v9 = this->fields.okBtnLabel;
    if ( !v9 )
      goto LABEL_23;
    UILabel__set_text(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_23:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationIconDialog__OnClickOk(NotificationIconDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t onClickOkSeKind; // w20
  CommonUI_o *Instance; // x0
  System_Action_o *clickFunc; // x0

  if ( (byte_40F9376 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F9376 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v20; // x0
  System_String_o *v21; // x1
  UnityEngine_Object_o *messageLabel; // x23
  struct UILabel_o *v23; // x0
  System_String_o *v24; // x1
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v26; // x22
  System_String_o *v27; // x0
  UnityEngine_Object_o *itemIconComponent; // x22
  ItemIconComponent_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x20

  if ( (byte_40F9374 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_NotificationIconDialog_EndOpen__, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v17);
    sub_B16FFC(&StringLiteral_1/*""*/, v18);
    byte_40F9374 = 1;
  }
  this->fields.clickFunc = func;
  sub_B16F98(
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
    v20 = this->fields.titleLabel;
    if ( !v20 )
      goto LABEL_37;
    if ( title )
      v21 = title;
    else
      v21 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v20, v21, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v23 = this->fields.messageLabel;
    if ( !v23 )
      goto LABEL_37;
    if ( message )
      v24 = message;
    else
      v24 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v23, v24, v23->fields.mFontSize, 0, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v26 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v26 )
      goto LABEL_37;
    UILabel__set_text(v26, v27, 0LL);
  }
  itemIconComponent = (UnityEngine_Object_o *)this->fields.itemIconComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemIconComponent, 0LL, 0LL) )
  {
    v29 = this->fields.itemIconComponent;
    if ( v29 )
    {
      ItemIconComponent__SetGift(v29, type, objectId, -1, 0, 0LL);
      goto LABEL_36;
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_36:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_NotificationIconDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
}


System_String_o *__fastcall NotificationIconDialog__get_closeBtnPath(
        NotificationIconDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F9377 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15425/*"Window/OkBtn"*/, method);
    byte_40F9377 = 1;
  }
  return (System_String_o *)StringLiteral_15425/*"Window/OkBtn"*/;
}