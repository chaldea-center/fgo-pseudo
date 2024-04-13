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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  if ( (byte_42EBDFF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19385/*"hideUserIds"*/, (_DWORD)hideUserIds, (_DWORD)unHideUserIds, method);
    sub_B5D5C4(&StringLiteral_23184/*"unHideUserIds"*/, v7, v8, v9);
    byte_42EBDFF = 1;
  }
  RequestBase__addField_32362368((RequestBase_o *)this, (System_String_o *)StringLiteral_19385/*"hideUserIds"*/, &hideUserIds->obj, 0LL);
  RequestBase__addField_32362368(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23184/*"unHideUserIds"*/,
    &unHideUserIds->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FriendMessageHideSyncRequest__getURL(
        FriendMessageHideSyncRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EBDFE & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19134/*"friend/messageHideSync"*/, v4, v5, v6);
    byte_42EBDFE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_19134/*"friend/messageHideSync"*/, 0LL);
}


void __fastcall FriendMessageHideSyncRequest__requestCompleted(
        FriendMessageHideSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42EBE00 & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EBE00 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(66, responseList, 0LL);
  if ( v12 && ResponseData__checkError_29500464(v12, 0LL) )
    v13 = &StringLiteral_21497/*"ok"*/;
  else
    v13 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}