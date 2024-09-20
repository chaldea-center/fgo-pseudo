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
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  MiniMessagePack_MiniMessagePacker_o *v18; // x21
  System_Byte_array *v19; // x20
  System_String_o *v20; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1

  v12 = (RequestBase_o *)this;
  if ( (byte_4A5C9DB & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&StringLiteral_19132/*"eventId"*/);
    sub_1B885B0(&StringLiteral_22514/*"phase"*/);
    sub_1B885B0(&StringLiteral_18522/*"deckInfo"*/);
    sub_1B885B0(&StringLiteral_22690/*"questId"*/);
    this = (EventDeckSetupRequest_o *)sub_1B885B0(&StringLiteral_22899/*"restartWave"*/);
    byte_4A5C9DB = 1;
  }
  if ( !userEventDeck )
    goto LABEL_10;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22899/*"restartWave"*/, restartWave, v14);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_19132/*"eventId"*/, eventId, v15);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22690/*"questId"*/, questId, v16);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22514/*"phase"*/, phase, v17);
  v18 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v18, 0LL);
  if ( !v18 )
LABEL_10:
    sub_1B8880C(this, userEventDeck);
  v19 = MiniMessagePack_MiniMessagePacker__PackClass(v18, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v20 = System_Convert__ToBase64String(v19, 0LL);
  RequestBase__addField_41126952(v12, (System_String_o *)StringLiteral_18522/*"deckInfo"*/, v20, v21);
  RequestBase__beginRequest(v12, v22);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C9DA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C9DA = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9D9 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19129/*"eventDeck/setup"*/);
    byte_4A5C9D9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19129/*"eventDeck/setup"*/, 0LL);
}


void __fastcall EventDeckSetupRequest__requestCompleted(
        EventDeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C9DC & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C9DC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(74, responseList, 0LL);
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