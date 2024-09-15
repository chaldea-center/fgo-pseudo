void __fastcall AccountLinkageLinkRequest__beginRequest(
        AccountLinkageLinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4A2F6DB & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, accountLinkageToken);
    sub_1B761C0(&StringLiteral_16634/*"accountLinkageToken"*/, v6);
    byte_4A2F6DB = 1;
  }
  RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_16634/*"accountLinkageToken"*/, accountLinkageToken, v3);
  RequestBase__addBaseField((RequestBase_o *)this, v7);
  RequestBase__WriteParameter((RequestBase_o *)this, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageLinkRequest__getURL(
        AccountLinkageLinkRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F6DA & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_16631/*"accountLinkageAnx/link"*/, v2);
    byte_4A2F6DA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_16631/*"accountLinkageAnx/link"*/, 0LL);
}


void __fastcall AccountLinkageLinkRequest__requestCompleted(
        AccountLinkageLinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageLinkRequest_o *v4; // x19
  __int64 v5; // x1
  ResponseData_o *v6; // x8
  bool v7; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  v4 = this;
  if ( (byte_4A2F6DC & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22216/*"ok"*/, responseList);
    this = (AccountLinkageLinkRequest_o *)sub_1B761C0(&StringLiteral_22046/*"ng"*/, v5);
    byte_4A2F6DC = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1B76424(this, responseList);
  v6 = responseList->m_Items[0];
  if ( !v6 )
LABEL_13:
    sub_1B7641C(this, responseList);
  v7 = ResponseData__checkError((ResponseData_o *)this, v6->fields.resCode, method);
  CallBack = v4->fields.CallBack;
  if ( v7 )
  {
    if ( CallBack )
    {
      v9 = &StringLiteral_22216/*"ok"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v9 = &StringLiteral_22046/*"ng"*/;
    goto LABEL_11;
  }
}