bool __fastcall CardServantFlagRequest__beginRequest(
        CardServantFlagRequest_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4A5C978 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    sub_1B885B0(&StringLiteral_19456/*"flagId"*/);
    byte_4A5C978 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23707/*"svtId"*/, svtId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19456/*"flagId"*/, flagId, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
  return 1;
}


System_String_o *__fastcall CardServantFlagRequest__getMockData(
        CardServantFlagRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C977 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C977 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CardServantFlagRequest__getURL(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C976 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17758/*"card/svtFlag"*/);
    byte_4A5C976 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17758/*"card/svtFlag"*/, 0LL);
}


void __fastcall CardServantFlagRequest__requestCompleted(
        CardServantFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4A5C979 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C979 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(68, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v8,
    *(_QWORD *)&CallBack->fields.extra_arg);
}