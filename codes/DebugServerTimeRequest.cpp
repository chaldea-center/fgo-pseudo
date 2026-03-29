void DebugServerTimeRequest___ctor(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void DebugServerTimeRequest__beginRequest(DebugServerTimeRequest_o *this, int64_t time, const MethodInfo *method)
{
  if ( (byte_4D324AE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23596/*"serverTime"*/);
    byte_4D324AE = 1;
  }
  RequestBase__addField_44911784((RequestBase_o *)this, (System_String_o *)StringLiteral_23596/*"serverTime"*/, time, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DebugServerTimeRequest__getMockData(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D324AD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D324AD = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DebugServerTimeRequest__getURL(DebugServerTimeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D324AC & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_4523/*"ClientDebug/ServerTime"*/);
    byte_4D324AC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_4523/*"ClientDebug/ServerTime"*/, 0);
}


void DebugServerTimeRequest__requestCompleted(
        DebugServerTimeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4D324AF & 1) == 0 )
  {
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D324AF = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(54, responseList, 0);
  if ( v5 && ResponseData__checkError_44908744(v5, 0) )
    v6 = &StringLiteral_22655/*"ok"*/;
  else
    v6 = &StringLiteral_22483/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}