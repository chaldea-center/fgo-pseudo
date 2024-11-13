void __fastcall AccountLinkageUnlinkRequest__beginRequest(
        AccountLinkageUnlinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  __int64 v5; // x1

  if ( (byte_4B179D0 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, accountLinkageToken, method);
    byte_4B179D0 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, (const MethodInfo *)accountLinkageToken);
  RequestBase__WriteParameter((RequestBase_o *)this, v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageUnlinkRequest__getURL(
        AccountLinkageUnlinkRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179CF & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16807/*"accountLinkageAnx/unlink"*/, v3, v4);
    byte_4B179CF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_16807/*"accountLinkageAnx/unlink"*/, 0LL);
}


void __fastcall AccountLinkageUnlinkRequest__requestCompleted(
        AccountLinkageUnlinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageUnlinkRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  bool v7; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  v4 = this;
  if ( (byte_4B179D1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, responseList, method);
    this = (AccountLinkageUnlinkRequest_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v5, v6);
    byte_4B179D1 = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1BCAA44(this, responseList);
  this = (AccountLinkageUnlinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_13:
    sub_1BCAA3C(this, responseList);
  v7 = ResponseData__checkError_41952396((ResponseData_o *)this, 0LL);
  CallBack = v4->fields.CallBack;
  if ( v7 )
  {
    if ( CallBack )
    {
      v9 = &StringLiteral_22465/*"ok"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v9 = &StringLiteral_22292/*"ng"*/;
    goto LABEL_11;
  }
}