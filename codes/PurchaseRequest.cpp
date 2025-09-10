// local variable allocation has failed, the output may be wrong!
void PurchaseRequest__beginRequest(
        PurchaseRequest_o *this,
        int32_t id,
        int32_t num,
        int32_t anotherPayFlag,
        int32_t anotherPayUsedItem,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  if ( (byte_4C28E51 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22318/*"num"*/);
    sub_1C2D490(&StringLiteral_16790/*"anotherPayUsedItem"*/);
    sub_1C2D490(&StringLiteral_20239/*"id"*/);
    sub_1C2D490(&StringLiteral_16787/*"anotherPayFlag"*/);
    byte_4C28E51 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20239/*"id"*/,
    id,
    *(const MethodInfo **)&anotherPayFlag);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22318/*"num"*/, num, v11);
  if ( anotherPayFlag >= 1 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16787/*"anotherPayFlag"*/, anotherPayFlag, v13);
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16790/*"anotherPayUsedItem"*/, anotherPayUsedItem, v14);
  }
  RequestBase__beginRequest((RequestBase_o *)this, v12);
}


System_String_o *PurchaseRequest__getURL(PurchaseRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28E50 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_23418/*"shop/purchase"*/);
    byte_4C28E50 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_23418/*"shop/purchase"*/, 0);
}


void PurchaseRequest__requestCompleted(
        PurchaseRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4C28E52 & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28E52 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(9, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22195/*"ng"*/,
        v11->fields.method);
  }
}