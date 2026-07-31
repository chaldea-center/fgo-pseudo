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
  if ( (byte_593A166 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24008/*"questPhase"*/);
    sub_21FFC50(&StringLiteral_24004/*"questId"*/);
    byte_593A166 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24004/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24008/*"questPhase"*/, questPhase, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleSkipRequest__getURL(BattleSkipRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A165 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17752/*"battle/skip"*/);
    byte_593A165 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17752/*"battle/skip"*/, 0);
}


void BattleSkipRequest__requestCompleted(
        BattleSkipRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *success; // x20
  __int64 v8; // x1
  System_String_o *v9; // x1

  if ( (byte_593A167 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    byte_593A167 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(138, responseList, 0);
  if ( !v5 )
    sub_21FFECC(0, v6);
  success = (Il2CppObject *)v5->fields.success;
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v6);
  ServantCommentManager__UpdateChapter(0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v9 = JsonManager__toJson(success, 0, 0, 0);
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}