// attributes: thunk
void __fastcall AccountLinkageBeginAuthRequest___ctor(AccountLinkageBeginAuthRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


System_String_o *__fastcall AccountLinkageBeginAuthRequest__getURL(
        AccountLinkageBeginAuthRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC92F7 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_16902/*"accountLinkageAnx/beginAuth"*/, v2);
    byte_4BC92F7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_16902/*"accountLinkageAnx/beginAuth"*/, 0LL);
}


void __fastcall AccountLinkageBeginAuthRequest__requestCompleted(
        AccountLinkageBeginAuthRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageBeginAuthRequest_o *v4; // x19
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
  int64_t v15; // x21
  int64_t v16; // x22
  int64_t v17; // x23
  int64_t v18; // x24
  int64_t v19; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct AccountLinkageParams_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct AccountLinkageParams_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct AccountLinkageParams_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct AccountLinkageParams_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v56; // x9

  v4 = this;
  if ( (byte_4BC92F8 & 1) == 0 )
  {
    sub_1C1ABD4(&AccountLinkageParams_TypeInfo, responseList);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1C1ABD4(&StringLiteral_22495/*"nonce"*/, v6);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v7);
    sub_1C1ABD4(&StringLiteral_20030/*"gameId"*/, v8);
    sub_1C1ABD4(&StringLiteral_23213/*"redirectUri"*/, v9);
    sub_1C1ABD4(&StringLiteral_18303/*"clientId"*/, v10);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v11);
    this = (AccountLinkageBeginAuthRequest_o *)sub_1C1ABD4(&StringLiteral_17250/*"authorizationUrl"*/, v12);
    byte_4BC92F8 = 1;
  }
  if ( !responseList )
    goto LABEL_19;
  if ( !responseList->max_length )
    sub_1C1AE38(this, responseList);
  v13 = responseList->m_Items[0];
  if ( !v13 )
    goto LABEL_19;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError_42452820(v13, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.success;
    if ( success )
    {
      this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                   success,
                                                   (Il2CppObject *)StringLiteral_17250/*"authorizationUrl"*/,
                                                   (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v15 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                this,
                this->klass->vtable._4_getURL.methodPtr);
        this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     success,
                                                     (Il2CppObject *)StringLiteral_20030/*"gameId"*/,
                                                     (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v16 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                  this,
                  this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       success,
                                                       (Il2CppObject *)StringLiteral_18303/*"clientId"*/,
                                                       (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v17 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                    this,
                    this->klass->vtable._4_getURL.methodPtr);
            this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                         success,
                                                         (Il2CppObject *)StringLiteral_23213/*"redirectUri"*/,
                                                         (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( this )
            {
              v18 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                      this,
                      this->klass->vtable._4_getURL.methodPtr);
              this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                           success,
                                                           (Il2CppObject *)StringLiteral_22495/*"nonce"*/,
                                                           (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( this )
              {
                v19 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                        this,
                        this->klass->vtable._4_getURL.methodPtr);
                static_fields = AccountLinkageParams_TypeInfo->static_fields;
                static_fields->authorizationUrl = (struct System_String_o *)v15;
                sub_1C1AB78(
                  (PartyOrganizationUtility_o *)&static_fields->authorizationUrl,
                  v15,
                  v21,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26);
                v27 = AccountLinkageParams_TypeInfo->static_fields;
                v27->gameId = (struct System_String_o *)v16;
                sub_1C1AB78((PartyOrganizationUtility_o *)&v27->gameId, v16, v28, v29, v30, v31, v32, v33);
                v34 = AccountLinkageParams_TypeInfo->static_fields;
                v34->clientId = (struct System_String_o *)v17;
                sub_1C1AB78((PartyOrganizationUtility_o *)&v34->clientId, v17, v35, v36, v37, v38, v39, v40);
                v41 = AccountLinkageParams_TypeInfo->static_fields;
                v41->redirectUri = (struct System_String_o *)v18;
                sub_1C1AB78((PartyOrganizationUtility_o *)&v41->redirectUri, v18, v42, v43, v44, v45, v46, v47);
                v48 = AccountLinkageParams_TypeInfo->static_fields;
                v48->nonce = (struct System_String_o *)v19;
                sub_1C1AB78((PartyOrganizationUtility_o *)&v48->nonce, v19, v49, v50, v51, v52, v53, v54);
                CallBack = v4->fields.CallBack;
                if ( CallBack )
                {
                  v56 = &StringLiteral_22613/*"ok"*/;
LABEL_17:
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    *v56,
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
    sub_1C1AE30(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v56 = &StringLiteral_22437/*"ng"*/;
    goto LABEL_17;
  }
}