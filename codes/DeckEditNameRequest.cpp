void DeckEditNameRequest___ctor(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void DeckEditNameRequest__beginRequest(
        DeckEditNameRequest_o *this,
        int64_t deckId,
        System_String_o *deckName,
        const MethodInfo *method)
{
  if ( (byte_4E064FF & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_18742/*"deckId"*/);
    sub_1CE6700(&StringLiteral_18744/*"deckName"*/);
    byte_4E064FF = 1;
  }
  RequestBase__addField_45375920((RequestBase_o *)this, (System_String_o *)StringLiteral_18742/*"deckId"*/, deckId, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_18744/*"deckName"*/, deckName, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DeckEditNameRequest__getMockData(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E064FE & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E064FE = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DeckEditNameRequest__getURL(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E064FD & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_18740/*"deck/editName"*/);
    byte_4E064FD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_18740/*"deck/editName"*/, 0);
}


void DeckEditNameRequest__requestCompleted(
        DeckEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4E06500 & 1) == 0 )
  {
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22728/*"ok"*/);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E06500 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(53, responseList, 0);
  if ( v5 && ResponseData__checkError_45365352(v5, 0) )
    v6 = &StringLiteral_22728/*"ok"*/;
  else
    v6 = &StringLiteral_22555/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}