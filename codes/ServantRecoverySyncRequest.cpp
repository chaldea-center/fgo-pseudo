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

  if ( (byte_40FBBA1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19700, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_18403, v11);
    sub_B16FFC(&StringLiteral_18306, v12);
    sub_B16FFC(&StringLiteral_21242, v13);
    byte_40FBBA1 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18403, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19700, index, 0LL);
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_18306, inUserSvtId, 0LL);
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_21242, outUserSvtId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantRecoverySyncRequest__getURL(
        ServantRecoverySyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FBBA0 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18393, v2);
    byte_40FBBA0 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18393, 0LL);
}


void __fastcall ServantRecoverySyncRequest__requestCompleted(
        ServantRecoverySyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_40FBBA2 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980, v6);
    byte_40FBBA2 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(72, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_30924960(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_20980;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}