void __fastcall TutorialEventSetRequest___ctor(TutorialEventSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TutorialEventSetRequest__beginRequest(
        TutorialEventSetRequest_o *this,
        int32_t flagId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_438D6DD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18839/*"eventId"*/);
    sub_B775C4(&StringLiteral_19133/*"flagId"*/);
    byte_438D6DD = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19133/*"flagId"*/, flagId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18839/*"eventId"*/, eventId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialEventSetRequest__getMockData(
        TutorialEventSetRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D6DC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D6DC = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialEventSetRequest__getURL(TutorialEventSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438D6DB & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23302/*"tutorial/eventFlagSet"*/);
    byte_438D6DB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_23302/*"tutorial/eventFlagSet"*/, 0LL);
}


void __fastcall TutorialEventSetRequest__requestCompleted(
        TutorialEventSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  TopHomeRequest_c *v5; // x0
  ResponseData_o *v6; // x0
  __int64 *v7; // x8

  if ( (byte_438D6DE & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&TopHomeRequest_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438D6DE = 1;
  }
  v5 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v5);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v6 = ResponseCommandKind__SearchData(57, responseList, 0LL);
  if ( v6 && ResponseData__checkError_30128096(v6, 0LL) )
    v7 = &StringLiteral_21657/*"ok"*/;
  else
    v7 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0LL);
}