void AccountLinkageContinueUserRequest___ctor(AccountLinkageContinueUserRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_593A125 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17288/*"accountLinkageToken"*/);
    byte_593A125 = 1;
  }
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_17288/*"accountLinkageToken"*/, accountLinkageToken, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageContinueUserRequest__getURL(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A124 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17282/*"accountLinkageAnx/continueUser"*/);
    byte_593A124 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17282/*"accountLinkageAnx/continueUser"*/, 0);
}


void AccountLinkageContinueUserRequest__requestCompleted(
        AccountLinkageContinueUserRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v7; // x2
  __int64 v8; // x22
  __int64 v9; // x21
  __int64 v10; // x20
  MissionNaviTransitionBoardItem_o *static_fields; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct AccountLinkageParams_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 *v25; // x8
  AccountLinkageContinueUserRequest_o *v26; // x0
  const MethodInfo *v27; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_593A126 & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_17625/*"authKey"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_24423/*"secretKey"*/);
    this = (AccountLinkageContinueUserRequest_o *)sub_21FFC50(&StringLiteral_25859/*"userId"*/);
    byte_593A126 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !LODWORD(responseList->max_length) )
    sub_21FFED4(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_15;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_51190916(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v25 = &StringLiteral_23290/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success
    || (this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_25859/*"userId"*/,
                                                        (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_15:
    sub_21FFECC(this, responseList);
  }
  if ( this->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
  {
    v8 = *(_QWORD *)j_il2cpp_object_unbox_0(this, qword_594C090, v7);
    this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_17625/*"authKey"*/,
                                                    (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v9 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
             this,
             this->klass->vtable._3_ToString.method);
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_24423/*"secretKey"*/,
                                                      (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v10 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                this,
                this->klass->vtable._3_ToString.method);
        static_fields = (MissionNaviTransitionBoardItem_o *)AccountLinkageParams_TypeInfo->static_fields;
        static_fields->fields._Name_k__BackingField = (struct System_String_o *)v9;
        static_fields = (MissionNaviTransitionBoardItem_o *)((char *)static_fields + 128);
        *(_QWORD *)&static_fields[-1].fields._BoardType_k__BackingField = v8;
        sub_21FFBF4(static_fields, v9, v12, v13, v14, v15, v16, v17);
        v18 = AccountLinkageParams_TypeInfo->static_fields;
        v18->newSecretKey = (struct System_String_o *)v10;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->newSecretKey, v10, v19, v20, v21, v22, v23, v24);
        v25 = &StringLiteral_23468/*"ok"*/;
LABEL_14:
        RequestBase__completed(v4, (System_String_o *)*v25, 0);
        return;
      }
    }
    goto LABEL_15;
  }
  sub_220024C(this, qword_594C090, v7);
  AccountLinkageContinueUserRequest___ctor(v26, v27);
}