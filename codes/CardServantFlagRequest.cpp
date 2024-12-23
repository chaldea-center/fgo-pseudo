// local variable allocation has failed, the output may be wrong!
bool __fastcall CardServantFlagRequest__beginRequest(
        CardServantFlagRequest_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4B68454 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24042/*"svtId"*/, *(_QWORD *)&svtId);
    sub_1BE4ACC(&StringLiteral_19717/*"flagId"*/, v7);
    byte_4B68454 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24042/*"svtId"*/, svtId, method);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19717/*"flagId"*/, flagId, v8);
  RequestBase__beginRequest((RequestBase_o *)this, v9);
  return 1;
}


System_String_o *__fastcall CardServantFlagRequest__getMockData(
        CardServantFlagRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B68453 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B68453 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CardServantFlagRequest__getURL(CardServantFlagRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B68452 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17991/*"card/svtFlag"*/, v2);
    byte_4B68452 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_17991/*"card/svtFlag"*/, 0LL);
}


void __fastcall CardServantFlagRequest__requestCompleted(
        CardServantFlagRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4B68455 & 1) == 0 )
  {
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B68455 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(68, responseList, 0LL);
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