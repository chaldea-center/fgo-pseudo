void __fastcall StorageTakeinRequest__beginRequest(
        StorageTakeinRequest_o *this,
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
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_49FFE40 & 1) == 0 )
  {
    sub_1B64870(&System_Convert_TypeInfo, userSvtIds);
    sub_1B64870(&MiniMessagePack_MiniMessagePacker_TypeInfo, v5);
    sub_1B64870(&StringLiteral_24359/*"userSvtIds"*/, v6);
    byte_49FFE40 = 1;
  }
  v7 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64ABC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v7, 0LL);
  if ( !v7 )
    sub_1B64ACC(v8, v9);
  v10 = MiniMessagePack_MiniMessagePacker__PackClass(v7, &userSvtIds->obj, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v11 = System_Convert__ToBase64String(v10, 0LL);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_24359/*"userSvtIds"*/, v11, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall StorageTakeinRequest__getURL(StorageTakeinRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFE3F & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_23461/*"storage/takein"*/, v2);
    byte_49FFE3F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_23461/*"storage/takein"*/, 0LL);
}


void __fastcall StorageTakeinRequest__requestCompleted(
        StorageTakeinRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_49FFE41 & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, responseList);
    sub_1B64870(&ResponseCommandKind_TypeInfo, v5);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v6);
    byte_49FFE41 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(58, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_21971/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}