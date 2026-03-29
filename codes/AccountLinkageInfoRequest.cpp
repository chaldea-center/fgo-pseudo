void AccountLinkageInfoRequest___ctor(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageInfoRequest__beginRequest(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D323E7 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D323E7 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageInfoRequest__getURL(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D323E6 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_16747/*"accountLinkageAnx/info"*/);
    byte_4D323E6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_16747/*"accountLinkageAnx/info"*/, 0);
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
  __int64 v8; // x3
  __int64 v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 *v12; // x8
  AccountLinkageInfoRequest_o *v13; // x0
  const MethodInfo *v14; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4D323E8 & 1) == 0 )
  {
    sub_1C93AD4(&AccountLinkageParams_TypeInfo);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    sub_1C93AD4(&StringLiteral_16909/*"aniplexPlusServerError"*/);
    sub_1C93AD4(&StringLiteral_22585/*"notificationType"*/);
    this = (AccountLinkageInfoRequest_o *)sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D323E8 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !LODWORD(responseList->max_length) )
    sub_1C93D34(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_15;
  this = (AccountLinkageInfoRequest_o *)ResponseData__checkError_44908744(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v12 = &StringLiteral_22483/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success )
    goto LABEL_15;
  this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                          success,
                                          (Il2CppObject *)StringLiteral_22585/*"notificationType"*/,
                                          (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_15;
  if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_17;
  v9 = *(_QWORD *)j_il2cpp_object_unbox_0(this, long_TypeInfo, v7, v8);
  this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                          success,
                                          (Il2CppObject *)StringLiteral_16909/*"aniplexPlusServerError"*/,
                                          (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  AccountLinkageParams_TypeInfo->static_fields->notificationType = v9;
  if ( !this )
LABEL_15:
    sub_1C93D2C(this, responseList);
  if ( this->klass->_1.element_class == bool_TypeInfo->_1.element_class )
  {
    AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError = *(_BYTE *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         bool_TypeInfo,
                                                                                         v10,
                                                                                         v11);
    v12 = &StringLiteral_22655/*"ok"*/;
LABEL_14:
    RequestBase__completed(v4, (System_String_o *)*v12, 0);
    return;
  }
LABEL_17:
  sub_1C940C8(this);
  AccountLinkageInfoRequest___ctor(v13, v14);
}