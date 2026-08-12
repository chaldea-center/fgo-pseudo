void UserStatusFlagSetRequest__beginRequest(
        UserStatusFlagSetRequest_o *this,
        System_Int32_array *onFlagNumbers,
        System_Int32_array *offFlagNumbers,
        const MethodInfo *method)
{
  if ( (byte_5972532 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23499/*"offFlagNumbers"*/);
    sub_2213A60(&StringLiteral_23549/*"onFlagNumbers"*/);
    byte_5972532 = 1;
  }
  if ( onFlagNumbers && onFlagNumbers->max_length )
    RequestBase__addField_51259092(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_23549/*"onFlagNumbers"*/,
      &onFlagNumbers->obj,
      method);
  if ( offFlagNumbers && offFlagNumbers->max_length )
    RequestBase__addField_51259092(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_23499/*"offFlagNumbers"*/,
      &offFlagNumbers->obj,
      method);
  RequestBase__beginRequest((RequestBase_o *)this, (const MethodInfo *)onFlagNumbers);
}


System_String_o *UserStatusFlagSetRequest__getMockData(UserStatusFlagSetRequest_o *this, const MethodInfo *method)
{
  if ( (byte_5972531 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972531 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *UserStatusFlagSetRequest__getURL(UserStatusFlagSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972530 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_25927/*"userStatus/flagSet"*/);
    byte_5972530 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_25927/*"userStatus/flagSet"*/, 0);
}


void UserStatusFlagSetRequest__requestCompleted(
        UserStatusFlagSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseCommandKind_c *v5; // x0
  int v6; // w9
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_5972533 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972533 = 1;
  }
  if ( (byte_59724F0 & 1) == 0 )
  {
    sub_2213A60(&TopHomeRequest_TypeInfo);
    byte_59724F0 = 1;
  }
  v5 = ResponseCommandKind_TypeInfo;
  v6 = *(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1);
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, responseList);
  v7 = ResponseCommandKind__SearchData(75, responseList, 0);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_23515/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_23336/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v10,
    CallBack->fields.method);
}