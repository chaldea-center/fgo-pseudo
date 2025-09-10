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
  if ( (byte_4C28E11 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19956/*"hideUserIds"*/);
    sub_1C2D490(&StringLiteral_24268/*"unHideUserIds"*/);
    byte_4C28E11 = 1;
  }
  RequestBase__addField_44009168((RequestBase_o *)this, (System_String_o *)StringLiteral_19956/*"hideUserIds"*/, &hideUserIds->obj, 0);
  RequestBase__addField_44009168((RequestBase_o *)this, (System_String_o *)StringLiteral_24268/*"unHideUserIds"*/, &unHideUserIds->obj, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *FriendMessageHideSyncRequest__getURL(FriendMessageHideSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28E10 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19658/*"friend/messageHideSync"*/);
    byte_4C28E10 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_19658/*"friend/messageHideSync"*/, 0);
}


void FriendMessageHideSyncRequest__requestCompleted(
        FriendMessageHideSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4C28E12 & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28E12 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(66, responseList, 0);
  if ( v5 && ResponseData__checkError_44004292(v5, 0) )
    v6 = &StringLiteral_22362/*"ok"*/;
  else
    v6 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}