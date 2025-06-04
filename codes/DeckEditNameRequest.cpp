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

  if ( (byte_4B03A8B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18356/*"deckId"*/, deckId);
    sub_1BC3008(&StringLiteral_18358/*"deckName"*/, v7);
    byte_4B03A8B = 1;
  }
  RequestBase__addField_43183652((RequestBase_o *)this, (System_String_o *)StringLiteral_18356/*"deckId"*/, deckId, 0LL);
  RequestBase__addField_43185568((RequestBase_o *)this, (System_String_o *)StringLiteral_18358/*"deckName"*/, deckName, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckEditNameRequest__getMockData(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4B03A8A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B03A8A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckEditNameRequest__getURL(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03A89 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_18354/*"deck/editName"*/, v2);
    byte_4B03A89 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_18354/*"deck/editName"*/, 0LL);
}


void __fastcall DeckEditNameRequest__requestCompleted(
        DeckEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B03A8C & 1) == 0 )
  {
    sub_1BC3008(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03A8C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(53, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43184840(v7, 0LL) )
    v8 = &StringLiteral_22163/*"ok"*/;
  else
    v8 = &StringLiteral_21997/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}