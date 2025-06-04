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
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4B03BB9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18963/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1BC3008(&StringLiteral_17568/*"cancelTradeFlag"*/, v11);
    sub_1BC3008(&StringLiteral_22756/*"receiveNum"*/, v12);
    sub_1BC3008(&StringLiteral_23933/*"tradeStoreIdxs"*/, v13);
    byte_4B03BB9 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_18963/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&receiveNum);
  RequestBase__addField_43193604(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23933/*"tradeStoreIdxs"*/,
    &tradeStoreIdxs->obj,
    v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22756/*"receiveNum"*/, receiveNum, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17568/*"cancelTradeFlag"*/, cancelTradeFlag, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall TradeReceiveRequest__getURL(TradeReceiveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03BB8 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_18956/*"event/tradeReceive"*/, v2);
    byte_4B03BB8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_18956/*"event/tradeReceive"*/, 0LL);
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
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4B03BBA & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, responseList);
    sub_1BC3008(&ResponseCommandKind_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03BBA = 1;
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
        StringLiteral_21997/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}