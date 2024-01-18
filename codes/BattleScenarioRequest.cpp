void __fastcall BattleScenarioRequest___ctor(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScenarioRequest__beginRequest(
        BattleScenarioRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *routeSelect,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1

  if ( (byte_4184DE2 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&StringLiteral_21857/*"routeSelect"*/, v9);
    sub_B2C35C(&StringLiteral_21614/*"questPhase"*/, v10);
    sub_B2C35C(&StringLiteral_21612/*"questId"*/, v11);
    byte_4184DE2 = 1;
  }
  if ( !routeSelect )
    routeSelect = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21612/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21614/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_31052036((RequestBase_o *)this, (System_String_o *)StringLiteral_21857/*"routeSelect"*/, &routeSelect->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleScenarioRequest__getURL(BattleScenarioRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4184DE1 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16636/*"battle/scenario"*/, v2);
    byte_4184DE1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_16636/*"battle/scenario"*/, 0LL);
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
  System_String_o *v10; // x1

  if ( (byte_4184DE3 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v6);
    byte_4184DE3 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(51, responseList, 0LL);
  if ( !v7 )
    sub_B2C434(0LL, v8);
  success = (Il2CppObject *)v7->fields.success;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__UpdateChapter(0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}