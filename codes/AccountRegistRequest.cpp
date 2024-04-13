void __fastcall AccountRegistRequest___ctor(AccountRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6793 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6793 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getMockData(AccountRegistRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42E6791 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9249/*"MockAccountRegistRequest"*/, v4, v5, v6);
    byte_42E6791 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9249/*"MockAccountRegistRequest"*/, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E6790 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16424/*"account/regist"*/, v4, v5, v6);
    byte_42E6790 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_16424/*"account/regist"*/, 0LL);
}


void __fastcall AccountRegistRequest__requestCompleted(
        AccountRegistRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  ResponseData_o *v27; // x0
  ResponseData_o *v28; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  NetworkManager_o *Item; // x0
  __int64 v31; // x1
  System_String_o *v32; // x20
  System_String_o *v33; // x22
  System_String_o *v34; // x21
  __int64 *v35; // x8

  if ( (byte_42E6792 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)responseList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16727/*"authKey"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_22245/*"secretKey"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23347/*"userId"*/, v24, v25, v26);
    byte_42E6792 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v27 = ResponseCommandKind__SearchData(2, responseList, 0LL);
  if ( v27
    && (v28 = v27, ResponseData__checkError_29500464(v27, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v28->fields.success) != 0LL )
  {
    Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v28->fields.success,
                                 (System_Type_o *)StringLiteral_23347/*"userId"*/,
                                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_17;
    v32 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                               Item,
                               Item->klass[1]._1.image);
    Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 success,
                                 (System_Type_o *)StringLiteral_16727/*"authKey"*/,
                                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v33 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                                     Item,
                                     Item->klass[1]._1.image),
          (Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                        success,
                                        (System_Type_o *)StringLiteral_22245/*"secretKey"*/,
                                        (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
      || (v34 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                                     Item,
                                     Item->klass[1]._1.image),
          (Item = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetAuth(Item, v32, v33, v34, 0LL),
          (Item = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_17:
      sub_B5D69C(Item, v31);
    }
    NetworkManager__WriteAuth(Item, 0LL);
    v35 = &StringLiteral_21497/*"ok"*/;
  }
  else
  {
    v35 = &StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v35, 0LL);
}