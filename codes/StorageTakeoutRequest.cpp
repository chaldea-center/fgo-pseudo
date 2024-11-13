void __fastcall StorageTakeoutRequest___ctor(StorageTakeoutRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall StorageTakeoutRequest__beginRequest(
        StorageTakeoutRequest_o *this,
        System_Int64_array *userSvtIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MiniMessagePack_MiniMessagePacker_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_Byte_array *v14; // x20
  System_String_o *v15; // x0

  if ( (byte_4B17B94 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, userSvtIds, method);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_24708/*"userSvtIds"*/, v8, v9);
    byte_4B17B94 = 1;
  }
  v10 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 userSvtIds,
                                                 method,
                                                 v3);
  MiniMessagePack_MiniMessagePacker___ctor(v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  v14 = MiniMessagePack_MiniMessagePacker__PackClass(v10, &userSvtIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
  v15 = System_Convert__ToBase64String(v14, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_24708/*"userSvtIds"*/, v15, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall StorageTakeoutRequest__getURL(StorageTakeoutRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B93 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23803/*"storage/takeout"*/, v3, v4);
    byte_4B17B93 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23803/*"storage/takeout"*/, 0LL);
}


void __fastcall StorageTakeoutRequest__requestCompleted(
        StorageTakeoutRequest_o *this,
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

  if ( (byte_4B17B95 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17B95 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(59, responseList, 0LL);
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