void ExternalPaymentReflectRequest___ctor(ExternalPaymentReflectRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *ExternalPaymentReflectRequest__getURL(ExternalPaymentReflectRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C588AC & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19359/*"externalPayment/reflect"*/);
    byte_4C588AC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63636468(BaseUrl, (System_String_o *)StringLiteral_19359/*"externalPayment/reflect"*/, 0);
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
  if ( (byte_4C588AD & 1) == 0 )
  {
    sub_1C3E564(&JsonManager_TypeInfo);
    this = (ExternalPaymentReflectRequest_o *)sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    byte_4C588AD = 1;
  }
  if ( !responseList )
    goto LABEL_12;
  if ( !LODWORD(responseList->max_length) )
    sub_1C3E7C8(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
LABEL_12:
    sub_1C3E7C0(this, responseList);
  if ( ResponseData__checkError_44298060(v5, 0) )
  {
    success = (Il2CppObject *)v5->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v7 = (System_String_o *)StringLiteral_22233/*"ng"*/;
  }
  RequestBase__completed(v4, v7, 0);
}