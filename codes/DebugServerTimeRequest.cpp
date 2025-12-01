void DebugServerTimeRequest___ctor(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void DebugServerTimeRequest__beginRequest(DebugServerTimeRequest_o *this, int64_t time, const MethodInfo *method)
{
  if ( (byte_4CC8F11 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23421/*"serverTime"*/);
    byte_4CC8F11 = 1;
  }
  RequestBase__addField_44514616((RequestBase_o *)this, (System_String_o *)StringLiteral_23421/*"serverTime"*/, time, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DebugServerTimeRequest__getMockData(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8F10 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8F10 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugServerTimeRequest__getURL(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8F0F & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_4496/*"ClientDebug/ServerTime"*/);
    byte_4CC8F0F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_4496/*"ClientDebug/ServerTime"*/, 0);
}


void DebugServerTimeRequest__requestCompleted(
        DebugServerTimeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CC8F12 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8F12 = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(54, responseList, 0);
  if ( v5 && ResponseData__checkError_44515240(v5, 0) )
    v6 = &StringLiteral_22486/*"ok"*/;
  else
    v6 = &StringLiteral_22316/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}