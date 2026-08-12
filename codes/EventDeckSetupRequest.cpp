void EventDeckSetupRequest___ctor(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventDeckSetupRequest__beginRequest(
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
  Il2CppObject *deckInfo; // x26
  MiniMessagePack_MiniMessagePacker_o *v15; // x22
  __int64 v16; // x1
  System_Byte_array *v17; // x21
  System_String_o *v18; // x0
  System_Byte_array *v19; // x0
  System_String_o *v20; // x0

  v13 = (RequestBase_o *)this;
  if ( (byte_59723E5 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_2213A60(&StringLiteral_20037/*"eventId"*/);
    sub_2213A60(&StringLiteral_23847/*"phase"*/);
    sub_2213A60(&StringLiteral_19361/*"deckInfo"*/);
    sub_2213A60(&StringLiteral_20838/*"grandSvtInfo"*/);
    sub_2213A60(&StringLiteral_24051/*"questId"*/);
    this = (EventDeckSetupRequest_o *)sub_2213A60(&StringLiteral_24278/*"restartWave"*/);
    byte_59723E5 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_10;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, userEventDeck);
  JsonManager__toJson(deckInfo, 0, 0, 0);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_24278/*"restartWave"*/, restartWave, 0);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_20037/*"eventId"*/, eventId, 0);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_24051/*"questId"*/, questId, 0);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_23847/*"phase"*/, phase, 0);
  v15 = (MiniMessagePack_MiniMessagePacker_o *)sub_2213CCC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v15, 0);
  if ( !v15 )
LABEL_10:
    sub_2213CDC(this, userEventDeck);
  v17 = MiniMessagePack_MiniMessagePacker__PackClass(v15, (Il2CppObject *)userEventDeck->fields.deckInfo, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v16);
  v18 = System_Convert__ToBase64String(v17, 0);
  RequestBase__addField_51259256(v13, (System_String_o *)StringLiteral_19361/*"deckInfo"*/, v18, 0);
  v19 = MiniMessagePack_MiniMessagePacker__PackClass(v15, &grandSvtInfos->obj, 0);
  v20 = System_Convert__ToBase64String(v19, 0);
  RequestBase__addField_51259256(v13, (System_String_o *)StringLiteral_20838/*"grandSvtInfo"*/, v20, 0);
  RequestBase__beginRequest(v13, 0);
}


System_String_o *EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_59723E4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59723E4 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723E3 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20034/*"eventDeck/setup"*/);
    byte_59723E3 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20034/*"eventDeck/setup"*/, 0);
}


void EventDeckSetupRequest__requestCompleted(
        EventDeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_59723E6 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59723E6 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(74, responseList, 0);
  if ( v5 && ResponseData__checkError_51257228(v5, 0) )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}