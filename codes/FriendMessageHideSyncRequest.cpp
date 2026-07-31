void FriendMessageHideSyncRequest___ctor(FriendMessageHideSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FriendMessageHideSyncRequest__beginRequest(
        FriendMessageHideSyncRequest_o *this,
        System_Int64_array *hideUserIds,
        System_Int64_array *unHideUserIds,
        const MethodInfo *method)
{
  if ( (byte_593A268 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20881/*"hideUserIds"*/);
    sub_21FFC50(&StringLiteral_25558/*"unHideUserIds"*/);
    byte_593A268 = 1;
  }
  RequestBase__addField_51191900((RequestBase_o *)this, (System_String_o *)StringLiteral_20881/*"hideUserIds"*/, &hideUserIds->obj, 0);
  RequestBase__addField_51191900((RequestBase_o *)this, (System_String_o *)StringLiteral_25558/*"unHideUserIds"*/, &unHideUserIds->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FriendMessageHideSyncRequest__getURL(FriendMessageHideSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A267 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20562/*"friend/messageHideSync"*/);
    byte_593A267 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_20562/*"friend/messageHideSync"*/, 0);
}


void FriendMessageHideSyncRequest__requestCompleted(
        FriendMessageHideSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_593A269 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A269 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(66, responseList, 0);
  if ( v5 && ResponseData__checkError_51190916(v5, 0) )
    v6 = &StringLiteral_23468/*"ok"*/;
  else
    v6 = &StringLiteral_23290/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}