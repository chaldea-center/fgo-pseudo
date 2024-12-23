bool __fastcall BlacklistRemoveRequest__beginRequest(
        BlacklistRemoveRequest_o *this,
        int64_t targetUserId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4B68435 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24193/*"targetUserId"*/, targetUserId);
    byte_4B68435 = 1;
  }
  RequestBase__addField_42110748((RequestBase_o *)this, (System_String_o *)StringLiteral_24193/*"targetUserId"*/, targetUserId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
  return 1;
}


System_String_o *__fastcall BlacklistRemoveRequest__getMockData(
        BlacklistRemoveRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B68434 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B68434 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall BlacklistRemoveRequest__getURL(BlacklistRemoveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B68433 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17550/*"blacklist/remove"*/, v2);
    byte_4B68433 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_17550/*"blacklist/remove"*/, 0LL);
}


void __fastcall BlacklistRemoveRequest__requestCompleted(
        BlacklistRemoveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4B68436 & 1) == 0 )
  {
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B68436 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(65, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42194996(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22543/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22370/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}