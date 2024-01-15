void __fastcall UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40F9768 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9132/*"MockChangeUserNameResponse"*/, method);
    byte_40F9768 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_9132/*"MockChangeUserNameResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9132/*"MockChangeUserNameResponse"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_40F9766 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20914/*"name"*/, name);
    sub_B16FFC(&StringLiteral_20390/*"message"*/, v9);
    sub_B16FFC(&StringLiteral_18893/*"genderType"*/, v10);
    byte_40F9766 = 1;
  }
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_20914/*"name"*/, name, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18893/*"genderType"*/, genderType, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_20390/*"message"*/, message, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_40F9765 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F9765 = 1;
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
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F9764 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21453/*"profile/editName"*/, v2);
    byte_40F9764 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_21453/*"profile/editName"*/, 0LL);
}


void __fastcall UserNameChangeRequest__requestCompleted(
        UserNameChangeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  System_String_o **v8; // x8

  if ( (byte_40F9767 & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40F9767 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(19, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30924960(v7, 0LL) )
    v8 = (System_String_o **)&StringLiteral_21129/*"ok"*/;
  else
    v8 = (System_String_o **)&StringLiteral_20980/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, *v8, 0LL);
}