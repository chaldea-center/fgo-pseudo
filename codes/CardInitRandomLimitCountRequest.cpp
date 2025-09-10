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
  if ( (byte_4C28D48 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18532/*"defaultRandomLimitCount"*/);
    sub_1C2D490(&StringLiteral_18533/*"defaultRandomLimitCountSupport"*/);
    byte_4C28D48 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18532/*"defaultRandomLimitCount"*/, randomSettingOwnAll, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18533/*"defaultRandomLimitCountSupport"*/, randomSettingSupportAll, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardInitRandomLimitCountRequest__getMockData(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C28D47 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D47 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardInitRandomLimitCountRequest__getURL(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D46 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17747/*"card/initRandomLimitCount"*/);
    byte_4C28D46 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_17747/*"card/initRandomLimitCount"*/, 0);
}


void CardInitRandomLimitCountRequest__requestCompleted(
        CardInitRandomLimitCountRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28D49 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D49 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(35, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}