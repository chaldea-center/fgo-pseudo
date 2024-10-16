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

  if ( (byte_4AB7711 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22242/*"offFlagNumbers"*/, onFlagNumbers);
    sub_1BAB41C(&StringLiteral_22295/*"onFlagNumbers"*/, v7);
    byte_4AB7711 = 1;
  }
  if ( onFlagNumbers && *(_QWORD *)&onFlagNumbers->max_length )
    RequestBase__addField_41524956(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_22295/*"onFlagNumbers"*/,
      &onFlagNumbers->obj,
      0LL);
  if ( offFlagNumbers && *(_QWORD *)&offFlagNumbers->max_length )
    RequestBase__addField_41524956(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_22242/*"offFlagNumbers"*/,
      &offFlagNumbers->obj,
      0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserStatusFlagSetRequest__getMockData(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB7710 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, method);
    byte_4AB7710 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall UserStatusFlagSetRequest__getURL(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB770F & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_24484/*"userStatus/flagSet"*/, v2);
    byte_4AB770F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_24484/*"userStatus/flagSet"*/, 0LL);
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

  if ( (byte_4AB7712 & 1) == 0 )
  {
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BAB41C(&StringLiteral_22261/*"ok"*/, v5);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v6);
    byte_4AB7712 = 1;
  }
  if ( (byte_4AB76CF & 1) == 0 )
  {
    sub_1BAB41C(&TopHomeRequest_TypeInfo, responseList);
    byte_4AB76CF = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(75, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_22261/*"ok"*/;
  else
    v9 = &StringLiteral_22090/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}