// local variable allocation has failed, the output may be wrong!
void TradeReceiveRequest__beginRequest(
        TradeReceiveRequest_o *this,
        int32_t eventId,
        System_Int32_array *tradeStoreIdxs,
        int32_t receiveNum,
        int32_t cancelTradeFlag,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_4C395DF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19143/*"eventId"*/);
    sub_1C32C20(&StringLiteral_17724/*"cancelTradeFlag"*/);
    sub_1C32C20(&StringLiteral_22978/*"receiveNum"*/);
    sub_1C32C20(&StringLiteral_24167/*"tradeStoreIdxs"*/);
    byte_4C395DF = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19143/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&receiveNum);
  RequestBase__addField_44145300(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24167/*"tradeStoreIdxs"*/,
    &tradeStoreIdxs->obj,
    v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22978/*"receiveNum"*/, receiveNum, v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17724/*"cancelTradeFlag"*/, cancelTradeFlag, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *TradeReceiveRequest__getURL(TradeReceiveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C395DE & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19136/*"event/tradeReceive"*/);
    byte_4C395DE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_19136/*"event/tradeReceive"*/, 0);
}


void TradeReceiveRequest__requestCompleted(
        TradeReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4C395E0 & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C395E0 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(130, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22212/*"ng"*/,
        v11->fields.method);
  }
}