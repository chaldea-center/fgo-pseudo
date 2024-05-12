void __fastcall CommandCodeDetach___ctor(CommandCodeDetach_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCodeDetach__beginRequest(
        CommandCodeDetach_o *this,
        int32_t servantId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_438DF4A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22944/*"svtId"*/);
    sub_B775C4(&StringLiteral_19787/*"idx"*/);
    byte_438DF4A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22944/*"svtId"*/, servantId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19787/*"idx"*/, idx, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeDetach__getURL(CommandCodeDetach_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438DF49 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17948/*"commandCode/detach"*/);
    byte_438DF49 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17948/*"commandCode/detach"*/, 0LL);
}


void __fastcall CommandCodeDetach__requestCompleted(
        CommandCodeDetach_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_438DF4B & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438DF4B = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(78, responseList, 0LL);
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