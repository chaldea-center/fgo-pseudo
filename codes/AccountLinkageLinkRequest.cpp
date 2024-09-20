void __fastcall AccountLinkageLinkRequest__beginRequest(
        AccountLinkageLinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A5C90F & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16640/*"accountLinkageToken"*/);
    byte_4A5C90F = 1;
  }
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_16640/*"accountLinkageToken"*/, accountLinkageToken, v3);
  RequestBase__addBaseField((RequestBase_o *)this, v6);
  RequestBase__WriteParameter((RequestBase_o *)this, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageLinkRequest__getURL(
        AccountLinkageLinkRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C90E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16637/*"accountLinkageAnx/link"*/);
    byte_4A5C90E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_16637/*"accountLinkageAnx/link"*/, 0LL);
}


void __fastcall AccountLinkageLinkRequest__requestCompleted(
        AccountLinkageLinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageLinkRequest_o *v4; // x19
  ResponseData_o *v5; // x8
  bool v6; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  v4 = this;
  if ( (byte_4A5C910 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (AccountLinkageLinkRequest_o *)sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C910 = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1B88814(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
LABEL_13:
    sub_1B8880C(this, responseList);
  v6 = ResponseData__checkError((ResponseData_o *)this, v5->fields.resCode, method);
  CallBack = v4->fields.CallBack;
  if ( v6 )
  {
    if ( CallBack )
    {
      v8 = &StringLiteral_22225/*"ok"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v8 = &StringLiteral_22055/*"ng"*/;
    goto LABEL_11;
  }
}