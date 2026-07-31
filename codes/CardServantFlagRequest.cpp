void CardServantFlagRequest___ctor(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


bool CardServantFlagRequest__beginRequest(
        CardServantFlagRequest_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (byte_593A1A2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25091/*"svtId"*/);
    sub_21FFC50(&StringLiteral_20350/*"flagId"*/);
    byte_593A1A2 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25091/*"svtId"*/, svtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20350/*"flagId"*/, flagId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
  return 1;
}


System_String_o *CardServantFlagRequest__getMockData(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A1A1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1A1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *CardServantFlagRequest__getURL(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1A0 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18506/*"card/svtFlag"*/);
    byte_593A1A0 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_18506/*"card/svtFlag"*/, 0);
}


void CardServantFlagRequest__requestCompleted(
        CardServantFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A1A3 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1A3 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(68, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}