void __fastcall CardInitRandomLimitCountRequest___ctor(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CardInitRandomLimitCountRequest__beginRequest(
        CardInitRandomLimitCountRequest_o *this,
        int32_t randomSettingOwnAll,
        int32_t randomSettingSupportAll,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4B03A2B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18370/*"defaultRandomLimitCount"*/, *(_QWORD *)&randomSettingOwnAll);
    sub_1BC3008(&StringLiteral_18371/*"defaultRandomLimitCountSupport"*/, v7);
    byte_4B03A2B = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18370/*"defaultRandomLimitCount"*/, randomSettingOwnAll, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18371/*"defaultRandomLimitCountSupport"*/, randomSettingSupportAll, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardInitRandomLimitCountRequest__getMockData(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B03A2A & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v2);
    byte_4B03A2A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardInitRandomLimitCountRequest__getURL(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03A29 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17595/*"card/initRandomLimitCount"*/, v2);
    byte_4B03A29 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_17595/*"card/initRandomLimitCount"*/, 0LL);
}


void __fastcall CardInitRandomLimitCountRequest__requestCompleted(
        CardInitRandomLimitCountRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4B03A2C & 1) == 0 )
  {
    sub_1BC3008(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03A2C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(35, responseList, 0LL);
  if ( v7 && ResponseData__checkError_43184840(v7, 0LL) )
    v8 = &StringLiteral_22163/*"ok"*/;
  else
    v8 = &StringLiteral_21997/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}