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
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  MiniMessagePack_MiniMessagePacker_o *v25; // x21
  System_Byte_array *v26; // x20
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1

  v12 = (RequestBase_o *)this;
  if ( (byte_4C238EA & 1) == 0 )
  {
    sub_1C3B764(&System_Convert_TypeInfo, userEventDeck);
    sub_1C3B764(&JsonManager_TypeInfo, v13);
    sub_1C3B764(&MiniMessagePack_MiniMessagePacker_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_19507/*"graphic.shader"*/, v15);
    sub_1C3B764(&StringLiteral_22978/*"shortcut_board_icon_war_9999"*/, v16);
    sub_1C3B764(&StringLiteral_18881/*"event_raid_ng"*/, v17);
    sub_1C3B764(&StringLiteral_23160/*"start2"*/, v18);
    this = (EventDeckSetupRequest_o *)sub_1C3B764(&StringLiteral_23378/*"svtProfileLimit"*/, v19);
    byte_4C238EA = 1;
  }
  if ( !userEventDeck )
    goto LABEL_10;
  deckInfo = (Il2CppObject *)userEventDeck->fields.deckInfo;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  JsonManager__toJson(deckInfo, 0, 0, 0LL);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_23378/*"svtProfileLimit"*/, restartWave, v21);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_19507/*"graphic.shader"*/, eventId, v22);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_23160/*"start2"*/, questId, v23);
  RequestBase__addField(v12, (System_String_o *)StringLiteral_22978/*"shortcut_board_icon_war_9999"*/, phase, v24);
  v25 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C3B9B0(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v25, 0LL);
  if ( !v25 )
LABEL_10:
    sub_1C3B9C0(this, userEventDeck);
  v26 = MiniMessagePack_MiniMessagePacker__PackClass(v25, (Il2CppObject *)userEventDeck->fields.deckInfo, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v27 = System_Convert__ToBase64String(v26, 0LL);
  RequestBase__addField_42621852(v12, (System_String_o *)StringLiteral_18881/*"event_raid_ng"*/, v27, v28);
  RequestBase__beginRequest(v12, v29);
}


System_String_o *__fastcall EventDeckSetupRequest__getMockData(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C238E9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C238E9 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall EventDeckSetupRequest__getURL(EventDeckSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C238E8 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_19504/*"graphic.memory"*/, v2);
    byte_4C238E8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_19504/*"graphic.memory"*/, 0LL);
}


void __fastcall EventDeckSetupRequest__requestCompleted(
        EventDeckSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4C238EB & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C238EB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(74, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42712632(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}