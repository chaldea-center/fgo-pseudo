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
  if ( (byte_593A1FA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19319/*"deckId"*/);
    sub_21FFC50(&StringLiteral_19321/*"deckName"*/);
    byte_593A1FA = 1;
  }
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_19319/*"deckId"*/, deckId, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19321/*"deckName"*/, deckName, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *DeckEditNameRequest__getMockData(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A1F9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A1F9 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *DeckEditNameRequest__getURL(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A1F8 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19317/*"deck/editName"*/);
    byte_593A1F8 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_19317/*"deck/editName"*/, 0);
}


void DeckEditNameRequest__requestCompleted(
        DeckEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A1FB & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A1FB = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(53, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}