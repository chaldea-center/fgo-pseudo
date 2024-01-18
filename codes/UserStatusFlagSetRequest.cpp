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

  if ( (byte_418D280 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21197/*"offFlagNumbers"*/, onFlagNumbers);
    sub_B2C35C(&StringLiteral_21250/*"onFlagNumbers"*/, v7);
    byte_418D280 = 1;
  }
  if ( onFlagNumbers && *(_QWORD *)&onFlagNumbers->max_length )
    RequestBase__addField_31052036(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21250/*"onFlagNumbers"*/,
      &onFlagNumbers->obj,
      0LL);
  if ( offFlagNumbers && *(_QWORD *)&offFlagNumbers->max_length )
    RequestBase__addField_31052036(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21197/*"offFlagNumbers"*/,
      &offFlagNumbers->obj,
      0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserStatusFlagSetRequest__getMockData(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_418D27F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418D27F = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall UserStatusFlagSetRequest__getURL(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418D27E & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23055/*"userStatus/flagSet"*/, v2);
    byte_418D27E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_23055/*"userStatus/flagSet"*/, 0LL);
}


void __fastcall UserStatusFlagSetRequest__requestCompleted(
        UserStatusFlagSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ResponseData_o *v8; // x0
  __int64 *v9; // x8

  if ( (byte_418D281 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&TopHomeRequest_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_418D281 = 1;
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
  v8 = ResponseCommandKind__SearchData(74, responseList, 0LL);
  if ( v8 && ResponseData__checkError_31019724(v8, 0LL) )
    v9 = &StringLiteral_21218/*"ok"*/;
  else
    v9 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}