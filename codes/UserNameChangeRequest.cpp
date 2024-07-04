void __fastcall UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_48E40D8 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9002/*"MockChangeUserNameResponse"*/, method);
    byte_48E40D8 = 1;
  }
  v5 = StringLiteral_9002/*"MockChangeUserNameResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9002/*"MockChangeUserNameResponse"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.resMsg, v5, v2, v3);
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall UserNameChangeRequest__beginRequest(
        UserNameChangeRequest_o *this,
        System_String_o *name,
        int32_t genderType,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1

  if ( (byte_48E40D6 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21681/*"name"*/, name);
    sub_1B00CCC(&StringLiteral_21112/*"message"*/, v9);
    sub_1B00CCC(&StringLiteral_19443/*"genderType"*/, v10);
    byte_48E40D6 = 1;
  }
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_21681/*"name"*/, name, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19443/*"genderType"*/, genderType, 0LL);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_21112/*"message"*/, message, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_48E40D5 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E40D5 = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getURL(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E40D4 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_22305/*"profile/editName"*/, v2);
    byte_48E40D4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_22305/*"profile/editName"*/, 0LL);
}


void __fastcall UserNameChangeRequest__requestCompleted(
        UserNameChangeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_48E40D7 & 1) == 0 )
  {
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v6);
    byte_48E40D7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(19, responseList, 0LL);
  if ( v7 && ResponseData__checkError_39752340(v7, 0LL) )
    v8 = &StringLiteral_21923/*"ok"*/;
  else
    v8 = &StringLiteral_21754/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}