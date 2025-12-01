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
  System_Byte_array *v16; // x21
  System_String_o *v17; // x0
  System_Byte_array *v18; // x0
  System_String_o *v19; // x0

  v13 = (RequestBase_o *)this;
  if ( (byte_4CC8F24 & 1) == 0 )
  {
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C713B0(&StringLiteral_19205/*"eventId"*/);
    sub_1C713B0(&StringLiteral_22787/*"phase"*/);
    sub_1C713B0(&StringLiteral_18565/*"deckInfo"*/);
    sub_1C713B0(&StringLiteral_19973/*"grandSvtInfo"*/);
    sub_1C713B0(&StringLiteral_22972/*"questId"*/);
    this = (EventDeckSetupRequest_o *)sub_1C713B0(&StringLiteral_23185/*"restartWave"*/);
    byte_4CC8F24 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_10;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_23185/*"restartWave"*/, restartWave, 0);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_19205/*"eventId"*/, eventId, 0);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_22972/*"questId"*/, questId, 0);
  RequestBase__addField(v13, (System_String_o *)StringLiteral_22787/*"phase"*/, phase, 0);
  v15 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C715FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v15, 0);
  if ( !v15 )
LABEL_10:
    sub_1C71608(this, userEventDeck);
  v16 = MiniMessagePack_MiniMessagePacker__PackClass(v15, (Il2CppObject *)userEventDeck->fields.deckInfo, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v17 = System_Convert__ToBase64String(v16, 0);
  RequestBase__addField_44518324(v13, (System_String_o *)StringLiteral_18565/*"deckInfo"*/, v17, 0);
  v18 = MiniMessagePack_MiniMessagePacker__PackClass(v15, &grandSvtInfos->obj, 0);
  v19 = System_Convert__ToBase64String(v18, 0);
  RequestBase__addField_44518324(v13, (System_String_o *)StringLiteral_19973/*"grandSvtInfo"*/, v19, 0);
  RequestBase__beginRequest(v13, 0);
}


System_String_o *EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8F23 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8F23 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8F22 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19202/*"eventDeck/setup"*/);
    byte_4CC8F22 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_19202/*"eventDeck/setup"*/, 0);
}


void EventDeckSetupRequest__requestCompleted(
        EventDeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4CC8F25 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8F25 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(74, responseList, 0);
  if ( v5 && ResponseData__checkError_44515240(v5, 0) )
    v6 = &StringLiteral_22486/*"ok"*/;
  else
    v6 = &StringLiteral_22316/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}