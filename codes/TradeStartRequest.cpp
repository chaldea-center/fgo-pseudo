// local variable allocation has failed, the output may be wrong!
void TradeStartRequest__beginRequest(
        TradeStartRequest_o *this,
        int32_t eventId,
        int32_t tradeStoreIdx,
        int32_t tradeGoodsId,
        int32_t tradeGoodsNum,
        int32_t itemId,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_597250E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20037/*"eventId"*/);
    sub_2213A60(&StringLiteral_24192/*"reduceTimeItemId"*/);
    sub_2213A60(&StringLiteral_25468/*"tradeGoodsNum"*/);
    sub_2213A60(&StringLiteral_25470/*"tradeStoreIdx"*/);
    sub_2213A60(&StringLiteral_25467/*"tradeGoodsId"*/);
    byte_597250E = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20037/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&tradeGoodsId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25470/*"tradeStoreIdx"*/, tradeStoreIdx, v13);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25467/*"tradeGoodsId"*/, tradeGoodsId, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25468/*"tradeGoodsNum"*/, tradeGoodsNum, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24192/*"reduceTimeItemId"*/, itemId, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *TradeStartRequest__getURL(TradeStartRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597250D & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20031/*"event/tradeStart"*/);
    byte_597250D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20031/*"event/tradeStart"*/, 0);
}


void TradeStartRequest__requestCompleted(
        TradeStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_597250F & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_597250F = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(129, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (Il2CppObject *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23336/*"ng"*/;
    goto LABEL_14;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}