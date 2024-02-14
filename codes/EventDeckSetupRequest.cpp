void __fastcall EventDeckSetupRequest___ctor(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventDeckSetupRequest__beginRequest(
        EventDeckSetupRequest_o *this,
        UserEventDeckEntity_o *userEventDeck,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *deckInfo; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  MiniMessagePack_MiniMessagePacker_o *v20; // x21
  System_Byte_array *v21; // x20
  System_String_o *v22; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_4216F16 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, userEventDeck);
    sub_B0D8A4(&JsonManager_TypeInfo, v11);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_18529/*"eventId"*/, v13);
    sub_B0D8A4(&StringLiteral_21533/*"phase"*/, v14);
    sub_B0D8A4(&StringLiteral_17981/*"deckInfo"*/, v15);
    this = (EventDeckSetupRequest_o *)sub_B0D8A4(&StringLiteral_21682/*"questId"*/, v16);
    byte_4216F16 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_12;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_18529/*"eventId"*/, eventId, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21682/*"questId"*/, questId, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21533/*"phase"*/, phase, 0LL);
  v20 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v18, v19);
  MiniMessagePack_MiniMessagePacker___ctor(v20, 0LL);
  if ( !v20 )
LABEL_12:
    sub_B0D97C(this);
  v21 = MiniMessagePack_MiniMessagePacker__PackClass(v20, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v22 = System_Convert__ToBase64String(v21, 0LL);
  RequestBase__addField_30435648(v10, (System_String_o *)StringLiteral_17981/*"deckInfo"*/, v22, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4216F15 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4216F15 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4216F14 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18526/*"eventDeck/setup"*/, v2);
    byte_4216F14 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_18526/*"eventDeck/setup"*/, 0LL);
}


void __fastcall EventDeckSetupRequest__requestCompleted(
        EventDeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4216F17 & 1) == 0 )
  {
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, responseList);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_4216F17 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(73, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30403444(v7, 0LL) )
    v8 = &StringLiteral_21287/*"ok"*/;
  else
    v8 = &StringLiteral_21137/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}