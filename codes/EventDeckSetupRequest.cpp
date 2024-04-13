void __fastcall EventDeckSetupRequest___ctor(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  Il2CppObject *deckInfo; // x25
  MiniMessagePack_MiniMessagePacker_o *v35; // x21
  System_Byte_array *v36; // x20
  System_String_o *v37; // x0

  v12 = (RequestBase_o *)this;
  if ( (byte_42EB177 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)userEventDeck, eventId, *(_QWORD *)&questId);
    sub_B5D5C4(&JsonManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_18701/*"eventId"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_21748/*"phase"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_18147/*"deckInfo"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_21903/*"questId"*/, v28, v29, v30);
    this = (EventDeckSetupRequest_o *)sub_B5D5C4(&StringLiteral_22090/*"restartWave"*/, v31, v32, v33);
    byte_42EB177 = 1;
  }
  if ( !userEventDeck )
    goto LABEL_12;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22090/*"restartWave"*/, restartWave, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_18701/*"eventId"*/, eventId, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_21903/*"questId"*/, questId, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_21748/*"phase"*/, phase, 0LL);
  v35 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v35, 0LL);
  if ( !v35 )
LABEL_12:
    sub_B5D69C(this, userEventDeck);
  v36 = MiniMessagePack_MiniMessagePacker__PackClass(v35, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v37 = System_Convert__ToBase64String(v36, 0LL);
  RequestBase__addField_32362260(v12, (System_String_o *)StringLiteral_18147/*"deckInfo"*/, v37, 0LL);
  RequestBase__beginRequest(v12, 0LL);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB176 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB176 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EB175 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18698/*"eventDeck/setup"*/, v4, v5, v6);
    byte_42EB175 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_18698/*"eventDeck/setup"*/, 0LL);
}


void __fastcall EventDeckSetupRequest__requestCompleted(
        EventDeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42EB178 & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EB178 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(74, responseList, 0LL);
  if ( v12 && ResponseData__checkError_29500464(v12, 0LL) )
    v13 = &StringLiteral_21497/*"ok"*/;
  else
    v13 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}