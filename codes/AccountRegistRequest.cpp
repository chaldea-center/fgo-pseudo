void __fastcall AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  __int64 v6; // x1

  if ( (byte_4B179D5 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B179D5 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v4);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getMockData(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B179D3 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9228/*"MockAccountRegistRequest"*/, v3, v4);
    byte_4B179D3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9228/*"MockAccountRegistRequest"*/, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179D2 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16801/*"account/regist"*/, v3, v4);
    byte_4B179D2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_16801/*"account/regist"*/, 0LL);
}


void __fastcall AccountRegistRequest__requestCompleted(
        AccountRegistRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  ResponseData_o *v19; // x0
  ResponseData_o *v20; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  Il2CppObject *Item; // x0
  __int64 v23; // x1
  System_String_o *v24; // x20
  System_String_o *v25; // x22
  System_String_o *v26; // x21
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v28; // x9

  if ( (byte_4B179D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17142/*"authKey"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23323/*"secretKey"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24678/*"userId"*/, v17, v18);
    byte_4B179D4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v19 = ResponseCommandKind__SearchData(2, responseList, 0LL);
  if ( v19
    && (v20 = v19, ResponseData__checkError_41952396(v19, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v20->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v20->fields.success,
             (Il2CppObject *)StringLiteral_24678/*"userId"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_19;
    v24 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17142/*"authKey"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v25 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr),
          (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23323/*"secretKey"*/,
                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
      || (v26 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetAuth((NetworkManager_o *)Item, v24, v25, v26, 0LL),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_19:
      sub_1BCAA3C(Item, v23);
    }
    NetworkManager__WriteAuth((NetworkManager_o *)Item, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v28 = &StringLiteral_22465/*"ok"*/;
LABEL_17:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v28,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v28 = &StringLiteral_22292/*"ng"*/;
      goto LABEL_17;
    }
  }
}