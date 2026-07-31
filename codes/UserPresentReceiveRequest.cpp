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
  __int64 v12; // x1
  System_Byte_array *v13; // x22
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_593A351 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&StringLiteral_22017/*"itemSelectIdx"*/);
    sub_21FFC50(&StringLiteral_23899/*"presentIds"*/);
    sub_21FFC50(&StringLiteral_22018/*"itemSelectNum"*/);
    byte_593A351 = 1;
  }
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_21FFEBC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  v13 = MiniMessagePack_MiniMessagePacker__PackClass(v9, &presentIds->obj, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v12);
  v14 = System_Convert__ToBase64String(v13, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_23899/*"presentIds"*/, v14, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22017/*"itemSelectIdx"*/, itemSelectIdx, v16);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22018/*"itemSelectNum"*/, itemSelectNum, v17);
  RequestBase__beginRequest((RequestBase_o *)this, v18);
}


System_String_o *UserPresentReceiveRequest__getMockData(UserPresentReceiveRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A350 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9510/*"MockUserPresentReceiveResponse"*/);
    byte_593A350 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9510/*"MockUserPresentReceiveResponse"*/, 0);
}


System_String_o *UserPresentReceiveRequest__getURL(UserPresentReceiveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A34F & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23896/*"present/receive"*/);
    byte_593A34F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_23896/*"present/receive"*/, 0);
}


void UserPresentReceiveRequest__requestCompleted(
        UserPresentReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_593A352 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A352 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(29, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (Il2CppObject *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23290/*"ng"*/;
    goto LABEL_14;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}