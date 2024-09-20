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

  if ( (byte_4A5C903 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16633/*"accountLinkageAnx/beginAuth"*/);
    byte_4A5C903 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_16633/*"accountLinkageAnx/beginAuth"*/, 0LL);
}


void __fastcall AccountLinkageBeginAuthRequest__requestCompleted(
        AccountLinkageBeginAuthRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageBeginAuthRequest_o *v4; // x19
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
  struct AccountLinkageParams_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct AccountLinkageParams_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct AccountLinkageParams_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct AccountLinkageParams_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v28; // x9

  v4 = this;
  if ( (byte_4A5C904 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&StringLiteral_22111/*"nonce"*/);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_19702/*"gameId"*/);
    sub_1B885B0(&StringLiteral_22818/*"redirectUri"*/);
    sub_1B885B0(&StringLiteral_18013/*"clientId"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    this = (AccountLinkageBeginAuthRequest_o *)sub_1B885B0(&StringLiteral_16978/*"authorizationUrl"*/);
    byte_4A5C904 = 1;
  }
  if ( !responseList )
    goto LABEL_19;
  if ( !responseList->max_length )
    sub_1B88814(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_19;
  this = (AccountLinkageBeginAuthRequest_o *)ResponseData__checkError(
                                               (ResponseData_o *)this,
                                               v5->fields.resCode,
                                               method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
    if ( success )
    {
      this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                   success,
                                                   (Il2CppObject *)StringLiteral_16978/*"authorizationUrl"*/,
                                                   (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v7 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
               this,
               this->klass->vtable._4_getURL.methodPtr);
        this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                     success,
                                                     (Il2CppObject *)StringLiteral_19702/*"gameId"*/,
                                                     (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v8 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                 this,
                 this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       success,
                                                       (Il2CppObject *)StringLiteral_18013/*"clientId"*/,
                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v9 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                   this,
                   this->klass->vtable._4_getURL.methodPtr);
            this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                         success,
                                                         (Il2CppObject *)StringLiteral_22818/*"redirectUri"*/,
                                                         (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( this )
            {
              v10 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                      this,
                      this->klass->vtable._4_getURL.methodPtr);
              this = (AccountLinkageBeginAuthRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                           success,
                                                           (Il2CppObject *)StringLiteral_22111/*"nonce"*/,
                                                           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( this )
              {
                v11 = ((__int64 (__fastcall *)(AccountLinkageBeginAuthRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                        this,
                        this->klass->vtable._4_getURL.methodPtr);
                static_fields = AccountLinkageParams_TypeInfo->static_fields;
                static_fields->authorizationUrl = (struct System_String_o *)v7;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->authorizationUrl, v7, v13, v14);
                v15 = AccountLinkageParams_TypeInfo->static_fields;
                v15->gameId = (struct System_String_o *)v8;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->gameId, v8, v16, v17);
                v18 = AccountLinkageParams_TypeInfo->static_fields;
                v18->clientId = (struct System_String_o *)v9;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->clientId, v9, v19, v20);
                v21 = AccountLinkageParams_TypeInfo->static_fields;
                v21->redirectUri = (struct System_String_o *)v10;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->redirectUri, v10, v22, v23);
                v24 = AccountLinkageParams_TypeInfo->static_fields;
                v24->nonce = (struct System_String_o *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->nonce, v11, v25, v26);
                CallBack = v4->fields.CallBack;
                if ( CallBack )
                {
                  v28 = &StringLiteral_22225/*"ok"*/;
LABEL_17:
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    *v28,
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
    sub_1B8880C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v28 = &StringLiteral_22055/*"ng"*/;
    goto LABEL_17;
  }
}