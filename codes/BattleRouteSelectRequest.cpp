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

  if ( (byte_4B039F0 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, *(_QWORD *)&questId);
    sub_1BC3008(&StringLiteral_22925/*"routeSelect"*/, v9);
    sub_1BC3008(&StringLiteral_22639/*"questPhase"*/, v10);
    sub_1BC3008(&StringLiteral_22635/*"questId"*/, v11);
    byte_4B039F0 = 1;
  }
  if ( !routeSelect )
    routeSelect = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22635/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22639/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_43193604((RequestBase_o *)this, (System_String_o *)StringLiteral_22925/*"routeSelect"*/, &routeSelect->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleRouteSelectRequest__getURL(
        BattleRouteSelectRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B039EF & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_16909/*"battle/routeSelect"*/, v2);
    byte_4B039EF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_16909/*"battle/routeSelect"*/, 0LL);
}


void __fastcall BattleRouteSelectRequest__requestCompleted(
        BattleRouteSelectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4B039F1 & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, responseList);
    sub_1BC3008(&ResponseCommandKind_TypeInfo, v5);
    sub_1BC3008(&ServantCommentManager_TypeInfo, v6);
    byte_4B039F1 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(86, responseList, 0LL);
  if ( !v7 )
    sub_1BC3264(0LL, v8);
  success = (Il2CppObject *)v7->fields.success;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__UpdateChapter(0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}