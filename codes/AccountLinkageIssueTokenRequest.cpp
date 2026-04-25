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
  if ( (byte_4E06430 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_18235/*"codeVerifier"*/);
    sub_1CE6700(&StringLiteral_17122/*"authorizationCode"*/);
    byte_4E06430 = 1;
  }
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_17122/*"authorizationCode"*/, authorizationCode, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_18235/*"codeVerifier"*/, codeVerifier, 0);
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

  if ( (byte_4E0642F & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_16800/*"accountLinkageAnx/issueToken"*/);
    byte_4E0642F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_16800/*"accountLinkageAnx/issueToken"*/, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x0
  struct AccountLinkageParams_StaticFields *v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *v29; // x1
  __int64 *v30; // x8
  __int64 v31; // x1
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  AccountLinkageIssueTokenRequest_o *v39; // x0
  const MethodInfo *v40; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4E06431 & 1) == 0 )
  {
    sub_1CE6700(&AccountLinkageParams_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1CE6700(&long_TypeInfo);
    sub_1CE6700(&StringLiteral_16804/*"accountLinkageToken"*/);
    sub_1CE6700(&StringLiteral_21591/*"linkedAt"*/);
    sub_1CE6700(&StringLiteral_22728/*"ok"*/);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    sub_1CE6700(&StringLiteral_16803/*"accountLinkageInfo"*/);
    sub_1CE6700(&StringLiteral_19954/*"friendCode"*/);
    sub_1CE6700(&StringLiteral_22490/*"name"*/);
    this = (AccountLinkageIssueTokenRequest_o *)sub_1CE6700(&StringLiteral_21704/*"lv"*/);
    byte_4E06431 = 1;
  }
  if ( !responseList )
    goto LABEL_24;
  if ( !LODWORD(responseList->max_length) )
    sub_1CE6960(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_24;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError_45365352(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v30 = &StringLiteral_22555/*"ng"*/;
LABEL_23:
    RequestBase__completed(v4, (System_String_o *)*v30, 0);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success )
LABEL_24:
    sub_1CE6958(this, responseList);
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_16803/*"accountLinkageInfo"*/,
          (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
  {
    v29 = (Il2CppObject *)StringLiteral_16804/*"accountLinkageToken"*/;
LABEL_21:
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  v29,
                                                  (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v31 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
              this,
              this->klass->vtable._3_ToString.method);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->accountLinkageToken = (struct System_String_o *)v31;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->accountLinkageToken, v31, v33, v34, v35, v36, v37, v38);
      v30 = &StringLiteral_22728/*"ok"*/;
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                success,
                                                (Il2CppObject *)StringLiteral_16803/*"accountLinkageInfo"*/,
                                                (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                                  (Il2CppObject *)StringLiteral_22490/*"name"*/,
                                                  (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_24;
    v9 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
           this,
           this->klass->vtable._3_ToString.method);
    v10 = AccountLinkageParams_TypeInfo->static_fields;
    v10->requestedAccountName = (struct System_String_o *)v9;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v10->requestedAccountName, v9, v11, v12, v13, v14, v15, v16);
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                  (Il2CppObject *)StringLiteral_21704/*"lv"*/,
                                                  (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_24;
    if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
    {
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         long_TypeInfo,
                                                                                         v17,
                                                                                         v18);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_19954/*"friendCode"*/,
                                                    (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_24;
      v19 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
              this,
              this->klass->vtable._3_ToString.method);
      v20 = AccountLinkageParams_TypeInfo->static_fields;
      v20->requestedAccountFriendCode = (struct System_String_o *)v19;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v20->requestedAccountFriendCode, v19, v21, v22, v23, v24, v25, v26);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_21591/*"linkedAt"*/,
                                                    (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_24;
      if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                                this,
                                                                                                long_TypeInfo,
                                                                                                v27,
                                                                                                v28);
        v29 = (Il2CppObject *)StringLiteral_16804/*"accountLinkageToken"*/;
        goto LABEL_21;
      }
    }
  }
  sub_1CE6CF4(this);
  AccountLinkageIssueTokenRequest___ctor(v39, v40);
}