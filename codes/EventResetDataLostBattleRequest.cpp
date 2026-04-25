void EventResetDataLostBattleRequest___ctor(EventResetDataLostBattleRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventResetDataLostBattleRequest__beginRequest(
        EventResetDataLostBattleRequest_o *this,
        int32_t dataLostBattleId,
        int32_t resetIdx,
        const MethodInfo *method)
{
  if ( (byte_4E0652A & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_18690/*"dataLostBattleId"*/);
    sub_1CE6700(&StringLiteral_20560/*"idx"*/);
    byte_4E0652A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18690/*"dataLostBattleId"*/, dataLostBattleId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20560/*"idx"*/, resetIdx, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventResetDataLostBattleRequest__getURL(
        EventResetDataLostBattleRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E06529 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19389/*"event/resetDataLostBattle"*/);
    byte_4E06529 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_19389/*"event/resetDataLostBattle"*/, 0);
}


void EventResetDataLostBattleRequest__requestCompleted(
        EventResetDataLostBattleRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4E0652B & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E0652B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(124, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45365352(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22555/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}