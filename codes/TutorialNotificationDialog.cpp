void TutorialNotificationDialog___ctor(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59372B9 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59372B9 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TutorialNotificationDialog__Close(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationDialog__Close_47075208(this, 0, v2);
}


void TutorialNotificationDialog__Close_47075208(
        TutorialNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_59372B7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_TutorialNotificationDialog_EndClose__);
    byte_59372B7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void TutorialNotificationDialog__EndClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void TutorialNotificationDialog__EndOpen(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void TutorialNotificationDialog__EndTurorialRequest(
        TutorialNotificationDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TutorialNotificationDialog__Close_47075208(this, this->fields.closeCallbackFunc, method);
}


void TutorialNotificationDialog__Init(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_59372B5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59372B5 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_10;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_10:
    sub_21FFECC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TutorialNotificationDialog__OnClickClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_59372B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_TutorialNotificationDialog_EndTurorialRequest__);
    sub_21FFC50(&Method_TutorialNotificationDialog_OnClickClose__);
    byte_59372B8 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_TutorialNotificationDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialNotificationDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_TutorialNotificationDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationDialog__Close_47075208(this, this->fields.closeCallbackFunc, v5);
    }
    else
    {
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_TutorialNotificationDialog_EndTurorialRequest__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
      Request_object = NetworkManager__getRequest_object_(
                         v6,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_object )
        sub_21FFECC(0, v10);
      TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TutorialNotificationDialog__Open(
        TutorialNotificationDialog_o *this,
        System_String_o *message,
        int32_t flagId,
        System_Action_o *func,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_c *v14; // x0
  UnityEngine_Object_o *messageLabel; // x22
  __int64 v16; // x1
  UILabel_o *v17; // x0
  System_String_o *v18; // x1
  System_Action_o *v19; // x20

  if ( (byte_59372B6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_TutorialNotificationDialog_EndOpen__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59372B6 = 1;
  }
  this->fields.closeCallbackFunc = func;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)func,
    *(System_String_o **)&flagId,
    (System_String_o *)func,
    (int32_t)method,
    v5,
    v6,
    v7);
  v14 = UnityEngine_Object_TypeInfo;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  this->fields.flagId = flagId;
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v12, v13);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v17 = this->fields.messageLabel;
    if ( !v17 )
      sub_21FFECC(0, v16);
    if ( message )
      v18 = message;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v17, v18, 0);
  }
  this->fields.isButtonEnable = 0;
  v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
}