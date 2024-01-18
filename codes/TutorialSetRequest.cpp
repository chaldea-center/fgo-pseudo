void __fastcall TutorialSetRequest___ctor(TutorialSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialSetRequest__beginRequest(TutorialSetRequest_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4194A84 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18757/*"flagId"*/, *(_QWORD *)&flagId);
    byte_4194A84 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18757/*"flagId"*/, flagId, 0LL);
  this->fields.FlagId = flagId;
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialSetRequest__getMockData(TutorialSetRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4194A83 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4194A83 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialSetRequest__getURL(TutorialSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4194A82 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22825/*"tutorial/set"*/, v2);
    byte_4194A82 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_22825/*"tutorial/set"*/, 0LL);
}


void __fastcall TutorialSetRequest__requestCompleted(
        TutorialSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ResponseData_o *v8; // x0
  __int64 *v9; // x8

  if ( (byte_4194A85 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&TopHomeRequest_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_4194A85 = 1;
  }
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v8 = ResponseCommandKind__SearchData(35, responseList, 0LL);
  if ( v8 && ResponseData__checkError_31019724(v8, 0LL) )
    v9 = &StringLiteral_21218/*"ok"*/;
  else
    v9 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}