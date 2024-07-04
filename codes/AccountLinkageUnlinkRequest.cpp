void __fastcall AccountLinkageUnlinkRequest__beginRequest(
        AccountLinkageUnlinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_48E3E1C & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, accountLinkageToken);
    byte_48E3E1C = 1;
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

  if ( (byte_48E3E1B & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_16404/*"accountLinkageAnx/unlink"*/, v2);
    byte_48E3E1B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_16404/*"accountLinkageAnx/unlink"*/, 0LL);
}


void __fastcall AccountLinkageUnlinkRequest__requestCompleted(
        AccountLinkageUnlinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageUnlinkRequest_o *v4; // x19
  __int64 v5; // x1
  ResponseData_o *v6; // x8
  bool v7; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  v4 = this;
  if ( (byte_48E3E1D & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, responseList);
    this = (AccountLinkageUnlinkRequest_o *)sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v5);
    byte_48E3E1D = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1B00F30(this, responseList);
  v6 = responseList->m_Items[0];
  if ( !v6 )
LABEL_13:
    sub_1B00F28(this, responseList);
  v7 = ResponseData__checkError((ResponseData_o *)this, v6->fields.resCode, method);
  CallBack = v4->fields.CallBack;
  if ( v7 )
  {
    if ( CallBack )
    {
      v9 = &StringLiteral_21923/*"ok"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v9 = &StringLiteral_21754/*"ng"*/;
    goto LABEL_11;
  }
}