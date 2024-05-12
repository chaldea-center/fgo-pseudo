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
  if ( (byte_438EAB3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19533/*"hideUserIds"*/);
    sub_B775C4(&StringLiteral_23357/*"unHideUserIds"*/);
    byte_438EAB3 = 1;
  }
  RequestBase__addField_32565500((RequestBase_o *)this, (System_String_o *)StringLiteral_19533/*"hideUserIds"*/, &hideUserIds->obj, 0LL);
  RequestBase__addField_32565500(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23357/*"unHideUserIds"*/,
    &unHideUserIds->obj,
    0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall FriendMessageHideSyncRequest__getURL(
        FriendMessageHideSyncRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438EAB2 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_19277/*"friend/messageHideSync"*/);
    byte_438EAB2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_19277/*"friend/messageHideSync"*/, 0LL);
}


void __fastcall FriendMessageHideSyncRequest__requestCompleted(
        FriendMessageHideSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438EAB4 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438EAB4 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(66, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}