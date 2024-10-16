void __fastcall TutorialEventSetRequest___ctor(TutorialEventSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialEventSetRequest__beginRequest(
        TutorialEventSetRequest_o *this,
        int32_t flagId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4AB76F7 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19162/*"eventId"*/, *(_QWORD *)&flagId);
    sub_1BAB41C(&StringLiteral_19486/*"flagId"*/, v7);
    byte_4AB76F7 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19486/*"flagId"*/, flagId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19162/*"eventId"*/, eventId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TutorialEventSetRequest__getMockData(
        TutorialEventSetRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB76F6 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, method);
    byte_4AB76F6 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TutorialEventSetRequest__getURL(TutorialEventSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB76F5 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_24137/*"tutorial/eventFlagSet"*/, v2);
    byte_4AB76F5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_24137/*"tutorial/eventFlagSet"*/, 0LL);
}


void __fastcall TutorialEventSetRequest__requestCompleted(
        TutorialEventSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 *v9; // x8

  if ( (byte_4AB76F8 & 1) == 0 )
  {
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BAB41C(&StringLiteral_22261/*"ok"*/, v5);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v6);
    byte_4AB76F8 = 1;
  }
  if ( (byte_4AB76CF & 1) == 0 )
  {
    sub_1BAB41C(&TopHomeRequest_TypeInfo, responseList);
    byte_4AB76CF = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(57, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_22261/*"ok"*/;
  else
    v9 = &StringLiteral_22090/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}