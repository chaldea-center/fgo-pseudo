void DebugServerTimeRequest___ctor(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void DebugServerTimeRequest__beginRequest(DebugServerTimeRequest_o *this, int64_t time, const MethodInfo *method)
{
  if ( (byte_593A1F2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24488/*"serverTime"*/);
    byte_593A1F2 = 1;
  }
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_24488/*"serverTime"*/, time, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DebugServerTimeRequest__getMockData(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A1F1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1F1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugServerTimeRequest__getURL(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1F0 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_4668/*"ClientDebug/ServerTime"*/);
    byte_593A1F0 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_4668/*"ClientDebug/ServerTime"*/, 0);
}


void DebugServerTimeRequest__requestCompleted(
        DebugServerTimeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  __int64 *v7; // x8

  if ( (byte_593A1F3 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1F3 = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, v5);
  v6 = ResponseCommandKind__SearchData(54, responseList, 0);
  if ( v6 && ResponseData__checkError_51190916(v6, 0) )
    v7 = &StringLiteral_23468/*"ok"*/;
  else
    v7 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0);
}