void BattleSkipRequest___ctor(BattleSkipRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleSkipRequest__beginRequest(
        BattleSkipRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4CF0098 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23085/*"questPhase"*/);
    sub_1C7BAE8(&StringLiteral_23081/*"questId"*/);
    byte_4CF0098 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23081/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23085/*"questPhase"*/, questPhase, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleSkipRequest__getURL(BattleSkipRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0097 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17143/*"battle/skip"*/);
    byte_4CF0097 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_17143/*"battle/skip"*/, 0);
}


void BattleSkipRequest__requestCompleted(
        BattleSkipRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4CF0099 & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&ServantCommentManager_TypeInfo);
    byte_4CF0099 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(138, responseList, 0);
  if ( !v5 )
    sub_1C7BD40(0, v6);
  success = (Il2CppObject *)v5->fields.success;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__UpdateChapter(0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(success, 0, 0, 0);
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}