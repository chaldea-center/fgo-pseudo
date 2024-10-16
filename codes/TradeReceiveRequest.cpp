void __fastcall TradeReceiveRequest___ctor(TradeReceiveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TradeReceiveRequest__beginRequest(
        TradeReceiveRequest_o *this,
        int32_t eventId,
        System_Int32_array *tradeStoreIdxs,
        int32_t receiveNum,
        int32_t cancelTradeFlag,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_4AB76EA & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19162/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1BAB41C(&StringLiteral_17760/*"cancelTradeFlag"*/, v11);
    sub_1BAB41C(&StringLiteral_22842/*"receiveNum"*/, v12);
    sub_1BAB41C(&StringLiteral_24072/*"tradeStoreIdxs"*/, v13);
    byte_4AB76EA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19162/*"eventId"*/, eventId, 0LL);
  RequestBase__addField_41524956(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24072/*"tradeStoreIdxs"*/,
    &tradeStoreIdxs->obj,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22842/*"receiveNum"*/, receiveNum, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17760/*"cancelTradeFlag"*/, cancelTradeFlag, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TradeReceiveRequest__getURL(TradeReceiveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB76E9 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_19155/*"event/tradeReceive"*/, v2);
    byte_4AB76E9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_19155/*"event/tradeReceive"*/, 0LL);
}


void __fastcall TradeReceiveRequest__requestCompleted(
        TradeReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x1

  if ( (byte_4AB76EB & 1) == 0 )
  {
    sub_1BAB41C(&JsonManager_TypeInfo, responseList);
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v6);
    byte_4AB76EB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(130, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22090/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}