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
  __int64 v7; // x1
  __int64 v8; // x1

  if ( (byte_4B1DECD & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, authorizationCode);
    sub_1BCAFF8(&StringLiteral_17885/*"codeVerifier"*/, v7);
    sub_1BCAFF8(&StringLiteral_16810/*"authorizationCode"*/, v8);
    byte_4B1DECD = 1;
  }
  RequestBase__addField_43348616((RequestBase_o *)this, (System_String_o *)StringLiteral_16810/*"authorizationCode"*/, authorizationCode, 0LL);
  RequestBase__addField_43348616((RequestBase_o *)this, (System_String_o *)StringLiteral_17885/*"codeVerifier"*/, codeVerifier, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
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

  if ( (byte_4B1DECC & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_16508/*"accountLinkageAnx/issueToken"*/, v2);
    byte_4B1DECC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_16508/*"accountLinkageAnx/issueToken"*/, 0LL);
}


void __fastcall AccountLinkageIssueTokenRequest__requestCompleted(
        AccountLinkageIssueTokenRequest_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ResponseData_o *v16; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  AccountLinkageIssueTokenRequest_o *v18; // x21
  __int64 methodPtr_low; // x9
  __int64 v20; // x0
  struct AccountLinkageParams_StaticFields *v21; // x8
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x0
  struct AccountLinkageParams_StaticFields *v27; // x8
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  Il2CppObject *v32; // x1
  __int64 *v33; // x8
  __int64 v34; // x1
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  AccountLinkageIssueTokenRequest_o *v38; // x0
  const MethodInfo *v39; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4B1DECE & 1) == 0 )
  {
    sub_1BCAFF8(&AccountLinkageParams_TypeInfo, responseList);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BCAFF8(&long_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_16512/*"accountLinkageToken"*/, v8);
    sub_1BCAFF8(&StringLiteral_21067/*"linkedAt"*/, v9);
    sub_1BCAFF8(&StringLiteral_22181/*"ok"*/, v10);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v11);
    sub_1BCAFF8(&StringLiteral_16511/*"accountLinkageInfo"*/, v12);
    sub_1BCAFF8(&StringLiteral_19504/*"friendCode"*/, v13);
    sub_1BCAFF8(&StringLiteral_21950/*"name"*/, v14);
    this = (AccountLinkageIssueTokenRequest_o *)sub_1BCAFF8(&StringLiteral_21177/*"lv"*/, v15);
    byte_4B1DECE = 1;
  }
  if ( !responseList )
    goto LABEL_24;
  if ( !responseList->max_length )
    sub_1BCB25C(this, responseList, method);
  v16 = responseList->m_Items[0];
  if ( !v16 )
    goto LABEL_24;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError_43347888(v16, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v33 = &StringLiteral_22015/*"ng"*/;
LABEL_23:
    RequestBase__completed(v4, (System_String_o *)*v33, 0LL);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.success;
  if ( !success )
LABEL_24:
    sub_1BCB254(this, responseList);
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          success,
          (Il2CppObject *)StringLiteral_16511/*"accountLinkageInfo"*/,
          (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
  {
    v32 = (Il2CppObject *)StringLiteral_16512/*"accountLinkageToken"*/;
LABEL_21:
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  v32,
                                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v34 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->accountLinkageToken = (struct System_String_o *)v34;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->accountLinkageToken, v34, v36, v37);
      v33 = &StringLiteral_22181/*"ok"*/;
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                success,
                                                (Il2CppObject *)StringLiteral_16511/*"accountLinkageInfo"*/,
                                                (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked = 1;
  if ( !this )
    goto LABEL_24;
  v18 = this;
  methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                  (Il2CppObject *)StringLiteral_21950/*"name"*/,
                                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_24;
    v20 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
            this,
            this->klass->vtable._4_getURL.methodPtr);
    v21 = AccountLinkageParams_TypeInfo->static_fields;
    v21->requestedAccountName = (struct System_String_o *)v20;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v21->requestedAccountName, v20, v22, v23);
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                  (Il2CppObject *)StringLiteral_21177/*"lv"*/,
                                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !this )
      goto LABEL_24;
    if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
    {
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         long_TypeInfo,
                                                                                         v24,
                                                                                         v25);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                    (Il2CppObject *)StringLiteral_19504/*"friendCode"*/,
                                                    (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_24;
      v26 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v27 = AccountLinkageParams_TypeInfo->static_fields;
      v27->requestedAccountFriendCode = (struct System_String_o *)v26;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v27->requestedAccountFriendCode, v26, v28, v29);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                    (Il2CppObject *)StringLiteral_21067/*"linkedAt"*/,
                                                    (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_24;
      if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                                this,
                                                                                                long_TypeInfo,
                                                                                                v30,
                                                                                                v31);
        v32 = (Il2CppObject *)StringLiteral_16512/*"accountLinkageToken"*/;
        goto LABEL_21;
      }
    }
  }
  sub_1BCB514(this);
  AccountLinkageIssueTokenRequest___ctor(v38, v39);
}