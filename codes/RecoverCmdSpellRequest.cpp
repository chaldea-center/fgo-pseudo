// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverCmdSpellRequest__beginRequest(
        RecoverCmdSpellRequest_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C2398F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18511/*"ef_states_down_01"*/, *(_QWORD *)&itemId);
    byte_4C2398F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18511/*"ef_states_down_01"*/, itemId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall RecoverCmdSpellRequest__getURL(RecoverCmdSpellRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C2398E & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_18510/*"ef_sq_"*/, v2);
    byte_4C2398E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_18510/*"ef_sq_"*/, 0LL);
}


void __fastcall RecoverCmdSpellRequest__requestCompleted(
        RecoverCmdSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4C23990 & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C23990 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(46, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42712632(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}