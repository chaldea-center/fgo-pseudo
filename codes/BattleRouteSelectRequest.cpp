// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRouteSelectRequest__beginRequest(
        BattleRouteSelectRequest_o *this,
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
  if ( (byte_4A7164C & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, *(_QWORD *)&questId);
    sub_1B90010(&StringLiteral_23004/*"routeSelect"*/, v9);
    sub_1B90010(&StringLiteral_22725/*"questPhase"*/, v10);
    sub_1B90010(&StringLiteral_22723/*"questId"*/, v11);
    byte_4A7164C = 1;
  }
  if ( !v5 )
    v5 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, 0LL);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22723/*"questId"*/,
    questId,
    (const MethodInfo *)routeSelect);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22725/*"questPhase"*/, questPhase, v12);
  RequestBase__addField_41190224((RequestBase_o *)this, (System_String_o *)StringLiteral_23004/*"routeSelect"*/, &v5->obj, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *__fastcall BattleRouteSelectRequest__getURL(
        BattleRouteSelectRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A7164B & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_17121/*"battle/routeSelect"*/, v2);
    byte_4A7164B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_17121/*"battle/routeSelect"*/, 0LL);
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
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4A7164D & 1) == 0 )
  {
    sub_1B90010(&JsonManager_TypeInfo, responseList);
    sub_1B90010(&ResponseCommandKind_TypeInfo, v5);
    sub_1B90010(&ServantCommentManager_TypeInfo, v6);
    byte_4A7164D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(86, responseList, 0LL);
  if ( !v7 )
    sub_1B9026C(0LL, v8);
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