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
  if ( (byte_4A5CAFD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19132/*"eventId"*/);
    sub_1B885B0(&StringLiteral_19456/*"flagId"*/);
    byte_4A5CAFD = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19456/*"flagId"*/, flagId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19132/*"eventId"*/, eventId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialEventSetRequest__getMockData(
        TutorialEventSetRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5CAFC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CAFC = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialEventSetRequest__getURL(TutorialEventSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAFB & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24097/*"tutorial/eventFlagSet"*/);
    byte_4A5CAFB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24097/*"tutorial/eventFlagSet"*/, 0LL);
}


void __fastcall TutorialEventSetRequest__requestCompleted(
        TutorialEventSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4A5CAFE & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CAFE = 1;
  }
  if ( (byte_4A5CAD6 & 1) == 0 )
  {
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CAD6 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(57, responseList, 0LL);
  if ( v5 && ResponseData__checkError_41126424(v5, 0LL) )
    v6 = &StringLiteral_22225/*"ok"*/;
  else
    v6 = &StringLiteral_22055/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}