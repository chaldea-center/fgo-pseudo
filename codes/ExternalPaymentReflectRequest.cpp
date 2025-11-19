System_String_o *ExternalPaymentReflectRequest__getURL(ExternalPaymentReflectRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7E27 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19391/*"externalPayment/reflect"*/);
    byte_4CB7E27 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19391/*"externalPayment/reflect"*/, 0);
}


void ExternalPaymentReflectRequest__requestCompleted(
        ExternalPaymentReflectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ExternalPaymentReflectRequest_o *v4; // x19
  ResponseData_o *v5; // x20
  Il2CppObject *success; // x20
  System_String_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v9; // x1
  void (__fastcall *invoke_impl)(intptr_t, __int64, intptr_t); // x3
  intptr_t method_code; // x0

  v4 = this;
  if ( (byte_4CB7E28 & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    this = (ExternalPaymentReflectRequest_o *)sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7E28 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !LODWORD(responseList->max_length) )
    sub_1C6BC68(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
LABEL_15:
    sub_1C6BC60(this, responseList);
  if ( ResponseData__checkError((ResponseData_o *)this, v5->fields.resCode, method) )
  {
    success = (Il2CppObject *)v5->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v9 = (__int64)v7;
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
      method_code = CallBack->fields.method_code;
LABEL_13:
      invoke_impl(method_code, v9, CallBack->fields.method);
    }
  }
  else
  {
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
      method_code = CallBack->fields.method_code;
      v9 = StringLiteral_22301/*"ng"*/;
      goto LABEL_13;
    }
  }
}