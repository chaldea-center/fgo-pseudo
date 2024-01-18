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
  MiniMessagePack_MiniMessagePacker_o *v18; // x21
  System_Byte_array *v19; // x20
  System_String_o *v20; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_418A336 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, userEventDeck);
    sub_B2C35C(&JsonManager_TypeInfo, v11);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_18472/*"eventId"*/, v13);
    sub_B2C35C(&StringLiteral_21463/*"phase"*/, v14);
    sub_B2C35C(&StringLiteral_17925/*"deckInfo"*/, v15);
    this = (EventDeckSetupRequest_o *)sub_B2C35C(&StringLiteral_21612/*"questId"*/, v16);
    byte_418A336 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_12;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_18472/*"eventId"*/, eventId, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21612/*"questId"*/, questId, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_21463/*"phase"*/, phase, 0LL);
  v18 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v18, 0LL);
  if ( !v18 )
LABEL_12:
    sub_B2C434(this, userEventDeck);
  v19 = MiniMessagePack_MiniMessagePacker__PackClass(v18, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v20 = System_Convert__ToBase64String(v19, 0LL);
  RequestBase__addField_31051928(v10, (System_String_o *)StringLiteral_17925/*"deckInfo"*/, v20, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_418A335 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418A335 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418A334 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18469/*"eventDeck/setup"*/, v2);
    byte_418A334 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18469/*"eventDeck/setup"*/, 0LL);
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

  if ( (byte_418A337 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418A337 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(73, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}