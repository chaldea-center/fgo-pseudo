void __fastcall TutorialSetRequest___ctor(TutorialSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialSetRequest__beginRequest(TutorialSetRequest_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4A2145A & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_19405/*"flagId"*/, *(_QWORD *)&flagId);
    byte_4A2145A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19405/*"flagId"*/, flagId, 0LL);
  this->fields.FlagId = flagId;
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialSetRequest__getMockData(TutorialSetRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A21459 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_1/*""*/, method);
    byte_4A21459 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialSetRequest__getURL(TutorialSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A21458 & 1) == 0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, method);
    sub_1B715CC(&StringLiteral_24039/*"tutorial/set"*/, v2);
    byte_4A21458 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61505504(BaseUrl, (System_String_o *)StringLiteral_24039/*"tutorial/set"*/, 0LL);
}


void __fastcall TutorialSetRequest__requestCompleted(
        TutorialSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4A2145B & 1) == 0 )
  {
    sub_1B715CC(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B715CC(&StringLiteral_22170/*"ok"*/, v5);
    sub_1B715CC(&StringLiteral_22000/*"ng"*/, v6);
    byte_4A2145B = 1;
  }
  if ( (byte_4A2142F & 1) == 0 )
  {
    sub_1B715CC(&TopHomeRequest_TypeInfo, responseList);
    byte_4A2142F = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(36, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40915860(v7, 0LL) )
    v8 = &StringLiteral_22170/*"ok"*/;
  else
    v8 = &StringLiteral_22000/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}