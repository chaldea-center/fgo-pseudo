void UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  const MethodInfo *v10; // x1

  if ( (byte_593A34B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9502/*"MockChangeUserNameResponse"*/);
    byte_593A34B = 1;
  }
  v9 = StringLiteral_9502/*"MockChangeUserNameResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9502/*"MockChangeUserNameResponse"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_593A349 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23220/*"name"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    sub_21FFC50(&StringLiteral_20650/*"genderType"*/);
    byte_593A349 = 1;
  }
  RequestBase__addField_51187332(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23220/*"name"*/,
    name,
    (const MethodInfo *)message);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20650/*"genderType"*/, genderType, v9);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_22593/*"message"*/, message, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_593A348 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A348 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *UserNameChangeRequest__getURL(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A347 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23931/*"profile/editName"*/);
    byte_593A347 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_23931/*"profile/editName"*/, 0);
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

  if ( (byte_593A34A & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A34A = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(19, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_23468/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_23290/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}