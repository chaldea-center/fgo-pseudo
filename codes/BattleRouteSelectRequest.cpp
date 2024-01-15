void __fastcall BattleRouteSelectRequest___ctor(BattleRouteSelectRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRouteSelectRequest__beginRequest(
        BattleRouteSelectRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *routeSelect,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1

  if ( (byte_40F74F5 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&StringLiteral_21765/*"routeSelect"*/, v9);
    sub_B16FFC(&StringLiteral_21522/*"questPhase"*/, v10);
    sub_B16FFC(&StringLiteral_21520/*"questId"*/, v11);
    byte_40F74F5 = 1;
  }
  if ( !routeSelect )
    routeSelect = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, *(_QWORD *)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21520/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21522/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_30957272((RequestBase_o *)this, (System_String_o *)StringLiteral_21765/*"routeSelect"*/, &routeSelect->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleRouteSelectRequest__getURL(
        BattleRouteSelectRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F74F4 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16571/*"battle/routeSelect"*/, v2);
    byte_40F74F4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_16571/*"battle/routeSelect"*/, 0LL);
}


void __fastcall BattleRouteSelectRequest__requestCompleted(
        BattleRouteSelectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_40F74F6 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v6);
    byte_40F74F6 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(85, responseList, 0LL);
  if ( !v7 )
    sub_B170D4();
  success = (Il2CppObject *)v7->fields.success;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__UpdateChapter(0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v9, 0LL);
}