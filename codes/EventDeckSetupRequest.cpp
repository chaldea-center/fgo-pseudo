// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *deckInfo; // x25
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  MiniMessagePack_MiniMessagePacker_o *v35; // x21
  __int64 v36; // x1
  System_Byte_array *v37; // x20
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1

  v12 = (RequestBase_o *)this;
  if ( (byte_4B17A99 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, userEventDeck, *(_QWORD *)&eventId);
    sub_1BCA7E0(&JsonManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_19329/*"eventId"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22756/*"phase"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_18710/*"deckInfo"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22933/*"questId"*/, v23, v24);
    this = (EventDeckSetupRequest_o *)sub_1BCA7E0(&StringLiteral_23146/*"restartWave"*/, v25, v26);
    byte_4B17A99 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_10;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, userEventDeck);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_23146/*"restartWave"*/, restartWave, v28);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_19329/*"eventId"*/, eventId, v29);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22933/*"questId"*/, questId, v30);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22756/*"phase"*/, phase, v31);
  v35 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, v32, v33, v34);
  MiniMessagePack_MiniMessagePacker___ctor(v35, 0LL);
  if ( !v35 )
LABEL_10:
    sub_1BCAA3C(this, userEventDeck);
  v37 = MiniMessagePack_MiniMessagePacker__PackClass(v35, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v36);
  v38 = System_Convert__ToBase64String(v37, 0LL);
  RequestBase__addField_41862348(v12, (System_String_o *)StringLiteral_18710/*"deckInfo"*/, v38, v39);
  RequestBase__beginRequest(v12, v40);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17A98 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17A98 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A97 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19326/*"eventDeck/setup"*/, v3, v4);
    byte_4B17A97 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19326/*"eventDeck/setup"*/, 0LL);
}


void __fastcall EventDeckSetupRequest__requestCompleted(
        EventDeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v11; // x9

  if ( (byte_4B17A9A & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A9A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(74, responseList, 0LL);
  if ( v9 && ResponseData__checkError_41952396(v9, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22292/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v11,
    *(_QWORD *)&CallBack->fields.extra_arg);
}