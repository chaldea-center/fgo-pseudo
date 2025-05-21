void __fastcall BattleSetupScenarioRequest___ctor(BattleSetupScenarioRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSetupScenarioRequest__beginRequest(
        BattleSetupScenarioRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4B4644B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22886/*"questPhase"*/, *(_QWORD *)&questId);
    sub_1BDB878(&StringLiteral_22882/*"questId"*/, v7);
    byte_4B4644B = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22882/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22886/*"questPhase"*/, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleSetupScenarioRequest__getURL(
        BattleSetupScenarioRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B4644A & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17077/*"battle/setupScenario"*/, v2);
    byte_4B4644A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_17077/*"battle/setupScenario"*/, 0LL);
}


void __fastcall BattleSetupScenarioRequest__requestCompleted(
        BattleSetupScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 v5; // x1
  __int64 *v6; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_4B4644C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22401/*"ok"*/, responseList);
    this = (BattleSetupScenarioRequest_o *)sub_1BDB878(&StringLiteral_22233/*"ng"*/, v5);
    byte_4B4644C = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !responseList->max_length )
    sub_1BDBADC(this, responseList, method);
  this = (BattleSetupScenarioRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_1BDBAD4(this, responseList);
  if ( ResponseData__checkError_43151432((ResponseData_o *)this, 0LL) )
    v6 = &StringLiteral_22401/*"ok"*/;
  else
    v6 = &StringLiteral_22233/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v6, 0LL);
}