void __fastcall AccountLinkageIssueTokenRequest__beginRequest(
        AccountLinkageIssueTokenRequest_o *this,
        System_String_o *authorizationCode,
        System_String_o *codeVerifier,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4BDDDAA & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18342/*"codeVerifier"*/);
    sub_1C21E38(&StringLiteral_17262/*"authorizationCode"*/);
    byte_4BDDDAA = 1;
  }
  RequestBase__addField_42414744(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17262/*"authorizationCode"*/,
    authorizationCode,
    method);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_18342/*"codeVerifier"*/, codeVerifier, v7);
  RequestBase__addBaseField((RequestBase_o *)this, v8);
  RequestBase__WriteParameter((RequestBase_o *)this, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageIssueTokenRequest__getURL(
        AccountLinkageIssueTokenRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDDA9 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16917/*"accountLinkageAnx/issueToken"*/);
    byte_4BDDDA9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_16917/*"accountLinkageAnx/issueToken"*/, 0LL);
}


void __fastcall AccountLinkageIssueTokenRequest__requestCompleted(
        AccountLinkageIssueTokenRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageIssueTokenRequest_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  AccountLinkageIssueTokenRequest_o *v7; // x21
  __int64 methodPtr_low; // x9
  int64_t v9; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  int64_t v19; // x0
  struct AccountLinkageParams_StaticFields *v20; // x8
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *v29; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v31; // x9
  int64_t v32; // x1
  struct AccountLinkageParams_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  AccountLinkageIssueTokenRequest_o *v40; // x0
  const MethodInfo *v41; // x1

  v4 = this;
  if ( (byte_4BDDDAB & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageParams_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&StringLiteral_16921/*"accountLinkageToken"*/);
    sub_1C21E38(&StringLiteral_21503/*"linkedAt"*/);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_16920/*"accountLinkageInfo"*/);
    sub_1C21E38(&StringLiteral_19976/*"friendCode"*/);
    sub_1C21E38(&StringLiteral_22383/*"name"*/);
    this = (AccountLinkageIssueTokenRequest_o *)sub_1C21E38(&StringLiteral_21609/*"lv"*/);
    byte_4BDDDAB = 1;
  }
  if ( !responseList )
    goto LABEL_27;
  if ( !responseList->max_length )
    sub_1C2209C(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_27;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError_42505456(v5, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
    if ( !success )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_16920/*"accountLinkageInfo"*/,
           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    {
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_16920/*"accountLinkageInfo"*/,
                                                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked = 1;
      if ( !this )
        goto LABEL_27;
      v7 = this;
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        goto LABEL_29;
      }
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                    (Il2CppObject *)StringLiteral_22383/*"name"*/,
                                                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v9 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
             this,
             this->klass->vtable._4_getURL.methodPtr);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->requestedAccountName = (struct System_String_o *)v9;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->requestedAccountName, v9, v11, v12, v13, v14, v15, v16);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_21609/*"lv"*/,
                                                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_29;
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         long_TypeInfo,
                                                                                         v17,
                                                                                         v18);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_19976/*"friendCode"*/,
                                                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v19 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v20 = AccountLinkageParams_TypeInfo->static_fields;
      v20->requestedAccountFriendCode = (struct System_String_o *)v19;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v20->requestedAccountFriendCode, v19, v21, v22, v23, v24, v25, v26);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_21503/*"linkedAt"*/,
                                                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
LABEL_29:
        sub_1C22354(this);
        AccountLinkageIssueTokenRequest___ctor(v40, v41);
        return;
      }
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                              this,
                                                                                              long_TypeInfo,
                                                                                              v27,
                                                                                              v28);
      v29 = (Il2CppObject *)StringLiteral_16921/*"accountLinkageToken"*/;
    }
    else
    {
      v29 = (Il2CppObject *)StringLiteral_16921/*"accountLinkageToken"*/;
    }
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  v29,
                                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v32 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v33 = AccountLinkageParams_TypeInfo->static_fields;
      v33->accountLinkageToken = (struct System_String_o *)v32;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v33->accountLinkageToken, v32, v34, v35, v36, v37, v38, v39);
      CallBack = v4->fields.CallBack;
      if ( CallBack )
      {
        v31 = &StringLiteral_22632/*"ok"*/;
        goto LABEL_25;
      }
      return;
    }
LABEL_27:
    sub_1C22094(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v31 = &StringLiteral_22456/*"ng"*/;
LABEL_25:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v31,
      *(_QWORD *)&CallBack->fields.extra_arg);
  }
}