void __fastcall CardInitRandomLimitCountRequest___ctor(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CardInitRandomLimitCountRequest__beginRequest(
        CardInitRandomLimitCountRequest_o *this,
        int32_t randomSettingOwnAll,
        int32_t randomSettingSupportAll,
        const MethodInfo *method)
{
  if ( (byte_42B169E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18067/*"defaultRandomLimitCount"*/);
    sub_B52984(&StringLiteral_18068/*"defaultRandomLimitCountSupport"*/);
    byte_42B169E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18067/*"defaultRandomLimitCount"*/, randomSettingOwnAll, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18068/*"defaultRandomLimitCountSupport"*/, randomSettingSupportAll, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CardInitRandomLimitCountRequest__getMockData(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B169D & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B169D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CardInitRandomLimitCountRequest__getURL(
        CardInitRandomLimitCountRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B169C & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_17343/*"card/initRandomLimitCount"*/);
    byte_42B169C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_17343/*"card/initRandomLimitCount"*/, 0LL);
}


void __fastcall CardInitRandomLimitCountRequest__requestCompleted(
        CardInitRandomLimitCountRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42B169F & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B169F = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(35, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}