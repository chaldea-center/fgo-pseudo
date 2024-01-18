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

  if ( (byte_4183653 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17924/*"deckId"*/, deckId);
    sub_B2C35C(&StringLiteral_17926/*"deckName"*/, v7);
    byte_4183653 = 1;
  }
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_17924/*"deckId"*/, deckId, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_17926/*"deckName"*/, deckName, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall DeckEditNameRequest__getMockData(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4183652 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4183652 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckEditNameRequest__getURL(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4183651 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17922/*"deck/editName"*/, v2);
    byte_4183651 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17922/*"deck/editName"*/, 0LL);
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

  if ( (byte_4183654 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_4183654 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(52, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}