void __fastcall AccountLinkageIssueTokenRequest___ctor(
        AccountLinkageIssueTokenRequest_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountLinkageIssueTokenRequest__beginRequest(
        AccountLinkageIssueTokenRequest_o *this,
        System_String_o *authorizationCode,
        System_String_o *codeVerifier,
        const MethodInfo *method)
{
  if ( (byte_438CD96 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17841/*"codeVerifier"*/);
    sub_B775C4(&StringLiteral_16856/*"authorizationCode"*/);
    byte_438CD96 = 1;
  }
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_16856/*"authorizationCode"*/, authorizationCode, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_17841/*"codeVerifier"*/, codeVerifier, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageIssueTokenRequest__getURL(
        AccountLinkageIssueTokenRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CD95 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16542/*"accountLinkageAnx/issueToken"*/);
    byte_438CD95 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16542/*"accountLinkageAnx/issueToken"*/, 0LL);
}


void __fastcall AccountLinkageIssueTokenRequest__requestCompleted(
        AccountLinkageIssueTokenRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  AccountLinkageIssueTokenRequest_o *v7; // x21
  AccountLinkageParams_c *v8; // x8
  __int64 v9; // x9
  System_Int32_array **v10; // x0
  struct AccountLinkageParams_StaticFields *v11; // x8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct AccountLinkageParams_StaticFields *v18; // x25
  System_Int32_array **v19; // x0
  struct AccountLinkageParams_StaticFields *v20; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct AccountLinkageParams_StaticFields *v27; // x21
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct AccountLinkageParams_StaticFields *v35; // x8
  BattleServantConfConponent_o *p_accountLinkageToken; // x0
  __int64 *v37; // x8
  __int64 v38; // x20
  AccountLinkageParams_c *v39; // x8
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  __int64 v41; // x0
  AccountLinkageIssueTokenRequest_o *v42; // x0
  const MethodInfo *v43; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_438CD97 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_16546/*"accountLinkageToken"*/);
    sub_B775C4(&StringLiteral_20650/*"linkedAt"*/);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_16545/*"accountLinkageInfo"*/);
    sub_B775C4(&StringLiteral_19282/*"friendCode"*/);
    sub_B775C4(&StringLiteral_21436/*"name"*/);
    this = (AccountLinkageIssueTokenRequest_o *)sub_B775C4(&StringLiteral_20748/*"lv"*/);
    byte_438CD97 = 1;
  }
  if ( !responseList )
    goto LABEL_31;
  if ( !responseList->max_length )
  {
    v41 = sub_B776C8(this);
    sub_B77668(v41, 0LL);
  }
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_31;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError_30128096(v5, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v37 = &StringLiteral_21504/*"ng"*/;
LABEL_30:
    RequestBase__completed(v4, (System_String_o *)*v37, 0LL);
    return;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5->fields.success;
  if ( !success )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          success,
          (System_Type_o *)StringLiteral_16545/*"accountLinkageInfo"*/,
          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
  {
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  success,
                                                  (System_Type_o *)StringLiteral_16546/*"accountLinkageToken"*/,
                                                  (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v38 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v39 = AccountLinkageParams_TypeInfo;
      if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
        v39 = AccountLinkageParams_TypeInfo;
      }
      static_fields = v39->static_fields;
      v28 = (System_Int32_array **)v38;
      static_fields->accountLinkageToken = (struct System_String_o *)v38;
      p_accountLinkageToken = (BattleServantConfConponent_o *)&static_fields->accountLinkageToken;
      goto LABEL_29;
    }
LABEL_31:
    sub_B7769C(this, responseList);
  }
  this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                success,
                                                (System_Type_o *)StringLiteral_16545/*"accountLinkageInfo"*/,
                                                (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v7 = this;
  v8 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v8 = AccountLinkageParams_TypeInfo;
  }
  v8->static_fields->isRequestedAccountLinked = 1;
  if ( !v7 )
    goto LABEL_31;
  v9 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (System_Collections_Generic_Dictionary_string__object__c *)v7->klass->_2.typeHierarchy[v9 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                                                  (System_Type_o *)StringLiteral_21436/*"name"*/,
                                                  (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_31;
    v10 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass->vtable._4_getURL.methodPtr);
    v11 = AccountLinkageParams_TypeInfo->static_fields;
    v11->requestedAccountName = (struct System_String_o *)v10;
    sub_B77560((BattleServantConfConponent_o *)&v11->requestedAccountName, v10, v12, v13, v14, v15, v16, v17);
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                                                  (System_Type_o *)StringLiteral_20748/*"lv"*/,
                                                  (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_31;
    if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
    {
      v18 = AccountLinkageParams_TypeInfo->static_fields;
      v18->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(this);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                                                    (System_Type_o *)StringLiteral_19282/*"friendCode"*/,
                                                    (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_31;
      v19 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                     this,
                                     this->klass->vtable._4_getURL.methodPtr);
      v20 = AccountLinkageParams_TypeInfo->static_fields;
      v20->requestedAccountFriendCode = (struct System_String_o *)v19;
      sub_B77560((BattleServantConfConponent_o *)&v20->requestedAccountFriendCode, v19, v21, v22, v23, v24, v25, v26);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                                                    (System_Type_o *)StringLiteral_20650/*"linkedAt"*/,
                                                    (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_31;
      if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v27 = AccountLinkageParams_TypeInfo->static_fields;
        v27->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(this);
        this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                      success,
                                                      (System_Type_o *)StringLiteral_16546/*"accountLinkageToken"*/,
                                                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v28 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                         this,
                                         this->klass->vtable._4_getURL.methodPtr);
          v35 = AccountLinkageParams_TypeInfo->static_fields;
          v35->accountLinkageToken = (struct System_String_o *)v28;
          p_accountLinkageToken = (BattleServantConfConponent_o *)&v35->accountLinkageToken;
LABEL_29:
          sub_B77560(p_accountLinkageToken, v28, v29, v30, v31, v32, v33, v34);
          v37 = &StringLiteral_21657/*"ok"*/;
          goto LABEL_30;
        }
        goto LABEL_31;
      }
    }
  }
  else
  {
    this = (AccountLinkageIssueTokenRequest_o *)sub_B77990(v7);
  }
  v42 = (AccountLinkageIssueTokenRequest_o *)sub_B77990(this);
  AccountLinkageIssueTokenRequest___ctor(v42, v43);
}