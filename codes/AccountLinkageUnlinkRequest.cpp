void __fastcall AccountLinkageUnlinkRequest__beginRequest(
        AccountLinkageUnlinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4BDDDB0 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDDDB0 = 1;
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
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDDAF & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16919/*"accountLinkageAnx/unlink"*/);
    byte_4BDDDAF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_16919/*"accountLinkageAnx/unlink"*/, 0LL);
}


void __fastcall AccountLinkageUnlinkRequest__requestCompleted(
        AccountLinkageUnlinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageUnlinkRequest_o *v4; // x19
  bool v5; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v7; // x9

  v4 = this;
  if ( (byte_4BDDDB1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    this = (AccountLinkageUnlinkRequest_o *)sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDDB1 = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1C2209C(this, responseList);
  this = (AccountLinkageUnlinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_13:
    sub_1C22094(this, responseList);
  v5 = ResponseData__checkError_42505456((ResponseData_o *)this, 0LL);
  CallBack = v4->fields.CallBack;
  if ( v5 )
  {
    if ( CallBack )
    {
      v7 = &StringLiteral_22632/*"ok"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v7,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v7 = &StringLiteral_22456/*"ng"*/;
    goto LABEL_11;
  }
}