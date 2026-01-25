void PurchaseByStoneRequest__beginRequest(
        PurchaseByStoneRequest_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4CF01D1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22543/*"num"*/);
    sub_1C7BAE8(&StringLiteral_20420/*"id"*/);
    byte_4CF01D1 = 1;
  }
  this->fields.id = id;
  this->fields.num = num;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20420/*"id"*/, id, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22543/*"num"*/, num, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *PurchaseByStoneRequest__getURL(PurchaseByStoneRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF01D0 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23661/*"shop/purchaseByStone"*/);
    byte_4CF01D0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_23661/*"shop/purchaseByStone"*/, 0);
}


void PurchaseByStoneRequest__requestCompleted(
        PurchaseByStoneRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CF01D2 & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF01D2 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(10, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22590/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22419/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}