void __fastcall AccountLinkageBeginAuthRequest___ctor(AccountLinkageBeginAuthRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageBeginAuthRequest__getURL(
        AccountLinkageBeginAuthRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CD70 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16539/*"accountLinkageAnx/beginAuth"*/);
    byte_438CD70 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16539/*"accountLinkageAnx/beginAuth"*/, 0LL);
}


void __fastcall AccountLinkageBeginAuthRequest__requestCompleted(
        AccountLinkageBeginAuthRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x22
  System_Int32_array **v7; // x20
  System_Int32_array **v8; // x21
  System_Int32_array **v9; // x23
  System_Int32_array **v10; // x24
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x22
  AccountLinkageParams_c *v18; // x8
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct AccountLinkageParams_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct AccountLinkageParams_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct AccountLinkageParams_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 *v48; // x8
  __int64 v49; // x0

  v4 = (RequestBase_o *)this;
  if ( (byte_438CD71 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&StringLiteral_21554/*"nonce"*/);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_19338/*"gameId"*/);
    sub_B775C4(&StringLiteral_22188/*"redirectUri"*/);
    sub_B775C4(&StringLiteral_17820/*"clientId"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    this = (AccountLinkageBeginAuthRequest_o *)sub_B775C4(&StringLiteral_16857/*"authorizationUrl"*/);
    byte_438CD71 = 1;
  }
  if ( !responseList )
    goto LABEL_19;
  if ( !responseList->max_length )
  {
    v49 = sub_B776C8(this);
    sub_B77668(v49, 0LL);
  }
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_19;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError_30128096(v5, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v48 = &StringLiteral_21504/*"ng"*/;
    goto LABEL_18;
  }
  success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5->fields.success;
  if ( !success )
    goto LABEL_19;
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5->fields.success,
                                               (System_Type_o *)StringLiteral_16857/*"authorizationUrl"*/,
                                               (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_19;
  v7 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                this,
                                this->klass->vtable._4_getURL.methodPtr);
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                               success,
                                               (System_Type_o *)StringLiteral_19338/*"gameId"*/,
                                               (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this
    || (v8 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                      this,
                                      this->klass->vtable._4_getURL.methodPtr),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                      success,
                                                      (System_Type_o *)StringLiteral_17820/*"clientId"*/,
                                                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
    || (v9 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                      this,
                                      this->klass->vtable._4_getURL.methodPtr),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                      success,
                                                      (System_Type_o *)StringLiteral_22188/*"redirectUri"*/,
                                                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
    || (v10 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                       this,
                                       this->klass->vtable._4_getURL.methodPtr),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                      success,
                                                      (System_Type_o *)StringLiteral_21554/*"nonce"*/,
                                                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL) )
  {
LABEL_19:
    sub_B7769C(this, responseList);
  }
  v17 = (System_Int32_array **)((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                 this,
                                 this->klass->vtable._4_getURL.methodPtr);
  v18 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v18 = AccountLinkageParams_TypeInfo;
  }
  static_fields = v18->static_fields;
  static_fields->authorizationUrl = (struct System_String_o *)v7;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->authorizationUrl, v7, v11, v12, v13, v14, v15, v16);
  v20 = AccountLinkageParams_TypeInfo->static_fields;
  v20->gameId = (struct System_String_o *)v8;
  sub_B77560((BattleServantConfConponent_o *)&v20->gameId, v8, v21, v22, v23, v24, v25, v26);
  v27 = AccountLinkageParams_TypeInfo->static_fields;
  v27->clientId = (struct System_String_o *)v9;
  sub_B77560((BattleServantConfConponent_o *)&v27->clientId, v9, v28, v29, v30, v31, v32, v33);
  v34 = AccountLinkageParams_TypeInfo->static_fields;
  v34->redirectUri = (struct System_String_o *)v10;
  sub_B77560((BattleServantConfConponent_o *)&v34->redirectUri, v10, v35, v36, v37, v38, v39, v40);
  v41 = AccountLinkageParams_TypeInfo->static_fields;
  v41->nonce = (struct System_String_o *)v17;
  sub_B77560((BattleServantConfConponent_o *)&v41->nonce, v17, v42, v43, v44, v45, v46, v47);
  v48 = &StringLiteral_21657/*"ok"*/;
LABEL_18:
  RequestBase__completed(v4, (System_String_o *)*v48, 0LL);
}