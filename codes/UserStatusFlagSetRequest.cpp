void UserStatusFlagSetRequest__beginRequest(
        UserStatusFlagSetRequest_o *this,
        System_Int32_array *onFlagNumbers,
        System_Int32_array *offFlagNumbers,
        const MethodInfo *method)
{
  if ( (byte_4C589CC & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22384/*"offFlagNumbers"*/);
    sub_1C3E564(&StringLiteral_22434/*"onFlagNumbers"*/);
    byte_4C589CC = 1;
  }
  if ( onFlagNumbers && onFlagNumbers->max_length )
    RequestBase__addField_44302936(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_22434/*"onFlagNumbers"*/,
      &onFlagNumbers->obj,
      method);
  if ( offFlagNumbers && offFlagNumbers->max_length )
    RequestBase__addField_44302936(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_22384/*"offFlagNumbers"*/,
      &offFlagNumbers->obj,
      method);
  RequestBase__beginRequest((RequestBase_o *)this, (const MethodInfo *)onFlagNumbers);
}


System_String_o *UserStatusFlagSetRequest__getMockData(UserStatusFlagSetRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C589CB & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C589CB = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *UserStatusFlagSetRequest__getURL(UserStatusFlagSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C589CA & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_24593/*"userStatus/flagSet"*/);
    byte_4C589CA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63636468(BaseUrl, (System_String_o *)StringLiteral_24593/*"userStatus/flagSet"*/, 0);
}


void UserStatusFlagSetRequest__requestCompleted(
        UserStatusFlagSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4C589CD & 1) == 0 )
  {
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    sub_1C3E564(&StringLiteral_22400/*"ok"*/);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    byte_4C589CD = 1;
  }
  if ( (byte_4C5898A & 1) == 0 )
  {
    sub_1C3E564(&TopHomeRequest_TypeInfo);
    byte_4C5898A = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(75, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22400/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22233/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}