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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2

  if ( (byte_4B17B82 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20843/*"index"*/, *(_QWORD *)&eventId, *(_QWORD *)&index);
    sub_1BCA7E0(&StringLiteral_19329/*"eventId"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_19228/*"enterUserSvtId"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22591/*"outUserSvtId"*/, v15, v16);
    byte_4B17B82 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19329/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20843/*"index"*/, index, 0LL);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_19228/*"enterUserSvtId"*/, inUserSvtId, 0LL);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_22591/*"outUserSvtId"*/, outUserSvtId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantRecoverySyncRequest__getURL(
        ServantRecoverySyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B81 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19317/*"event/recoverySync"*/, v3, v4);
    byte_4B17B81 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19317/*"event/recoverySync"*/, 0LL);
}


void __fastcall ServantRecoverySyncRequest__requestCompleted(
        ServantRecoverySyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  ResponseData_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *success; // x20
  System_String_o *v14; // x1

  if ( (byte_4B17B83 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17B83 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(73, responseList, 0LL);
  if ( v9 && (v11 = v9, ResponseData__checkError(v9, v9->fields.resCode, v10)) )
  {
    success = (Il2CppObject *)v11->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
    v14 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v14, 0LL);
}