// local variable allocation has failed, the output may be wrong!
void ServantCostumeCombineRequest__beginRequest(
        ServantCostumeCombineRequest_o *this,
        int64_t baseUserSvtId,
        int32_t costumeId,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4C28E8A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17044/*"baseUserSvtId"*/);
    sub_1C2D490(&StringLiteral_19133/*"eventId"*/);
    sub_1C2D490(&StringLiteral_18277/*"costumeId"*/);
    byte_4C28E8A = 1;
  }
  RequestBase__addField_44008608(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17044/*"baseUserSvtId"*/,
    baseUserSvtId,
    *(const MethodInfo **)&eventId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18277/*"costumeId"*/, costumeId, v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19133/*"eventId"*/, eventId, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *ServantCostumeCombineRequest__getURL(ServantCostumeCombineRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28E89 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17737/*"card/combineCostume"*/);
    byte_4C28E89 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_17737/*"card/combineCostume"*/, 0);
}


void ServantCostumeCombineRequest__requestCompleted(
        ServantCostumeCombineRequest_o *this,
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

  if ( (byte_4C28E8B & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28E8B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(62, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
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