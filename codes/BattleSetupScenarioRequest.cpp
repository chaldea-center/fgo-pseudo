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
  if ( (byte_593A163 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24008/*"questPhase"*/);
    sub_21FFC50(&StringLiteral_24004/*"questId"*/);
    byte_593A163 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24004/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24008/*"questPhase"*/, questPhase, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleSetupScenarioRequest__getURL(BattleSetupScenarioRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A162 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17751/*"battle/setupScenario"*/);
    byte_593A162 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17751/*"battle/setupScenario"*/, 0);
}


void BattleSetupScenarioRequest__requestCompleted(
        BattleSetupScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 *v5; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_593A164 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (BattleSetupScenarioRequest_o *)sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A164 = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !LODWORD(responseList->max_length) )
    sub_21FFED4(this);
  this = (BattleSetupScenarioRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_21FFECC(this, responseList);
  if ( ResponseData__checkError_51190916((ResponseData_o *)this, 0) )
    v5 = &StringLiteral_23468/*"ok"*/;
  else
    v5 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v5, 0);
}