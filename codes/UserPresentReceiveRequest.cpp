void __fastcall UserPresentReceiveRequest___ctor(UserPresentReceiveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentReceiveRequest__beginRequest(
        UserPresentReceiveRequest_o *this,
        System_Int64_array *presentIds,
        int32_t itemSelectIdx,
        int32_t itemSelectNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  MiniMessagePack_MiniMessagePacker_o *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_Byte_array *v21; // x22
  System_String_o *v22; // x0

  if ( (byte_4B17BD8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, presentIds, *(_QWORD *)&itemSelectIdx);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_21112/*"itemSelectIdx"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22834/*"presentIds"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_21113/*"itemSelectNum"*/, v15, v16);
    byte_4B17BD8 = 1;
  }
  v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 presentIds,
                                                 *(_QWORD *)&itemSelectIdx,
                                                 *(_QWORD *)&itemSelectNum);
  MiniMessagePack_MiniMessagePacker___ctor(v17, 0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
  v21 = MiniMessagePack_MiniMessagePacker__PackClass(v17, &presentIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v20);
  v22 = System_Convert__ToBase64String(v21, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_22834/*"presentIds"*/, v22, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21112/*"itemSelectIdx"*/, itemSelectIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21113/*"itemSelectNum"*/, itemSelectNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getMockData(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17BD7 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9243/*"MockUserPresentReceiveResponse"*/, v3, v4);
    byte_4B17BD7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9243/*"MockUserPresentReceiveResponse"*/, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getURL(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BD6 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22832/*"present/receive"*/, v3, v4);
    byte_4B17BD6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_22832/*"present/receive"*/, 0LL);
}


void __fastcall UserPresentReceiveRequest__requestCompleted(
        UserPresentReceiveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  ResponseData_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *success; // x20
  System_String_o *v14; // x1

  if ( (byte_4B17BD9 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17BD9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(29, responseList, 0LL);
  if ( v9
    && (v11 = v9, ResponseData__checkError(v9, v9->fields.resCode, v10))
    && (success = (Il2CppObject *)v11->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
    v14 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v14, 0LL);
}