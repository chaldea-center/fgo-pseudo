void __fastcall CardServantFlagRequest___ctor(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CardServantFlagRequest__beginRequest(
        CardServantFlagRequest_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4B1DF3E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23653/*"svtId"*/, *(_QWORD *)&svtId);
    sub_1BCAFF8(&StringLiteral_19305/*"flagId"*/, v7);
    byte_4B1DF3E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23653/*"svtId"*/, svtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19305/*"flagId"*/, flagId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
  return 1;
}


System_String_o *__fastcall CardServantFlagRequest__getMockData(
        CardServantFlagRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1DF3D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B1DF3D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CardServantFlagRequest__getURL(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1DF3C & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_17609/*"card/svtFlag"*/, v2);
    byte_4B1DF3C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_17609/*"card/svtFlag"*/, 0LL);
}


void __fastcall CardServantFlagRequest__requestCompleted(
        CardServantFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B1DF3F & 1) == 0 )
  {
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BCAFF8(&StringLiteral_22181/*"ok"*/, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1DF3F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(68, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43347888(v7, 0LL) )
    v8 = &StringLiteral_22181/*"ok"*/;
  else
    v8 = &StringLiteral_22015/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}