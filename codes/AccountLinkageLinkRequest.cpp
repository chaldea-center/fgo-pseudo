void AccountLinkageLinkRequest___ctor(AccountLinkageLinkRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageLinkRequest__beginRequest(
        AccountLinkageLinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  if ( (byte_4CC8E53 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_16650/*"accountLinkageToken"*/);
    byte_4CC8E53 = 1;
  }
  RequestBase__addField_44518324((RequestBase_o *)this, (System_String_o *)StringLiteral_16650/*"accountLinkageToken"*/, accountLinkageToken, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageLinkRequest__getURL(AccountLinkageLinkRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8E52 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_16647/*"accountLinkageAnx/link"*/);
    byte_4CC8E52 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_16647/*"accountLinkageAnx/link"*/, 0);
}


void AccountLinkageLinkRequest__requestCompleted(
        AccountLinkageLinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 *v5; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_4CC8E54 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    this = (AccountLinkageLinkRequest_o *)sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8E54 = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !LODWORD(responseList->max_length) )
    sub_1C71610(this);
  this = (AccountLinkageLinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_1C71608(this, responseList);
  if ( ResponseData__checkError_44515240((ResponseData_o *)this, 0) )
    v5 = &StringLiteral_22486/*"ok"*/;
  else
    v5 = &StringLiteral_22316/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v5, 0);
}