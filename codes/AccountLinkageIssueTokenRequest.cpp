void __fastcall AccountLinkageIssueTokenRequest__beginRequest(
        AccountLinkageIssueTokenRequest_o *this,
        System_String_o *authorizationCode,
        System_String_o *codeVerifier,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4A5C90C & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18038/*"codeVerifier"*/);
    sub_1B885B0(&StringLiteral_16977/*"authorizationCode"*/);
    byte_4A5C90C = 1;
  }
  RequestBase__addField_41126952(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16977/*"authorizationCode"*/,
    authorizationCode,
    method);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_18038/*"codeVerifier"*/, codeVerifier, v7);
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

  if ( (byte_4A5C90B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16636/*"accountLinkageAnx/issueToken"*/);
    byte_4A5C90B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_16636/*"accountLinkageAnx/issueToken"*/, 0LL);
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
  __int64 v9; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x0
  struct AccountLinkageParams_StaticFields *v16; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x2
  __int64 v20; // x3
  Il2CppObject *v21; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v23; // x9
  __int64 v24; // x1
  struct AccountLinkageParams_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  AccountLinkageIssueTokenRequest_o *v28; // x0
  const MethodInfo *v29; // x1

  v4 = this;
  if ( (byte_4A5C90D & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_16640/*"accountLinkageToken"*/);
    sub_1B885B0(&StringLiteral_21125/*"linkedAt"*/);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_16639/*"accountLinkageInfo"*/);
    sub_1B885B0(&StringLiteral_19642/*"friendCode"*/);
    sub_1B885B0(&StringLiteral_21982/*"name"*/);
    this = (AccountLinkageIssueTokenRequest_o *)sub_1B885B0(&StringLiteral_21231/*"lv"*/);
    byte_4A5C90D = 1;
  }
  if ( !responseList )
    goto LABEL_27;
  if ( !responseList->max_length )
    sub_1B88814(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_27;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError(
                                                (ResponseData_o *)this,
                                                v5->fields.resCode,
                                                method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
    if ( !success )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_16639/*"accountLinkageInfo"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    {
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_16639/*"accountLinkageInfo"*/,
                                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                                    (Il2CppObject *)StringLiteral_21982/*"name"*/,
                                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v9 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
             this,
             this->klass->vtable._4_getURL.methodPtr);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->requestedAccountName = (struct System_String_o *)v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->requestedAccountName, v9, v11, v12);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_21231/*"lv"*/,
                                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_29;
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         long_TypeInfo,
                                                                                         v13,
                                                                                         v14);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_19642/*"friendCode"*/,
                                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v15 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v16 = AccountLinkageParams_TypeInfo->static_fields;
      v16->requestedAccountFriendCode = (struct System_String_o *)v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->requestedAccountFriendCode, v15, v17, v18);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                    (Il2CppObject *)StringLiteral_21125/*"linkedAt"*/,
                                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
LABEL_29:
        sub_1B88ACC(this);
        AccountLinkageIssueTokenRequest___ctor(v28, v29);
        return;
      }
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                              this,
                                                                                              long_TypeInfo,
                                                                                              v19,
                                                                                              v20);
      v21 = (Il2CppObject *)StringLiteral_16640/*"accountLinkageToken"*/;
    }
    else
    {
      v21 = (Il2CppObject *)StringLiteral_16640/*"accountLinkageToken"*/;
    }
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  v21,
                                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v24 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v25 = AccountLinkageParams_TypeInfo->static_fields;
      v25->accountLinkageToken = (struct System_String_o *)v24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->accountLinkageToken, v24, v26, v27);
      CallBack = v4->fields.CallBack;
      if ( CallBack )
      {
        v23 = &StringLiteral_22225/*"ok"*/;
        goto LABEL_25;
      }
      return;
    }
LABEL_27:
    sub_1B8880C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v23 = &StringLiteral_22055/*"ng"*/;
LABEL_25:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v23,
      *(_QWORD *)&CallBack->fields.extra_arg);
  }
}