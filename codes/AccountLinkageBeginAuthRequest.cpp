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

  if ( (byte_4A2F6CF & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_16627/*"accountLinkageAnx/beginAuth"*/, v2);
    byte_4A2F6CF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_16627/*"accountLinkageAnx/beginAuth"*/, 0LL);
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
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v36; // x9

  v4 = this;
  if ( (byte_4A2F6D0 & 1) == 0 )
  {
    sub_1B761C0(&AccountLinkageParams_TypeInfo, responseList);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B761C0(&StringLiteral_22102/*"nonce"*/, v6);
    sub_1B761C0(&StringLiteral_22216/*"ok"*/, v7);
    sub_1B761C0(&StringLiteral_19696/*"gameId"*/, v8);
    sub_1B761C0(&StringLiteral_22808/*"redirectUri"*/, v9);
    sub_1B761C0(&StringLiteral_18007/*"clientId"*/, v10);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v11);
    this = (AccountLinkageBeginAuthRequest_o *)sub_1B761C0(&StringLiteral_16972/*"authorizationUrl"*/, v12);
    byte_4A2F6D0 = 1;
  }
  if ( !responseList )
    goto LABEL_19;
  if ( !responseList->max_length )
    sub_1B76424(this, responseList);
  v13 = responseList->m_Items[0];
  if ( !v13 )
    goto LABEL_19;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError(
                                               (ResponseData_o *)this,
                                               v13->fields.resCode,
                                               method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.success;
    if ( success )
    {
      this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                   success,
                                                   (Il2CppObject *)StringLiteral_16972/*"authorizationUrl"*/,
                                                   (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v15 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                this,
                this->klass->vtable._4_getURL.methodPtr);
        this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     success,
                                                     (Il2CppObject *)StringLiteral_19696/*"gameId"*/,
                                                     (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v16 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                  this,
                  this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       success,
                                                       (Il2CppObject *)StringLiteral_18007/*"clientId"*/,
                                                       (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v17 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                    this,
                    this->klass->vtable._4_getURL.methodPtr);
            this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                         success,
                                                         (Il2CppObject *)StringLiteral_22808/*"redirectUri"*/,
                                                         (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( this )
            {
              v18 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                      this,
                      this->klass->vtable._4_getURL.methodPtr);
              this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                           success,
                                                           (Il2CppObject *)StringLiteral_22102/*"nonce"*/,
                                                           (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( this )
              {
                v19 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                        this,
                        this->klass->vtable._4_getURL.methodPtr);
                static_fields = AccountLinkageParams_TypeInfo->static_fields;
                static_fields->authorizationUrl = (struct System_String_o *)v15;
                sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->authorizationUrl, v15, v21, v22);
                v23 = AccountLinkageParams_TypeInfo->static_fields;
                v23->gameId = (struct System_String_o *)v16;
                sub_1B76164((ServantStatusBattleListViewItem_o *)&v23->gameId, v16, v24, v25);
                v26 = AccountLinkageParams_TypeInfo->static_fields;
                v26->clientId = (struct System_String_o *)v17;
                sub_1B76164((ServantStatusBattleListViewItem_o *)&v26->clientId, v17, v27, v28);
                v29 = AccountLinkageParams_TypeInfo->static_fields;
                v29->redirectUri = (struct System_String_o *)v18;
                sub_1B76164((ServantStatusBattleListViewItem_o *)&v29->redirectUri, v18, v30, v31);
                v32 = AccountLinkageParams_TypeInfo->static_fields;
                v32->nonce = (struct System_String_o *)v19;
                sub_1B76164((ServantStatusBattleListViewItem_o *)&v32->nonce, v19, v33, v34);
                CallBack = v4->fields.CallBack;
                if ( CallBack )
                {
                  v36 = &StringLiteral_22216/*"ok"*/;
LABEL_17:
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    *v36,
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
    sub_1B7641C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v36 = &StringLiteral_22046/*"ng"*/;
    goto LABEL_17;
  }
}