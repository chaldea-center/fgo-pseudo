void __fastcall UserStatusFlagSetRequest___ctor(UserStatusFlagSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall UserStatusFlagSetRequest__beginRequest(
        UserStatusFlagSetRequest_o *this,
        System_Int32_array *onFlagNumbers,
        System_Int32_array *offFlagNumbers,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4C23A2E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22664/*"rule"*/, onFlagNumbers);
    sub_1C3B764(&StringLiteral_22717/*"scopeid"*/, v7);
    byte_4C23A2E = 1;
  }
  if ( onFlagNumbers && *(_QWORD *)&onFlagNumbers->max_length )
    RequestBase__addField_42630344(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_22717/*"scopeid"*/,
      &onFlagNumbers->obj,
      0LL);
  if ( offFlagNumbers && *(_QWORD *)&offFlagNumbers->max_length )
    RequestBase__addField_42630344(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_22664/*"rule"*/,
      &offFlagNumbers->obj,
      0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserStatusFlagSetRequest__getMockData(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C23A2D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C23A2D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall UserStatusFlagSetRequest__getURL(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23A2C & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_24951/*"キュー順"*/, v2);
    byte_4C23A2C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_24951/*"キュー順"*/, 0LL);
}


void __fastcall UserStatusFlagSetRequest__requestCompleted(
        UserStatusFlagSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 *v9; // x8

  if ( (byte_4C23A2F & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C23A2F = 1;
  }
  if ( (byte_4C239EC & 1) == 0 )
  {
    sub_1C3B764(&TopHomeRequest_TypeInfo, responseList);
    byte_4C239EC = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(75, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  else
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}