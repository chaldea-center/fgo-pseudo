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

  if ( (byte_4BB6124 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24784/*"usecheck_win/win/btn_cancel"*/, *(_QWORD *)&deckNo);
    sub_1C13D24(&StringLiteral_18809/*"debug_edit_servant"*/, v7);
    byte_4BB6124 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18809/*"debug_edit_servant"*/, deckNo, 0LL);
  RequestBase__addField_42309896((RequestBase_o *)this, (System_String_o *)StringLiteral_24784/*"usecheck_win/win/btn_cancel"*/, userEquipId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall UserFormationRequest__getMockData(UserFormationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BB6123 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v2);
    byte_4BB6123 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall UserFormationRequest__getURL(UserFormationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB6122 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_24863/*"userSubEquip"*/, v2);
    byte_4BB6122 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_24863/*"userSubEquip"*/, 0LL);
}


void __fastcall UserFormationRequest__requestCompleted(
        UserFormationRequest_o *this,
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

  if ( (byte_4BB6125 & 1) == 0 )
  {
    sub_1C13D24(&JsonManager_TypeInfo, responseList);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v6);
    byte_4BB6125 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(15, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22421/*"newAttributes"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}