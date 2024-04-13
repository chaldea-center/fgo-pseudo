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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EE6B9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21476/*"offFlagNumbers"*/, (_DWORD)onFlagNumbers, (_DWORD)offFlagNumbers, method);
    sub_B5D5C4(&StringLiteral_21529/*"onFlagNumbers"*/, v7, v8, v9);
    byte_42EE6B9 = 1;
  }
  if ( onFlagNumbers && *(_QWORD *)&onFlagNumbers->max_length )
    RequestBase__addField_32362368(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21529/*"onFlagNumbers"*/,
      &onFlagNumbers->obj,
      0LL);
  if ( offFlagNumbers && *(_QWORD *)&offFlagNumbers->max_length )
    RequestBase__addField_32362368(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_21476/*"offFlagNumbers"*/,
      &offFlagNumbers->obj,
      0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserStatusFlagSetRequest__getMockData(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6B8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EE6B8 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall UserStatusFlagSetRequest__getURL(
        UserStatusFlagSetRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EE6B7 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23362/*"userStatus/flagSet"*/, v4, v5, v6);
    byte_42EE6B7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_23362/*"userStatus/flagSet"*/, 0LL);
}


void __fastcall UserStatusFlagSetRequest__requestCompleted(
        UserStatusFlagSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  ResponseData_o *v15; // x0
  __int64 *v16; // x8

  if ( (byte_42EE6BA & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v12, v13, v14);
    byte_42EE6BA = 1;
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
  v15 = ResponseCommandKind__SearchData(75, responseList, 0LL);
  if ( v15 && ResponseData__checkError_29500464(v15, 0LL) )
    v16 = &StringLiteral_21497/*"ok"*/;
  else
    v16 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v16, 0LL);
}