void __fastcall AccountLinkageLinkRequest__beginRequest(
        AccountLinkageLinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x1

  if ( (byte_4B179CD & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, accountLinkageToken, method);
    sub_1BCA7E0(&StringLiteral_16809/*"accountLinkageToken"*/, v6, v7);
    byte_4B179CD = 1;
  }
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_16809/*"accountLinkageToken"*/, accountLinkageToken, v3);
  RequestBase__addBaseField((RequestBase_o *)this, v8);
  RequestBase__WriteParameter((RequestBase_o *)this, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageLinkRequest__getURL(
        AccountLinkageLinkRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179CC & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16806/*"accountLinkageAnx/link"*/, v3, v4);
    byte_4B179CC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_16806/*"accountLinkageAnx/link"*/, 0LL);
}


void __fastcall AccountLinkageLinkRequest__requestCompleted(
        AccountLinkageLinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageLinkRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  bool v7; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  v4 = this;
  if ( (byte_4B179CE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, responseList, method);
    this = (AccountLinkageLinkRequest_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v5, v6);
    byte_4B179CE = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1BCAA44(this, responseList);
  this = (AccountLinkageLinkRequest_o *)responseList->m_Items[0];
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