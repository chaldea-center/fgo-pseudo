void BattleResumeRequest___ctor(BattleResumeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleResumeRequest__beginRequest(
        BattleResumeRequest_o *this,
        int64_t battleId,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *usedTurnArray,
        const MethodInfo *method)
{
  if ( (byte_4D2E319 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23090/*"questPhase"*/);
    sub_1C94098(&StringLiteral_24741/*"usedTurnList"*/);
    sub_1C94098(&StringLiteral_23086/*"questId"*/);
    sub_1C94098(&StringLiteral_17158/*"battleId"*/);
    byte_4D2E319 = 1;
  }
  this->fields.currentQuestId = questId;
  RequestBase__addField_45013228((RequestBase_o *)this, (System_String_o *)StringLiteral_17158/*"battleId"*/, battleId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23086/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23090/*"questPhase"*/, questPhase, 0);
  RequestBase__addField_45014472((RequestBase_o *)this, (System_String_o *)StringLiteral_24741/*"usedTurnList"*/, &usedTurnArray->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleResumeRequest__getMockData(BattleResumeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E318 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_9152/*"MockBattleResumeRequest"*/);
    byte_4D2E318 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9152/*"MockBattleResumeRequest"*/, 0);
}


System_String_o *BattleResumeRequest__getURL(BattleResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E317 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_17137/*"battle/resume"*/);
    byte_4D2E317 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_17137/*"battle/resume"*/, 0);
}


void BattleResumeRequest__requestCompleted(
        BattleResumeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v10; // x0
  int32_t SpotId; // w19
  TerminalPramsManager_c *v12; // x0

  if ( (byte_4D2E31A & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E31A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(38, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
    RequestBase__completed((RequestBase_o *)this, v8, 0);
    currentQuestId = this->fields.currentQuestId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29445 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29445 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0);
    if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0) )
    {
      SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29446 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29446 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      v12->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
    }
    else
    {
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    TerminalPramsManager__PlayQuestSave_SaveData(0);
  }
  else
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_22424/*"ng"*/, 0);
  }
}