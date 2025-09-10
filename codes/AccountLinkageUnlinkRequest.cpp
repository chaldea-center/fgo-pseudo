void AccountLinkageUnlinkRequest___ctor(AccountLinkageUnlinkRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageUnlinkRequest__beginRequest(
        AccountLinkageUnlinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  if ( (byte_4C28CE5 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28CE5 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageUnlinkRequest__getURL(AccountLinkageUnlinkRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28CE4 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_16643/*"accountLinkageAnx/unlink"*/);
    byte_4C28CE4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_16643/*"accountLinkageAnx/unlink"*/, 0);
}


void AccountLinkageUnlinkRequest__requestCompleted(
        AccountLinkageUnlinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 *v5; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_4C28CE6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    this = (AccountLinkageUnlinkRequest_o *)sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28CE6 = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !LODWORD(responseList->max_length) )
    sub_1C2D6F4(this, responseList, method);
  this = (AccountLinkageUnlinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_1C2D6EC(this, responseList);
  if ( ResponseData__checkError_44004292((ResponseData_o *)this, 0) )
    v5 = &StringLiteral_22362/*"ok"*/;
  else
    v5 = &StringLiteral_22195/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v5, 0);
}