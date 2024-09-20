void __fastcall StorageTakeoutRequest__beginRequest(
        StorageTakeoutRequest_o *this,
        System_Int64_array *userSvtIds,
        const MethodInfo *method)
{
  MiniMessagePack_MiniMessagePacker_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Byte_array *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4A5CAD0 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&StringLiteral_24454/*"userSvtIds"*/);
    byte_4A5CAD0 = 1;
  }
  v5 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v8 = MiniMessagePack_MiniMessagePacker__PackClass(v5, &userSvtIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToBase64String(v8, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_24454/*"userSvtIds"*/, v9, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *__fastcall StorageTakeoutRequest__getURL(StorageTakeoutRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CACF & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23555/*"storage/takeout"*/);
    byte_4A5CACF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_23555/*"storage/takeout"*/, 0LL);
}


void __fastcall StorageTakeoutRequest__requestCompleted(
        StorageTakeoutRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4A5CAD1 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CAD1 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(59, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}