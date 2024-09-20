void __fastcall TutorialNotificationDialog___ctor(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A59E40 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A59E40 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationDialog__Close(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationDialog__Close_37355852(this, 0LL, v2);
}


void __fastcall TutorialNotificationDialog__Close_37355852(
        TutorialNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A59E3E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_TutorialNotificationDialog_EndClose__);
    byte_4A59E3E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall TutorialNotificationDialog__EndClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
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
  TutorialNotificationDialog__Close_37355852(this, this->fields.closeCallbackFunc, method);
}


void __fastcall TutorialNotificationDialog__Init(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4A59E3C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E3C = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_10;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_10:
    sub_1B8880C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationDialog__OnClickClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4A59E3F & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_TutorialNotificationDialog_EndTurorialRequest__);
    sub_1B885B0(&Method_TutorialNotificationDialog_OnClickClose__);
    byte_4A59E3F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_TutorialNotificationDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialNotificationDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_TutorialNotificationDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationDialog__Close_37355852(this, this->fields.closeCallbackFunc, v5);
    }
    else
    {
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_TutorialNotificationDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v6,
                         (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_object )
        sub_1B8880C(0LL, v8);
      TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0LL);
    }
  }
}


void __fastcall TutorialNotificationDialog__Open(
        TutorialNotificationDialog_o *this,
        System_String_o *message,
        int32_t flagId,
        System_Action_o *func,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v10; // x1
  UILabel_o *v11; // x0
  System_String_o *v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_4A59E3D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TutorialNotificationDialog_EndOpen__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E3D = 1;
  }
  this->fields.closeCallbackFunc = func;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)func,
    flagId,
    (int32_t)func);
  this->fields.flagId = flagId;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v11 = this->fields.messageLabel;
    if ( !v11 )
      sub_1B8880C(0LL, v10);
    if ( message )
      v12 = message;
    else
      v12 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v11, v12, 0LL);
  }
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
}