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
  if ( (byte_4386DE4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18281/*"deckId"*/);
    sub_B775C4(&StringLiteral_18283/*"deckName"*/);
    byte_4386DE4 = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_18281/*"deckId"*/, deckId, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18283/*"deckName"*/, deckName, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckEditNameRequest__getMockData(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4386DE3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4386DE3 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckEditNameRequest__getURL(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4386DE2 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_18279/*"deck/editName"*/);
    byte_4386DE2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_18279/*"deck/editName"*/, 0LL);
}


void __fastcall DeckEditNameRequest__requestCompleted(
        DeckEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4386DE5 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_4386DE5 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(53, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}