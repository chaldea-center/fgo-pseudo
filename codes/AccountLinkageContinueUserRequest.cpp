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

  if ( (byte_5972302 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_17324/*"accountLinkageToken"*/);
    byte_5972302 = 1;
  }
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_17324/*"accountLinkageToken"*/, accountLinkageToken, 0);
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

  if ( (byte_5972301 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_17318/*"accountLinkageAnx/continueUser"*/);
    byte_5972301 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_17318/*"accountLinkageAnx/continueUser"*/, 0);
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
  if ( (byte_5972303 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_17662/*"authKey"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_24471/*"secretKey"*/);
    this = (AccountLinkageContinueUserRequest_o *)sub_2213A60(&StringLiteral_25907/*"userId"*/);
    byte_5972303 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !LODWORD(responseList->max_length) )
    sub_2213CE4(this);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_15;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_51257228(v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v25 = &StringLiteral_23336/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
  if ( !success
    || (this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_25907/*"userId"*/,
                                                        (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_15:
    sub_2213CDC(this, responseList);
  }
  if ( this->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
  {
    v8 = *(_QWORD *)j_il2cpp_object_unbox_0(this, qword_5984368, v7);
    this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_17662/*"authKey"*/,
                                                    (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v9 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
             this,
             this->klass->vtable._3_ToString.method);
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_24471/*"secretKey"*/,
                                                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v10 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                this,
                this->klass->vtable._3_ToString.method);
        static_fields = (MissionNaviTransitionBoardItem_o *)AccountLinkageParams_TypeInfo->static_fields;
        static_fields->fields._Name_k__BackingField = (struct System_String_o *)v9;
        static_fields = (MissionNaviTransitionBoardItem_o *)((char *)static_fields + 128);
        *(_QWORD *)&static_fields[-1].fields._BoardType_k__BackingField = v8;
        sub_2213A04(static_fields, v9, v12, v13, v14, v15, v16, v17);
        v18 = AccountLinkageParams_TypeInfo->static_fields;
        v18->newSecretKey = (struct System_String_o *)v10;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->newSecretKey, v10, v19, v20, v21, v22, v23, v24);
        v25 = &StringLiteral_23515/*"ok"*/;
LABEL_14:
        RequestBase__completed(v4, (System_String_o *)*v25, 0);
        return;
      }
    }
    goto LABEL_15;
  }
  sub_221405C(this, qword_5984368, v7);
  AccountLinkageContinueUserRequest___ctor(v26, v27);
}