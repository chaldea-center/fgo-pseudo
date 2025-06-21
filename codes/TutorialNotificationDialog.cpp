void __fastcall TutorialNotificationDialog___ctor(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B1B1CC & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1B1CC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationDialog__Close(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationDialog__Close_39344224(this, 0LL, v2);
}


void __fastcall TutorialNotificationDialog__Close_39344224(
        TutorialNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B1B1CA & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_TutorialNotificationDialog_EndClose__, v6);
    byte_4B1B1CA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall TutorialNotificationDialog__EndClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc, 0, v5, v6);
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
  TutorialNotificationDialog__Close_39344224(this, this->fields.closeCallbackFunc, method);
}


void __fastcall TutorialNotificationDialog__Init(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4B1B1C8 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v3);
    byte_4B1B1C8 = 1;
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
    sub_1BCB254(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationDialog__OnClickClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1

  if ( (byte_4B1B1CB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BCAFF8(&Method_TutorialNotificationDialog_EndTurorialRequest__, v5);
    sub_1BCAFF8(&Method_TutorialNotificationDialog_OnClickClose__, v6);
    byte_4B1B1CB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v7 = Method_TutorialNotificationDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialNotificationDialog_OnClickClose__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCB010(Method_TutorialNotificationDialog_OnClickClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationDialog__Close_39344224(this, this->fields.closeCallbackFunc, v9);
    }
    else
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_TutorialNotificationDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v10,
                         (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_object )
        sub_1BCB254(0LL, v12);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v13; // x1
  UILabel_o *v14; // x0
  System_String_o *v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_4B1B1C9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, message);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&Method_TutorialNotificationDialog_EndOpen__, v10);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v11);
    byte_4B1B1C9 = 1;
  }
  this->fields.closeCallbackFunc = func;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)func, flagId, (const MethodInfo *)func);
  this->fields.flagId = flagId;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v14 = this->fields.messageLabel;
    if ( !v14 )
      sub_1BCB254(0LL, v13);
    if ( message )
      v15 = message;
    else
      v15 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v14, v15, 0LL);
  }
  this->fields.isButtonEnable = 0;
  v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}