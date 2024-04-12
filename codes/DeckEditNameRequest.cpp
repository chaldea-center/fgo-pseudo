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
  if ( (byte_42ABC40 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18052/*"deckId"*/);
    sub_B52984(&StringLiteral_18054/*"deckName"*/);
    byte_42ABC40 = 1;
  }
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_18052/*"deckId"*/, deckId, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_18054/*"deckName"*/, deckName, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckEditNameRequest__getMockData(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42ABC3F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ABC3F = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckEditNameRequest__getURL(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42ABC3E & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_18050/*"deck/editName"*/);
    byte_42ABC3E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_18050/*"deck/editName"*/, 0LL);
}


void __fastcall DeckEditNameRequest__requestCompleted(
        DeckEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42ABC41 & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42ABC41 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(53, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}