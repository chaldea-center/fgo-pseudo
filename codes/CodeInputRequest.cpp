void __fastcall CodeInputRequest___ctor(CodeInputRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CodeInputRequest__beginRequest(
        CodeInputRequest_o *this,
        System_String_o *code,
        const MethodInfo *method)
{
  if ( (byte_4A0A3AB & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_17970/*"code"*/, code);
    byte_4A0A3AB = 1;
  }
  RequestBase__addField_40920848((RequestBase_o *)this, (System_String_o *)StringLiteral_17970/*"code"*/, code, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CodeInputRequest__getMockData(CodeInputRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A0A3AA & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A0A3AA = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CodeInputRequest__getURL(CodeInputRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A3A9 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_17971/*"code/input"*/, v2);
    byte_4A0A3A9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_17971/*"code/input"*/, 0LL);
}


void __fastcall CodeInputRequest__requestCompleted(
        CodeInputRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4A0A3AC & 1) == 0 )
  {
    sub_1B686D4(&JsonManager_TypeInfo, responseList);
    sub_1B686D4(&ResponseCommandKind_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v6);
    byte_4A0A3AC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(30, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_40916448(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21981/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}