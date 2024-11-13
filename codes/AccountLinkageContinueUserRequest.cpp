void __fastcall AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x1

  if ( (byte_4B179C4 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, accountLinkageToken, method);
    sub_1BCA7E0(&StringLiteral_16809/*"accountLinkageToken"*/, v6, v7);
    byte_4B179C4 = 1;
  }
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_16809/*"accountLinkageToken"*/, accountLinkageToken, v3);
  RequestBase__addBaseField((RequestBase_o *)this, v8);
  RequestBase__WriteParameter((RequestBase_o *)this, v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageContinueUserRequest__getURL(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179C3 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16803/*"accountLinkageAnx/continueUser"*/, v3, v4);
    byte_4B179C3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_16803/*"accountLinkageAnx/continueUser"*/, 0LL);
}


void __fastcall AccountLinkageContinueUserRequest__requestCompleted(
        AccountLinkageContinueUserRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageContinueUserRequest_o *v4; // x19
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
  ResponseData_o *v19; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x22
  int64_t v24; // x21
  int64_t v25; // x20
  PartyOrganizationUtility_o *static_fields; // x0
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
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v41; // x9
  AccountLinkageContinueUserRequest_o *v42; // x0
  const MethodInfo *v43; // x1

  v4 = this;
  if ( (byte_4B179C5 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17142/*"authKey"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23323/*"secretKey"*/, v15, v16);
    this = (AccountLinkageContinueUserRequest_o *)sub_1BCA7E0(&StringLiteral_24678/*"userId"*/, v17, v18);
    byte_4B179C5 = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
    sub_1BCAA44(this, responseList);
  v19 = responseList->m_Items[0];
  if ( !v19 )
    goto LABEL_18;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_41952396(v19, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v19->fields.success;
    if ( success )
    {
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_24678/*"userId"*/,
                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        {
          sub_1BCACFC(this);
          AccountLinkageContinueUserRequest___ctor(v42, v43);
          return;
        }
        v23 = *(_QWORD *)j_il2cpp_object_unbox_0(this, long_TypeInfo, v21, v22);
        this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_17142/*"authKey"*/,
                                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v24 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                  this,
                  this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                          success,
                                                          (Il2CppObject *)StringLiteral_23323/*"secretKey"*/,
                                                          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v25 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                    this,
                    this->klass->vtable._4_getURL.methodPtr);
            static_fields = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
            static_fields->fields._TransitionDestinationFromDetail_k__BackingField = (struct System_String_o *)v24;
            static_fields = (PartyOrganizationUtility_o *)((char *)static_fields + 128);
            *(_QWORD *)&static_fields[-1].fields._IsQuestStartMenuMode_k__BackingField = v23;
            sub_1BCA784(static_fields, v24, v27, v28, v29, v30, v31, v32);
            v33 = AccountLinkageParams_TypeInfo->static_fields;
            v33->newSecretKey = (struct System_String_o *)v25;
            sub_1BCA784((PartyOrganizationUtility_o *)&v33->newSecretKey, v25, v34, v35, v36, v37, v38, v39);
            CallBack = v4->fields.CallBack;
            if ( CallBack )
            {
              v41 = &StringLiteral_22465/*"ok"*/;
LABEL_16:
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                CallBack->fields.original_method_info,
                *v41,
                *(_QWORD *)&CallBack->fields.extra_arg);
              return;
            }
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v41 = &StringLiteral_22292/*"ng"*/;
    goto LABEL_16;
  }
}