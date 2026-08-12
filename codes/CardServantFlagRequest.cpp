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
  if ( (byte_597237F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25139/*"svtId"*/);
    sub_2213A60(&StringLiteral_20391/*"flagId"*/);
    byte_597237F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25139/*"svtId"*/, svtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20391/*"flagId"*/, flagId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
  return 1;
}


System_String_o *CardServantFlagRequest__getMockData(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  if ( (byte_597237E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597237E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *CardServantFlagRequest__getURL(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597237D & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18544/*"card/svtFlag"*/);
    byte_597237D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18544/*"card/svtFlag"*/, 0);
}


void CardServantFlagRequest__requestCompleted(
        CardServantFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_5972380 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972380 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(68, responseList, 0);
  if ( v5 && ResponseData__checkError_51257228(v5, 0) )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}