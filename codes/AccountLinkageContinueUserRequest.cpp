void AccountLinkageContinueUserRequest___ctor(AccountLinkageContinueUserRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  if ( (byte_4CB7D21 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_16643/*"accountLinkageToken"*/);
    byte_4CB7D21 = 1;
  }
  RequestBase__addField_44471996((RequestBase_o *)this, (System_String_o *)StringLiteral_16643/*"accountLinkageToken"*/, accountLinkageToken, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageContinueUserRequest__getURL(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7D20 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_16637/*"accountLinkageAnx/continueUser"*/);
    byte_4CB7D20 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_16637/*"accountLinkageAnx/continueUser"*/, 0);
}


void AccountLinkageContinueUserRequest__requestCompleted(
        AccountLinkageContinueUserRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  struct System_String_o *v9; // x22
  __int64 v10; // x21
  __int64 v11; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct AccountLinkageParams_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 *v18; // x8
  AccountLinkageContinueUserRequest_o *v19; // x0
  const MethodInfo *v20; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4CB7D22 & 1) == 0 )
  {
    sub_1C6BA08(&AccountLinkageParams_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&StringLiteral_22471/*"ok"*/);
    sub_1C6BA08(&StringLiteral_16959/*"authKey"*/);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_23350/*"secretKey"*/);
    this = (AccountLinkageContinueUserRequest_o *)sub_1C6BA08(&StringLiteral_24657/*"userId"*/);
    byte_4CB7D22 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !LODWORD(responseList->max_length) )
    sub_1C6BC68(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_15;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_44468912(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v18 = &StringLiteral_22301/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success
    || (this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_24657/*"userId"*/,
                                                        (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_15:
    sub_1C6BC60(this, responseList);
  }
  if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v9 = *(struct System_String_o **)j_il2cpp_object_unbox_0(this, long_TypeInfo, v7, v8);
    this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_16959/*"authKey"*/,
                                                    (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v10 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
              this,
              this->klass->vtable._3_ToString.method);
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_23350/*"secretKey"*/,
                                                      (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v11 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                this,
                this->klass->vtable._3_ToString.method);
        static_fields = AccountLinkageParams_TypeInfo->static_fields;
        static_fields->newAuthKey = (struct System_String_o *)v10;
        static_fields = (struct AccountLinkageParams_StaticFields *)((char *)static_fields + 128);
        static_fields[-1].basicPassword = v9;
        sub_1C6B9AC((CGThumbnailListItem_o *)static_fields, v10, v13, v14);
        v15 = AccountLinkageParams_TypeInfo->static_fields;
        v15->newSecretKey = (struct System_String_o *)v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v15->newSecretKey, v11, v16, v17);
        v18 = &StringLiteral_22471/*"ok"*/;
LABEL_14:
        RequestBase__completed(v4, (System_String_o *)*v18, 0);
        return;
      }
    }
    goto LABEL_15;
  }
  sub_1C6BFFC(this);
  AccountLinkageContinueUserRequest___ctor(v19, v20);
}