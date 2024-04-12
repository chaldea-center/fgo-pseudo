void __fastcall CardServantFlagRequest___ctor(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall CardServantFlagRequest__beginRequest(
        CardServantFlagRequest_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (byte_42B16AE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22657/*"svtId"*/);
    sub_B52984(&StringLiteral_18898/*"flagId"*/);
    byte_42B16AE = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22657/*"svtId"*/, svtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18898/*"flagId"*/, flagId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
  return 1;
}


System_String_o *__fastcall CardServantFlagRequest__getMockData(
        CardServantFlagRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B16AD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B16AD = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CardServantFlagRequest__getURL(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B16AC & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_17346/*"card/svtFlag"*/);
    byte_42B16AC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_17346/*"card/svtFlag"*/, 0LL);
}


void __fastcall CardServantFlagRequest__requestCompleted(
        CardServantFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42B16AF & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B16AF = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(68, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}