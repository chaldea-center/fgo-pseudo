void __fastcall StorageTakeinRequest___ctor(StorageTakeinRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall StorageTakeinRequest__beginRequest(
        StorageTakeinRequest_o *this,
        System_Int64_array *userSvtIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  MiniMessagePack_MiniMessagePacker_o *v9; // x21
  System_Byte_array *v10; // x20
  System_String_o *v11; // x0

  if ( (byte_40F7C0B & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, userSvtIds);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22974/*"userSvtIds"*/, v8);
    byte_40F7C0B = 1;
  }
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                userSvtIds,
                                                method,
                                                v3,
                                                v4);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  v10 = MiniMessagePack_MiniMessagePacker__PackClass(v9, &userSvtIds->obj, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v11 = System_Convert__ToBase64String(v10, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_22974/*"userSvtIds"*/, v11, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall StorageTakeinRequest__getURL(StorageTakeinRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F7C0A & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22241/*"storage/takein"*/, v2);
    byte_40F7C0A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_22241/*"storage/takein"*/, 0LL);
}


void __fastcall StorageTakeinRequest__requestCompleted(
        StorageTakeinRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_40F7C0C & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40F7C0C = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(57, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_30924960(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_20980/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}