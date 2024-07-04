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

  if ( (byte_48E40E2 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21904/*"offFlagNumbers"*/, onFlagNumbers);
    sub_1B00CCC(&StringLiteral_21957/*"onFlagNumbers"*/, v7);
    byte_48E40E2 = 1;
  }
  if ( onFlagNumbers && *(_QWORD *)&onFlagNumbers->max_length )
    RequestBase__addField_39761928(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21957/*"onFlagNumbers"*/,
      &onFlagNumbers->obj,
      0LL);
  if ( offFlagNumbers && *(_QWORD *)&offFlagNumbers->max_length )
    RequestBase__addField_39761928(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21904/*"offFlagNumbers"*/,
      &offFlagNumbers->obj,
      0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserStatusFlagSetRequest__getMockData(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E40E1 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E40E1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall UserStatusFlagSetRequest__getURL(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E40E0 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_24081/*"userStatus/flagSet"*/, v2);
    byte_48E40E0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_24081/*"userStatus/flagSet"*/, 0LL);
}


void __fastcall UserStatusFlagSetRequest__requestCompleted(
        UserStatusFlagSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_48E40E3 & 1) == 0 )
  {
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v6);
    byte_48E40E3 = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(75, responseList, 0LL);
  if ( v7 && ResponseData__checkError_39752340(v7, 0LL) )
    v8 = &StringLiteral_21923/*"ok"*/;
  else
    v8 = &StringLiteral_21754/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}