void PurchaseByStoneRequest__beginRequest(
        PurchaseByStoneRequest_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_593A2A5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23421/*"num"*/);
    sub_21FFC50(&StringLiteral_21192/*"id"*/);
    byte_593A2A5 = 1;
  }
  v7 = (System_String_o *)StringLiteral_21192/*"id"*/;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = id;
  this->fields.id = num;
  RequestBase__addField((RequestBase_o *)this, v7, id, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23421/*"num"*/, num, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
}


System_String_o *PurchaseByStoneRequest__getURL(PurchaseByStoneRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A2A4 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24622/*"shop/purchaseByStone"*/);
    byte_593A2A4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_24622/*"shop/purchaseByStone"*/, 0);
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

  if ( (byte_593A2A6 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A2A6 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(10, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_23468/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_23290/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}