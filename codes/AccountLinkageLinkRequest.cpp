void __fastcall AccountLinkageLinkRequest__beginRequest(
        AccountLinkageLinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4A71623 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, accountLinkageToken);
    sub_1B90010(&StringLiteral_16665/*"accountLinkageToken"*/, v6);
    byte_4A71623 = 1;
  }
  RequestBase__addField_41181164((RequestBase_o *)this, (System_String_o *)StringLiteral_16665/*"accountLinkageToken"*/, accountLinkageToken, v3);
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

  if ( (byte_4A71622 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_16662/*"accountLinkageAnx/link"*/, v2);
    byte_4A71622 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_16662/*"accountLinkageAnx/link"*/, 0LL);
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
  if ( (byte_4A71624 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_22258/*"ok"*/, responseList);
    this = (AccountLinkageLinkRequest_o *)sub_1B90010(&StringLiteral_22088/*"ng"*/, v5);
    byte_4A71624 = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1B90274(this, responseList);
  v6 = responseList->m_Items[0];
  if ( !v6 )
LABEL_13:
    sub_1B9026C(this, responseList);
  v7 = ResponseData__checkError((ResponseData_o *)this, v6->fields.resCode, method);
  CallBack = v4->fields.CallBack;
  if ( v7 )
  {
    if ( CallBack )
    {
      v9 = &StringLiteral_22258/*"ok"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v9 = &StringLiteral_22088/*"ng"*/;
    goto LABEL_11;
  }
}