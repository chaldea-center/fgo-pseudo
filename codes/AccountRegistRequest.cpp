void __fastcall AccountRegistRequest___ctor(AccountRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42128A6 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_42128A6 = 1;
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
  __int64 v2; // x1

  if ( (byte_42128A4 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9178/*"MockAccountRegistRequest"*/, v2);
    byte_42128A4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9178/*"MockAccountRegistRequest"*/, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_42128A3 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16278/*"account/regist"*/, v2);
    byte_42128A3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_16278/*"account/regist"*/, 0LL);
}


void __fastcall AccountRegistRequest__requestCompleted(
        AccountRegistRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ResponseData_o *v12; // x0
  ResponseData_o *v13; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  NetworkManager_o *Item; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x22
  System_String_o *v18; // x21
  __int64 *v19; // x8

  if ( (byte_42128A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v7);
    sub_B0D8A4(&StringLiteral_16577/*"authKey"*/, v8);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v9);
    sub_B0D8A4(&StringLiteral_22019/*"secretKey"*/, v10);
    sub_B0D8A4(&StringLiteral_23118/*"userId"*/, v11);
    byte_42128A5 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(2, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_30403444(v12, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13->fields.success) != 0LL )
  {
    Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13->fields.success,
                                 (System_Type_o *)StringLiteral_23118/*"userId"*/,
                                 (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_17;
    v16 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                               Item,
                               Item->klass[1]._1.image);
    Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 success,
                                 (System_Type_o *)StringLiteral_16577/*"authKey"*/,
                                 (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v17 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                                     Item,
                                     Item->klass[1]._1.image),
          (Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                        success,
                                        (System_Type_o *)StringLiteral_22019/*"secretKey"*/,
                                        (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
      || (v18 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                                     Item,
                                     Item->klass[1]._1.image),
          (Item = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetAuth(Item, v16, v17, v18, 0LL),
          (Item = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_17:
      sub_B0D97C(Item);
    }
    NetworkManager__WriteAuth(Item, 0LL);
    v19 = &StringLiteral_21287/*"ok"*/;
  }
  else
  {
    v19 = &StringLiteral_21137/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v19, 0LL);
}