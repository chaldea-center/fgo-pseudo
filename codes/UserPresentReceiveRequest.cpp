void __fastcall UserPresentReceiveRequest___ctor(UserPresentReceiveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall UserPresentReceiveRequest__beginRequest(
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

  if ( (byte_4A5CB13 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&StringLiteral_20884/*"itemSelectIdx"*/);
    sub_1B885B0(&StringLiteral_22592/*"presentIds"*/);
    sub_1B885B0(&StringLiteral_20885/*"itemSelectNum"*/);
    byte_4A5CB13 = 1;
  }
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  v12 = MiniMessagePack_MiniMessagePacker__PackClass(v9, &presentIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v13 = System_Convert__ToBase64String(v12, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_22592/*"presentIds"*/, v13, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20884/*"itemSelectIdx"*/, itemSelectIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20885/*"itemSelectNum"*/, itemSelectNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getMockData(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5CB12 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9113/*"MockUserPresentReceiveResponse"*/);
    byte_4A5CB12 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9113/*"MockUserPresentReceiveResponse"*/, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getURL(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB11 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22590/*"present/receive"*/);
    byte_4A5CB11 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_22590/*"present/receive"*/, 0LL);
}


void __fastcall UserPresentReceiveRequest__requestCompleted(
        UserPresentReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4A5CB14 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CB14 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(29, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}