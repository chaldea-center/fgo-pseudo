void ServantEquipCombineRequest__beginRequest(
        ServantEquipCombineRequest_o *this,
        int64_t baseUsrSvtId,
        System_String_o *materialSvtIds,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4CF0211 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17130/*"baseUserSvtId"*/);
    sub_1C7BAE8(&StringLiteral_21687/*"materialUserSvtIds"*/);
    byte_4CF0211 = 1;
  }
  RequestBase__addField_44745468((RequestBase_o *)this, (System_String_o *)StringLiteral_17130/*"baseUserSvtId"*/, baseUsrSvtId, method);
  RequestBase__addField_44748720((RequestBase_o *)this, (System_String_o *)StringLiteral_21687/*"materialUserSvtIds"*/, materialSvtIds, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


System_String_o *ServantEquipCombineRequest__getURL(ServantEquipCombineRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0210 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24097/*"svtEquip/combine"*/);
    byte_4CF0210 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_24097/*"svtEquip/combine"*/, 0);
}


void ServantEquipCombineRequest__requestCompleted(
        ServantEquipCombineRequest_o *this,
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

  if ( (byte_4CF0212 & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF0212 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(41, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0 )
  {
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
        StringLiteral_22419/*"ng"*/,
        v11->fields.method);
  }
}