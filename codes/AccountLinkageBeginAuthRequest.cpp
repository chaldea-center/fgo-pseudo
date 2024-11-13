// attributes: thunk
void __fastcall AccountLinkageBeginAuthRequest___ctor(AccountLinkageBeginAuthRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


System_String_o *__fastcall AccountLinkageBeginAuthRequest__getURL(
        AccountLinkageBeginAuthRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179C1 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16802/*"accountLinkageAnx/beginAuth"*/, v3, v4);
    byte_4B179C1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_16802/*"accountLinkageAnx/beginAuth"*/, 0LL);
}


void __fastcall AccountLinkageBeginAuthRequest__requestCompleted(
        AccountLinkageBeginAuthRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageBeginAuthRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  ResponseData_o *v21; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  int64_t v23; // x21
  int64_t v24; // x22
  int64_t v25; // x23
  int64_t v26; // x24
  int64_t v27; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct AccountLinkageParams_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct AccountLinkageParams_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct AccountLinkageParams_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct AccountLinkageParams_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v64; // x9

  v4 = this;
  if ( (byte_4B179C2 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&StringLiteral_22350/*"nonce"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_19904/*"gameId"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_23062/*"redirectUri"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_18195/*"clientId"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v17, v18);
    this = (AccountLinkageBeginAuthRequest_o *)sub_1BCA7E0(&StringLiteral_17149/*"authorizationUrl"*/, v19, v20);
    byte_4B179C2 = 1;
  }
  if ( !responseList )
    goto LABEL_19;
  if ( !responseList->max_length )
    sub_1BCAA44(this, responseList);
  v21 = responseList->m_Items[0];
  if ( !v21 )
    goto LABEL_19;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError_41952396(v21, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v21->fields.success;
    if ( success )
    {
      this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                   success,
                                                   (Il2CppObject *)StringLiteral_17149/*"authorizationUrl"*/,
                                                   (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v23 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                this,
                this->klass->vtable._4_getURL.methodPtr);
        this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     success,
                                                     (Il2CppObject *)StringLiteral_19904/*"gameId"*/,
                                                     (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v24 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                  this,
                  this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       success,
                                                       (Il2CppObject *)StringLiteral_18195/*"clientId"*/,
                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v25 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                    this,
                    this->klass->vtable._4_getURL.methodPtr);
            this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                         success,
                                                         (Il2CppObject *)StringLiteral_23062/*"redirectUri"*/,
                                                         (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( this )
            {
              v26 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                      this,
                      this->klass->vtable._4_getURL.methodPtr);
              this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                           success,
                                                           (Il2CppObject *)StringLiteral_22350/*"nonce"*/,
                                                           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( this )
              {
                v27 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                        this,
                        this->klass->vtable._4_getURL.methodPtr);
                static_fields = AccountLinkageParams_TypeInfo->static_fields;
                static_fields->authorizationUrl = (struct System_String_o *)v23;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&static_fields->authorizationUrl,
                  v23,
                  v29,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34);
                v35 = AccountLinkageParams_TypeInfo->static_fields;
                v35->gameId = (struct System_String_o *)v24;
                sub_1BCA784((PartyOrganizationUtility_o *)&v35->gameId, v24, v36, v37, v38, v39, v40, v41);
                v42 = AccountLinkageParams_TypeInfo->static_fields;
                v42->clientId = (struct System_String_o *)v25;
                sub_1BCA784((PartyOrganizationUtility_o *)&v42->clientId, v25, v43, v44, v45, v46, v47, v48);
                v49 = AccountLinkageParams_TypeInfo->static_fields;
                v49->redirectUri = (struct System_String_o *)v26;
                sub_1BCA784((PartyOrganizationUtility_o *)&v49->redirectUri, v26, v50, v51, v52, v53, v54, v55);
                v56 = AccountLinkageParams_TypeInfo->static_fields;
                v56->nonce = (struct System_String_o *)v27;
                sub_1BCA784((PartyOrganizationUtility_o *)&v56->nonce, v27, v57, v58, v59, v60, v61, v62);
                CallBack = v4->fields.CallBack;
                if ( CallBack )
                {
                  v64 = &StringLiteral_22465/*"ok"*/;
LABEL_17:
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    *v64,
                    *(_QWORD *)&CallBack->fields.extra_arg);
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v64 = &StringLiteral_22292/*"ng"*/;
    goto LABEL_17;
  }
}