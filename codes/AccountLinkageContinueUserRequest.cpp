void __fastcall AccountLinkageContinueUserRequest___ctor(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4A001D2 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, accountLinkageToken);
    sub_1B64A00(&StringLiteral_16574/*"accountLinkageToken"*/, v5);
    byte_4A001D2 = 1;
  }
  RequestBase__addField_40856580(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16574/*"accountLinkageToken"*/,
    accountLinkageToken,
    0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageContinueUserRequest__getURL(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A001D1 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_16568/*"accountLinkageAnx/continueUser"*/, v2);
    byte_4A001D1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_16568/*"accountLinkageAnx/continueUser"*/, 0LL);
}


void __fastcall AccountLinkageContinueUserRequest__requestCompleted(
        AccountLinkageContinueUserRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  struct System_String_o *v16; // x22
  __int64 v17; // x21
  __int64 v18; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct AccountLinkageParams_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 *v25; // x8
  AccountLinkageContinueUserRequest_o *v26; // x0
  const MethodInfo *v27; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4A001D3 & 1) == 0 )
  {
    sub_1B64A00(&AccountLinkageParams_TypeInfo, responseList);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B64A00(&long_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_22140/*"ok"*/, v7);
    sub_1B64A00(&StringLiteral_16905/*"authKey"*/, v8);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v9);
    sub_1B64A00(&StringLiteral_22986/*"secretKey"*/, v10);
    this = (AccountLinkageContinueUserRequest_o *)sub_1B64A00(&StringLiteral_24329/*"userId"*/, v11);
    byte_4A001D3 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !responseList->max_length )
    sub_1B64C64(this, responseList);
  v12 = responseList->m_Items[0];
  if ( !v12 )
    goto LABEL_15;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_40851660(v12, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v25 = &StringLiteral_21971/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success;
  if ( !success
    || (this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_24329/*"userId"*/,
                                                        (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_15:
    sub_1B64C5C(this, responseList);
  }
  if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v16 = *(struct System_String_o **)j_il2cpp_object_unbox_0(this, long_TypeInfo, v14, v15);
    this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_16905/*"authKey"*/,
                                                    (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v17 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_22986/*"secretKey"*/,
                                                      (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v18 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                this,
                this->klass->vtable._4_getURL.methodPtr);
        static_fields = AccountLinkageParams_TypeInfo->static_fields;
        static_fields->newAuthKey = (struct System_String_o *)v17;
        static_fields = (struct AccountLinkageParams_StaticFields *)((char *)static_fields + 128);
        static_fields[-1].basicPassword = v16;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)static_fields, v17, v20, v21);
        v22 = AccountLinkageParams_TypeInfo->static_fields;
        v22->newSecretKey = (struct System_String_o *)v18;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v22->newSecretKey, v18, v23, v24);
        v25 = &StringLiteral_22140/*"ok"*/;
LABEL_14:
        RequestBase__completed(v4, (System_String_o *)*v25, 0LL);
        return;
      }
    }
    goto LABEL_15;
  }
  sub_1B64F1C(this);
  AccountLinkageContinueUserRequest___ctor(v26, v27);
}