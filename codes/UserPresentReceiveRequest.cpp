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

  if ( (byte_42AE132 & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B52984(&StringLiteral_20168/*"itemSelectIdx"*/);
    sub_B52984(&StringLiteral_21701/*"presentIds"*/);
    sub_B52984(&StringLiteral_20169/*"itemSelectNum"*/);
    byte_42AE132 = 1;
  }
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_B52A54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v12 = MiniMessagePack_MiniMessagePacker__PackClass(v9, &presentIds->obj, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v13 = System_Convert__ToBase64String(v12, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_21701/*"presentIds"*/, v13, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20168/*"itemSelectIdx"*/, itemSelectIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20169/*"itemSelectNum"*/, itemSelectNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getMockData(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AE131 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_9226/*"MockUserPresentReceiveResponse"*/);
    byte_42AE131 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9226/*"MockUserPresentReceiveResponse"*/, 0LL);
}


System_String_o *__fastcall UserPresentReceiveRequest__getURL(
        UserPresentReceiveRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AE130 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_21699/*"present/receive"*/);
    byte_42AE130 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_21699/*"present/receive"*/, 0LL);
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

  if ( (byte_42AE133 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42AE133 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(29, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}