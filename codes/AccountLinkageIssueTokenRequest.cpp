void __fastcall AccountLinkageIssueTokenRequest__beginRequest(
        AccountLinkageIssueTokenRequest_o *this,
        System_String_o *authorizationCode,
        System_String_o *codeVerifier,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4A21265 & 1) == 0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, authorizationCode);
    sub_1B715CC(&StringLiteral_17988/*"codeVerifier"*/, v7);
    sub_1B715CC(&StringLiteral_16927/*"authorizationCode"*/, v8);
    byte_4A21265 = 1;
  }
  RequestBase__addField_40916388(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16927/*"authorizationCode"*/,
    authorizationCode,
    method);
  RequestBase__addField_40916388((RequestBase_o *)this, (System_String_o *)StringLiteral_17988/*"codeVerifier"*/, codeVerifier, v9);
  RequestBase__addBaseField((RequestBase_o *)this, v10);
  RequestBase__WriteParameter((RequestBase_o *)this, v11);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageIssueTokenRequest__getURL(
        AccountLinkageIssueTokenRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A21264 & 1) == 0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, method);
    sub_1B715CC(&StringLiteral_16586/*"accountLinkageAnx/issueToken"*/, v2);
    byte_4A21264 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61505504(BaseUrl, (System_String_o *)StringLiteral_16586/*"accountLinkageAnx/issueToken"*/, 0LL);
}


void __fastcall AccountLinkageIssueTokenRequest__requestCompleted(
        AccountLinkageIssueTokenRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageIssueTokenRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ResponseData_o *v16; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  AccountLinkageIssueTokenRequest_o *v18; // x21
  __int64 methodPtr_low; // x9
  __int64 v20; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x0
  struct AccountLinkageParams_StaticFields *v27; // x8
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x2
  __int64 v31; // x3
  Il2CppObject *v32; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v34; // x9
  __int64 v35; // x1
  struct AccountLinkageParams_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  AccountLinkageIssueTokenRequest_o *v39; // x0
  const MethodInfo *v40; // x1

  v4 = this;
  if ( (byte_4A21266 & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, responseList);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B715CC(&long_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_16590/*"accountLinkageToken"*/, v8);
    sub_1B715CC(&StringLiteral_21073/*"linkedAt"*/, v9);
    sub_1B715CC(&StringLiteral_22170/*"ok"*/, v10);
    sub_1B715CC(&StringLiteral_22000/*"ng"*/, v11);
    sub_1B715CC(&StringLiteral_16589/*"accountLinkageInfo"*/, v12);
    sub_1B715CC(&StringLiteral_19591/*"friendCode"*/, v13);
    sub_1B715CC(&StringLiteral_21927/*"name"*/, v14);
    this = (AccountLinkageIssueTokenRequest_o *)sub_1B715CC(&StringLiteral_21179/*"lv"*/, v15);
    byte_4A21266 = 1;
  }
  if ( !responseList )
    goto LABEL_27;
  if ( !responseList->max_length )
    sub_1B71830(this, responseList);
  v16 = responseList->m_Items[0];
  if ( !v16 )
    goto LABEL_27;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError(
                                                (ResponseData_o *)this,
                                                v16->fields.resCode,
                                                method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.success;
    if ( !success )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_16589/*"accountLinkageInfo"*/,
           (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    {
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_16589/*"accountLinkageInfo"*/,
                                                    (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked = 1;
      if ( !this )
        goto LABEL_27;
      v18 = this;
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        goto LABEL_29;
      }
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                    (Il2CppObject *)StringLiteral_21927/*"name"*/,
                                                    (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v20 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->requestedAccountName = (struct System_String_o *)v20;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->requestedAccountName, v20, v22, v23);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                    (Il2CppObject *)StringLiteral_21179/*"lv"*/,
                                                    (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_29;
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         long_TypeInfo,
                                                                                         v24,
                                                                                         v25);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                    (Il2CppObject *)StringLiteral_19591/*"friendCode"*/,
                                                    (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v26 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v27 = AccountLinkageParams_TypeInfo->static_fields;
      v27->requestedAccountFriendCode = (struct System_String_o *)v26;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v27->requestedAccountFriendCode, v26, v28, v29);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                    (Il2CppObject *)StringLiteral_21073/*"linkedAt"*/,
                                                    (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
LABEL_29:
        sub_1B71AE8(this);
        AccountLinkageIssueTokenRequest___ctor(v39, v40);
        return;
      }
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                              this,
                                                                                              long_TypeInfo,
                                                                                              v30,
                                                                                              v31);
      v32 = (Il2CppObject *)StringLiteral_16590/*"accountLinkageToken"*/;
    }
    else
    {
      v32 = (Il2CppObject *)StringLiteral_16590/*"accountLinkageToken"*/;
    }
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  v32,
                                                  (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v35 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v36 = AccountLinkageParams_TypeInfo->static_fields;
      v36->accountLinkageToken = (struct System_String_o *)v35;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v36->accountLinkageToken, v35, v37, v38);
      CallBack = v4->fields.CallBack;
      if ( CallBack )
      {
        v34 = &StringLiteral_22170/*"ok"*/;
        goto LABEL_25;
      }
      return;
    }
LABEL_27:
    sub_1B71828(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v34 = &StringLiteral_22000/*"ng"*/;
LABEL_25:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v34,
      *(_QWORD *)&CallBack->fields.extra_arg);
  }
}