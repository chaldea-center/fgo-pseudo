void UserFormationRequest__beginRequest(
        UserFormationRequest_o *this,
        int32_t deckNo,
        int64_t userEquipId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4C28EED & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24493/*"userEquipId"*/);
    sub_1C2D490(&StringLiteral_18521/*"deckNo"*/);
    byte_4C28EED = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18521/*"deckNo"*/, deckNo, method);
  RequestBase__addField_44008608((RequestBase_o *)this, (System_String_o *)StringLiteral_24493/*"userEquipId"*/, userEquipId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *UserFormationRequest__getMockData(UserFormationRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28EEC & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28EEC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *UserFormationRequest__getURL(UserFormationRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28EEB & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_24576/*"userformation/Setup"*/);
    byte_4C28EEB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_24576/*"userformation/Setup"*/, 0);
}


void UserFormationRequest__requestCompleted(
        UserFormationRequest_o *this,
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

  if ( (byte_4C28EEE & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28EEE = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(15, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22195/*"ng"*/,
        v11->fields.method);
  }
}