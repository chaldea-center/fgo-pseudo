void UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  const MethodInfo *v6; // x1

  if ( (byte_4C28EF3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9129/*"MockChangeUserNameResponse"*/);
    byte_4C28EF3 = 1;
  }
  v5 = StringLiteral_9129/*"MockChangeUserNameResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9129/*"MockChangeUserNameResponse"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resMsg, v5, v2, v3);
  RequestBase___ctor((RequestBase_o *)this, v6);
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

  if ( (byte_4C28EF1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22130/*"name"*/);
    sub_1C2D490(&StringLiteral_21523/*"message"*/);
    sub_1C2D490(&StringLiteral_19746/*"genderType"*/);
    byte_4C28EF1 = 1;
  }
  RequestBase__addField_44009064(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22130/*"name"*/,
    name,
    (const MethodInfo *)message);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19746/*"genderType"*/, genderType, v9);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_21523/*"message"*/, message, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4C28EF0 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28EF0 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0);
}


System_String_o *UserNameChangeRequest__getURL(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28EEF & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_22770/*"profile/editName"*/);
    byte_4C28EEF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_22770/*"profile/editName"*/, 0);
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

  if ( (byte_4C28EF2 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28EF2 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(19, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22362/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22195/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}