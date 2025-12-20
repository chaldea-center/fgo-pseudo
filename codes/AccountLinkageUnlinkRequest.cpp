void AccountLinkageUnlinkRequest___ctor(AccountLinkageUnlinkRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageUnlinkRequest__beginRequest(
        AccountLinkageUnlinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  if ( (byte_4D2E2F4 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2E2F4 = 1;
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

  if ( (byte_4D2E2F3 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_16706/*"accountLinkageAnx/unlink"*/);
    byte_4D2E2F3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_16706/*"accountLinkageAnx/unlink"*/, 0);
}


void AccountLinkageUnlinkRequest__requestCompleted(
        AccountLinkageUnlinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 *v5; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_4D2E2F5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    this = (AccountLinkageUnlinkRequest_o *)sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E2F5 = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !LODWORD(responseList->max_length) )
    sub_1C942F8(this);
  this = (AccountLinkageUnlinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_1C942F0(this, responseList);
  if ( ResponseData__checkError_45012660((ResponseData_o *)this, 0) )
    v5 = &StringLiteral_22594/*"ok"*/;
  else
    v5 = &StringLiteral_22424/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v5, 0);
}