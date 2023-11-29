void __fastcall DeckEditNameRequest___ctor(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall DeckEditNameRequest__beginRequest(
        DeckEditNameRequest_o *this,
        int64_t deckId,
        System_String_o *deckName,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_40FA4F0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17856, deckId);
    sub_B16FFC(&StringLiteral_17858, v7);
    byte_40FA4F0 = 1;
  }
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_17856, deckId, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_17858, deckName, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckEditNameRequest__getMockData(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_40FA4EF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FA4EF = 1;
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall DeckEditNameRequest__getURL(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FA4EE & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_17854, v2);
    byte_40FA4EE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_17854, 0LL);
}


void __fastcall DeckEditNameRequest__requestCompleted(
        DeckEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  System_String_o **v8; // x8

  if ( (byte_40FA4F1 & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&StringLiteral_21129, v5);
    sub_B16FFC(&StringLiteral_20980, v6);
    byte_40FA4F1 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(52, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30924960(v7, 0LL) )
    v8 = (System_String_o **)&StringLiteral_21129;
  else
    v8 = (System_String_o **)&StringLiteral_20980;
  RequestBase__completed((RequestBase_o *)this, *v8, 0LL);
}