// attributes: thunk
void __fastcall AccountLinkageBeginAuthRequest___ctor(AccountLinkageBeginAuthRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


System_String_o *__fastcall AccountLinkageBeginAuthRequest__getURL(
        AccountLinkageBeginAuthRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDDA1 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16914/*"accountLinkageAnx/beginAuth"*/);
    byte_4BDDDA1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_16914/*"accountLinkageAnx/beginAuth"*/, 0LL);
}


void __fastcall AccountLinkageBeginAuthRequest__requestCompleted(
        AccountLinkageBeginAuthRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageBeginAuthRequest_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  int64_t v7; // x21
  int64_t v8; // x22
  int64_t v9; // x23
  int64_t v10; // x24
  int64_t v11; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct AccountLinkageParams_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct AccountLinkageParams_StaticFields *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct AccountLinkageParams_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct AccountLinkageParams_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v48; // x9

  v4 = this;
  if ( (byte_4BDDDA2 & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageParams_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&StringLiteral_22514/*"nonce"*/);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_20045/*"gameId"*/);
    sub_1C21E38(&StringLiteral_23233/*"redirectUri"*/);
    sub_1C21E38(&StringLiteral_18317/*"clientId"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    this = (AccountLinkageBeginAuthRequest_o *)sub_1C21E38(&StringLiteral_17263/*"authorizationUrl"*/);
    byte_4BDDDA2 = 1;
  }
  if ( !responseList )
    goto LABEL_19;
  if ( !responseList->max_length )
    sub_1C2209C(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_19;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError_42505456(v5, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
    if ( success )
    {
      this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                   success,
                                                   (Il2CppObject *)StringLiteral_17263/*"authorizationUrl"*/,
                                                   (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v7 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
               this,
               this->klass->vtable._4_getURL.methodPtr);
        this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     success,
                                                     (Il2CppObject *)StringLiteral_20045/*"gameId"*/,
                                                     (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v8 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                 this,
                 this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       success,
                                                       (Il2CppObject *)StringLiteral_18317/*"clientId"*/,
                                                       (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v9 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                   this,
                   this->klass->vtable._4_getURL.methodPtr);
            this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                         success,
                                                         (Il2CppObject *)StringLiteral_23233/*"redirectUri"*/,
                                                         (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( this )
            {
              v10 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                      this,
                      this->klass->vtable._4_getURL.methodPtr);
              this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                           success,
                                                           (Il2CppObject *)StringLiteral_22514/*"nonce"*/,
                                                           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( this )
              {
                v11 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                        this,
                        this->klass->vtable._4_getURL.methodPtr);
                static_fields = AccountLinkageParams_TypeInfo->static_fields;
                static_fields->authorizationUrl = (struct System_String_o *)v7;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&static_fields->authorizationUrl,
                  v7,
                  v13,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18);
                v19 = AccountLinkageParams_TypeInfo->static_fields;
                v19->gameId = (struct System_String_o *)v8;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v19->gameId, v8, v20, v21, v22, v23, v24, v25);
                v26 = AccountLinkageParams_TypeInfo->static_fields;
                v26->clientId = (struct System_String_o *)v9;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v26->clientId, v9, v27, v28, v29, v30, v31, v32);
                v33 = AccountLinkageParams_TypeInfo->static_fields;
                v33->redirectUri = (struct System_String_o *)v10;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v33->redirectUri, v10, v34, v35, v36, v37, v38, v39);
                v40 = AccountLinkageParams_TypeInfo->static_fields;
                v40->nonce = (struct System_String_o *)v11;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v40->nonce, v11, v41, v42, v43, v44, v45, v46);
                CallBack = v4->fields.CallBack;
                if ( CallBack )
                {
                  v48 = &StringLiteral_22632/*"ok"*/;
LABEL_17:
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    *v48,
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
    sub_1C22094(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v48 = &StringLiteral_22456/*"ng"*/;
    goto LABEL_17;
  }
}