void __fastcall TutorialSetRequest___ctor(TutorialSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TutorialSetRequest__beginRequest(TutorialSetRequest_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_43987EC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19133/*"flagId"*/);
    byte_43987EC = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19133/*"flagId"*/, flagId, 0LL);
  this->fields.FlagId = flagId;
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialSetRequest__getMockData(TutorialSetRequest_o *this, const MethodInfo *method)
{
  if ( (byte_43987EB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43987EB = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialSetRequest__getURL(TutorialSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_43987EA & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23303/*"tutorial/set"*/);
    byte_43987EA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_23303/*"tutorial/set"*/, 0LL);
}


void __fastcall TutorialSetRequest__requestCompleted(
        TutorialSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_43987ED & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&TopHomeRequest_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_43987ED = 1;
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
  v5 = ResponseCommandKind__SearchData(36, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}