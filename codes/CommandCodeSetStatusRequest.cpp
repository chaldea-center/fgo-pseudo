void __fastcall CommandCodeSetStatusRequest___ctor(CommandCodeSetStatusRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCodeSetStatusRequest__beginRequest(
        CommandCodeSetStatusRequest_o *this,
        int64_t userCommandCodeId,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438DF5A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17953/*"commandCodeId"*/);
    sub_B775C4(&StringLiteral_20346/*"isLock"*/);
    sub_B775C4(&StringLiteral_20331/*"isChoice"*/);
    byte_438DF5A = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_17953/*"commandCodeId"*/, userCommandCodeId, 0LL);
  if ( !this )
    sub_B7769C(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20346/*"isLock"*/, isLock, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20331/*"isChoice"*/, isChoice, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getMockData(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_438DF59 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DF59 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeSetStatusRequest__getURL(
        CommandCodeSetStatusRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438DF58 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17950/*"commandCode/setStatus"*/);
    byte_438DF58 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17950/*"commandCode/setStatus"*/, 0LL);
}


void __fastcall CommandCodeSetStatusRequest__requestCompleted(
        CommandCodeSetStatusRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438DF5B & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438DF5B = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(71, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}