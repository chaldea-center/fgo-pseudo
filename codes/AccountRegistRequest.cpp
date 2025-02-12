void __fastcall AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  if ( (byte_4BC930B & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC930B = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v3);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getMockData(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BC9309 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_9279/*"MockAccountRegistRequest"*/, v2);
    byte_4BC9309 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9279/*"MockAccountRegistRequest"*/, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC9308 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_16901/*"account/regist"*/, v2);
    byte_4BC9308 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_16901/*"account/regist"*/, 0LL);
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
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  Il2CppObject *Item; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  System_String_o *v18; // x22
  System_String_o *v19; // x21
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v21; // x9

  if ( (byte_4BC930A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v7);
    sub_1C1ABD4(&StringLiteral_17243/*"authKey"*/, v8);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v9);
    sub_1C1ABD4(&StringLiteral_23481/*"secretKey"*/, v10);
    sub_1C1ABD4(&StringLiteral_24843/*"userId"*/, v11);
    byte_4BC930A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v12 = ResponseCommandKind__SearchData(2, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_42452820(v12, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.success,
             (Il2CppObject *)StringLiteral_24843/*"userId"*/,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_19;
    v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17243/*"authKey"*/,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v18 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr),
          (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23481/*"secretKey"*/,
                    (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
      || (v19 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetAuth((NetworkManager_o *)Item, v17, v18, v19, 0LL),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_19:
      sub_1C1AE30(Item, v16);
    }
    NetworkManager__WriteAuth((NetworkManager_o *)Item, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v21 = &StringLiteral_22613/*"ok"*/;
LABEL_17:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v21,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v21 = &StringLiteral_22437/*"ng"*/;
      goto LABEL_17;
    }
  }
}