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
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4AB752B & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22730/*"questPhase"*/, battleId);
    sub_1BAB41C(&StringLiteral_24409/*"usedTurnList"*/, v11);
    sub_1BAB41C(&StringLiteral_22728/*"questId"*/, v12);
    sub_1BAB41C(&StringLiteral_17146/*"battleId"*/, v13);
    byte_4AB752B = 1;
  }
  this->fields.currentQuestId = questId;
  RequestBase__addField_41522804(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17146/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22728/*"questId"*/, questId, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22730/*"questPhase"*/, questPhase, v15);
  RequestBase__addField_41524956(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24409/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall BattleResumeRequest__getMockData(BattleResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4AB752A & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_9106/*"MockBattleResumeRequest"*/, v2);
    byte_4AB752A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9106/*"MockBattleResumeRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResumeRequest__getURL(BattleResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB7529 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_17128/*"battle/resume"*/, v2);
    byte_4AB7529 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_17128/*"battle/resume"*/, 0LL);
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
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v15; // x0
  __int64 v16; // x1
  int32_t SpotId; // w19
  TerminalPramsManager_c *v18; // x0
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8

  if ( (byte_4AB752C & 1) == 0 )
  {
    sub_1BAB41C(&JsonManager_TypeInfo, responseList);
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, v5);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v7);
    byte_4AB752C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(38, responseList, 0LL);
  if ( v8
    && (v9 = v8, ResponseData__checkError_41605928(v8, 0LL))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
    currentQuestId = this->fields.currentQuestId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB2BB5 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v12);
      byte_4AB2BB5 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
    if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
    {
      SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AB2BB6 )
      {
        sub_1BAB41C(&TerminalPramsManager_TypeInfo, v16);
        byte_4AB2BB6 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
    }
    else
    {
      v18 = TerminalPramsManager_TypeInfo;
    }
    if ( !v18->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v18);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  }
  else
  {
    v19 = this->fields.CallBack;
    if ( v19 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        StringLiteral_22090/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
  }
}