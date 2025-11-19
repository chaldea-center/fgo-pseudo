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
  if ( (byte_4CB7D98 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23962/*"svtId"*/);
    sub_1C6BA08(&StringLiteral_19540/*"flagId"*/);
    byte_4CB7D98 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23962/*"svtId"*/, svtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19540/*"flagId"*/, flagId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
  return 1;
}


System_String_o *CardServantFlagRequest__getMockData(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7D97 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7D97 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *CardServantFlagRequest__getURL(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7D96 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_17773/*"card/svtFlag"*/);
    byte_4CB7D96 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_17773/*"card/svtFlag"*/, 0);
}


void CardServantFlagRequest__requestCompleted(
        CardServantFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CB7D99 & 1) == 0 )
  {
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22471/*"ok"*/);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7D99 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(68, responseList, 0);
  if ( v5 && ResponseData__checkError_44468912(v5, 0) )
    v6 = &StringLiteral_22471/*"ok"*/;
  else
    v6 = &StringLiteral_22301/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}