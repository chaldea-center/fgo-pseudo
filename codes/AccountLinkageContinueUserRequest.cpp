void AccountLinkageContinueUserRequest___ctor(AccountLinkageContinueUserRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  if ( (byte_4D2E2E8 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_16708/*"accountLinkageToken"*/);
    byte_4D2E2E8 = 1;
  }
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_16708/*"accountLinkageToken"*/, accountLinkageToken, 0);
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountLinkageContinueUserRequest__getURL(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E2E7 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_16702/*"accountLinkageAnx/continueUser"*/);
    byte_4D2E2E7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_16702/*"accountLinkageAnx/continueUser"*/, 0);
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
  __int64 v8; // x3
  struct System_String_o *v9; // x22
  __int64 v10; // x21
  __int64 v11; // x20
  GrandQuestFolderBoardItem_o *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct AccountLinkageParams_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 *v26; // x8
  AccountLinkageContinueUserRequest_o *v27; // x0
  const MethodInfo *v28; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4D2E2E9 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    sub_1C94098(&StringLiteral_17025/*"authKey"*/);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    sub_1C94098(&StringLiteral_23484/*"secretKey"*/);
    this = (AccountLinkageContinueUserRequest_o *)sub_1C94098(&StringLiteral_24799/*"userId"*/);
    byte_4D2E2E9 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !LODWORD(responseList->max_length) )
    sub_1C942F8(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_15;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_45012660(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v26 = &StringLiteral_22424/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success
    || (this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_24799/*"userId"*/,
                                                        (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_15:
    sub_1C942F0(this, responseList);
  }
  if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v9 = *(struct System_String_o **)j_il2cpp_object_unbox_0(this, long_TypeInfo, v7, v8);
    this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_17025/*"authKey"*/,
                                                    (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v10 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
              this,
              this->klass->vtable._3_ToString.method);
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_23484/*"secretKey"*/,
                                                      (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v11 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                this,
                this->klass->vtable._3_ToString.method);
        static_fields = (GrandQuestFolderBoardItem_o *)AccountLinkageParams_TypeInfo->static_fields;
        static_fields->fields._Name_k__BackingField = (struct System_String_o *)v10;
        static_fields = (GrandQuestFolderBoardItem_o *)((char *)static_fields + 128);
        static_fields[-1].fields._ClosedMessage_k__BackingField = v9;
        sub_1C9403C(static_fields, v10, v13, v14, v15, v16, v17, v18);
        v19 = AccountLinkageParams_TypeInfo->static_fields;
        v19->newSecretKey = (struct System_String_o *)v11;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->newSecretKey, v11, v20, v21, v22, v23, v24, v25);
        v26 = &StringLiteral_22594/*"ok"*/;
LABEL_14:
        RequestBase__completed(v4, (System_String_o *)*v26, 0);
        return;
      }
    }
    goto LABEL_15;
  }
  sub_1C9468C(this);
  AccountLinkageContinueUserRequest___ctor(v27, v28);
}