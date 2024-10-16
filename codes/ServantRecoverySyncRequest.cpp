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

  if ( (byte_4AB76B7 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_20651/*"index"*/, *(_QWORD *)&eventId);
    sub_1BAB41C(&StringLiteral_19162/*"eventId"*/, v11);
    sub_1BAB41C(&StringLiteral_19061/*"enterUserSvtId"*/, v12);
    sub_1BAB41C(&StringLiteral_22387/*"outUserSvtId"*/, v13);
    byte_4AB76B7 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19162/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20651/*"index"*/, index, 0LL);
  RequestBase__addField_41522804((RequestBase_o *)this, (System_String_o *)StringLiteral_19061/*"enterUserSvtId"*/, inUserSvtId, 0LL);
  RequestBase__addField_41522804((RequestBase_o *)this, (System_String_o *)StringLiteral_22387/*"outUserSvtId"*/, outUserSvtId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantRecoverySyncRequest__getURL(
        ServantRecoverySyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4AB76B6 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_19150/*"event/recoverySync"*/, v2);
    byte_4AB76B6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_19150/*"event/recoverySync"*/, 0LL);
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

  if ( (byte_4AB76B8 & 1) == 0 )
  {
    sub_1BAB41C(&JsonManager_TypeInfo, responseList);
    sub_1BAB41C(&ResponseCommandKind_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v6);
    byte_4AB76B8 = 1;
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
    v11 = (System_String_o *)StringLiteral_22090/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
}