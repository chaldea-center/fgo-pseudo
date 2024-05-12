void __fastcall ServantRecoverySyncRequest___ctor(ServantRecoverySyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantRecoverySyncRequest__beginRequest(
        ServantRecoverySyncRequest_o *this,
        int32_t eventId,
        int32_t index,
        int64_t inUserSvtId,
        int64_t outUserSvtId,
        const MethodInfo *method)
{
  if ( (byte_438D139 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20177/*"index"*/);
    sub_B775C4(&StringLiteral_18839/*"eventId"*/);
    sub_B775C4(&StringLiteral_18742/*"enterUserSvtId"*/);
    sub_B775C4(&StringLiteral_21771/*"outUserSvtId"*/);
    byte_438D139 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18839/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20177/*"index"*/, index, 0LL);
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_18742/*"enterUserSvtId"*/, inUserSvtId, 0LL);
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_21771/*"outUserSvtId"*/, outUserSvtId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantRecoverySyncRequest__getURL(
        ServantRecoverySyncRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438D138 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_18829/*"event/recoverySync"*/);
    byte_438D138 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_18829/*"event/recoverySync"*/, 0LL);
}


void __fastcall ServantRecoverySyncRequest__requestCompleted(
        ServantRecoverySyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_438D13A & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438D13A = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(73, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}