void __fastcall ExternalPaymentReflectRequest___ctor(ExternalPaymentReflectRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ExternalPaymentReflectRequest__getURL(
        ExternalPaymentReflectRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03AC1 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_19155/*"externalPayment/reflect"*/, v2);
    byte_4B03AC1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_19155/*"externalPayment/reflect"*/, 0LL);
}


void __fastcall ExternalPaymentReflectRequest__requestCompleted(
        ExternalPaymentReflectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 v5; // x1
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4B03AC2 & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, responseList);
    this = (ExternalPaymentReflectRequest_o *)sub_1BC3008(&StringLiteral_21997/*"ng"*/, v5);
    byte_4B03AC2 = 1;
  }
  if ( !responseList )
    goto LABEL_12;
  if ( !responseList->max_length )
    sub_1BC326C(this, responseList, method);
  v6 = responseList->m_Items[0];
  if ( !v6 )
LABEL_12:
    sub_1BC3264(this, responseList);
  if ( ResponseData__checkError_43184840(v6, 0LL) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21997/*"ng"*/;
  }
  RequestBase__completed(v4, v8, 0LL);
}