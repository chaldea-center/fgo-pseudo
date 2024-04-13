void __fastcall UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E71C0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9256/*"MockChangeUserNameResponse"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E71C0 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_9256/*"MockChangeUserNameResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9256/*"MockChangeUserNameResponse"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall UserNameChangeRequest__beginRequest(
        UserNameChangeRequest_o *this,
        System_String_o *name,
        int32_t genderType,
        System_String_o *message,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3

  if ( (byte_42E71BE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21277/*"name"*/, (_DWORD)name, genderType, message);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19204/*"genderType"*/, v12, v13, v14);
    byte_42E71BE = 1;
  }
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_21277/*"name"*/, name, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19204/*"genderType"*/, genderType, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_20733/*"message"*/, message, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *resMsg; // x19

  if ( (byte_42E71BD & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E71BD = 1;
  }
  resMsg = this->fields.resMsg;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getURL(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E71BC & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21835/*"profile/editName"*/, v4, v5, v6);
    byte_42E71BC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_21835/*"profile/editName"*/, 0LL);
}


void __fastcall UserNameChangeRequest__requestCompleted(
        UserNameChangeRequest_o *this,
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
  ResponseData_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42E71BF & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42E71BF = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(19, responseList, 0LL);
  if ( v12 && ResponseData__checkError_29500464(v12, 0LL) )
    v13 = &StringLiteral_21497/*"ok"*/;
  else
    v13 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}