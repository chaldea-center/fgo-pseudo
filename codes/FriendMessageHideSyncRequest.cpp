void FriendMessageHideSyncRequest__beginRequest(
        FriendMessageHideSyncRequest_o *this,
        System_Int64_array *hideUserIds,
        System_Int64_array *unHideUserIds,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4CC8F85 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20047/*"hideUserIds"*/);
    sub_1C713B0(&StringLiteral_24412/*"unHideUserIds"*/);
    byte_4CC8F85 = 1;
  }
  RequestBase__addField_44516316(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20047/*"hideUserIds"*/,
    &hideUserIds->obj,
    method);
  RequestBase__addField_44516316((RequestBase_o *)this, (System_String_o *)StringLiteral_24412/*"unHideUserIds"*/, &unHideUserIds->obj, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *FriendMessageHideSyncRequest__getURL(FriendMessageHideSyncRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8F84 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19747/*"friend/messageHideSync"*/);
    byte_4CC8F84 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_19747/*"friend/messageHideSync"*/, 0);
}


void FriendMessageHideSyncRequest__requestCompleted(
        FriendMessageHideSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CC8F86 & 1) == 0 )
  {
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8F86 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(66, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22486/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22316/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}