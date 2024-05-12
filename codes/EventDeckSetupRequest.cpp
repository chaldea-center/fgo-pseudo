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
        int32_t restartWave,
        const MethodInfo *method)
{
  RequestBase_o *v12; // x19
  Il2CppObject *deckInfo; // x25
  MiniMessagePack_MiniMessagePacker_o *v14; // x21
  System_Byte_array *v15; // x20
  System_String_o *v16; // x0

  v12 = (RequestBase_o *)this;
  if ( (byte_438DDD4 & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B775C4(&StringLiteral_18839/*"eventId"*/);
    sub_B775C4(&StringLiteral_21911/*"phase"*/);
    sub_B775C4(&StringLiteral_18282/*"deckInfo"*/);
    sub_B775C4(&StringLiteral_22069/*"questId"*/);
    this = (EventDeckSetupRequest_o *)sub_B775C4(&StringLiteral_22259/*"restartWave"*/);
    byte_438DDD4 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_12;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22259/*"restartWave"*/, restartWave, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_18839/*"eventId"*/, eventId, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22069/*"questId"*/, questId, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_21911/*"phase"*/, phase, 0LL);
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_B77694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  if ( !v14 )
LABEL_12:
    sub_B7769C(this, userEventDeck);
  v15 = MiniMessagePack_MiniMessagePacker__PackClass(v14, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v16 = System_Convert__ToBase64String(v15, 0LL);
  RequestBase__addField_32565392(v12, (System_String_o *)StringLiteral_18282/*"deckInfo"*/, v16, 0LL);
  RequestBase__beginRequest(v12, 0LL);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438DDD3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DDD3 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438DDD2 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_18836/*"eventDeck/setup"*/);
    byte_438DDD2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_18836/*"eventDeck/setup"*/, 0LL);
}


void __fastcall EventDeckSetupRequest__requestCompleted(
        EventDeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438DDD5 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438DDD5 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(74, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}