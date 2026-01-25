// local variable allocation has failed, the output may be wrong!
void ItemUseRequest__beginRequest(
        ItemUseRequest_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4CF01AE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22543/*"num"*/);
    sub_1C7BAE8(&StringLiteral_19287/*"eventId"*/);
    sub_1C7BAE8(&StringLiteral_24725/*"useItemId"*/);
    byte_4CF01AE = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19287/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&eventId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24725/*"useItemId"*/, itemId, v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22543/*"num"*/, num, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *ItemUseRequest__getURL(ItemUseRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF01AD & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21202/*"item/use"*/);
    byte_4CF01AD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_21202/*"item/use"*/, 0);
}


void ItemUseRequest__requestCompleted(
        ItemUseRequest_o *this,
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

  if ( (byte_4CF01AF & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF01AF = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(44, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( success )
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
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22419/*"ng"*/,
        v11->fields.method);
  }
}