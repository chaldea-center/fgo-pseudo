// local variable allocation has failed, the output may be wrong!
void PurchaseRequest__beginRequest(
        PurchaseRequest_o *this,
        int32_t id,
        int32_t num,
        int32_t anotherPayFlag,
        int32_t anotherPayUsedItem,
        int32_t selectSkill,
        int32_t dayKey,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_593A2A8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23421/*"num"*/);
    sub_21FFC50(&StringLiteral_24438/*"selectSkill"*/);
    sub_21FFC50(&StringLiteral_19285/*"dayKey"*/);
    sub_21FFC50(&StringLiteral_17469/*"anotherPayUsedItem"*/);
    sub_21FFC50(&StringLiteral_21192/*"id"*/);
    sub_21FFC50(&StringLiteral_17467/*"anotherPayFlag"*/);
    byte_593A2A8 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_21192/*"id"*/,
    id,
    *(const MethodInfo **)&anotherPayFlag);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23421/*"num"*/, num, v15);
  if ( anotherPayFlag >= 1 )
  {
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17467/*"anotherPayFlag"*/, anotherPayFlag, v16);
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17469/*"anotherPayUsedItem"*/, anotherPayUsedItem, v17);
    if ( selectSkill >= 1 )
      RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24438/*"selectSkill"*/, selectSkill, v16);
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19285/*"dayKey"*/, dayKey, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v18);
}


System_String_o *PurchaseRequest__getURL(PurchaseRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A2A7 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24620/*"shop/purchase"*/);
    byte_593A2A7 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_24620/*"shop/purchase"*/, 0);
}


void PurchaseRequest__requestCompleted(
        PurchaseRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_593A2A9 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A2A9 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(9, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (Il2CppObject *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23290/*"ng"*/;
    goto LABEL_14;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}