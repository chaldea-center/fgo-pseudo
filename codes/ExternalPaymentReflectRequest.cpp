System_String_o *__fastcall ExternalPaymentReflectRequest__getURL(
        ExternalPaymentReflectRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A00397 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_19246/*"externalPayment/reflect"*/, v2);
    byte_4A00397 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_19246/*"externalPayment/reflect"*/, 0LL);
}


void __fastcall ExternalPaymentReflectRequest__requestCompleted(
        ExternalPaymentReflectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ExternalPaymentReflectRequest_o *v4; // x19
  __int64 v5; // x1
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v10; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0

  v4 = this;
  if ( (byte_4A00398 & 1) == 0 )
  {
    sub_1B64A00(&JsonManager_TypeInfo, responseList);
    this = (ExternalPaymentReflectRequest_o *)sub_1B64A00(&StringLiteral_21971/*"ng"*/, v5);
    byte_4A00398 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !responseList->max_length )
    sub_1B64C64(this, responseList);
  v6 = responseList->m_Items[0];
  if ( !v6 )
LABEL_15:
    sub_1B64C5C(this, responseList);
  if ( ResponseData__checkError((ResponseData_o *)this, v6->fields.resCode, method) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v10 = (__int64)v8;
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
LABEL_13:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
        original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      m_target = CallBack->fields.m_target;
      original_method_info = CallBack->fields.original_method_info;
      v10 = StringLiteral_21971/*"ng"*/;
      goto LABEL_13;
    }
  }
}