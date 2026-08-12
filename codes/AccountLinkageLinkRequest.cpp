void AccountLinkageLinkRequest___ctor(AccountLinkageLinkRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageLinkRequest__beginRequest(
        AccountLinkageLinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_597230B & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_17324/*"accountLinkageToken"*/);
    byte_597230B = 1;
  }
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_17324/*"accountLinkageToken"*/, accountLinkageToken, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageLinkRequest__getURL(AccountLinkageLinkRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597230A & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_17321/*"accountLinkageAnx/link"*/);
    byte_597230A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_17321/*"accountLinkageAnx/link"*/, 0);
}


void AccountLinkageLinkRequest__requestCompleted(
        AccountLinkageLinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 *v5; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_597230C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    this = (AccountLinkageLinkRequest_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_597230C = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !LODWORD(responseList->max_length) )
    sub_2213CE4(this);
  this = (AccountLinkageLinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_2213CDC(this, responseList);
  if ( ResponseData__checkError_51257228((ResponseData_o *)this, 0) )
    v5 = &StringLiteral_23515/*"ok"*/;
  else
    v5 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v5, 0);
}