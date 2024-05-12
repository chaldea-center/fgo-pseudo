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
  if ( (byte_43881F8 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22071/*"questPhase"*/);
    sub_B775C4(&StringLiteral_23467/*"usedTurnList"*/);
    sub_B775C4(&StringLiteral_22069/*"questId"*/);
    sub_B775C4(&StringLiteral_16979/*"battleId"*/);
    byte_43881F8 = 1;
  }
  this->fields.currentQuestId = questId;
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16979/*"battleId"*/, battleId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22069/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22071/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_32565500(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23467/*"usedTurnList"*/,
    &usedTurnArray->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleResumeRequest__getMockData(BattleResumeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_43881F7 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_9325/*"MockBattleResumeRequest"*/);
    byte_43881F7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9325/*"MockBattleResumeRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResumeRequest__getURL(BattleResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_43881F6 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16961/*"battle/resume"*/);
    byte_43881F6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16961/*"battle/resume"*/, 0LL);
}


void __fastcall BattleResumeRequest__requestCompleted(
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

  if ( (byte_43881F9 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_43881F9 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(38, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    RequestBase__completed((RequestBase_o *)this, v8, 0LL);
    currentQuestId = this->fields.currentQuestId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43874BE )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43874BE = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
    if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
    {
      SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_43874BF )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43874BF = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  }
  else
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL);
  }
}