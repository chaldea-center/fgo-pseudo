void AccountLinkageBeginAuthRequest___ctor(AccountLinkageBeginAuthRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageBeginAuthRequest__getURL(
        AccountLinkageBeginAuthRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0054 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16703/*"accountLinkageAnx/beginAuth"*/);
    byte_4CF0054 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_16703/*"accountLinkageAnx/beginAuth"*/, 0);
}


void AccountLinkageBeginAuthRequest__requestCompleted(
        AccountLinkageBeginAuthRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  __int64 v11; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct AccountLinkageParams_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct AccountLinkageParams_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct AccountLinkageParams_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct AccountLinkageParams_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  __int64 *v47; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_4CF0055 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountLinkageParams_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&StringLiteral_22473/*"nonce"*/);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_19906/*"gameId"*/);
    sub_1C7BAE8(&StringLiteral_23214/*"redirectUri"*/);
    sub_1C7BAE8(&StringLiteral_18104/*"clientId"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    this = (AccountLinkageBeginAuthRequest_o *)sub_1C7BAE8(&StringLiteral_17029/*"authorizationUrl"*/);
    byte_4CF0055 = 1;
  }
  if ( !responseList )
    goto LABEL_16;
  if ( !LODWORD(responseList->max_length) )
    sub_1C7BD48(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_16;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError_44743216(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v47 = &StringLiteral_22419/*"ng"*/;
    goto LABEL_15;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success )
    goto LABEL_16;
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                               success,
                                               (Il2CppObject *)StringLiteral_17029/*"authorizationUrl"*/,
                                               (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_16;
  v7 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
         this,
         this->klass->vtable._3_ToString.method);
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                               success,
                                               (Il2CppObject *)StringLiteral_19906/*"gameId"*/,
                                               (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this
    || (v8 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
               this,
               this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_18104/*"clientId"*/,
                                                      (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0)
    || (v9 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
               this,
               this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_23214/*"redirectUri"*/,
                                                      (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0)
    || (v10 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                this,
                this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_22473/*"nonce"*/,
                                                      (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0) )
  {
LABEL_16:
    sub_1C7BD40(this, responseList);
  }
  v11 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
          this,
          this->klass->vtable._3_ToString.method);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationUrl = (struct System_String_o *)v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->authorizationUrl, v7, v13, v14, v15, v16, v17, v18);
  v19 = AccountLinkageParams_TypeInfo->static_fields;
  v19->gameId = (struct System_String_o *)v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v19->gameId, v8, v20, v21, v22, v23, v24, v25);
  v26 = AccountLinkageParams_TypeInfo->static_fields;
  v26->clientId = (struct System_String_o *)v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26->clientId, v9, v27, v28, v29, v30, v31, v32);
  v33 = AccountLinkageParams_TypeInfo->static_fields;
  v33->redirectUri = (struct System_String_o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v33->redirectUri, v10, v34, v35, v36, v37, v38, v39);
  v40 = AccountLinkageParams_TypeInfo->static_fields;
  v40->nonce = (struct System_String_o *)v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v40->nonce, v11, v41, v42, v43, v44, v45, v46);
  v47 = &StringLiteral_22590/*"ok"*/;
LABEL_15:
  RequestBase__completed(v4, (System_String_o *)*v47, 0);
}