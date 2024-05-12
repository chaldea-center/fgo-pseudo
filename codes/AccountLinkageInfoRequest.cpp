void __fastcall AccountLinkageInfoRequest___ctor(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountLinkageInfoRequest__beginRequest(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438CD93 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438CD93 = 1;
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


System_String_o *__fastcall AccountLinkageInfoRequest__getURL(
        AccountLinkageInfoRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CD92 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16541/*"accountLinkageAnx/info"*/);
    byte_438CD92 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16541/*"accountLinkageAnx/info"*/, 0LL);
}


void __fastcall AccountLinkageInfoRequest__requestCompleted(
        AccountLinkageInfoRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  AccountLinkageInfoRequest_o *success; // x20
  int32_t v7; // w22
  AccountLinkageParams_c *v8; // x8
  struct AccountLinkageParams_StaticFields *static_fields; // x21
  __int64 *v10; // x8
  __int64 v11; // x0
  AccountLinkageInfoRequest_o *v12; // x0
  const MethodInfo *v13; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_438CD94 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_16670/*"aniplexPlusServerError"*/);
    sub_B775C4(&StringLiteral_21588/*"notificationType"*/);
    this = (AccountLinkageInfoRequest_o *)sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438CD94 = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
  {
    v11 = sub_B776C8(this);
    sub_B77668(v11, 0LL);
  }
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_18;
  this = (AccountLinkageInfoRequest_o *)ResponseData__checkError_30128096(v5, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = &StringLiteral_21504/*"ng"*/;
    goto LABEL_17;
  }
  success = (AccountLinkageInfoRequest_o *)v5->fields.success;
  if ( !success )
    goto LABEL_18;
  this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                                          (System_Type_o *)StringLiteral_21588/*"notificationType"*/,
                                          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_18;
  if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
  {
    sub_B77990(this);
    goto LABEL_21;
  }
  v7 = *(_DWORD *)j_il2cpp_object_unbox_0(this);
  this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                                          (System_Type_o *)StringLiteral_16670/*"aniplexPlusServerError"*/,
                                          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  success = this;
  v8 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v8 = AccountLinkageParams_TypeInfo;
  }
  v8->static_fields->notificationType = v7;
  if ( !success )
LABEL_18:
    sub_B7769C(this, responseList);
  if ( success->klass->_1.element_class == bool_TypeInfo->_1.element_class )
  {
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    static_fields->isAniplexPlusServerError = *(_BYTE *)j_il2cpp_object_unbox_0(success);
    v10 = &StringLiteral_21657/*"ok"*/;
LABEL_17:
    RequestBase__completed(v4, (System_String_o *)*v10, 0LL);
    return;
  }
LABEL_21:
  v12 = (AccountLinkageInfoRequest_o *)sub_B77990(success);
  AccountLinkageInfoRequest___ctor(v12, v13);
}