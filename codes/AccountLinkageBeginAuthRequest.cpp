void AccountLinkageBeginAuthRequest___ctor(AccountLinkageBeginAuthRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageBeginAuthRequest__getURL(
        AccountLinkageBeginAuthRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59722FF & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_17317/*"accountLinkageAnx/beginAuth"*/);
    byte_59722FF = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_17317/*"accountLinkageAnx/beginAuth"*/, 0);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct AccountLinkageParams_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct AccountLinkageParams_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct AccountLinkageParams_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct AccountLinkageParams_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 *v47; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_5972300 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_23394/*"nonce"*/);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_20680/*"gameId"*/);
    sub_2213A60(&StringLiteral_24190/*"redirectUri"*/);
    sub_2213A60(&StringLiteral_18806/*"clientId"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    this = (AccountLinkageBeginAuthRequest_o *)sub_2213A60(&StringLiteral_17665/*"authorizationUrl"*/);
    byte_5972300 = 1;
  }
  if ( !responseList )
    goto LABEL_16;
  if ( !LODWORD(responseList->max_length) )
    sub_2213CE4(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_16;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError_51257228(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v47 = &StringLiteral_23336/*"ng"*/;
    goto LABEL_15;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success )
    goto LABEL_16;
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                               success,
                                               (Il2CppObject *)StringLiteral_17665/*"authorizationUrl"*/,
                                               (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_16;
  v7 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
         this,
         this->klass->vtable._3_ToString.method);
  this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                               success,
                                               (Il2CppObject *)StringLiteral_20680/*"gameId"*/,
                                               (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this
    || (v8 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
               this,
               this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_18806/*"clientId"*/,
                                                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0)
    || (v9 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
               this,
               this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_24190/*"redirectUri"*/,
                                                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0)
    || (v10 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                this,
                this->klass->vtable._3_ToString.method),
        (this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_23394/*"nonce"*/,
                                                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0) )
  {
LABEL_16:
    sub_2213CDC(this, responseList);
  }
  v11 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
          this,
          this->klass->vtable._3_ToString.method);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationUrl = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->authorizationUrl, v7, v13, v14, v15, v16, v17, v18);
  v19 = AccountLinkageParams_TypeInfo->static_fields;
  v19->gameId = (struct System_String_o *)v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->gameId, v8, v20, v21, v22, v23, v24, v25);
  v26 = AccountLinkageParams_TypeInfo->static_fields;
  v26->clientId = (struct System_String_o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->clientId, v9, v27, v28, v29, v30, v31, v32);
  v33 = AccountLinkageParams_TypeInfo->static_fields;
  v33->redirectUri = (struct System_String_o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->redirectUri, v10, v34, v35, v36, v37, v38, v39);
  v40 = AccountLinkageParams_TypeInfo->static_fields;
  v40->nonce = (struct System_String_o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->nonce, v11, v41, v42, v43, v44, v45, v46);
  v47 = &StringLiteral_23515/*"ok"*/;
LABEL_15:
  RequestBase__completed(v4, (System_String_o *)*v47, 0);
}