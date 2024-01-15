void __fastcall FriendCancelRequest___ctor(FriendCancelRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FriendCancelRequest__beginRequest(
        FriendCancelRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  if ( (byte_40FA786 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22521/*"targetUserId"*/, targetUserId);
    byte_40FA786 = 1;
  }
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_22521/*"targetUserId"*/, targetUserId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FriendCancelRequest__getURL(FriendCancelRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FA785 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18822/*"friend/cancel"*/, v2);
    byte_40FA785 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18822/*"friend/cancel"*/, 0LL);
}


void __fastcall FriendCancelRequest__requestCompleted(
        FriendCancelRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_40FA787 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40FA787 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(16, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_30924960(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_20980/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}