void AccountLinkageBeginAuthRequest___ctor(AccountLinkageBeginAuthRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageBeginAuthRequest__getURL(
        AccountLinkageBeginAuthRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C393DF & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_16640/*"accountLinkageAnx/beginAuth"*/);
    byte_4C393DF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_16640/*"accountLinkageAnx/beginAuth"*/, 0);
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
  const MethodInfo *v14; // x3
  struct AccountLinkageParams_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct AccountLinkageParams_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct AccountLinkageParams_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct AccountLinkageParams_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 *v27; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_4C393E0 & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&StringLiteral_22265/*"nonce"*/);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_19747/*"gameId"*/);
    sub_1C32C20(&StringLiteral_22990/*"redirectUri"*/);
    sub_1C32C20(&StringLiteral_18010/*"clientId"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    this = (AccountLinkageBeginAuthRequest_o *)sub_1C32C20(&StringLiteral_16947/*"authorizationUrl"*/);
    byte_4C393E0 = 1;
  }
  if ( !responseList )
    goto LABEL_16;
  if ( !LODWORD(responseList->max_length) )
    sub_1C32E84(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_16;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError_44140424(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v27 = &StringLiteral_22212/*"ng"*/;
    goto LABEL_15;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success )
    goto LABEL_16;
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                               success,
                                               (Il2CppObject *)StringLiteral_16947/*"authorizationUrl"*/,
                                               (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_16;
  v7 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
         this,
         this->klass->vtable._3_ToString.method);
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                               success,
                                               (Il2CppObject *)StringLiteral_19747/*"gameId"*/,
                                               (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this
    || (v8 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
               this,
               this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_18010/*"clientId"*/,
                                                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0)
    || (v9 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
               this,
               this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_22990/*"redirectUri"*/,
                                                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0)
    || (v10 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                this,
                this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_22265/*"nonce"*/,
                                                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0) )
  {
LABEL_16:
    sub_1C32E7C(this);
  }
  v11 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
          this,
          this->klass->vtable._3_ToString.method);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationUrl = (struct System_String_o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->authorizationUrl, v7, v13, v14);
  v15 = AccountLinkageParams_TypeInfo->static_fields;
  v15->gameId = (struct System_String_o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->gameId, v8, v16, v17);
  v18 = AccountLinkageParams_TypeInfo->static_fields;
  v18->clientId = (struct System_String_o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&v18->clientId, v9, v19, v20);
  v21 = AccountLinkageParams_TypeInfo->static_fields;
  v21->redirectUri = (struct System_String_o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->redirectUri, v10, v22, v23);
  v24 = AccountLinkageParams_TypeInfo->static_fields;
  v24->nonce = (struct System_String_o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&v24->nonce, v11, v25, v26);
  v27 = &StringLiteral_22379/*"ok"*/;
LABEL_15:
  RequestBase__completed(v4, (System_String_o *)*v27, 0);
}