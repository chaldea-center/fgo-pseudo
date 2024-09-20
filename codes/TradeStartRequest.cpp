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
        const MethodInfo *method)
{
  if ( (byte_4A5CAF3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19132/*"eventId"*/);
    sub_1B885B0(&StringLiteral_24030/*"tradeGoodsNum"*/);
    sub_1B885B0(&StringLiteral_24031/*"tradeStoreIdx"*/);
    sub_1B885B0(&StringLiteral_24029/*"tradeGoodsId"*/);
    byte_4A5CAF3 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19132/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24031/*"tradeStoreIdx"*/, tradeStoreIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24029/*"tradeGoodsId"*/, tradeGoodsId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24030/*"tradeGoodsNum"*/, tradeGoodsNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TradeStartRequest__getURL(TradeStartRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAF2 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19126/*"event/tradeStart"*/);
    byte_4A5CAF2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19126/*"event/tradeStart"*/, 0LL);
}


void __fastcall TradeStartRequest__requestCompleted(
        TradeStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4A5CAF4 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CAF4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(129, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}