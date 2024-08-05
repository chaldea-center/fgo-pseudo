void __fastcall BattleResumeRequest___ctor(BattleResumeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResumeRequest__beginRequest(
        BattleResumeRequest_o *this,
        int64_t battleId,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *usedTurnArray,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_49FFBE0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22603/*"questPhase"*/, battleId);
    sub_1B64870(&StringLiteral_24272/*"usedTurnList"*/, v11);
    sub_1B64870(&StringLiteral_22601/*"questId"*/, v12);
    sub_1B64870(&StringLiteral_17047/*"battleId"*/, v13);
    byte_49FFBE0 = 1;
  }
  this->fields.currentQuestId = questId;
  RequestBase__addField_40854504((RequestBase_o *)this, (System_String_o *)StringLiteral_17047/*"battleId"*/, battleId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22601/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22603/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_40853908(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24272/*"usedTurnList"*/,
    &usedTurnArray->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleResumeRequest__getMockData(BattleResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_49FFBDF & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_9061/*"MockBattleResumeRequest"*/, v2);
    byte_49FFBDF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9061/*"MockBattleResumeRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResumeRequest__getURL(BattleResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFBDE & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_17029/*"battle/resume"*/, v2);
    byte_49FFBDE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_17029/*"battle/resume"*/, 0LL);
}


void __fastcall BattleResumeRequest__requestCompleted(
        BattleResumeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ResponseData_o *v8; // x0
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v14; // x0
  __int64 v15; // x1
  int32_t SpotId; // w19
  TerminalPramsManager_c *v17; // x0

  if ( (byte_49FFBE1 & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, responseList);
    sub_1B64870(&ResponseCommandKind_TypeInfo, v5);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v6);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v7);
    byte_49FFBE1 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(38, responseList, 0LL);
  if ( v8
    && (v9 = v8, ResponseData__checkError_40851148(v8, 0LL))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    RequestBase__completed((RequestBase_o *)this, v11, 0LL);
    currentQuestId = this->fields.currentQuestId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB773 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v12);
      byte_49FB773 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    v14->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
    if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
    {
      SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB774 )
      {
        sub_1B64870(&TerminalPramsManager_TypeInfo, v15);
        byte_49FB774 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v17->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
    }
    else
    {
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( !v17->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v17);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  }
  else
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL);
  }
}