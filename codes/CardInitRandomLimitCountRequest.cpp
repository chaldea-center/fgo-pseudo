void CardInitRandomLimitCountRequest___ctor(CardInitRandomLimitCountRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CardInitRandomLimitCountRequest__beginRequest(
        CardInitRandomLimitCountRequest_o *this,
        int32_t randomSettingOwnAll,
        int32_t randomSettingSupportAll,
        const MethodInfo *method)
{
  if ( (byte_593A19A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19335/*"defaultRandomLimitCount"*/);
    sub_21FFC50(&StringLiteral_19336/*"defaultRandomLimitCountSupport"*/);
    byte_593A19A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19335/*"defaultRandomLimitCount"*/, randomSettingOwnAll, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19336/*"defaultRandomLimitCountSupport"*/, randomSettingSupportAll, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardInitRandomLimitCountRequest__getMockData(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_593A199 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A199 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardInitRandomLimitCountRequest__getURL(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A198 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18503/*"card/initRandomLimitCount"*/);
    byte_593A198 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_18503/*"card/initRandomLimitCount"*/, 0);
}


void CardInitRandomLimitCountRequest__requestCompleted(
        CardInitRandomLimitCountRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A19B & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A19B = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(35, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}