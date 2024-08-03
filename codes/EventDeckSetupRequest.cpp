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
  __int64 v21; // x1
  __int64 v22; // x2
  MiniMessagePack_MiniMessagePacker_o *v23; // x21
  System_Byte_array *v24; // x20
  System_String_o *v25; // x0

  v12 = (RequestBase_o *)this;
  if ( (byte_49FDB8B & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, userEventDeck);
    sub_1B640C8(&JsonManager_TypeInfo, v13);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_19059/*"eventId"*/, v15);
    sub_1B640C8(&StringLiteral_22423/*"phase"*/, v16);
    sub_1B640C8(&StringLiteral_18450/*"deckInfo"*/, v17);
    sub_1B640C8(&StringLiteral_22598/*"questId"*/, v18);
    this = (EventDeckSetupRequest_o *)sub_1B640C8(&StringLiteral_22805/*"restartWave"*/, v19);
    byte_49FDB8B = 1;
  }
  if ( !userEventDeck )
    goto LABEL_10;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22805/*"restartWave"*/, restartWave, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_19059/*"eventId"*/, eventId, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22598/*"questId"*/, questId, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22423/*"phase"*/, phase, 0LL);
  v23 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, v21, v22);
  MiniMessagePack_MiniMessagePacker___ctor(v23, 0LL);
  if ( !v23 )
LABEL_10:
    sub_1B64324(this);
  v24 = MiniMessagePack_MiniMessagePacker__PackClass(v23, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v25 = System_Convert__ToBase64String(v24, 0LL);
  RequestBase__addField_40850936(v12, (System_String_o *)StringLiteral_18450/*"deckInfo"*/, v25, 0LL);
  RequestBase__beginRequest(v12, 0LL);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_49FDB8A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FDB8A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDB89 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19056/*"eventDeck/setup"*/, v2);
    byte_49FDB89 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_19056/*"eventDeck/setup"*/, 0LL);
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

  if ( (byte_49FDB8C & 1) == 0 )
  {
    sub_1B640C8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_49FDB8C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(74, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40846016(v7, 0LL) )
    v8 = &StringLiteral_22137/*"ok"*/;
  else
    v8 = &StringLiteral_21968/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}