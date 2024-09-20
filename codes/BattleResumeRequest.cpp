// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResumeRequest__beginRequest(
        BattleResumeRequest_o *this,
        int64_t battleId,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *usedTurnArray,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_4A5C935 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22692/*"questPhase"*/);
    sub_1B885B0(&StringLiteral_24367/*"usedTurnList"*/);
    sub_1B885B0(&StringLiteral_22690/*"questId"*/);
    sub_1B885B0(&StringLiteral_17113/*"battleId"*/);
    byte_4A5C935 = 1;
  }
  this->fields.currentQuestId = questId;
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17113/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22690/*"questId"*/, questId, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22692/*"questPhase"*/, questPhase, v12);
  RequestBase__addField_41136012(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24367/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *__fastcall BattleResumeRequest__getMockData(BattleResumeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C934 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9101/*"MockBattleResumeRequest"*/);
    byte_4A5C934 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9101/*"MockBattleResumeRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResumeRequest__getURL(BattleResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C933 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17095/*"battle/resume"*/);
    byte_4A5C933 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17095/*"battle/resume"*/, 0LL);
}


void __fastcall BattleResumeRequest__requestCompleted(
        BattleResumeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v12; // x0
  int32_t SpotId; // w19
  TerminalPramsManager_c *v14; // x0
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8

  if ( (byte_4A5C936 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C936 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(38, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
    currentQuestId = this->fields.currentQuestId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58393 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58393 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
    if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
    {
      SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A58394 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58394 = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      v14->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
    }
    else
    {
      v14 = TerminalPramsManager_TypeInfo;
    }
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  }
  else
  {
    v15 = this->fields.CallBack;
    if ( v15 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v15->fields.m_target)(
        v15->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v15->fields.extra_arg);
  }
}