void StorageTakeoutRequest__beginRequest(
        StorageTakeoutRequest_o *this,
        System_Int64_array *userSvtIds,
        const MethodInfo *method)
{
  MiniMessagePack_MiniMessagePacker_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Byte_array *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_593A30D & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&StringLiteral_25894/*"userSvtIds"*/);
    byte_593A30D = 1;
  }
  v5 = (MiniMessagePack_MiniMessagePacker_o *)sub_21FFEBC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v9 = MiniMessagePack_MiniMessagePacker__PackClass(v5, &userSvtIds->obj, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
  v10 = System_Convert__ToBase64String(v9, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_25894/*"userSvtIds"*/, v10, v11);
  RequestBase__beginRequest((RequestBase_o *)this, v12);
}


System_String_o *StorageTakeoutRequest__getURL(StorageTakeoutRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A30C & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24929/*"storage/takeout"*/);
    byte_593A30C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_24929/*"storage/takeout"*/, 0);
}


void StorageTakeoutRequest__requestCompleted(
        StorageTakeoutRequest_o *this,
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

  if ( (byte_593A30E & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A30E = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(59, responseList, 0);
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