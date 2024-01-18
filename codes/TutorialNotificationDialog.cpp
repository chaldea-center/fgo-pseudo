void __fastcall TutorialNotificationDialog___ctor(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4189A5B & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189A5B = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationDialog__Close(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationDialog__Close_28622420(this, 0LL, v2);
}


void __fastcall TutorialNotificationDialog__Close_28622420(
        TutorialNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4189A59 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_TutorialNotificationDialog_EndClose__, v10);
    byte_4189A59 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall TutorialNotificationDialog__EndClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall TutorialNotificationDialog__EndOpen(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall TutorialNotificationDialog__EndTurorialRequest(
        TutorialNotificationDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TutorialNotificationDialog__Close_28622420(this, this->fields.closeCallbackFunc, method);
}


void __fastcall TutorialNotificationDialog__Init(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4189A57 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4189A57 = 1;
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
      goto LABEL_11;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_11:
    sub_B2C434(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationDialog__OnClickClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1

  if ( (byte_4189A5A & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_TutorialNotificationDialog_EndTurorialRequest__, v6);
    byte_4189A5A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationDialog__Close_28622420(this, this->fields.closeCallbackFunc, v7);
    }
    else
    {
      v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_TutorialNotificationDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v8,
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        sub_B2C434(0LL, v10);
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialNotificationDialog__Open(
        TutorialNotificationDialog_o *this,
        System_String_o *message,
        int32_t flagId,
        System_Action_o *func,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v16; // x1
  UILabel_o *v17; // x0
  System_String_o *v18; // x1
  System_Action_o *v19; // x20

  if ( (byte_4189A58 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, message);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_TutorialNotificationDialog_EndOpen__, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_4189A58 = 1;
  }
  this->fields.closeCallbackFunc = func;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)func,
    *(System_String_array ***)&flagId,
    (System_String_array **)func,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.flagId = flagId;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v17 = this->fields.messageLabel;
    if ( !v17 )
      sub_B2C434(0LL, v16);
    if ( message )
      v18 = message;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v17, v18, 0LL);
  }
  this->fields.isButtonEnable = 0;
  v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
}