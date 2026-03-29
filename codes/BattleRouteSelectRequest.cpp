void BattleRouteSelectRequest___ctor(BattleRouteSelectRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleRouteSelectRequest__beginRequest(
        BattleRouteSelectRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *routeSelect,
        const MethodInfo *method)
{
  if ( (byte_4D32418 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&StringLiteral_23443/*"routeSelect"*/);
    sub_1C93AD4(&StringLiteral_23150/*"questPhase"*/);
    sub_1C93AD4(&StringLiteral_23146/*"questId"*/);
    byte_4D32418 = 1;
  }
  if ( !routeSelect )
    routeSelect = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23146/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23150/*"questPhase"*/, questPhase, 0);
  RequestBase__addField_44913028((RequestBase_o *)this, (System_String_o *)StringLiteral_23443/*"routeSelect"*/, &routeSelect->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleRouteSelectRequest__getURL(BattleRouteSelectRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32417 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17182/*"battle/routeSelect"*/);
    byte_4D32417 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_17182/*"battle/routeSelect"*/, 0);
}


void BattleRouteSelectRequest__requestCompleted(
        BattleRouteSelectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4D32419 & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D32419 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(86, responseList, 0);
  if ( !v5 )
    sub_1C93D2C(0, v6);
  success = (Il2CppObject *)v5->fields.success;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__UpdateChapter(0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(success, 0, 0, 0);
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}