void __fastcall TradeStartRequest___ctor(TradeStartRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TradeStartRequest__beginRequest(
        TradeStartRequest_o *this,
        int32_t eventId,
        int32_t tradeStoreIdx,
        int32_t tradeGoodsId,
        int32_t tradeGoodsNum,
        int32_t itemId,
        const MethodInfo *method)
{
  if ( (byte_4BDDF9C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19460/*"eventId"*/);
    sub_1C21E38(&StringLiteral_23235/*"reduceTimeItemId"*/);
    sub_1C21E38(&StringLiteral_24462/*"tradeGoodsNum"*/);
    sub_1C21E38(&StringLiteral_24464/*"tradeStoreIdx"*/);
    sub_1C21E38(&StringLiteral_24461/*"tradeGoodsId"*/);
    byte_4BDDF9C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19460/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24464/*"tradeStoreIdx"*/, tradeStoreIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24461/*"tradeGoodsId"*/, tradeGoodsId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24462/*"tradeGoodsNum"*/, tradeGoodsNum, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23235/*"reduceTimeItemId"*/, itemId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TradeStartRequest__getURL(TradeStartRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDF9B & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19454/*"event/tradeStart"*/);
    byte_4BDDF9B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_19454/*"event/tradeStart"*/, 0LL);
}


void __fastcall TradeStartRequest__requestCompleted(
        TradeStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_4BDDF9D & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDF9D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(129, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_22456/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0LL);
}