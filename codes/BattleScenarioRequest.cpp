void __fastcall BattleScenarioRequest___ctor(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall BattleScenarioRequest__beginRequest(
        BattleScenarioRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *routeSelect,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3

  v5 = routeSelect;
  if ( (byte_42E5763 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, questId, questPhase, routeSelect);
    sub_B5D5C4(&StringLiteral_22155/*"routeSelect"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21905/*"questPhase"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21903/*"questId"*/, v15, v16, v17);
    byte_42E5763 = 1;
  }
  if ( !v5 )
    v5 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21903/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21905/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_32362368((RequestBase_o *)this, (System_String_o *)StringLiteral_22155/*"routeSelect"*/, &v5->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleScenarioRequest__getURL(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E5762 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16837/*"battle/scenario"*/, v4, v5, v6);
    byte_42E5762 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_16837/*"battle/scenario"*/, 0LL);
}


void __fastcall BattleScenarioRequest__requestCompleted(
        BattleScenarioRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_42E5764 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v9, v10, v11);
    byte_42E5764 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(52, responseList, 0LL);
  if ( !v12 )
    sub_B5D69C(0LL, v13);
  success = (Il2CppObject *)v12->fields.success;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__UpdateChapter(0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v15 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}