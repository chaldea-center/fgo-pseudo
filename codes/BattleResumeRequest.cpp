// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResumeRequest__beginRequest(
        BattleResumeRequest_o *this,
        int64_t battleId,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *usedTurnArray,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  if ( (byte_4B179F3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22935/*"questPhase"*/, battleId, *(_QWORD *)&questId);
    sub_1BCA7E0(&StringLiteral_24621/*"usedTurnList"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22933/*"questId"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17285/*"battleId"*/, v15, v16);
    byte_4B179F3 = 1;
  }
  this->fields.currentQuestId = questId;
  RequestBase__addField_41868688(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17285/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22933/*"questId"*/, questId, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22935/*"questPhase"*/, questPhase, v18);
  RequestBase__addField_41870840(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24621/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v19);
  RequestBase__beginRequest((RequestBase_o *)this, v20);
}


System_String_o *__fastcall BattleResumeRequest__getMockData(BattleResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B179F2 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9231/*"MockBattleResumeRequest"*/, v3, v4);
    byte_4B179F2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9231/*"MockBattleResumeRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResumeRequest__getURL(BattleResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179F1 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17267/*"battle/resume"*/, v3, v4);
    byte_4B179F1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17267/*"battle/resume"*/, 0LL);
}


void __fastcall BattleResumeRequest__requestCompleted(
        BattleResumeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ResponseData_o *v11; // x0
  ResponseData_o *v12; // x20
  __int64 v13; // x1
  Il2CppObject *success; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t SpotId; // w19
  TerminalPramsManager_c *v24; // x0
  struct NetworkManager_ResultCallbackFunc_o *v25; // x8

  if ( (byte_4B179F4 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    byte_4B179F4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v11 = ResponseCommandKind__SearchData(38, responseList, 0LL);
  if ( v11
    && (v12 = v11, ResponseData__checkError_41952396(v11, 0LL))
    && (success = (Il2CppObject *)v12->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v15,
        *(_QWORD *)&CallBack->fields.extra_arg);
    currentQuestId = this->fields.currentQuestId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    if ( !byte_4B13022 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
      byte_4B13022 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
    if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
    {
      SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
      if ( !byte_4B13023 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v22);
        byte_4B13023 = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v24->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
    }
    else
    {
      v24 = TerminalPramsManager_TypeInfo;
    }
    if ( !v24->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v24, v21);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  }
  else
  {
    v25 = this->fields.CallBack;
    if ( v25 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v25->fields.m_target)(
        v25->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v25->fields.extra_arg);
  }
}