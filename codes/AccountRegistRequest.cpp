void __fastcall AccountRegistRequest___ctor(AccountRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_41859B5 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41859B5 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
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

  if ( (byte_41859B3 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9155/*"MockAccountRegistRequest"*/, v2);
    byte_41859B3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9155/*"MockAccountRegistRequest"*/, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41859B2 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16230/*"account/regist"*/, v2);
    byte_41859B2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_16230/*"account/regist"*/, 0LL);
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
  __int64 v16; // x1
  System_String_o *v17; // x20
  System_String_o *v18; // x22
  System_String_o *v19; // x21
  __int64 *v20; // x8

  if ( (byte_41859B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v7);
    sub_B2C35C(&StringLiteral_16528/*"authKey"*/, v8);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v9);
    sub_B2C35C(&StringLiteral_21946/*"secretKey"*/, v10);
    sub_B2C35C(&StringLiteral_23041/*"userId"*/, v11);
    byte_41859B4 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(2, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_31019724(v12, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13->fields.success) != 0LL )
  {
    Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13->fields.success,
                                 (System_Type_o *)StringLiteral_23041/*"userId"*/,
                                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_17;
    v17 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                               Item,
                               Item->klass[1]._1.image);
    Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 success,
                                 (System_Type_o *)StringLiteral_16528/*"authKey"*/,
                                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v18 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                                     Item,
                                     Item->klass[1]._1.image),
          (Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                        success,
                                        (System_Type_o *)StringLiteral_21946/*"secretKey"*/,
                                        (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
      || (v19 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                                     Item,
                                     Item->klass[1]._1.image),
          (Item = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetAuth(Item, v17, v18, v19, 0LL),
          (Item = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_17:
      sub_B2C434(Item, v16);
    }
    NetworkManager__WriteAuth(Item, 0LL);
    v20 = &StringLiteral_21218/*"ok"*/;
  }
  else
  {
    v20 = &StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v20, 0LL);
}