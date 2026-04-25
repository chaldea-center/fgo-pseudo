// local variable allocation has failed, the output may be wrong!
void ServantTreasureDvcCombineRequest__beginRequest(
        ServantTreasureDvcCombineRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t selectTdIndex,
        int32_t selectTdId,
        System_String_o *materialSvtIds,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_4E06600 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_17226/*"baseUserSvtId"*/);
    sub_1CE6700(&StringLiteral_24589/*"treasureDeviceId"*/);
    sub_1CE6700(&StringLiteral_22681/*"num"*/);
    sub_1CE6700(&StringLiteral_21822/*"materialUserSvtIds"*/);
    byte_4E06600 = 1;
  }
  RequestBase__addField_45375920(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17226/*"baseUserSvtId"*/,
    baseUsrSvtId,
    *(const MethodInfo **)&selectTdId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22681/*"num"*/, selectTdIndex, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24589/*"treasureDeviceId"*/, selectTdId, v12);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_21822/*"materialUserSvtIds"*/, materialSvtIds, v13);
  RequestBase__beginRequest((RequestBase_o *)this, v14);
}


System_String_o *ServantTreasureDvcCombineRequest__getURL(
        ServantTreasureDvcCombineRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E065FF & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_17947/*"card/combineTd"*/);
    byte_4E065FF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_17947/*"card/combineTd"*/, 0);
}


void ServantTreasureDvcCombineRequest__requestCompleted(
        ServantTreasureDvcCombineRequest_o *this,
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

  if ( (byte_4E06601 & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E06601 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(27, responseList, 0);
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
        StringLiteral_22555/*"ng"*/,
        v11->fields.method);
  }
}