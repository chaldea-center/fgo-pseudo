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

  if ( (byte_4B039FA & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22639/*"questPhase"*/, *(_QWORD *)&questId);
    sub_1BC3008(&StringLiteral_22635/*"questId"*/, v7);
    byte_4B039FA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22635/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22639/*"questPhase"*/, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleSetupScenarioRequest__getURL(
        BattleSetupScenarioRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B039F9 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_16912/*"battle/setupScenario"*/, v2);
    byte_4B039F9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_16912/*"battle/setupScenario"*/, 0LL);
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
  if ( (byte_4B039FB & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, responseList);
    this = (BattleSetupScenarioRequest_o *)sub_1BC3008(&StringLiteral_21997/*"ng"*/, v5);
    byte_4B039FB = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !responseList->max_length )
    sub_1BC326C(this, responseList, method);
  this = (BattleSetupScenarioRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_1BC3264(this, responseList);
  if ( ResponseData__checkError_43184840((ResponseData_o *)this, 0LL) )
    v6 = &StringLiteral_22163/*"ok"*/;
  else
    v6 = &StringLiteral_21997/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v6, 0LL);
}