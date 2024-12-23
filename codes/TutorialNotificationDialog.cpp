void __fastcall TutorialNotificationDialog___ctor(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B6583D & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6583D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialNotificationDialog__Close(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialNotificationDialog__Close_38252292(this, 0LL, v2);
}


void __fastcall TutorialNotificationDialog__Close_38252292(
        TutorialNotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4B6583B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_TutorialNotificationDialog_EndClose__, v10);
    byte_4B6583B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall TutorialNotificationDialog__EndClose(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialNotificationDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BE4A70(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
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
  TutorialNotificationDialog__Close_38252292(this, this->fields.closeCallbackFunc, method);
}


void __fastcall TutorialNotificationDialog__Init(TutorialNotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4B65839 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B65839 = 1;
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
    sub_1BE4D28(gameObject, v5);
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

  if ( (byte_4B6583C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BE4ACC(&Method_TutorialNotificationDialog_EndTurorialRequest__, v5);
    sub_1BE4ACC(&Method_TutorialNotificationDialog_OnClickClose__, v6);
    byte_4B6583C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v7 = Method_TutorialNotificationDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialNotificationDialog_OnClickClose__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BE4AE4(Method_TutorialNotificationDialog_OnClickClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
    if ( this->fields.flagId == -1 )
    {
      TutorialNotificationDialog__Close_38252292(this, this->fields.closeCallbackFunc, v9);
    }
    else
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_TutorialNotificationDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v10,
                         (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( !Request_object )
        sub_1BE4D28(0LL, v12);
      TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0LL);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v16; // x1
  UILabel_o *v17; // x0
  System_String_o *v18; // x1
  System_Action_o *v19; // x20

  if ( (byte_4B6583A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, message);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&Method_TutorialNotificationDialog_EndOpen__, v13);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v14);
    byte_4B6583A = 1;
  }
  this->fields.closeCallbackFunc = func;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)func,
    *(int64_t *)&flagId,
    (int32_t)func,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.flagId = flagId;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v17 = this->fields.messageLabel;
    if ( !v17 )
      sub_1BE4D28(0LL, v16);
    if ( message )
      v18 = message;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v17, v18, 0LL);
  }
  this->fields.isButtonEnable = 0;
  v19 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_TutorialNotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
}