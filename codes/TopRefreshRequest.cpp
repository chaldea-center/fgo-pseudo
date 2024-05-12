void __fastcall TopRefreshRequest___ctor(TopRefreshRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopRefreshRequest__getMockData(TopRefreshRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438D5D5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D5D5 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopRefreshRequest__getURL(TopRefreshRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438D5D4 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_22203/*"refresh/top"*/);
    byte_438D5D4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_22203/*"refresh/top"*/, 0LL);
}


void __fastcall TopRefreshRequest__requestCompleted(
        TopRefreshRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  TopHomeRequest_c *v5; // x0
  ResponseData_o *v6; // x0
  __int64 *v7; // x8

  if ( (byte_438D5D6 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&TopHomeRequest_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438D5D6 = 1;
  }
  v5 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v5);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v6 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v6 && ResponseData__checkError_30128096(v6, 0LL) )
    v7 = &StringLiteral_21657/*"ok"*/;
  else
    v7 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0LL);
}