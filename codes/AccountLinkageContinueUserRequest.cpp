void __fastcall AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A5C906 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16640/*"accountLinkageToken"*/);
    byte_4A5C906 = 1;
  }
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_16640/*"accountLinkageToken"*/, accountLinkageToken, v3);
  RequestBase__addBaseField((RequestBase_o *)this, v6);
  RequestBase__WriteParameter((RequestBase_o *)this, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageContinueUserRequest__getURL(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C905 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16634/*"accountLinkageAnx/continueUser"*/);
    byte_4A5C905 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_16634/*"accountLinkageAnx/continueUser"*/, 0LL);
}


void __fastcall AccountLinkageContinueUserRequest__requestCompleted(
        AccountLinkageContinueUserRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageContinueUserRequest_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  struct System_String_o *v9; // x22
  __int64 v10; // x21
  __int64 v11; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct AccountLinkageParams_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v19; // x9
  AccountLinkageContinueUserRequest_o *v20; // x0
  const MethodInfo *v21; // x1

  v4 = this;
  if ( (byte_4A5C907 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_16971/*"authKey"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_23078/*"secretKey"*/);
    this = (AccountLinkageContinueUserRequest_o *)sub_1B885B0(&StringLiteral_24424/*"userId"*/);
    byte_4A5C907 = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
    sub_1B88814(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_18;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError(
                                                  (ResponseData_o *)this,
                                                  v5->fields.resCode,
                                                  method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
    if ( success )
    {
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_24424/*"userId"*/,
                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
        {
          sub_1B88ACC(this);
          AccountLinkageContinueUserRequest___ctor(v20, v21);
          return;
        }
        v9 = *(struct System_String_o **)j_il2cpp_object_unbox_0(this, long_TypeInfo, v7, v8);
        this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_16971/*"authKey"*/,
                                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( this )
        {
          v10 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                  this,
                  this->klass->vtable._4_getURL.methodPtr);
          this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                          success,
                                                          (Il2CppObject *)StringLiteral_23078/*"secretKey"*/,
                                                          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( this )
          {
            v11 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                    this,
                    this->klass->vtable._4_getURL.methodPtr);
            static_fields = AccountLinkageParams_TypeInfo->static_fields;
            static_fields->newAuthKey = (struct System_String_o *)v10;
            static_fields = (struct AccountLinkageParams_StaticFields *)((char *)static_fields + 128);
            static_fields[-1].basicPassword = v9;
            sub_1B88554((ServantStatusBattleListViewItem_o *)static_fields, v10, v13, v14);
            v15 = AccountLinkageParams_TypeInfo->static_fields;
            v15->newSecretKey = (struct System_String_o *)v11;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->newSecretKey, v11, v16, v17);
            CallBack = v4->fields.CallBack;
            if ( CallBack )
            {
              v19 = &StringLiteral_22225/*"ok"*/;
LABEL_16:
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                CallBack->fields.original_method_info,
                *v19,
                *(_QWORD *)&CallBack->fields.extra_arg);
              return;
            }
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B8880C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v19 = &StringLiteral_22055/*"ng"*/;
    goto LABEL_16;
  }
}