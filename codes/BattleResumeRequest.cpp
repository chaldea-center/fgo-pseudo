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
  System_String_o *v11; // x1

  if ( (byte_593A156 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24008/*"questPhase"*/);
    sub_21FFC50(&StringLiteral_25797/*"usedTurnList"*/);
    sub_21FFC50(&StringLiteral_24004/*"questId"*/);
    sub_21FFC50(&StringLiteral_17769/*"battleId"*/);
    byte_593A156 = 1;
  }
  v11 = (System_String_o *)StringLiteral_17769/*"battleId"*/;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = questId;
  RequestBase__addField_51200900((RequestBase_o *)this, v11, battleId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24004/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24008/*"questPhase"*/, questPhase, 0);
  RequestBase__addField_51191900((RequestBase_o *)this, (System_String_o *)StringLiteral_25797/*"usedTurnList"*/, &usedTurnArray->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleResumeRequest__getMockData(BattleResumeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A155 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9498/*"MockBattleResumeRequest"*/);
    byte_593A155 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9498/*"MockBattleResumeRequest"*/, 0);
}


System_String_o *BattleResumeRequest__getURL(BattleResumeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A154 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17747/*"battle/resume"*/);
    byte_593A154 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17747/*"battle/resume"*/, 0);
}


void BattleResumeRequest__requestCompleted(
        BattleResumeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  TerminalPramsManager_c *v12; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v14; // w0
  __int64 v15; // x1
  int32_t SpotId; // w19
  TerminalPramsManager_c *v17; // x0

  if ( (byte_593A157 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A157 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(38, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51190916(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    RequestBase__completed((RequestBase_o *)this, v9, 0);
    v11 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    if ( !byte_59350E1 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350E1 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
      v12 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    v14 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    static_fields->_LastPlayedQuestId_k__BackingField = v11;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v14, 0);
    if ( QuestMaster__HasFlag(*((_DWORD *)&this->fields.shouldShowConnect + 1), 0x8000000000LL, 0) )
    {
      SpotId = QuestMaster__GetSpotId(*((_DWORD *)&this->fields.shouldShowConnect + 1), 0);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
      if ( !byte_59350E2 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59350E2 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v17->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
    }
    else
    {
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( !*(&v17->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v17, v15);
    TerminalPramsManager__PlayQuestSave_SaveData(0);
  }
  else
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_23290/*"ng"*/, 0);
  }
}