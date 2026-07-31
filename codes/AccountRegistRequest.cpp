void AccountRegistRequest___ctor(AccountRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountRegistRequest__AddAppCheckField(AccountRegistRequest_o *this, const MethodInfo *method)
{
  FirebaseScript_c *v3; // x0
  FirebaseScript_c *v4; // x0
  __int64 v5; // x1
  bool IsNullOrEmpty; // w8
  int v7; // w9
  FirebaseScript_c *v8; // x0
  __int64 v9; // x1
  char v10; // w21
  __int64 *v11; // x8
  System_String_o **p_AppCheckTokenError_k__BackingField; // x9
  FirebaseScript_c *v13; // x0
  FirebaseScript_c *v14; // x0
  __int64 v15; // x1
  FirebaseScript_c *v16; // x0
  int v17; // w9
  __int64 v18; // x1
  FirebaseScript_c *v19; // x0
  System_String_o *AppCheckPrevMessageKey_k__BackingField; // x21
  System_String_o *String_83184936; // x0
  __int64 v22; // x1
  FirebaseScript_c *v23; // x0

  if ( (byte_593A137 & 1) == 0 )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    sub_21FFC50(&StringLiteral_14816/*"The token wasn't created in time"*/);
    sub_21FFC50(&StringLiteral_17487/*"appCheckToken"*/);
    sub_21FFC50(&StringLiteral_17485/*"appCheckErrorMessage"*/);
    sub_21FFC50(&StringLiteral_7023/*"Firebase wasn't available"*/);
    byte_593A137 = 1;
  }
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
  if ( !byte_5931D51 )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    byte_5931D51 = 1;
  }
  v3 = FirebaseScript_TypeInfo;
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
    v3 = FirebaseScript_TypeInfo;
  }
  if ( v3->static_fields->_CanUseFirebase_k__BackingField )
    goto LABEL_77;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !byte_5937EFF )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    byte_5937EFF = 1;
  }
  v3 = FirebaseScript_TypeInfo;
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
    v3 = FirebaseScript_TypeInfo;
  }
  if ( !v3->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
LABEL_77:
    if ( !*(&v3->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v3, method);
    if ( !byte_5937F02 )
    {
      sub_21FFC50(&FirebaseScript_TypeInfo);
      byte_5937F02 = 1;
    }
    v4 = FirebaseScript_TypeInfo;
    if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      v4 = FirebaseScript_TypeInfo;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(v4->static_fields->_AppCheckToken_k__BackingField, 0);
    v7 = *(&FirebaseScript_TypeInfo->_2.cctor_finished + 1);
    if ( IsNullOrEmpty )
    {
      if ( !v7 )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v5);
      if ( !byte_5937F03 )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937F03 = 1;
      }
      v8 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v5);
        v8 = FirebaseScript_TypeInfo;
      }
      if ( System_String__IsNullOrEmpty(v8->static_fields->_AppCheckTokenError_k__BackingField, 0) )
      {
        v10 = 0;
        v11 = &StringLiteral_17485/*"appCheckErrorMessage"*/;
        p_AppCheckTokenError_k__BackingField = (System_String_o **)&StringLiteral_14816/*"The token wasn't created in time"*/;
        goto LABEL_48;
      }
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v9);
      if ( !byte_5937F03 )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937F03 = 1;
      }
      v14 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v9);
        v14 = FirebaseScript_TypeInfo;
      }
      v11 = &StringLiteral_17485/*"appCheckErrorMessage"*/;
      p_AppCheckTokenError_k__BackingField = &v14->static_fields->_AppCheckTokenError_k__BackingField;
    }
    else
    {
      if ( !v7 )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v5);
      if ( !byte_5937F02 )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937F02 = 1;
      }
      v13 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v5);
        v13 = FirebaseScript_TypeInfo;
      }
      v11 = &StringLiteral_17487/*"appCheckToken"*/;
      p_AppCheckTokenError_k__BackingField = &v13->static_fields->_AppCheckToken_k__BackingField;
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v11 = &StringLiteral_17485/*"appCheckErrorMessage"*/;
    p_AppCheckTokenError_k__BackingField = (System_String_o **)&StringLiteral_7023/*"Firebase wasn't available"*/;
  }
LABEL_48:
  RequestBase__addField_51187332(
    (RequestBase_o *)this,
    (System_String_o *)*v11,
    *p_AppCheckTokenError_k__BackingField,
    0);
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v15);
  if ( !byte_5937EFE )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    byte_5937EFE = 1;
  }
  v16 = FirebaseScript_TypeInfo;
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v15);
    v16 = FirebaseScript_TypeInfo;
  }
  v17 = (unsigned __int8)byte_5937F01;
  v16->static_fields->_IsSendAppCheckToken_k__BackingField = v10;
  if ( !v17 )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    v16 = FirebaseScript_TypeInfo;
    byte_5937F01 = 1;
  }
  if ( !*(&v16->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v16, v15);
    v16 = FirebaseScript_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v16->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0) )
  {
    if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v18);
    if ( !byte_5937F01 )
    {
      sub_21FFC50(&FirebaseScript_TypeInfo);
      byte_5937F01 = 1;
    }
    v19 = FirebaseScript_TypeInfo;
    if ( *(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    {
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v18);
      v19 = FirebaseScript_TypeInfo;
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
      if ( !byte_5937F01 )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        v19 = FirebaseScript_TypeInfo;
        byte_5937F01 = 1;
      }
    }
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v18);
      v19 = FirebaseScript_TypeInfo;
    }
    String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(
                        v19->static_fields->_AppCheckPrevMessageKey_k__BackingField,
                        0);
    RequestBase__addField_51187332((RequestBase_o *)this, AppCheckPrevMessageKey_k__BackingField, String_83184936, 0);
    if ( !byte_5937F01 )
    {
      sub_21FFC50(&FirebaseScript_TypeInfo);
      byte_5937F01 = 1;
    }
    v23 = FirebaseScript_TypeInfo;
    if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v22);
      v23 = FirebaseScript_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v23->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0);
  }
}


void AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1

  if ( (byte_593A136 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A136 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0);
  AccountRegistRequest__AddAppCheckField(this, v3);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountRegistRequest__getMockData(AccountRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A134 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9495/*"MockAccountRegistRequest"*/);
    byte_593A134 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9495/*"MockAccountRegistRequest"*/, 0);
}


System_String_o *AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A133 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17280/*"account/regist"*/);
    byte_593A133 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17280/*"account/regist"*/, 0);
}


void AccountRegistRequest__requestCompleted(
        AccountRegistRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x22
  System_String_o *v12; // x21
  __int64 *v13; // x8

  if ( (byte_593A135 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_17625/*"authKey"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_24423/*"secretKey"*/);
    sub_21FFC50(&StringLiteral_25859/*"userId"*/);
    byte_593A135 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(2, responseList, 0);
  if ( v5
    && (v6 = v5, ResponseData__checkError_51190916(v5, 0))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success,
             (Il2CppObject *)StringLiteral_25859/*"userId"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_16;
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                               Item,
                               Item->klass->vtable[3].method);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17625/*"authKey"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method),
          (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_24423/*"secretKey"*/,
                    (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0)
      || (v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0)
      || (NetworkManager__SetAuth((NetworkManager_o *)Item, v10, v11, v12, 0),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0) )
    {
LABEL_16:
      sub_21FFECC(Item, v9);
    }
    NetworkManager__WriteAuth((NetworkManager_o *)Item, 0);
    v13 = &StringLiteral_23468/*"ok"*/;
  }
  else
  {
    v13 = &StringLiteral_23290/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0);
}