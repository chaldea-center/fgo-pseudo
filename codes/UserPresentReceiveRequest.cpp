void UserPresentReceiveRequest__beginRequest(
        UserPresentReceiveRequest_o *this,
        System_Int64_array *presentIds,
        int32_t itemSelectIdx,
        int32_t itemSelectNum,
        const MethodInfo *method)
{
  MiniMessagePack_MiniMessagePacker_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Byte_array *v12; // x22
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4CB7F44 & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C6BA08(&StringLiteral_21091/*"itemSelectIdx"*/);
    sub_1C6BA08(&StringLiteral_22855/*"presentIds"*/);
    sub_1C6BA08(&StringLiteral_21092/*"itemSelectNum"*/);
    byte_4CB7F44 = 1;
  }
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C6BC54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  v12 = MiniMessagePack_MiniMessagePacker__PackClass(v9, &presentIds->obj, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v13 = System_Convert__ToBase64String(v12, 0);
  RequestBase__addField_44471996((RequestBase_o *)this, (System_String_o *)StringLiteral_22855/*"presentIds"*/, v13, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21091/*"itemSelectIdx"*/, itemSelectIdx, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21092/*"itemSelectNum"*/, itemSelectNum, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *UserPresentReceiveRequest__getMockData(UserPresentReceiveRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7F43 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9141/*"MockUserPresentReceiveResponse"*/);
    byte_4CB7F43 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9141/*"MockUserPresentReceiveResponse"*/, 0);
}


System_String_o *UserPresentReceiveRequest__getURL(UserPresentReceiveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7F42 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_22852/*"present/receive"*/);
    byte_4CB7F42 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_22852/*"present/receive"*/, 0);
}


void UserPresentReceiveRequest__requestCompleted(
        UserPresentReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4CB7F45 & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7F45 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(29, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22301/*"ng"*/,
        v11->fields.method);
  }
}