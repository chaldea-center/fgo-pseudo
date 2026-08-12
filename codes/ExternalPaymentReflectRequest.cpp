void ExternalPaymentReflectRequest___ctor(ExternalPaymentReflectRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *ExternalPaymentReflectRequest__getURL(ExternalPaymentReflectRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972410 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20236/*"externalPayment/reflect"*/);
    byte_5972410 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20236/*"externalPayment/reflect"*/, 0);
}


void ExternalPaymentReflectRequest__requestCompleted(
        ExternalPaymentReflectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  __int64 v6; // x1
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_5972411 & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    this = (ExternalPaymentReflectRequest_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972411 = 1;
  }
  if ( !responseList )
    goto LABEL_12;
  if ( !LODWORD(responseList->max_length) )
    sub_2213CE4(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
LABEL_12:
    sub_2213CDC(this, responseList);
  if ( ResponseData__checkError_51257228(v5, 0) )
  {
    success = (Il2CppObject *)v5->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_23336/*"ng"*/;
  }
  RequestBase__completed(v4, v8, 0);
}