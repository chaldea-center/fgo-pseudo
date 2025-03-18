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

  if ( (byte_4C23A07 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19507/*"graphic.shader"*/, *(_QWORD *)&eventId);
    sub_1C3B764(&StringLiteral_18075/*"cutinFirstIdListKey"*/, v11);
    sub_1C3B764(&StringLiteral_23279/*"subCameraOn"*/, v12);
    sub_1C3B764(&StringLiteral_24533/*"yyyy-MM-dd zzz"*/, v13);
    byte_4C23A07 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19507/*"graphic.shader"*/, eventId, 0LL);
  RequestBase__addField_42630344(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24533/*"yyyy-MM-dd zzz"*/,
    &tradeStoreIdxs->obj,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23279/*"subCameraOn"*/, receiveNum, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18075/*"cutinFirstIdListKey"*/, cancelTradeFlag, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TradeReceiveRequest__getURL(TradeReceiveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23A06 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_19500/*"grade"*/, v2);
    byte_4C23A06 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_19500/*"grade"*/, 0LL);
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

  if ( (byte_4C23A08 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, responseList);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C23A08 = 1;
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
    v11 = (System_String_o *)StringLiteral_22507/*"referrerMapId"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}