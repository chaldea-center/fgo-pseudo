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
        GrandSvtInfo_array *grandSvtInfos,
        const MethodInfo *method)
{
  RequestBase_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *deckInfo; // x26
  MiniMessagePack_MiniMessagePacker_o *v23; // x22
  System_Byte_array *v24; // x21
  System_String_o *v25; // x0
  System_Byte_array *v26; // x0
  System_String_o *v27; // x0

  v13 = (RequestBase_o *)this;
  if ( (byte_4B03A96 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, userEventDeck);
    sub_1BC3008(&JsonManager_TypeInfo, v14);
    sub_1BC3008(&MiniMessagePack_MiniMessagePacker_TypeInfo, v15);
    sub_1BC3008(&StringLiteral_18963/*"eventId"*/, v16);
    sub_1BC3008(&StringLiteral_22454/*"phase"*/, v17);
    sub_1BC3008(&StringLiteral_18357/*"deckInfo"*/, v18);
    sub_1BC3008(&StringLiteral_19706/*"grandSvtInfo"*/, v19);
    sub_1BC3008(&StringLiteral_22635/*"questId"*/, v20);
    this = (EventDeckSetupRequest_o *)sub_1BC3008(&StringLiteral_22845/*"restartWave"*/, v21);
    byte_4B03A96 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_10;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_22845/*"restartWave"*/, restartWave, 0LL);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_18963/*"eventId"*/, eventId, 0LL);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_22635/*"questId"*/, questId, 0LL);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_22454/*"phase"*/, phase, 0LL);
  v23 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BC3254(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v23, 0LL);
  if ( !v23 )
LABEL_10:
    sub_1BC3264(this, userEventDeck);
  v24 = MiniMessagePack_MiniMessagePacker__PackClass(v23, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v25 = System_Convert__ToBase64String(v24, 0LL);
  RequestBase__addField_43185568(v13, (System_String_o *)StringLiteral_18357/*"deckInfo"*/, v25, 0LL);
  v26 = MiniMessagePack_MiniMessagePacker__PackClass(v23, &grandSvtInfos->obj, 0LL);
  v27 = System_Convert__ToBase64String(v26, 0LL);
  RequestBase__addField_43185568(v13, (System_String_o *)StringLiteral_19706/*"grandSvtInfo"*/, v27, 0LL);
  RequestBase__beginRequest(v13, 0LL);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4B03A95 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B03A95 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03A94 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_18960/*"eventDeck/setup"*/, v2);
    byte_4B03A94 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_18960/*"eventDeck/setup"*/, 0LL);
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

  if ( (byte_4B03A97 & 1) == 0 )
  {
    sub_1BC3008(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03A97 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(74, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43184840(v7, 0LL) )
    v8 = &StringLiteral_22163/*"ok"*/;
  else
    v8 = &StringLiteral_21997/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}