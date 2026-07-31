void BlacklistRegistRequest___ctor(BlacklistRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


bool BlacklistRegistRequest__beginRequest(
        BlacklistRegistRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_593A17C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25231/*"targetUserId"*/);
    byte_593A17C = 1;
  }
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_25231/*"targetUserId"*/, targetUserId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
  return 1;
}


System_String_o *BlacklistRegistRequest__getMockData(BlacklistRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A17B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A17B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *BlacklistRegistRequest__getURL(BlacklistRegistRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A17A & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18003/*"blacklist/regist"*/);
    byte_593A17A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_18003/*"blacklist/regist"*/, 0);
}


void BlacklistRegistRequest__requestCompleted(
        BlacklistRegistRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A17D & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A17D = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(64, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}