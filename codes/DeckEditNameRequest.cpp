void __fastcall DeckEditNameRequest__beginRequest(
        DeckEditNameRequest_o *this,
        int64_t deckId,
        System_String_o *deckName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4A5C9D0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18521/*"deckId"*/);
    sub_1B885B0(&StringLiteral_18523/*"deckName"*/);
    byte_4A5C9D0 = 1;
  }
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_18521/*"deckId"*/, deckId, method);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_18523/*"deckName"*/, deckName, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *__fastcall DeckEditNameRequest__getMockData(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C9CF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C9CF = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DeckEditNameRequest__getURL(DeckEditNameRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9CE & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18519/*"deck/editName"*/);
    byte_4A5C9CE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_18519/*"deck/editName"*/, 0LL);
}


void __fastcall DeckEditNameRequest__requestCompleted(
        DeckEditNameRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C9D1 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C9D1 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(53, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}