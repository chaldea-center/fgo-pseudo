void __fastcall AccountLinkageBeginAuthRequest___ctor(AccountLinkageBeginAuthRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageBeginAuthRequest__getURL(
        AccountLinkageBeginAuthRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDAB3 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_16564/*"accountLinkageAnx/beginAuth"*/, v2);
    byte_49FDAB3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_16564/*"accountLinkageAnx/beginAuth"*/, 0LL);
}


void __fastcall AccountLinkageBeginAuthRequest__requestCompleted(
        AccountLinkageBeginAuthRequest_o *this,
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
  ResponseData_o *v13; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  __int64 v19; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct AccountLinkageParams_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct AccountLinkageParams_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct AccountLinkageParams_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct AccountLinkageParams_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 *v35; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_49FDAB4 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams_TypeInfo, responseList);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B640C8(&StringLiteral_22024/*"nonce"*/, v6);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v7);
    sub_1B640C8(&StringLiteral_19623/*"gameId"*/, v8);
    sub_1B640C8(&StringLiteral_22724/*"redirectUri"*/, v9);
    sub_1B640C8(&StringLiteral_17943/*"clientId"*/, v10);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v11);
    this = (AccountLinkageBeginAuthRequest_o *)sub_1B640C8(&StringLiteral_16909/*"authorizationUrl"*/, v12);
    byte_49FDAB4 = 1;
  }
  if ( !responseList )
    goto LABEL_16;
  if ( !responseList->max_length )
    sub_1B6432C(this, responseList);
  v13 = responseList->m_Items[0];
  if ( !v13 )
    goto LABEL_16;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError_40846016(v13, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v35 = &StringLiteral_21968/*"ng"*/;
    goto LABEL_15;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.success;
  if ( !success )
    goto LABEL_16;
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                               success,
                                               (Il2CppObject *)StringLiteral_16909/*"authorizationUrl"*/,
                                               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_16;
  v15 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
          this,
          this->klass->vtable._4_getURL.methodPtr);
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                               success,
                                               (Il2CppObject *)StringLiteral_19623/*"gameId"*/,
                                               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this
    || (v16 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                this,
                this->klass->vtable._4_getURL.methodPtr),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_17943/*"clientId"*/,
                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
    || (v17 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                this,
                this->klass->vtable._4_getURL.methodPtr),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_22724/*"redirectUri"*/,
                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
    || (v18 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                this,
                this->klass->vtable._4_getURL.methodPtr),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_22024/*"nonce"*/,
                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL) )
  {
LABEL_16:
    sub_1B64324(this);
  }
  v19 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
          this,
          this->klass->vtable._4_getURL.methodPtr);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationUrl = (struct System_String_o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->authorizationUrl, v15, v21, v22);
  v23 = AccountLinkageParams_TypeInfo->static_fields;
  v23->gameId = (struct System_String_o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->gameId, v16, v24, v25);
  v26 = AccountLinkageParams_TypeInfo->static_fields;
  v26->clientId = (struct System_String_o *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->clientId, v17, v27, v28);
  v29 = AccountLinkageParams_TypeInfo->static_fields;
  v29->redirectUri = (struct System_String_o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->redirectUri, v18, v30, v31);
  v32 = AccountLinkageParams_TypeInfo->static_fields;
  v32->nonce = (struct System_String_o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->nonce, v19, v33, v34);
  v35 = &StringLiteral_22137/*"ok"*/;
LABEL_15:
  RequestBase__completed(v4, (System_String_o *)*v35, 0LL);
}