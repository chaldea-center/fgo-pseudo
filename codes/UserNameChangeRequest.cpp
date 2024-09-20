void __fastcall UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5CB0D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9105/*"MockChangeUserNameResponse"*/);
    byte_4A5CB0D = 1;
  }
  v5 = StringLiteral_9105/*"MockChangeUserNameResponse"*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9105/*"MockChangeUserNameResponse"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resMsg, v5, v2, v3);
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall UserNameChangeRequest__beginRequest(
        UserNameChangeRequest_o *this,
        System_String_o *name,
        int32_t genderType,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4A5CB0B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21982/*"name"*/);
    sub_1B885B0(&StringLiteral_21395/*"message"*/);
    sub_1B885B0(&StringLiteral_19714/*"genderType"*/);
    byte_4A5CB0B = 1;
  }
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_21982/*"name"*/, name, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19714/*"genderType"*/, genderType, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_21395/*"message"*/, message, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4A5CB0A & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CB0A = 1;
  }
  resMsg = this->fields.resMsg;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile(resMsg, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getURL(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB09 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22615/*"profile/editName"*/);
    byte_4A5CB09 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_22615/*"profile/editName"*/, 0LL);
}


void __fastcall UserNameChangeRequest__requestCompleted(
        UserNameChangeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4A5CB0C & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CB0C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(19, responseList, 0LL);
  if ( v5 && ResponseData__checkError_41126424(v5, 0LL) )
    v6 = &StringLiteral_22225/*"ok"*/;
  else
    v6 = &StringLiteral_22055/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}