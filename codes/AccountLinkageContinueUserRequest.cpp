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
  if ( (byte_438CD90 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16546/*"accountLinkageToken"*/);
    byte_438CD90 = 1;
  }
  RequestBase__addField_32565392(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16546/*"accountLinkageToken"*/,
    accountLinkageToken,
    0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageContinueUserRequest__getURL(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CD8F & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16540/*"accountLinkageAnx/continueUser"*/);
    byte_438CD8F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16540/*"accountLinkageAnx/continueUser"*/, 0LL);
}


void __fastcall AccountLinkageContinueUserRequest__requestCompleted(
        AccountLinkageContinueUserRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  int64_t v7; // x22
  System_Int32_array **v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x20
  AccountLinkageParams_c *v16; // x8
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 *v25; // x8
  __int64 v26; // x0
  AccountLinkageContinueUserRequest_o *v27; // x0
  const MethodInfo *v28; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_438CD91 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_16850/*"authKey"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_22414/*"secretKey"*/);
    this = (AccountLinkageContinueUserRequest_o *)sub_B775C4(&StringLiteral_23521/*"userId"*/);
    byte_438CD91 = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
  {
    v26 = sub_B776C8(this);
    sub_B77668(v26, 0LL);
  }
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_18;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_30128096(v5, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v25 = &StringLiteral_21504/*"ng"*/;
LABEL_17:
    RequestBase__completed(v4, (System_String_o *)*v25, 0LL);
    return;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5->fields.success;
  if ( !success
    || (this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                        success,
                                                        (System_Type_o *)StringLiteral_23521/*"userId"*/,
                                                        (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_18:
    sub_B7769C(this, responseList);
  }
  if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v7 = *(_QWORD *)j_il2cpp_object_unbox_0(this);
    this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                    success,
                                                    (System_Type_o *)StringLiteral_16850/*"authKey"*/,
                                                    (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v8 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                    this,
                                    this->klass->vtable._4_getURL.methodPtr);
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                      success,
                                                      (System_Type_o *)StringLiteral_22414/*"secretKey"*/,
                                                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v15 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                       this,
                                       this->klass->vtable._4_getURL.methodPtr);
        v16 = AccountLinkageParams_TypeInfo;
        if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
          v16 = AccountLinkageParams_TypeInfo;
        }
        v16->static_fields->newUserId = v7;
        static_fields = v16->static_fields;
        static_fields->newAuthKey = (struct System_String_o *)v8;
        sub_B77560((BattleServantConfConponent_o *)&static_fields->newAuthKey, v8, v9, v10, v11, v12, v13, v14);
        v18 = AccountLinkageParams_TypeInfo->static_fields;
        v18->newSecretKey = (struct System_String_o *)v15;
        sub_B77560((BattleServantConfConponent_o *)&v18->newSecretKey, v15, v19, v20, v21, v22, v23, v24);
        v25 = &StringLiteral_21657/*"ok"*/;
        goto LABEL_17;
      }
    }
    goto LABEL_18;
  }
  v27 = (AccountLinkageContinueUserRequest_o *)sub_B77990(this);
  AccountLinkageContinueUserRequest___ctor(v27, v28);
}