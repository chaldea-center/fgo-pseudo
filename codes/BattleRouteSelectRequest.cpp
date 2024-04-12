void __fastcall BattleRouteSelectRequest___ctor(BattleRouteSelectRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall BattleRouteSelectRequest__beginRequest(
        BattleRouteSelectRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *routeSelect,
        const MethodInfo *method)
{
  if ( (byte_42AD5A6 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&StringLiteral_22041/*"routeSelect"*/);
    sub_B52984(&StringLiteral_21792/*"questPhase"*/);
    sub_B52984(&StringLiteral_21790/*"questId"*/);
    byte_42AD5A6 = 1;
  }
  if ( !routeSelect )
    routeSelect = (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21790/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21792/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_32021028((RequestBase_o *)this, (System_String_o *)StringLiteral_22041/*"routeSelect"*/, &routeSelect->obj, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleRouteSelectRequest__getURL(
        BattleRouteSelectRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AD5A5 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_16750/*"battle/routeSelect"*/);
    byte_42AD5A5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_16750/*"battle/routeSelect"*/, 0LL);
}


void __fastcall BattleRouteSelectRequest__requestCompleted(
        BattleRouteSelectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_42AD5A7 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    byte_42AD5A7 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(86, responseList, 0LL);
  if ( !v5 )
    sub_B52A5C(0LL, v6);
  success = (Il2CppObject *)v5->fields.success;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ServantCommentManager__UpdateChapter(0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}