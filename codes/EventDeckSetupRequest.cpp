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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *deckInfo; // x25
  MiniMessagePack_MiniMessagePacker_o *v21; // x21
  System_Byte_array *v22; // x20
  System_String_o *v23; // x0

  v12 = (RequestBase_o *)this;
  if ( (byte_4A0A3F6 & 1) == 0 )
  {
    sub_1B686D4(&System_Convert_TypeInfo, userEventDeck);
    sub_1B686D4(&JsonManager_TypeInfo, v13);
    sub_1B686D4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v14);
    sub_1B686D4(&StringLiteral_19064/*"eventId"*/, v15);
    sub_1B686D4(&StringLiteral_22437/*"phase"*/, v16);
    sub_1B686D4(&StringLiteral_18455/*"deckInfo"*/, v17);
    sub_1B686D4(&StringLiteral_22613/*"questId"*/, v18);
    this = (EventDeckSetupRequest_o *)sub_1B686D4(&StringLiteral_22821/*"restartWave"*/, v19);
    byte_4A0A3F6 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_10;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22821/*"restartWave"*/, restartWave, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_19064/*"eventId"*/, eventId, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22613/*"questId"*/, questId, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22437/*"phase"*/, phase, 0LL);
  v21 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B68920(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v21, 0LL);
  if ( !v21 )
LABEL_10:
    sub_1B68930(this, userEventDeck);
  v22 = MiniMessagePack_MiniMessagePacker__PackClass(v21, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v23 = System_Convert__ToBase64String(v22, 0LL);
  RequestBase__addField_40920848(v12, (System_String_o *)StringLiteral_18455/*"deckInfo"*/, v23, 0LL);
  RequestBase__beginRequest(v12, 0LL);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A0A3F5 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A0A3F5 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A3F4 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_19061/*"eventDeck/setup"*/, v2);
    byte_4A0A3F4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_19061/*"eventDeck/setup"*/, 0LL);
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

  if ( (byte_4A0A3F7 & 1) == 0 )
  {
    sub_1B686D4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B686D4(&StringLiteral_22150/*"ok"*/, v5);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v6);
    byte_4A0A3F7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(74, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40916448(v7, 0LL) )
    v8 = &StringLiteral_22150/*"ok"*/;
  else
    v8 = &StringLiteral_21981/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}