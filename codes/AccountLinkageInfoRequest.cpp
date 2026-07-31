void AccountLinkageInfoRequest___ctor(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageInfoRequest__beginRequest(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_593A128 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A128 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageInfoRequest__getURL(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A127 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17283/*"accountLinkageAnx/info"*/);
    byte_593A127 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17283/*"accountLinkageAnx/info"*/, 0);
}


void AccountLinkageInfoRequest__requestCompleted(
        AccountLinkageInfoRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x23
  bool *v10; // x0
  __int64 *v11; // x8
  AccountLinkageInfoRequest_o *v12; // x0
  const MethodInfo *v13; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_593A129 & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_17462/*"aniplexPlusServerError"*/);
    sub_21FFC50(&StringLiteral_23398/*"notificationType"*/);
    this = (AccountLinkageInfoRequest_o *)sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A129 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !LODWORD(responseList->max_length) )
    sub_21FFED4(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_15;
  this = (AccountLinkageInfoRequest_o *)ResponseData__checkError_51190916(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = &StringLiteral_23290/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success )
    goto LABEL_15;
  this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                          success,
                                          (Il2CppObject *)StringLiteral_23398/*"notificationType"*/,
                                          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_15;
  v8 = qword_594C090;
  if ( this->klass->_1.element_class != *(Il2CppClass **)(qword_594C090 + 64) )
    goto LABEL_17;
  v9 = *(_QWORD *)j_il2cpp_object_unbox_0(this, qword_594C090, v7);
  this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                          success,
                                          (Il2CppObject *)StringLiteral_17462/*"aniplexPlusServerError"*/,
                                          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  AccountLinkageParams_TypeInfo->static_fields->notificationType = v9;
  if ( !this )
LABEL_15:
    sub_21FFECC(this, responseList);
  v8 = qword_594C050;
  if ( this->klass->_1.element_class == *(Il2CppClass **)(qword_594C050 + 64) )
  {
    v10 = (bool *)j_il2cpp_object_unbox_0(this, qword_594C050, v7);
    v11 = &StringLiteral_23468/*"ok"*/;
    AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError = *v10;
LABEL_14:
    RequestBase__completed(v4, (System_String_o *)*v11, 0);
    return;
  }
LABEL_17:
  sub_220024C(this, v8, v7);
  AccountLinkageInfoRequest___ctor(v12, v13);
}