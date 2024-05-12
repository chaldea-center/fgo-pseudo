// attributes: thunk
void __fastcall RecoverCmdSpellRequest___ctor(RecoverCmdSpellRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


void __fastcall RecoverCmdSpellRequest__beginRequest(
        RecoverCmdSpellRequest_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_438EEEF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17955/*"commandSpellId"*/);
    byte_438EEEF = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17955/*"commandSpellId"*/, itemId, v3);
  RequestBase__beginRequest((RequestBase_o *)this, v6);
}


System_String_o *__fastcall RecoverCmdSpellRequest__getURL(RecoverCmdSpellRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438EEEE & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17954/*"commandSpell/use"*/);
    byte_438EEEE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17954/*"commandSpell/use"*/, 0LL);
}


void __fastcall RecoverCmdSpellRequest__requestCompleted(
        RecoverCmdSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0
  __int64 *v7; // x8

  if ( (byte_438EEF0 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438EEF0 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(46, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_21657/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_21504/*"ng"*/;
  }
  NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)*v7, 0LL);
}