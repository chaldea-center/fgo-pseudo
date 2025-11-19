void BattleSetupScenarioRequest___ctor(BattleSetupScenarioRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleSetupScenarioRequest__beginRequest(
        BattleSetupScenarioRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4CB7D5F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22958/*"questPhase"*/);
    sub_1C6BA08(&StringLiteral_22954/*"questId"*/);
    byte_4CB7D5F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22954/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22958/*"questPhase"*/, questPhase, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleSetupScenarioRequest__getURL(BattleSetupScenarioRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7D5E & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_17074/*"battle/setupScenario"*/);
    byte_4CB7D5E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_17074/*"battle/setupScenario"*/, 0);
}


void BattleSetupScenarioRequest__requestCompleted(
        BattleSetupScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 *v5; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_4CB7D60 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22471/*"ok"*/);
    this = (BattleSetupScenarioRequest_o *)sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7D60 = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !LODWORD(responseList->max_length) )
    sub_1C6BC68(this);
  this = (BattleSetupScenarioRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_1C6BC60(this, responseList);
  if ( ResponseData__checkError_44468912((ResponseData_o *)this, 0) )
    v5 = &StringLiteral_22471/*"ok"*/;
  else
    v5 = &StringLiteral_22301/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v5, 0);
}