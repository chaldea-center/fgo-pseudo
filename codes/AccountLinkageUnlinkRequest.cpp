void __fastcall AccountLinkageUnlinkRequest__beginRequest(
        AccountLinkageUnlinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4B683EB & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, accountLinkageToken);
    byte_4B683EB = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, (const MethodInfo *)accountLinkageToken);
  RequestBase__WriteParameter((RequestBase_o *)this, v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageUnlinkRequest__getURL(
        AccountLinkageUnlinkRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B683EA & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_16849/*"accountLinkageAnx/unlink"*/, v2);
    byte_4B683EA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_16849/*"accountLinkageAnx/unlink"*/, 0LL);
}


void __fastcall AccountLinkageUnlinkRequest__requestCompleted(
        AccountLinkageUnlinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageUnlinkRequest_o *v4; // x19
  __int64 v5; // x1
  bool v6; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  v4 = this;
  if ( (byte_4B683EC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, responseList);
    this = (AccountLinkageUnlinkRequest_o *)sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v5);
    byte_4B683EC = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1BE4D30(this, responseList);
  this = (AccountLinkageUnlinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_13:
    sub_1BE4D28(this, responseList);
  v6 = ResponseData__checkError_42194996((ResponseData_o *)this, 0LL);
  CallBack = v4->fields.CallBack;
  if ( v6 )
  {
    if ( CallBack )
    {
      v8 = &StringLiteral_22543/*"ok"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v8 = &StringLiteral_22370/*"ng"*/;
    goto LABEL_11;
  }
}