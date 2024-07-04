void __fastcall AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_48E3E10 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, accountLinkageToken);
    sub_1B00CCC(&StringLiteral_16406/*"accountLinkageToken"*/, v6);
    byte_48E3E10 = 1;
  }
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_16406/*"accountLinkageToken"*/, accountLinkageToken, v3);
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

  if ( (byte_48E3E0F & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_16400/*"accountLinkageAnx/continueUser"*/, v2);
    byte_48E3E0F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_16400/*"accountLinkageAnx/continueUser"*/, 0LL);
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
  struct System_String_o *v16; // x22
  __int64 v17; // x21
  __int64 v18; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct AccountLinkageParams_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v26; // x9
  AccountLinkageContinueUserRequest_o *v27; // x0
  const MethodInfo *v28; // x1

  v4 = this;
  if ( (byte_48E3E11 & 1) == 0 )
  {
    sub_1B00CCC(&AccountLinkageParams_TypeInfo, responseList);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B00CCC(&long_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v7);
    sub_1B00CCC(&StringLiteral_16737/*"authKey"*/, v8);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v9);
    sub_1B00CCC(&StringLiteral_22761/*"secretKey"*/, v10);
    this = (AccountLinkageContinueUserRequest_o *)sub_1B00CCC(&StringLiteral_24066/*"userId"*/, v11);
    byte_48E3E11 = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
    sub_1B00F30(this, responseList);
  v12 = responseList->m_Items[0];
  if ( !v12 )
    goto LABEL_18;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError(
                                                  (ResponseData_o *)this,
                                                  v12->fields.resCode,
                                                  method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success;
    if ( success )
    {
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_24066/*"userId"*/,
                                                      (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        {
          sub_1B011E8(this);
          AccountLinkageContinueUserRequest___ctor(v27, v28);
          return;
        }
        v16 = *(struct System_String_o **)j_il2cpp_object_unbox_0(this, long_TypeInfo, v14, v15);
        this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_16737/*"authKey"*/,
                                                        (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v17 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                  this,
                  this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                          success,
                                                          (Il2CppObject *)StringLiteral_22761/*"secretKey"*/,
                                                          (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v18 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                    this,
                    this->klass->vtable._4_getURL.methodPtr);
            static_fields = AccountLinkageParams_TypeInfo->static_fields;
            static_fields->newAuthKey = (struct System_String_o *)v17;
            static_fields = (struct AccountLinkageParams_StaticFields *)((char *)static_fields + 128);
            static_fields[-1].basicPassword = v16;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)static_fields, v17, v20, v21);
            v22 = AccountLinkageParams_TypeInfo->static_fields;
            v22->newSecretKey = (struct System_String_o *)v18;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v22->newSecretKey, v18, v23, v24);
            CallBack = v4->fields.CallBack;
            if ( CallBack )
            {
              v26 = &StringLiteral_21923/*"ok"*/;
LABEL_16:
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                CallBack->fields.original_method_info,
                *v26,
                *(_QWORD *)&CallBack->fields.extra_arg);
              return;
            }
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B00F28(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v26 = &StringLiteral_21754/*"ng"*/;
    goto LABEL_16;
  }
}