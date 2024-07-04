void __fastcall UserFormationRequest___ctor(UserFormationRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserFormationRequest__beginRequest(
        UserFormationRequest_o *this,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_48E40D2 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_24031/*"userEquipId"*/, *(_QWORD *)&deckNo);
    sub_1B00CCC(&StringLiteral_18274/*"deckNo"*/, v7);
    byte_48E40D2 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18274/*"deckNo"*/, deckNo, 0LL);
  RequestBase__addField_39759196((RequestBase_o *)this, (System_String_o *)StringLiteral_24031/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserFormationRequest__getMockData(UserFormationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_48E40D1 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v2);
    byte_48E40D1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall UserFormationRequest__getURL(UserFormationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E40D0 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_24104/*"userformation/Setup"*/, v2);
    byte_48E40D0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_24104/*"userformation/Setup"*/, 0LL);
}


void __fastcall UserFormationRequest__requestCompleted(
        UserFormationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_48E40D3 & 1) == 0 )
  {
    sub_1B00CCC(&JsonManager_TypeInfo, responseList);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v6);
    byte_48E40D3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(15, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_39752340(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21754/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}