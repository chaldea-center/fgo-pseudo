void __fastcall CommandCodeUnlockRequest___ctor(CommandCodeUnlockRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeUnlockRequest__beginRequest(
        CommandCodeUnlockRequest_o *this,
        int32_t servantId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4B1DF70 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23653/*"svtId"*/, *(_QWORD *)&servantId);
    sub_1BCAFF8(&StringLiteral_20086/*"idx"*/, v7);
    byte_4B1DF70 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23653/*"svtId"*/, servantId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20086/*"idx"*/, idx, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeUnlockRequest__getURL(
        CommandCodeUnlockRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1DF6F & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_18005/*"commandCode/unlock"*/, v2);
    byte_4B1DF6F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_18005/*"commandCode/unlock"*/, 0LL);
}


void __fastcall CommandCodeUnlockRequest__requestCompleted(
        CommandCodeUnlockRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4B1DF71 & 1) == 0 )
  {
    sub_1BCAFF8(&JsonManager_TypeInfo, responseList);
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1DF71 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(79, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_43347888(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22015/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}