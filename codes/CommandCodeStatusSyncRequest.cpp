void __fastcall CommandCodeStatusSyncRequest___ctor(CommandCodeStatusSyncRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CommandCodeStatusSyncRequest__beginRequest(
        CommandCodeStatusSyncRequest_o *this,
        System_Int64_array *changeCommandCodeIds,
        System_Int64_array *revokeCommandCodeIds,
        bool isLock,
        bool isChoice,
        const MethodInfo *method)
{
  RequestBase_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x0
  System_String_o *v16; // x0

  v10 = (RequestBase_o *)this;
  if ( (byte_4A0A3C2 & 1) == 0 )
  {
    sub_1B686D4(&JsonManager_TypeInfo, changeCommandCodeIds);
    sub_1B686D4(&StringLiteral_17742/*"changeCommandCodeIds"*/, v11);
    sub_1B686D4(&StringLiteral_22847/*"revokeCommandCodeIds"*/, v12);
    sub_1B686D4(&StringLiteral_20728/*"isLock"*/, v13);
    this = (CommandCodeStatusSyncRequest_o *)sub_1B686D4(&StringLiteral_20712/*"isChoice"*/, v14);
    byte_4A0A3C2 = 1;
  }
  if ( changeCommandCodeIds && *(_QWORD *)&changeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(&changeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_40920848(v10, (System_String_o *)StringLiteral_17742/*"changeCommandCodeIds"*/, v15, 0LL);
  }
  if ( revokeCommandCodeIds && *(_QWORD *)&revokeCommandCodeIds->max_length )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson(&revokeCommandCodeIds->obj, 0, 0, 0LL);
    RequestBase__addField_40920848(v10, (System_String_o *)StringLiteral_22847/*"revokeCommandCodeIds"*/, v16, 0LL);
  }
  if ( !v10 )
    sub_1B68930(this, changeCommandCodeIds);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20728/*"isLock"*/, isLock, 0LL);
  RequestBase__addField(v10, (System_String_o *)StringLiteral_20712/*"isChoice"*/, isChoice, 0LL);
  RequestBase__beginRequest(v10, 0LL);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getMockData(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A0A3C1 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_1/*""*/, v2);
    byte_4A0A3C1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall CommandCodeStatusSyncRequest__getURL(
        CommandCodeStatusSyncRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A3C0 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_18087/*"commandCode/statusSync"*/, v2);
    byte_4A0A3C0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_18087/*"commandCode/statusSync"*/, 0LL);
}


void __fastcall CommandCodeStatusSyncRequest__requestCompleted(
        CommandCodeStatusSyncRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4A0A3C3 & 1) == 0 )
  {
    sub_1B686D4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B686D4(&StringLiteral_22150/*"ok"*/, v5);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v6);
    byte_4A0A3C3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(72, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40916448(v7, 0LL) )
    v8 = &StringLiteral_22150/*"ok"*/;
  else
    v8 = &StringLiteral_21981/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}