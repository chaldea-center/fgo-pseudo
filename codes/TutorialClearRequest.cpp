void __fastcall TutorialClearRequest___ctor(TutorialClearRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialClearRequest__getMockData(TutorialClearRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CAF9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CAF9 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialClearRequest__getURL(TutorialClearRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAF8 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24096/*"tutorial/clear"*/);
    byte_4A5CAF8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24096/*"tutorial/clear"*/, 0LL);
}


void __fastcall TutorialClearRequest__requestCompleted(
        TutorialClearRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4A5CAFA & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CAFA = 1;
  }
  if ( (byte_4A5CAD6 & 1) == 0 )
  {
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CAD6 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(37, responseList, 0LL);
  if ( v5 && ResponseData__checkError_41126424(v5, 0LL) )
    v6 = &StringLiteral_22225/*"ok"*/;
  else
    v6 = &StringLiteral_22055/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}