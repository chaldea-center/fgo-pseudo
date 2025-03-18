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

  if ( (byte_4C23818 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, authorizationCode);
    sub_1C3B764(&StringLiteral_18388/*"easeInOutQuad"*/, v7);
    sub_1C3B764(&StringLiteral_17306/*"button_favorite_reg"*/, v8);
    byte_4C23818 = 1;
  }
  RequestBase__addField_42621852(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17306/*"button_favorite_reg"*/,
    authorizationCode,
    method);
  RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_18388/*"easeInOutQuad"*/, codeVerifier, v9);
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

  if ( (byte_4C23817 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_16958/*"bit_token_get{0}"*/, v2);
    byte_4C23817 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_16958/*"bit_token_get{0}"*/, 0LL);
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
  int64_t v20; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x2
  __int64 v29; // x3
  int64_t v30; // x0
  struct AccountLinkageParams_StaticFields *v31; // x8
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *v40; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v42; // x9
  int64_t v43; // x1
  struct AccountLinkageParams_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  AccountLinkageIssueTokenRequest_o *v51; // x0
  const MethodInfo *v52; // x1

  v4 = this;
  if ( (byte_4C23819 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageParams_TypeInfo, responseList);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1C3B764(&long_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_16962/*"bit_vs_gauge_flash_"*/, v8);
    sub_1C3B764(&StringLiteral_21550/*"mstSvtExceed"*/, v9);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v10);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v11);
    sub_1C3B764(&StringLiteral_16961/*"bit_vs_gauge_flash"*/, v12);
    sub_1C3B764(&StringLiteral_20026/*"img_menu_close"*/, v13);
    sub_1C3B764(&StringLiteral_22434/*"radix"*/, v14);
    this = (AccountLinkageIssueTokenRequest_o *)sub_1C3B764(&StringLiteral_21656/*"multipart/form-data; boundary="*/, v15);
    byte_4C23819 = 1;
  }
  if ( !responseList )
    goto LABEL_27;
  if ( !responseList->max_length )
    sub_1C3B9C8(this, responseList);
  v16 = responseList->m_Items[0];
  if ( !v16 )
    goto LABEL_27;
  this = (AccountLinkageIssueTokenRequest_o *)ResponseData__checkError_42712632(v16, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.success;
    if ( !success )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_16961/*"bit_vs_gauge_flash"*/,
           (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    {
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_16961/*"bit_vs_gauge_flash"*/,
                                                    (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                                    (Il2CppObject *)StringLiteral_22434/*"radix"*/,
                                                    (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v20 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      static_fields = AccountLinkageParams_TypeInfo->static_fields;
      static_fields->requestedAccountName = (struct System_String_o *)v20;
      sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->requestedAccountName, v20, v22, v23, v24, v25, v26, v27);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                    (Il2CppObject *)StringLiteral_21656/*"multipart/form-data; boundary="*/,
                                                    (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_29;
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         long_TypeInfo,
                                                                                         v28,
                                                                                         v29);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                    (Il2CppObject *)StringLiteral_20026/*"img_menu_close"*/,
                                                    (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      v30 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v31 = AccountLinkageParams_TypeInfo->static_fields;
      v31->requestedAccountFriendCode = (struct System_String_o *)v30;
      sub_1C3B708((PartyOrganizationUtility_o *)&v31->requestedAccountFriendCode, v30, v32, v33, v34, v35, v36, v37);
      this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                                    (Il2CppObject *)StringLiteral_21550/*"mstSvtExceed"*/,
                                                    (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
LABEL_29:
        sub_1C3BC80(this);
        AccountLinkageIssueTokenRequest___ctor(v51, v52);
        return;
      }
      AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = *(_QWORD *)j_il2cpp_object_unbox_0(
                                                                                              this,
                                                                                              long_TypeInfo,
                                                                                              v38,
                                                                                              v39);
      v40 = (Il2CppObject *)StringLiteral_16962/*"bit_vs_gauge_flash_"*/;
    }
    else
    {
      v40 = (Il2CppObject *)StringLiteral_16962/*"bit_vs_gauge_flash_"*/;
    }
    this = (AccountLinkageIssueTokenRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  success,
                                                  v40,
                                                  (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v43 = ((__int64 (__fastcall *)(AccountLinkageIssueTokenRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      v44 = AccountLinkageParams_TypeInfo->static_fields;
      v44->accountLinkageToken = (struct System_String_o *)v43;
      sub_1C3B708((PartyOrganizationUtility_o *)&v44->accountLinkageToken, v43, v45, v46, v47, v48, v49, v50);
      CallBack = v4->fields.CallBack;
      if ( CallBack )
      {
        v42 = &StringLiteral_22683/*"sandboxSeurity"*/;
        goto LABEL_25;
      }
      return;
    }
LABEL_27:
    sub_1C3B9C0(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v42 = &StringLiteral_22507/*"referrerMapId"*/;
LABEL_25:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v42,
      *(_QWORD *)&CallBack->fields.extra_arg);
  }
}