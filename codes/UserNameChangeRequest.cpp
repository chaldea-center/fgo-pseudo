void UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  const MethodInfo *v10; // x1

  if ( (byte_4D32607 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9187/*"MockChangeUserNameResponse"*/);
    byte_4D32607 = 1;
  }
  v9 = StringLiteral_9187/*"MockChangeUserNameResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9187/*"MockChangeUserNameResponse"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
  RequestBase___ctor((RequestBase_o *)this, v10);
}


void UserNameChangeRequest__beginRequest(
        UserNameChangeRequest_o *this,
        System_String_o *name,
        int32_t genderType,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4D32605 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22418/*"name"*/);
    sub_1C93AD4(&StringLiteral_21805/*"message"*/);
    sub_1C93AD4(&StringLiteral_19971/*"genderType"*/);
    byte_4D32605 = 1;
  }
  RequestBase__addField_44907496(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22418/*"name"*/,
    name,
    (const MethodInfo *)message);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19971/*"genderType"*/, genderType, v9);
  RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_21805/*"message"*/, message, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4D32604 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D32604 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *UserNameChangeRequest__getURL(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32603 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_23074/*"profile/editName"*/);
    byte_4D32603 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_23074/*"profile/editName"*/, 0);
}


void UserNameChangeRequest__requestCompleted(
        UserNameChangeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4D32606 & 1) == 0 )
  {
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D32606 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(19, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22655/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22483/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}