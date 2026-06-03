void ExternalPaymentReflectRequest___ctor(ExternalPaymentReflectRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *ExternalPaymentReflectRequest__getURL(ExternalPaymentReflectRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E791DF & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_19677/*"externalPayment/reflect"*/);
    byte_4E791DF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65562772(BaseUrl, (System_String_o *)StringLiteral_19677/*"externalPayment/reflect"*/, 0);
}


void ExternalPaymentReflectRequest__requestCompleted(
        ExternalPaymentReflectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  Il2CppObject *success; // x20
  System_String_o *v7; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4E791E0 & 1) == 0 )
  {
    sub_1D0F0B4(&JsonManager_TypeInfo);
    this = (ExternalPaymentReflectRequest_o *)sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    byte_4E791E0 = 1;
  }
  if ( !responseList )
    goto LABEL_12;
  if ( !LODWORD(responseList->max_length) )
    sub_1D0F314(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
LABEL_12:
    sub_1D0F30C(this, responseList);
  if ( ResponseData__checkError_45600864(v5, 0) )
  {
    success = (Il2CppObject *)v5->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v7 = (System_String_o *)StringLiteral_22648/*"ng"*/;
  }
  RequestBase__completed(v4, v7, 0);
}