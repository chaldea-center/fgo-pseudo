void __fastcall StorageTakeoutRequest___ctor(StorageTakeoutRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall StorageTakeoutRequest__beginRequest(
        StorageTakeoutRequest_o *this,
        System_Int64_array *userSvtIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  MiniMessagePack_MiniMessagePacker_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Byte_array *v10; // x20
  System_String_o *v11; // x0

  if ( (byte_4B685B3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Convert_TypeInfo, userSvtIds);
    sub_1BE4ACC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_24796/*"userSvtIds"*/, v6);
    byte_4B685B3 = 1;
  }
  v7 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BE4D18(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v7, 0LL);
  if ( !v7 )
    sub_1BE4D28(v8, v9);
  v10 = MiniMessagePack_MiniMessagePacker__PackClass(v7, &userSvtIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v11 = System_Convert__ToBase64String(v10, 0LL);
  RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_24796/*"userSvtIds"*/, v11, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall StorageTakeoutRequest__getURL(StorageTakeoutRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B685B2 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_23890/*"storage/takeout"*/, v2);
    byte_4B685B2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_23890/*"storage/takeout"*/, 0LL);
}


void __fastcall StorageTakeoutRequest__requestCompleted(
        StorageTakeoutRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x1

  if ( (byte_4B685B4 & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, responseList);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B685B4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(59, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22370/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}