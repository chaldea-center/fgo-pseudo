void CodeInputRequest___ctor(CodeInputRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CodeInputRequest__beginRequest(CodeInputRequest_o *this, System_String_o *code, const MethodInfo *method)
{
  if ( (byte_4C28D68 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18028/*"code"*/);
    byte_4C28D68 = 1;
  }
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_18028/*"code"*/, code, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CodeInputRequest__getMockData(CodeInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D67 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D67 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *CodeInputRequest__getURL(CodeInputRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28D66 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_18029/*"code/input"*/);
    byte_4C28D66 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_18029/*"code/input"*/, 0);
}


void CodeInputRequest__requestCompleted(
        CodeInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C28D69 & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D69 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(30, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44004292(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22195/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}