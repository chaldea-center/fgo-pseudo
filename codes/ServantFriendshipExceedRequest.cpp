void __fastcall ServantFriendshipExceedRequest___ctor(ServantFriendshipExceedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantFriendshipExceedRequest__beginRequest(
        ServantFriendshipExceedRequest_o *this,
        int64_t baseUserSvtId,
        const MethodInfo *method)
{
  if ( (byte_4189F9C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16623/*"baseUserSvtId"*/, baseUserSvtId);
    byte_4189F9C = 1;
  }
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_16623/*"baseUserSvtId"*/, baseUserSvtId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantFriendshipExceedRequest__getURL(
        ServantFriendshipExceedRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4189F9B & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17223/*"card/friendshipExceed"*/, v2);
    byte_4189F9B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17223/*"card/friendshipExceed"*/, 0LL);
}


void __fastcall ServantFriendshipExceedRequest__requestCompleted(
        ServantFriendshipExceedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4189F9D & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_4189F9D = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(28, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_31019724(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}