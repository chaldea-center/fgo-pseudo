void __fastcall ServantRecoverySyncRequest___ctor(ServantRecoverySyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRecoverySyncRequest__beginRequest(
        ServantRecoverySyncRequest_o *this,
        int32_t eventId,
        int32_t index,
        int64_t inUserSvtId,
        int64_t outUserSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_4BC94BC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20975/*"index"*/, *(_QWORD *)&eventId);
    sub_1C1ABD4(&StringLiteral_19445/*"eventId"*/, v11);
    sub_1C1ABD4(&StringLiteral_19344/*"enterUserSvtId"*/, v12);
    sub_1C1ABD4(&StringLiteral_22739/*"outUserSvtId"*/, v13);
    byte_4BC94BC = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19445/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20975/*"index"*/, index, 0LL);
  RequestBase__addField_42368496((RequestBase_o *)this, (System_String_o *)StringLiteral_19344/*"enterUserSvtId"*/, inUserSvtId, 0LL);
  RequestBase__addField_42368496((RequestBase_o *)this, (System_String_o *)StringLiteral_22739/*"outUserSvtId"*/, outUserSvtId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantRecoverySyncRequest__getURL(
        ServantRecoverySyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC94BB & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_19433/*"event/recoverySync"*/, v2);
    byte_4BC94BB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_19433/*"event/recoverySync"*/, 0LL);
}


void __fastcall ServantRecoverySyncRequest__requestCompleted(
        ServantRecoverySyncRequest_o *this,
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

  if ( (byte_4BC94BD & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, responseList);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC94BD = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(73, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22437/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}