void __fastcall AccountLinkageLinkRequest__beginRequest(
        AccountLinkageLinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4AB7505 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, accountLinkageToken);
    sub_1BAB41C(&StringLiteral_16671/*"accountLinkageToken"*/, v6);
    byte_4AB7505 = 1;
  }
  RequestBase__addField_41516464((RequestBase_o *)this, (System_String_o *)StringLiteral_16671/*"accountLinkageToken"*/, accountLinkageToken, v3);
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

  if ( (byte_4AB7504 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_16668/*"accountLinkageAnx/link"*/, v2);
    byte_4AB7504 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62048128(BaseUrl, (System_String_o *)StringLiteral_16668/*"accountLinkageAnx/link"*/, 0LL);
}


void __fastcall AccountLinkageLinkRequest__requestCompleted(
        AccountLinkageLinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageLinkRequest_o *v4; // x19
  __int64 v5; // x1
  bool v6; // w0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  v4 = this;
  if ( (byte_4AB7506 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22261/*"ok"*/, responseList);
    this = (AccountLinkageLinkRequest_o *)sub_1BAB41C(&StringLiteral_22090/*"ng"*/, v5);
    byte_4AB7506 = 1;
  }
  if ( !responseList )
    goto LABEL_13;
  if ( !responseList->max_length )
    sub_1BAB680(this, responseList);
  this = (AccountLinkageLinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_13:
    sub_1BAB678(this, responseList);
  v6 = ResponseData__checkError_41605928((ResponseData_o *)this, 0LL);
  CallBack = v4->fields.CallBack;
  if ( v6 )
  {
    if ( CallBack )
    {
      v8 = &StringLiteral_22261/*"ok"*/;
LABEL_11:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else if ( CallBack )
  {
    v8 = &StringLiteral_22090/*"ng"*/;
    goto LABEL_11;
  }
}