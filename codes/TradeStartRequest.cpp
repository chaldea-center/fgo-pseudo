// local variable allocation has failed, the output may be wrong!
void __fastcall TradeStartRequest__beginRequest(
        TradeStartRequest_o *this,
        int32_t eventId,
        int32_t tradeStoreIdx,
        int32_t tradeGoodsId,
        int32_t tradeGoodsNum,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  if ( (byte_4A4FFD8 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18908/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1B863B8(&StringLiteral_22671/*"reduceTimeItemId"*/, v13);
    sub_1B863B8(&StringLiteral_23868/*"tradeGoodsNum"*/, v14);
    sub_1B863B8(&StringLiteral_23870/*"tradeStoreIdx"*/, v15);
    sub_1B863B8(&StringLiteral_23867/*"tradeGoodsId"*/, v16);
    byte_4A4FFD8 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_18908/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&tradeGoodsId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23870/*"tradeStoreIdx"*/, tradeStoreIdx, v17);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23867/*"tradeGoodsId"*/, tradeGoodsId, v18);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23868/*"tradeGoodsNum"*/, tradeGoodsNum, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22671/*"reduceTimeItemId"*/, itemId, v20);
  RequestBase__beginRequest((RequestBase_o *)this, v21);
}


System_String_o *__fastcall TradeStartRequest__getURL(TradeStartRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A4FFD7 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_18902/*"event/tradeStart"*/, v2);
    byte_4A4FFD7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_18902/*"event/tradeStart"*/, 0LL);
}


void __fastcall TradeStartRequest__requestCompleted(
        TradeStartRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4A4FFD9 & 1) == 0 )
  {
    sub_1B863B8(&JsonManager_TypeInfo, responseList);
    sub_1B863B8(&ResponseCommandKind_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4FFD9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(129, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_21893/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}