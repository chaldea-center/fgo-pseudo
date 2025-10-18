void AccountLinkageIssueTokenRequest___ctor(AccountLinkageIssueTokenRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageIssueTokenRequest__beginRequest(
        AccountLinkageIssueTokenRequest_o *this,
        System_String_o *authorizationCode,
        System_String_o *codeVerifier,
        const MethodInfo *method)
{
  if ( (byte_4C449E2 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_18037/*"codeVerifier"*/);
    sub_1C37058(&StringLiteral_16948/*"authorizationCode"*/);
    byte_4C449E2 = 1;
  }
  RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_16948/*"authorizationCode"*/, authorizationCode, 0);
  RequestBase__addField_44247300((RequestBase_o *)this, (System_String_o *)StringLiteral_18037/*"codeVerifier"*/, codeVerifier, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageIssueTokenRequest__getURL(
        AccountLinkageIssueTokenRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C449E1 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_16645/*"accountLinkageAnx/issueToken"*/);
    byte_4C449E1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_16645/*"accountLinkageAnx/issueToken"*/, 0);
}


void AccountLinkageIssueTokenRequest__requestCompleted(
        AccountLinkageIssueTokenRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  AccountLinkageIssueTokenRequest_o *v7; // x21
  __int64 naturalAligment; // x9
  __int64 v9; // x0
  struct AccountLinkageParams_StaticFields *v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x0
  struct AccountLinkageParams_StaticFields *v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  __int64 v20; // x3
  Il2CppObject *v21; // x1
  __int64 *v22; // x8
  __int64 v23; // x1
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  AccountLinkageIssueTokenRequest_o *v27; // x0
  const MethodInfo *v28; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4C449E3 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageParams_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&StringLiteral_16649/*"accountLinkageToken"*/);
    sub_1C37058(&StringLiteral_21259/*"linkedAt"*/);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_16648/*"accountLinkageInfo"*/);
    sub_1C37058(&StringLiteral_19678/*"friendCode"*/);
    sub_1C37058(&StringLiteral_22150/*"name"*/);
    this = (AccountLinkageIssueTokenRequest_o *)sub_1C37058(&StringLiteral_21370/*"lv"*/);
    byte_4C449E3 = 1;
  }
  if ( !responseList )
    goto LABEL_24;
  if ( !LODWORD(responseList->max_length) )
    sub_1C372BC(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_24;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError_44242528(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v22 = &StringLiteral_22215/*"ng"*/;
LABEL_23:
    RequestBase__completed(v4, (System_String_o *)*v22, 0);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success )
LABEL_24:
    sub_1C372B4(this);
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_16648/*"accountLinkageInfo"*/,
          (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
  {
    v21 = (Il2CppObject *)StringLiteral_16649/*"accountLinkageToken"*/;
LABEL_21:
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  v21,
                                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v23 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
              this,
              this->klass->vtable._3_ToString.method);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->accountLinkageToken = (struct System_String_o *)v23;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->accountLinkageToken, v23, v25, v26);
      v22 = &StringLiteral_22382/*"ok"*/;
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                success,
                                                (Il2CppObject *)StringLiteral_16648/*"accountLinkageInfo"*/,
                                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked = 1;
  if ( !this )
    goto LABEL_24;
  v7 = this;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                  (Il2CppObject *)StringLiteral_22150/*"name"*/,
                                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_24;
    v9 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
           this,
           this->klass->vtable._3_ToString.method);
    v10 = AccountLinkageParams_TypeInfo->static_fields;
    v10->requestedAccountName = (struct System_String_o *)v9;
    sub_1C36FFC((CGThumbnailListItem_o *)&v10->requestedAccountName, v9, v11, v12);
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                  (Il2CppObject *)StringLiteral_21370/*"lv"*/,
                                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_24;
    if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
    {
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         long_TypeInfo,
                                                                                         v13,
                                                                                         v14);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_19678/*"friendCode"*/,
                                                    (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_24;
      v15 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
              this,
              this->klass->vtable._3_ToString.method);
      v16 = AccountLinkageParams_TypeInfo->static_fields;
      v16->requestedAccountFriendCode = (struct System_String_o *)v15;
      sub_1C36FFC((CGThumbnailListItem_o *)&v16->requestedAccountFriendCode, v15, v17, v18);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_21259/*"linkedAt"*/,
                                                    (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_24;
      if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                                this,
                                                                                                long_TypeInfo,
                                                                                                v19,
                                                                                                v20);
        v21 = (Il2CppObject *)StringLiteral_16649/*"accountLinkageToken"*/;
        goto LABEL_21;
      }
    }
  }
  sub_1C37574(this);
  AccountLinkageIssueTokenRequest___ctor(v27, v28);
}