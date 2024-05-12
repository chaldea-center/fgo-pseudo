void __fastcall UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4389DB0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9329/*"MockChangeUserNameResponse"*/);
    byte_4389DB0 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_9329/*"MockChangeUserNameResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9329/*"MockChangeUserNameResponse"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall UserNameChangeRequest__beginRequest(
        UserNameChangeRequest_o *this,
        System_String_o *name,
        int32_t genderType,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4389DAE & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21436/*"name"*/);
    sub_B775C4(&StringLiteral_20889/*"message"*/);
    sub_B775C4(&StringLiteral_19350/*"genderType"*/);
    byte_4389DAE = 1;
  }
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_21436/*"name"*/, name, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19350/*"genderType"*/, genderType, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_20889/*"message"*/, message, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4389DAD & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4389DAD = 1;
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
  System_String_o *BaseUrl; // x0

  if ( (byte_4389DAC & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_22000/*"profile/editName"*/);
    byte_4389DAC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_22000/*"profile/editName"*/, 0LL);
}


void __fastcall UserNameChangeRequest__requestCompleted(
        UserNameChangeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4389DAF & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_4389DAF = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(19, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}