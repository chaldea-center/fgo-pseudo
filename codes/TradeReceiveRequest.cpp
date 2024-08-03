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

  if ( (byte_49FDD68 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19059/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1B640C8(&StringLiteral_17659/*"cancelTradeFlag"*/, v11);
    sub_1B640C8(&StringLiteral_22710/*"receiveNum"*/, v12);
    sub_1B640C8(&StringLiteral_23933/*"tradeStoreIdxs"*/, v13);
    byte_49FDD68 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19059/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&receiveNum);
  RequestBase__addField_40848776(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23933/*"tradeStoreIdxs"*/,
    &tradeStoreIdxs->obj,
    v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22710/*"receiveNum"*/, receiveNum, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17659/*"cancelTradeFlag"*/, cancelTradeFlag, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall TradeReceiveRequest__getURL(TradeReceiveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDD67 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19052/*"event/tradeReceive"*/, v2);
    byte_49FDD67 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_19052/*"event/tradeReceive"*/, 0LL);
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

  if ( (byte_49FDD69 & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, responseList);
    sub_1B640C8(&ResponseCommandKind_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_49FDD69 = 1;
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
        StringLiteral_21968/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}