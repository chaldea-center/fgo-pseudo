void __fastcall AccountLinkageContinueUserRequest___ctor(
        AccountLinkageContinueUserRequest_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountLinkageContinueUserRequest__beginRequest(
        AccountLinkageContinueUserRequest_o *this,
        System_String_o *accountLinkageToken,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4A4FDDF & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, accountLinkageToken);
    sub_1B863B8(&StringLiteral_16408/*"accountLinkageToken"*/, v5);
    byte_4A4FDDF = 1;
  }
  RequestBase__addField_42282000(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16408/*"accountLinkageToken"*/,
    accountLinkageToken,
    0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
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

  if ( (byte_4A4FDDE & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_16402/*"accountLinkageAnx/continueUser"*/, v2);
    byte_4A4FDDE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_16402/*"accountLinkageAnx/continueUser"*/, 0LL);
}


void __fastcall AccountLinkageContinueUserRequest__requestCompleted(
        AccountLinkageContinueUserRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
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
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CGThumbnailListItem_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 *v25; // x8
  AccountLinkageContinueUserRequest_o *v26; // x0
  const MethodInfo *v27; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4A4FDE0 & 1) == 0 )
  {
    sub_1B863B8(&AccountLinkageParams_TypeInfo, responseList);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B863B8(&long_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v7);
    sub_1B863B8(&StringLiteral_16731/*"authKey"*/, v8);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v9);
    sub_1B863B8(&StringLiteral_22927/*"secretKey"*/, v10);
    this = (AccountLinkageContinueUserRequest_o *)sub_1B863B8(&StringLiteral_24261/*"userId"*/, v11);
    byte_4A4FDE0 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !responseList->max_length )
    sub_1B8661C(this, responseList);
  v12 = responseList->m_Items[0];
  if ( !v12 )
    goto LABEL_15;
  this = (AccountLinkageContinueUserRequest_o *)ResponseData__checkError_42282948(v12, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v25 = &StringLiteral_21893/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success;
  if ( !success
    || (this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        success,
                                                        (Il2CppObject *)StringLiteral_24261/*"userId"*/,
                                                        (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_15:
    sub_1B86614(this, responseList);
  }
  if ( this->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v16 = *(struct System_String_o **)j_il2cpp_object_unbox_0(this, long_TypeInfo, v14, v15);
    this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    success,
                                                    (Il2CppObject *)StringLiteral_16731/*"authKey"*/,
                                                    (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
    {
      v17 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
              this,
              this->klass->vtable._4_getURL.methodPtr);
      this = (AccountLinkageContinueUserRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      success,
                                                      (Il2CppObject *)StringLiteral_22927/*"secretKey"*/,
                                                      (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        v18 = ((__int64 (__fastcall *)(AccountLinkageContinueUserRequest_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                this,
                this->klass->vtable._4_getURL.methodPtr);
        static_fields = (CGThumbnailListItem_o *)AccountLinkageParams_TypeInfo->static_fields;
        static_fields->fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)v17;
        static_fields = (CGThumbnailListItem_o *)((char *)static_fields + 128);
        static_fields[-1].fields._ThumbnailSpritePath_k__BackingField = v16;
        sub_1B8635C(static_fields, v17, v20, v21);
        v22 = (CGThumbnailListItem_o *)AccountLinkageParams_TypeInfo->static_fields;
        v22[1].klass = (CGThumbnailListItem_c *)v18;
        sub_1B8635C(v22 + 1, v18, v23, v24);
        v25 = &StringLiteral_22061/*"ok"*/;
LABEL_14:
        RequestBase__completed(v4, (System_String_o *)*v25, 0LL);
        return;
      }
    }
    goto LABEL_15;
  }
  sub_1B868D4(this);
  AccountLinkageContinueUserRequest___ctor(v26, v27);
}