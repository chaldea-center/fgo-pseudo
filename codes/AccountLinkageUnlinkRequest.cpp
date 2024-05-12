void __fastcall AccountLinkageUnlinkRequest___ctor(AccountLinkageUnlinkRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountLinkageUnlinkRequest__beginRequest(
        AccountLinkageUnlinkRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  if ( (byte_438CDEC & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438CDEC = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageUnlinkRequest__getURL(
        AccountLinkageUnlinkRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CDEB & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16544/*"accountLinkageAnx/unlink"*/);
    byte_438CDEB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16544/*"accountLinkageAnx/unlink"*/, 0LL);
}


void __fastcall AccountLinkageUnlinkRequest__requestCompleted(
        AccountLinkageUnlinkRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 *v5; // x8
  __int64 v6; // x0

  v4 = (RequestBase_o *)this;
  if ( (byte_438CDED & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    this = (AccountLinkageUnlinkRequest_o *)sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438CDED = 1;
  }
  if ( !responseList )
    goto LABEL_10;
  if ( !responseList->max_length )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
  this = (AccountLinkageUnlinkRequest_o *)responseList->m_Items[0];
  if ( !this )
LABEL_10:
    sub_B7769C(this, responseList);
  if ( ResponseData__checkError_30128096((ResponseData_o *)this, 0LL) )
    v5 = &StringLiteral_21657/*"ok"*/;
  else
    v5 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed(v4, (System_String_o *)*v5, 0LL);
}