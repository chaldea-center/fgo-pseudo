void __fastcall AccountLinkageIssueTokenRequest__beginRequest(
        AccountLinkageIssueTokenRequest_o *this,
        System_String_o *authorizationCode,
        System_String_o *codeVerifier,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  __int64 v14; // x1

  if ( (byte_4B179CA & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, authorizationCode, codeVerifier);
    sub_1BCA7E0(&StringLiteral_18220/*"codeVerifier"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17148/*"authorizationCode"*/, v9, v10);
    byte_4B179CA = 1;
  }
  RequestBase__addField_41862348(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17148/*"authorizationCode"*/,
    authorizationCode,
    method);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_18220/*"codeVerifier"*/, codeVerifier, v11);
  RequestBase__addBaseField((RequestBase_o *)this, v12);
  RequestBase__WriteParameter((RequestBase_o *)this, v13);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageIssueTokenRequest__getURL(
        AccountLinkageIssueTokenRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179C9 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16805/*"accountLinkageAnx/issueToken"*/, v3, v4);
    byte_4B179C9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_16805/*"accountLinkageAnx/issueToken"*/, 0LL);
}


void __fastcall AccountLinkageIssueTokenRequest__requestCompleted(
        AccountLinkageIssueTokenRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageIssueTokenRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  ResponseData_o *v27; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  AccountLinkageIssueTokenRequest_o *v29; // x21
  __int64 methodPtr_low; // x9
  int64_t v31; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  int64_t v41; // x0
  struct AccountLinkageParams_StaticFields *v42; // x8
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x2
  __int64 v50; // x3
  Il2CppObject *v51; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v53; // x9
  int64_t v54; // x1
  struct AccountLinkageParams_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  AccountLinkageIssueTokenRequest_o *v62; // x0
  const MethodInfo *v63; // x1

  v4 = this;
  if ( (byte_4B179CB & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_16809/*"accountLinkageToken"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_21351/*"linkedAt"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_16808/*"accountLinkageInfo"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_19844/*"friendCode"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22219/*"name"*/, v23, v24);
    this = (AccountLinkageIssueTokenRequest_o *)sub_1BCA7E0(&StringLiteral_21457/*"lv"*/, v25, v26);
    byte_4B179CB = 1;
  }
  if ( !responseList )
    goto LABEL_27;
  if ( !responseList->max_length )
    sub_1BCAA44(this, responseList);
  v27 = responseList->m_Items[0];
  if ( !v27 )
    goto LABEL_27;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError_41952396(v27, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v27->fields.success;
    if ( !success )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_16808/*"accountLinkageInfo"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    {
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_16808/*"accountLinkageInfo"*/,
                                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked = 1;
      if ( !this )
        goto LABEL_27;
      v29 = this;
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        goto LABEL_29;
      }
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                    (Il2CppObject *)StringLiteral_22219/*"name"*/,
                                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v31 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->requestedAccountName = (struct System_String_o *)v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->requestedAccountName, v31, v33, v34, v35, v36, v37, v38);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v29,
                                                    (Il2CppObject *)StringLiteral_21457/*"lv"*/,
                                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_29;
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         long_TypeInfo,
                                                                                         v39,
                                                                                         v40);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v29,
                                                    (Il2CppObject *)StringLiteral_19844/*"friendCode"*/,
                                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v41 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v42 = AccountLinkageParams_TypeInfo->static_fields;
      v42->requestedAccountFriendCode = (struct System_String_o *)v41;
      sub_1BCA784((PartyOrganizationUtility_o *)&v42->requestedAccountFriendCode, v41, v43, v44, v45, v46, v47, v48);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v29,
                                                    (Il2CppObject *)StringLiteral_21351/*"linkedAt"*/,
                                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
LABEL_29:
        sub_1BCACFC(this);
        AccountLinkageIssueTokenRequest___ctor(v62, v63);
        return;
      }
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                              this,
                                                                                              long_TypeInfo,
                                                                                              v49,
                                                                                              v50);
      v51 = (Il2CppObject *)StringLiteral_16809/*"accountLinkageToken"*/;
    }
    else
    {
      v51 = (Il2CppObject *)StringLiteral_16809/*"accountLinkageToken"*/;
    }
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  v51,
                                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v54 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v55 = AccountLinkageParams_TypeInfo->static_fields;
      v55->accountLinkageToken = (struct System_String_o *)v54;
      sub_1BCA784((PartyOrganizationUtility_o *)&v55->accountLinkageToken, v54, v56, v57, v58, v59, v60, v61);
      CallBack = v4->fields.CallBack;
      if ( CallBack )
      {
        v53 = &StringLiteral_22465/*"ok"*/;
        goto LABEL_25;
      }
      return;
    }
LABEL_27:
    sub_1BCAA3C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v53 = &StringLiteral_22292/*"ng"*/;
LABEL_25:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v53,
      *(_QWORD *)&CallBack->fields.extra_arg);
  }
}