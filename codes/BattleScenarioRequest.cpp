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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  v5 = routeSelect;
  if ( (byte_4B179F9 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&StringLiteral_23216/*"routeSelect"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22935/*"questPhase"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22933/*"questId"*/, v13, v14);
    byte_4B179F9 = 1;
  }
  if ( !v5 )
    v5 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22933/*"questId"*/,
    questId,
    (const MethodInfo *)routeSelect);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22935/*"questPhase"*/, questPhase, v15);
  RequestBase__addField_41870840((RequestBase_o *)this, (System_String_o *)StringLiteral_23216/*"routeSelect"*/, &v5->obj, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall BattleScenarioRequest__getURL(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179F8 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17269/*"battle/scenario"*/, v3, v4);
    byte_4B179F8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17269/*"battle/scenario"*/, 0LL);
}


void __fastcall BattleScenarioRequest__requestCompleted(
        BattleScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *success; // x20
  __int64 v12; // x1
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4B179FA & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v7, v8);
    byte_4B179FA = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(52, responseList, 0LL);
  if ( !v9 )
    sub_1BCAA3C(0LL, v10);
  success = (Il2CppObject *)v9->fields.success;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v10);
  ServantCommentManager__UpdateChapter(0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
  v13 = JsonManager__toJson(success, 0, 0, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      v13,
      *(_QWORD *)&CallBack->fields.extra_arg);
}