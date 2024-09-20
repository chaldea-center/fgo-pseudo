void __fastcall AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  if ( (byte_4A5C917 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5C917 = 1;
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
  if ( (byte_4A5C915 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9098/*"MockAccountRegistRequest"*/);
    byte_4A5C915 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9098/*"MockAccountRegistRequest"*/, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C914 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16632/*"account/regist"*/);
    byte_4A5C914 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_16632/*"account/regist"*/, 0LL);
}


void __fastcall AccountRegistRequest__requestCompleted(
        AccountRegistRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *v12; // x22
  System_String_o *v13; // x21
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v15; // x9

  if ( (byte_4A5C916 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_16971/*"authKey"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_23078/*"secretKey"*/);
    sub_1B885B0(&StringLiteral_24424/*"userId"*/);
    byte_4A5C916 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(2, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success,
             (Il2CppObject *)StringLiteral_24424/*"userId"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_19;
    v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_16971/*"authKey"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr),
          (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23078/*"secretKey"*/,
                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
      || (v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetAuth((NetworkManager_o *)Item, v11, v12, v13, 0LL),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_19:
      sub_1B8880C(Item, v10);
    }
    NetworkManager__WriteAuth((NetworkManager_o *)Item, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v15 = &StringLiteral_22225/*"ok"*/;
LABEL_17:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v15,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v15 = &StringLiteral_22055/*"ng"*/;
      goto LABEL_17;
    }
  }
}