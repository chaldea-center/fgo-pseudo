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

  if ( (byte_4A4FF16 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_19705/*"hideUserIds"*/, hideUserIds);
    sub_1B863B8(&StringLiteral_23992/*"unHideUserIds"*/, v7);
    byte_4A4FF16 = 1;
  }
  RequestBase__addField_42288224((RequestBase_o *)this, (System_String_o *)StringLiteral_19705/*"hideUserIds"*/, &hideUserIds->obj, 0LL);
  RequestBase__addField_42288224(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23992/*"unHideUserIds"*/,
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

  if ( (byte_4A4FF15 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_19418/*"friend/messageHideSync"*/, v2);
    byte_4A4FF15 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_19418/*"friend/messageHideSync"*/, 0LL);
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

  if ( (byte_4A4FF17 & 1) == 0 )
  {
    sub_1B863B8(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4FF17 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(66, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42282948(v7, 0LL) )
    v8 = &StringLiteral_22061/*"ok"*/;
  else
    v8 = &StringLiteral_21893/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}