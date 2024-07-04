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

  if ( (byte_48E3E3F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_22382/*"questPhase"*/, battleId);
    sub_1B00CCC(&StringLiteral_24011/*"usedTurnList"*/, v11);
    sub_1B00CCC(&StringLiteral_22380/*"questId"*/, v12);
    sub_1B00CCC(&StringLiteral_16879/*"battleId"*/, v13);
    byte_48E3E3F = 1;
  }
  this->fields.currentQuestId = questId;
  RequestBase__addField_39759196(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16879/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22380/*"questId"*/, questId, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22382/*"questPhase"*/, questPhase, v15);
  RequestBase__addField_39761928(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24011/*"usedTurnList"*/,
    &usedTurnArray->obj,
    v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall BattleResumeRequest__getMockData(BattleResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_48E3E3E & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_8998/*"MockBattleResumeRequest"*/, v2);
    byte_48E3E3E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_8998/*"MockBattleResumeRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResumeRequest__getURL(BattleResumeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E3E3D & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_16861/*"battle/resume"*/, v2);
    byte_48E3E3D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_16861/*"battle/resume"*/, 0LL);
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
  const MethodInfo *v9; // x2
  ResponseData_o *v10; // x20
  Il2CppObject *success; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v16; // x0
  __int64 v17; // x1
  int32_t SpotId; // w19
  TerminalPramsManager_c *v19; // x0
  struct NetworkManager_ResultCallbackFunc_o *v20; // x8

  if ( (byte_48E3E40 & 1) == 0 )
  {
    sub_1B00CCC(&JsonManager_TypeInfo, responseList);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v5);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v7);
    byte_48E3E40 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(38, responseList, 0LL);
  if ( v8
    && (v10 = v8, ResponseData__checkError(v8, v8->fields.resCode, v9))
    && (success = (Il2CppObject *)v10->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v12,
        *(_QWORD *)&CallBack->fields.extra_arg);
    currentQuestId = this->fields.currentQuestId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_48DFB37 )
    {
      sub_1B00CCC(&TerminalPramsManager_TypeInfo, v13);
      byte_48DFB37 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    v16->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
    if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
    {
      SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_48DFB38 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v17);
        byte_48DFB38 = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
    }
    else
    {
      v19 = TerminalPramsManager_TypeInfo;
    }
    if ( !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  }
  else
  {
    v20 = this->fields.CallBack;
    if ( v20 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v20->fields.m_target)(
        v20->fields.original_method_info,
        StringLiteral_21754/*"ng"*/,
        *(_QWORD *)&v20->fields.extra_arg);
  }
}