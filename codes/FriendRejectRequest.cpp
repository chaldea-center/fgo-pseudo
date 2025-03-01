void __fastcall FriendRejectRequest__beginRequest(
        FriendRejectRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4BFF125 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_24311/*"targetUserId"*/, targetUserId);
    byte_4BFF125 = 1;
  }
  RequestBase__addField_42510212((RequestBase_o *)this, (System_String_o *)StringLiteral_24311/*"targetUserId"*/, targetUserId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall FriendRejectRequest__getURL(FriendRejectRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BFF124 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_19988/*"friend/reject"*/, v2);
    byte_4BFF124 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63235584(BaseUrl, (System_String_o *)StringLiteral_19988/*"friend/reject"*/, 0LL);
}


void __fastcall FriendRejectRequest__requestCompleted(
        FriendRejectRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4BFF126 & 1) == 0 )
  {
    sub_1C2E12C(&JsonManager_TypeInfo, responseList);
    sub_1C2E12C(&ResponseCommandKind_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v6);
    byte_4BFF126 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(15, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_42594652(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22468/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}