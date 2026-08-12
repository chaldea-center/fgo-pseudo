void DebugServerTimeRequest___ctor(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void DebugServerTimeRequest__beginRequest(DebugServerTimeRequest_o *this, int64_t time, const MethodInfo *method)
{
  if ( (byte_59723CF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24536/*"serverTime"*/);
    byte_59723CF = 1;
  }
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_24536/*"serverTime"*/, time, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DebugServerTimeRequest__getMockData(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_59723CE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59723CE = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugServerTimeRequest__getURL(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723CD & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_4676/*"ClientDebug/ServerTime"*/);
    byte_59723CD = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_4676/*"ClientDebug/ServerTime"*/, 0);
}


void DebugServerTimeRequest__requestCompleted(
        DebugServerTimeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  __int64 *v7; // x8

  if ( (byte_59723D0 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59723D0 = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, v5);
  v6 = ResponseCommandKind__SearchData(54, responseList, 0);
  if ( v6 && ResponseData__checkError_51257228(v6, 0) )
    v7 = &StringLiteral_23515/*"ok"*/;
  else
    v7 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0);
}