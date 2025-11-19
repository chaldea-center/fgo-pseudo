System_String_o *TopRefreshRequest__getMockData(TopRefreshRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7F1B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7F1B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *TopRefreshRequest__getURL(TopRefreshRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7F1A & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_23100/*"refresh/top"*/);
    byte_4CB7F1A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_23100/*"refresh/top"*/, 0);
}


void TopRefreshRequest__requestCompleted(
        TopRefreshRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CB7F1C & 1) == 0 )
  {
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22471/*"ok"*/);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7F1C = 1;
  }
  if ( (byte_4CB7F06 & 1) == 0 )
  {
    sub_1C6BA08(&TopHomeRequest_TypeInfo);
    byte_4CB7F06 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22471/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22301/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}