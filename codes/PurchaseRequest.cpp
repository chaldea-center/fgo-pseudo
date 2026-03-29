// local variable allocation has failed, the output may be wrong!
void PurchaseRequest__beginRequest(
        PurchaseRequest_o *this,
        int32_t id,
        int32_t num,
        int32_t anotherPayFlag,
        int32_t anotherPayUsedItem,
        int32_t selectSkill,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  if ( (byte_4D32564 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22608/*"num"*/);
    sub_1C93AD4(&StringLiteral_23552/*"selectSkill"*/);
    sub_1C93AD4(&StringLiteral_16916/*"anotherPayUsedItem"*/);
    sub_1C93AD4(&StringLiteral_20479/*"id"*/);
    sub_1C93AD4(&StringLiteral_16914/*"anotherPayFlag"*/);
    byte_4D32564 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20479/*"id"*/,
    id,
    *(const MethodInfo **)&anotherPayFlag);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22608/*"num"*/, num, v13);
  if ( anotherPayFlag >= 1 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16914/*"anotherPayFlag"*/, anotherPayFlag, v15);
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16916/*"anotherPayUsedItem"*/, anotherPayUsedItem, v16);
    if ( selectSkill >= 1 )
      RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23552/*"selectSkill"*/, selectSkill, v17);
  }
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *PurchaseRequest__getURL(PurchaseRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32563 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_23725/*"shop/purchase"*/);
    byte_4D32563 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_23725/*"shop/purchase"*/, 0);
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

  if ( (byte_4D32565 & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D32565 = 1;
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
        StringLiteral_22483/*"ng"*/,
        v11->fields.method);
  }
}