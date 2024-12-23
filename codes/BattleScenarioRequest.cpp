// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScenarioRequest__beginRequest(
        BattleScenarioRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *routeSelect,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  v5 = routeSelect;
  if ( (byte_4B68414 & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, *(_QWORD *)&questId);
    sub_1BE4ACC(&StringLiteral_23300/*"routeSelect"*/, v9);
    sub_1BE4ACC(&StringLiteral_23013/*"questPhase"*/, v10);
    sub_1BE4ACC(&StringLiteral_23011/*"questId"*/, v11);
    byte_4B68414 = 1;
  }
  if ( !v5 )
    v5 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23011/*"questId"*/,
    questId,
    (const MethodInfo *)routeSelect);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23013/*"questPhase"*/, questPhase, v12);
  RequestBase__addField_42112900((RequestBase_o *)this, (System_String_o *)StringLiteral_23300/*"routeSelect"*/, &v5->obj, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *__fastcall BattleScenarioRequest__getURL(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B68413 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17312/*"battle/scenario"*/, v2);
    byte_4B68413 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_17312/*"battle/scenario"*/, 0LL);
}


void __fastcall BattleScenarioRequest__requestCompleted(
        BattleScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4B68415 & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, responseList);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v5);
    sub_1BE4ACC(&ServantCommentManager_TypeInfo, v6);
    byte_4B68415 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(52, responseList, 0LL);
  if ( !v7 )
    sub_1BE4D28(0LL, v8);
  success = (Il2CppObject *)v7->fields.success;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__UpdateChapter(0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson(success, 0, 0, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      v10,
      *(_QWORD *)&CallBack->fields.extra_arg);
}