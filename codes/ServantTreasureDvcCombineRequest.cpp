// local variable allocation has failed, the output may be wrong!
void __fastcall ServantTreasureDvcCombineRequest__beginRequest(
        ServantTreasureDvcCombineRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t selectTdIndex,
        int32_t selectTdId,
        System_String_o *materialSvtIds,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4A717DB & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_17109/*"baseUserSvtId"*/, baseUsrSvtId);
    sub_1B90010(&StringLiteral_24096/*"treasureDeviceId"*/, v11);
    sub_1B90010(&StringLiteral_22211/*"num"*/, v12);
    sub_1B90010(&StringLiteral_21364/*"materialUserSvtIds"*/, v13);
    byte_4A717DB = 1;
  }
  RequestBase__addField_41187492(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17109/*"baseUserSvtId"*/,
    baseUsrSvtId,
    *(const MethodInfo **)&selectTdId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22211/*"num"*/, selectTdIndex, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24096/*"treasureDeviceId"*/, selectTdId, v15);
  RequestBase__addField_41181164((RequestBase_o *)this, (System_String_o *)StringLiteral_21364/*"materialUserSvtIds"*/, materialSvtIds, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall ServantTreasureDvcCombineRequest__getURL(
        ServantTreasureDvcCombineRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A717DA & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_17777/*"card/combineTd"*/, v2);
    byte_4A717DA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_17777/*"card/combineTd"*/, 0LL);
}


void __fastcall ServantTreasureDvcCombineRequest__requestCompleted(
        ServantTreasureDvcCombineRequest_o *this,
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

  if ( (byte_4A717DC & 1) == 0 )
  {
    sub_1B90010(&JsonManager_TypeInfo, responseList);
    sub_1B90010(&ResponseCommandKind_TypeInfo, v5);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v6);
    byte_4A717DC = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(27, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
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
        StringLiteral_22088/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}