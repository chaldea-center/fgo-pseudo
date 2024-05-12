void __fastcall StorageTakeinRequest___ctor(StorageTakeinRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall StorageTakeinRequest__beginRequest(
        StorageTakeinRequest_o *this,
        System_Int64_array *userSvtIds,
        const MethodInfo *method)
{
  MiniMessagePack_MiniMessagePacker_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Byte_array *v8; // x20
  System_String_o *v9; // x0

  if ( (byte_438A588 & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B775C4(&StringLiteral_23548/*"userSvtIds"*/);
    byte_438A588 = 1;
  }
  v5 = (MiniMessagePack_MiniMessagePacker_o *)sub_B77694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v8 = MiniMessagePack_MiniMessagePacker__PackClass(v5, &userSvtIds->obj, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v9 = System_Convert__ToBase64String(v8, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_23548/*"userSvtIds"*/, v9, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall StorageTakeinRequest__getURL(StorageTakeinRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438A587 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_22807/*"storage/takein"*/);
    byte_438A587 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_22807/*"storage/takein"*/, 0LL);
}


void __fastcall StorageTakeinRequest__requestCompleted(
        StorageTakeinRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_438A589 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438A589 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(58, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}