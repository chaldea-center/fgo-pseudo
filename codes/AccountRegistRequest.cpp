void __fastcall AccountRegistRequest___ctor(AccountRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438CDF1 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438CDF1 = 1;
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
  if ( (byte_438CDEF & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_9322/*"MockAccountRegistRequest"*/);
    byte_438CDEF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9322/*"MockAccountRegistRequest"*/, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438CDEE & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_16538/*"account/regist"*/);
    byte_438CDEE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_16538/*"account/regist"*/, 0LL);
}


void __fastcall AccountRegistRequest__requestCompleted(
        AccountRegistRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x21
  NetworkManager_o *Item; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x22
  System_String_o *v12; // x21
  __int64 *v13; // x8

  if ( (byte_438CDF0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_16850/*"authKey"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_22414/*"secretKey"*/);
    sub_B775C4(&StringLiteral_23521/*"userId"*/);
    byte_438CDF0 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(2, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success) != 0LL )
  {
    Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success,
                                 (System_Type_o *)StringLiteral_23521/*"userId"*/,
                                 (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_17;
    v10 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                               Item,
                               Item->klass[1]._1.image);
    Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 success,
                                 (System_Type_o *)StringLiteral_16850/*"authKey"*/,
                                 (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v11 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                                     Item,
                                     Item->klass[1]._1.image),
          (Item = (NetworkManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                        success,
                                        (System_Type_o *)StringLiteral_22414/*"secretKey"*/,
                                        (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
      || (v12 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager_o *, void *))Item->klass->vtable._3_ToString.method)(
                                     Item,
                                     Item->klass[1]._1.image),
          (Item = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetAuth(Item, v10, v11, v12, 0LL),
          (Item = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_17:
      sub_B7769C(Item, v9);
    }
    NetworkManager__WriteAuth(Item, 0LL);
    v13 = &StringLiteral_21657/*"ok"*/;
  }
  else
  {
    v13 = &StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}