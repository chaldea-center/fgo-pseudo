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
  __int64 v7; // x1

  if ( (byte_593A12B & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18794/*"codeVerifier"*/);
    sub_21FFC50(&StringLiteral_17627/*"authorizationCode"*/);
    byte_593A12B = 1;
  }
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_17627/*"authorizationCode"*/, authorizationCode, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_18794/*"codeVerifier"*/, codeVerifier, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageIssueTokenRequest__getURL(
        AccountLinkageIssueTokenRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A12A & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17284/*"accountLinkageAnx/issueToken"*/);
    byte_593A12A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17284/*"accountLinkageAnx/issueToken"*/, 0);
}


void AccountLinkageIssueTokenRequest__requestCompleted(
        AccountLinkageIssueTokenRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v7; // x2
  AccountLinkageIssueTokenRequest_o *v8; // x21
  System_Collections_Generic_Dictionary_string__object__c *v9; // x1
  __int64 naturalAligment; // x9
  __int64 v11; // x0
  struct AccountLinkageParams_StaticFields *v12; // x8
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  _QWORD *v19; // x0
  const MethodInfo_3FCA3E8 *v20; // x2
  Il2CppObject *v21; // x1
  __int64 v22; // x0
  struct AccountLinkageParams_StaticFields *v23; // x8
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int64_t *v30; // x0
  const MethodInfo_3FCA3E8 *v31; // x2
  Il2CppObject *v32; // x1
  __int64 *v33; // x8
  __int64 v34; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  AccountLinkageIssueTokenRequest_o *v42; // x0
  const MethodInfo *v43; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_593A12C & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&StringLiteral_17288/*"accountLinkageToken"*/);
    sub_21FFC50(&StringLiteral_22291/*"linkedAt"*/);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_17287/*"accountLinkageInfo"*/);
    sub_21FFC50(&StringLiteral_20567/*"friendCode"*/);
    sub_21FFC50(&StringLiteral_23220/*"name"*/);
    this = (AccountLinkageIssueTokenRequest_o *)sub_21FFC50(&StringLiteral_22408/*"lv"*/);
    byte_593A12C = 1;
  }
  if ( !responseList )
    goto LABEL_24;
  if ( !LODWORD(responseList->max_length) )
    sub_21FFED4(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_24;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError_51190916(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v33 = &StringLiteral_23290/*"ng"*/;
LABEL_23:
    RequestBase__completed(v4, (System_String_o *)*v33, 0);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success )
    goto LABEL_24;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_17287/*"accountLinkageInfo"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
  {
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  (Il2CppObject *)StringLiteral_17288/*"accountLinkageToken"*/,
                                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
LABEL_22:
      v34 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
              this,
              this->klass->vtable._3_ToString.method);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->accountLinkageToken = (struct System_String_o *)v34;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&static_fields->accountLinkageToken,
        v34,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v33 = &StringLiteral_23468/*"ok"*/;
      goto LABEL_23;
    }
LABEL_24:
    sub_21FFECC(this, responseList);
  }
  this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                success,
                                                (Il2CppObject *)StringLiteral_17287/*"accountLinkageInfo"*/,
                                                (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked = 1;
  if ( !this )
    goto LABEL_24;
  v8 = this;
  v9 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                  (Il2CppObject *)StringLiteral_23220/*"name"*/,
                                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_24;
    v11 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
            this,
            this->klass->vtable._3_ToString.method);
    v12 = AccountLinkageParams_TypeInfo->static_fields;
    v12->requestedAccountName = (struct System_String_o *)v11;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->requestedAccountName, v11, v13, v14, v15, v16, v17, v18);
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)v8,
                                                  (Il2CppObject *)StringLiteral_22408/*"lv"*/,
                                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_24;
    v9 = (System_Collections_Generic_Dictionary_string__object__c *)qword_594C090;
    if ( this->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    {
      v19 = (_QWORD *)j_il2cpp_object_unbox_0(this, qword_594C090, v7);
      v20 = (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
      v21 = (Il2CppObject *)StringLiteral_20567/*"friendCode"*/;
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *v19;
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v8,
                                                    v21,
                                                    v20);
      if ( !this )
        goto LABEL_24;
      v22 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
              this,
              this->klass->vtable._3_ToString.method);
      v23 = AccountLinkageParams_TypeInfo->static_fields;
      v23->requestedAccountFriendCode = (struct System_String_o *)v22;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v23->requestedAccountFriendCode,
        v22,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v8,
                                                    (Il2CppObject *)StringLiteral_22291/*"linkedAt"*/,
                                                    (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_24;
      v9 = (System_Collections_Generic_Dictionary_string__object__c *)qword_594C090;
      if ( this->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
      {
        v30 = (int64_t *)j_il2cpp_object_unbox_0(this, qword_594C090, v7);
        v31 = (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
        v32 = (Il2CppObject *)StringLiteral_17288/*"accountLinkageToken"*/;
        AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *v30;
        this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      v32,
                                                      v31);
        if ( this )
          goto LABEL_22;
        goto LABEL_24;
      }
    }
  }
  sub_220024C(this, v9, v7);
  AccountLinkageIssueTokenRequest___ctor(v42, v43);
}