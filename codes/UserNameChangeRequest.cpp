void __fastcall UserNameChangeRequest___ctor(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4C23A24 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_9292/*"Non negative number is required."*/, method);
    byte_4C23A24 = 1;
  }
  v9 = StringLiteral_9292/*"Non negative number is required."*/;
  this->fields.resMsg = (struct System_String_o *)StringLiteral_9292/*"Non negative number is required."*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.resMsg, v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4C23A22 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22434/*"radix"*/, name);
    sub_1C3B764(&StringLiteral_21827/*"notification"*/, v9);
    sub_1C3B764(&StringLiteral_20103/*"img_return_modoru"*/, v10);
    byte_4C23A22 = 1;
  }
  RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_22434/*"radix"*/, name, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20103/*"img_return_modoru"*/, genderType, 0LL);
  RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_21827/*"notification"*/, message, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserNameChangeRequest__getMockData(UserNameChangeRequest_o *this, const MethodInfo *method)
{
  System_String_o *resMsg; // x19

  if ( (byte_4C23A21 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C23A21 = 1;
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

  if ( (byte_4C23A20 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_23087/*"sources"*/, v2);
    byte_4C23A20 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_23087/*"sources"*/, 0LL);
}


void __fastcall UserNameChangeRequest__requestCompleted(
        UserNameChangeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 *v9; // x8

  if ( (byte_4C23A23 & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C23A23 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(19, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  else
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}