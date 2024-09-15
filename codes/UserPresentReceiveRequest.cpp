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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  MiniMessagePack_MiniMessagePacker_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_Byte_array *v16; // x22
  System_String_o *v17; // x0

  if ( (byte_4A2F8DF & 1) == 0 )
  {
    sub_1B761C0(&System_Convert_TypeInfo, presentIds);
    sub_1B761C0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_20877/*"itemSelectIdx"*/, v10);
    sub_1B761C0(&StringLiteral_22582/*"presentIds"*/, v11);
    sub_1B761C0(&StringLiteral_20878/*"itemSelectNum"*/, v12);
    byte_4A2F8DF = 1;
  }
  v13 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B7640C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v13, 0LL);
  if ( !v13 )
    sub_1B7641C(v14, v15);
  v16 = MiniMessagePack_MiniMessagePacker__PackClass(v13, &presentIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v17 = System_Convert__ToBase64String(v16, 0LL);
  RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_22582/*"presentIds"*/, v17, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20877/*"itemSelectIdx"*/, itemSelectIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20878/*"itemSelectNum"*/, itemSelectNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getMockData(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A2F8DE & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_9110/*"MockUserPresentReceiveResponse"*/, v2);
    byte_4A2F8DE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9110/*"MockUserPresentReceiveResponse"*/, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getURL(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F8DD & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_22580/*"present/receive"*/, v2);
    byte_4A2F8DD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_22580/*"present/receive"*/, 0LL);
}


void __fastcall UserPresentReceiveRequest__requestCompleted(
        UserPresentReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4A2F8E0 & 1) == 0 )
  {
    sub_1B761C0(&JsonManager_TypeInfo, responseList);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v6);
    byte_4A2F8E0 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(29, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_40940600(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22046/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}