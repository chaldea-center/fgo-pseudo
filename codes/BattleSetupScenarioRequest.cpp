// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSetupScenarioRequest__beginRequest(
        BattleSetupScenarioRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4C2384E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23162/*"startBattleAssetId"*/, *(_QWORD *)&questId);
    sub_1C3B764(&StringLiteral_23160/*"start2"*/, v7);
    byte_4C2384E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23160/*"start2"*/, questId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23162/*"startBattleAssetId"*/, questPhase, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *__fastcall BattleSetupScenarioRequest__getURL(
        BattleSetupScenarioRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C2384D & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17429/*"card_combine_skill"*/, v2);
    byte_4C2384D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_17429/*"card_combine_skill"*/, 0LL);
}


void __fastcall BattleSetupScenarioRequest__requestCompleted(
        BattleSetupScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  BattleSetupScenarioRequest_o *v4; // x19
  __int64 v5; // x1
  bool v6; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  v4 = this;
  if ( (byte_4C2384F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, responseList);
    this = (BattleSetupScenarioRequest_o *)sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v5);
    byte_4C2384F = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1C3B9C8(this, responseList);
  this = (BattleSetupScenarioRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_13:
    sub_1C3B9C0(this, responseList);
  v6 = ResponseData__checkError_42712632((ResponseData_o *)this, 0LL);
  CallBack = v4->fields.CallBack;
  if ( v6 )
  {
    if ( CallBack )
    {
      v8 = &StringLiteral_22683/*"sandboxSeurity"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v8 = &StringLiteral_22507/*"referrerMapId"*/;
    goto LABEL_11;
  }
}