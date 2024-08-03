void __fastcall AccountLinkageLinkRequest___ctor(AccountLinkageLinkRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountLinkageLinkRequest__beginRequest(
        AccountLinkageLinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_49FDABF & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, accountLinkageToken);
    sub_1B640C8(&StringLiteral_16571/*"accountLinkageToken"*/, v5);
    byte_49FDABF = 1;
  }
  RequestBase__addField_40850936(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16571/*"accountLinkageToken"*/,
    accountLinkageToken,
    0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
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

  if ( (byte_49FDABE & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_16568/*"accountLinkageAnx/link"*/, v2);
    byte_49FDABE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_16568/*"accountLinkageAnx/link"*/, 0LL);
}


void __fastcall AccountLinkageLinkRequest__requestCompleted(
        AccountLinkageLinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 v5; // x1
  __int64 *v6; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_49FDAC0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, responseList);
    this = (AccountLinkageLinkRequest_o *)sub_1B640C8(&StringLiteral_21968/*"ng"*/, v5);
    byte_49FDAC0 = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !responseList->max_length )
    sub_1B6432C(this, responseList);
  this = (AccountLinkageLinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_1B64324(this);
  if ( ResponseData__checkError_40846016((ResponseData_o *)this, 0LL) )
    v6 = &StringLiteral_22137/*"ok"*/;
  else
    v6 = &StringLiteral_21968/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v6, 0LL);
}