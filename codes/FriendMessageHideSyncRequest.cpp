void __fastcall FriendMessageHideSyncRequest___ctor(FriendMessageHideSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FriendMessageHideSyncRequest__beginRequest(
        FriendMessageHideSyncRequest_o *this,
        System_Int64_array *hideUserIds,
        System_Int64_array *unHideUserIds,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_418A87C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19142/*"hideUserIds"*/, hideUserIds);
    sub_B2C35C(&StringLiteral_22879/*"unHideUserIds"*/, v7);
    byte_418A87C = 1;
  }
  RequestBase__addField_31052036((RequestBase_o *)this, (System_String_o *)StringLiteral_19142/*"hideUserIds"*/, &hideUserIds->obj, 0LL);
  RequestBase__addField_31052036(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22879/*"unHideUserIds"*/,
    &unHideUserIds->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FriendMessageHideSyncRequest__getURL(
        FriendMessageHideSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418A87B & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18896/*"friend/messageHideSync"*/, v2);
    byte_418A87B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18896/*"friend/messageHideSync"*/, 0LL);
}


void __fastcall FriendMessageHideSyncRequest__requestCompleted(
        FriendMessageHideSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_418A87D & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, responseList);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418A87D = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(65, responseList, 0LL);
  if ( v7 && ResponseData__checkError_31019724(v7, 0LL) )
    v8 = &StringLiteral_21218/*"ok"*/;
  else
    v8 = &StringLiteral_21068/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}