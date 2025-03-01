void __fastcall AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4BFEFE8 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, accountLinkageToken);
    sub_1C2E12C(&StringLiteral_16932/*"accountLinkageToken"*/, v6);
    byte_4BFEFE8 = 1;
  }
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_16932/*"accountLinkageToken"*/, accountLinkageToken, v3);
  RequestBase__addBaseField((RequestBase_o *)this, v7);
  RequestBase__WriteParameter((RequestBase_o *)this, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageContinueUserRequest__getURL(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BFEFE7 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_16926/*"accountLinkageAnx/continueUser"*/, v2);
    byte_4BFEFE7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63235584(BaseUrl, (System_String_o *)StringLiteral_16926/*"accountLinkageAnx/continueUser"*/, 0LL);
}


void __fastcall AccountLinkageContinueUserRequest__requestCompleted(
        AccountLinkageContinueUserRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageContinueUserRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x22
  int64_t v17; // x21
  int64_t v18; // x20
  PartyOrganizationUtility_o *static_fields; // x0
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
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v34; // x9
  AccountLinkageContinueUserRequest_o *v35; // x0
  const MethodInfo *v36; // x1

  v4 = this;
  if ( (byte_4BFEFE9 & 1) == 0 )
  {
    sub_1C2E12C(&AccountLinkageParams_TypeInfo, responseList);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1C2E12C(&long_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_22644/*"ok"*/, v7);
    sub_1C2E12C(&StringLiteral_17270/*"authKey"*/, v8);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v9);
    sub_1C2E12C(&StringLiteral_23522/*"secretKey"*/, v10);
    this = (AccountLinkageContinueUserRequest_o *)sub_1C2E12C(&StringLiteral_24888/*"userId"*/, v11);
    byte_4BFEFE9 = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
    sub_1C2E390(this, responseList);
  v12 = responseList->m_Items[0];
  if ( !v12 )
    goto LABEL_18;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_42594652(v12, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success;
    if ( success )
    {
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_24888/*"userId"*/,
                                                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        {
          sub_1C2E648(this);
          AccountLinkageContinueUserRequest___ctor(v35, v36);
          return;
        }
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(this, long_TypeInfo, v14, v15);
        this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_17270/*"authKey"*/,
                                                        (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v17 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                  this,
                  this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                          success,
                                                          (Il2CppObject *)StringLiteral_23522/*"secretKey"*/,
                                                          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v18 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                    this,
                    this->klass->vtable._4_getURL.methodPtr);
            static_fields = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
            static_fields->fields.CachedFriendshipUpItemInfo = (struct FriendshipUpItemInfo_array *)v17;
            static_fields = (PartyOrganizationUtility_o *)((char *)static_fields + 128);
            *(_QWORD *)&static_fields[-1].fields._IsQuestStartMenuMode_k__BackingField = v16;
            sub_1C2E0D0(static_fields, v17, v20, v21, v22, v23, v24, v25);
            v26 = AccountLinkageParams_TypeInfo->static_fields;
            v26->newSecretKey = (struct System_String_o *)v18;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v26->newSecretKey, v18, v27, v28, v29, v30, v31, v32);
            CallBack = v4->fields.CallBack;
            if ( CallBack )
            {
              v34 = &StringLiteral_22644/*"ok"*/;
LABEL_16:
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                CallBack->fields.original_method_info,
                *v34,
                *(_QWORD *)&CallBack->fields.extra_arg);
              return;
            }
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C2E388(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v34 = &StringLiteral_22468/*"ng"*/;
    goto LABEL_16;
  }
}