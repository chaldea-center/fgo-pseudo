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

  if ( (byte_4BDDFBC & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C21E38(&StringLiteral_21263/*"itemSelectIdx"*/);
    sub_1C21E38(&StringLiteral_23003/*"presentIds"*/);
    sub_1C21E38(&StringLiteral_21264/*"itemSelectNum"*/);
    byte_4BDDFBC = 1;
  }
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C22084(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  v12 = MiniMessagePack_MiniMessagePacker__PackClass(v9, &presentIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v13 = System_Convert__ToBase64String(v12, 0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_23003/*"presentIds"*/, v13, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21263/*"itemSelectIdx"*/, itemSelectIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21264/*"itemSelectNum"*/, itemSelectNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getMockData(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDDFBB & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9304/*"MockUserPresentReceiveResponse"*/);
    byte_4BDDFBB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9304/*"MockUserPresentReceiveResponse"*/, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getURL(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDFBA & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_23001/*"present/receive"*/);
    byte_4BDDFBA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_23001/*"present/receive"*/, 0LL);
}


void __fastcall UserPresentReceiveRequest__requestCompleted(
        UserPresentReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_4BDDFBD & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDFBD = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(29, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_22456/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0LL);
}