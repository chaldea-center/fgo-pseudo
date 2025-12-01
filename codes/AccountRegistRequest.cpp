void AccountRegistRequest___ctor(AccountRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AccountRegistRequest__AddAppCheckField(AccountRegistRequest_o *this, const MethodInfo *method)
{
  FirebaseScript_c *v3; // x0
  FirebaseScript_c *v4; // x0
  bool IsNullOrEmpty; // w21
  FirebaseScript_c *v6; // x0
  __int64 *v7; // x9
  char v8; // w21
  FirebaseScript_c *v9; // x0
  __int64 *v10; // x9
  System_String_o *AppCheckToken_k__BackingField; // x2
  FirebaseScript_c *v12; // x0
  FirebaseScript_c *v13; // x0
  FirebaseScript_c *v14; // x0
  System_String_o *AppCheckPrevMessageKey_k__BackingField; // x21
  System_String_o *String_71682912; // x0
  FirebaseScript_c *v17; // x0

  if ( (byte_4CC8E5C & 1) == 0 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    sub_1C713B0(&StringLiteral_14271/*"The token wasn't created in time"*/);
    sub_1C713B0(&StringLiteral_16832/*"appCheckToken"*/);
    sub_1C713B0(&StringLiteral_16830/*"appCheckErrorMessage"*/);
    sub_1C713B0(&StringLiteral_6745/*"Firebase wasn't available"*/);
    byte_4CC8E5C = 1;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4CC1129 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    byte_4CC1129 = 1;
  }
  v3 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v3 = FirebaseScript_TypeInfo;
  }
  if ( !v3->static_fields->_CanUseFirebase_k__BackingField )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4CC6C81 )
    {
      sub_1C713B0(&FirebaseScript_TypeInfo);
      byte_4CC6C81 = 1;
    }
    v3 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v3 = FirebaseScript_TypeInfo;
    }
    if ( v3->static_fields->_IsFirebaseInitialized_k__BackingField )
    {
      v7 = &StringLiteral_6745/*"Firebase wasn't available"*/;
      goto LABEL_32;
    }
  }
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  if ( !byte_4CC6C84 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    byte_4CC6C84 = 1;
  }
  v4 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v4 = FirebaseScript_TypeInfo;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4->static_fields->_AppCheckToken_k__BackingField, 0);
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    if ( IsNullOrEmpty )
      goto LABEL_18;
LABEL_34:
    if ( !byte_4CC6C84 )
    {
      sub_1C713B0(&FirebaseScript_TypeInfo);
      byte_4CC6C84 = 1;
    }
    v9 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v9 = FirebaseScript_TypeInfo;
    }
    v10 = &StringLiteral_16832/*"appCheckToken"*/;
    AppCheckToken_k__BackingField = v9->static_fields->_AppCheckToken_k__BackingField;
    goto LABEL_46;
  }
  if ( !IsNullOrEmpty )
    goto LABEL_34;
LABEL_18:
  if ( !byte_4CC6C85 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    byte_4CC6C85 = 1;
  }
  v6 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v6 = FirebaseScript_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v6->static_fields->_AppCheckTokenError_k__BackingField, 0) )
  {
    v7 = &StringLiteral_14271/*"The token wasn't created in time"*/;
LABEL_32:
    RequestBase__addField_44518324(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_16830/*"appCheckErrorMessage"*/,
      (System_String_o *)*v7,
      0);
    v8 = 0;
    goto LABEL_47;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4CC6C85 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    byte_4CC6C85 = 1;
  }
  v12 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v12 = FirebaseScript_TypeInfo;
  }
  v10 = &StringLiteral_16830/*"appCheckErrorMessage"*/;
  AppCheckToken_k__BackingField = v12->static_fields->_AppCheckTokenError_k__BackingField;
LABEL_46:
  RequestBase__addField_44518324((RequestBase_o *)this, (System_String_o *)*v10, AppCheckToken_k__BackingField, 0);
  v8 = 1;
LABEL_47:
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4CC6C80 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    byte_4CC6C80 = 1;
  }
  v13 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v13 = FirebaseScript_TypeInfo;
  }
  v13->static_fields->_IsSendAppCheckToken_k__BackingField = v8;
  if ( !byte_4CC6C83 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    v13 = FirebaseScript_TypeInfo;
    byte_4CC6C83 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = FirebaseScript_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v13->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0) )
  {
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    if ( !byte_4CC6C83 )
    {
      sub_1C713B0(&FirebaseScript_TypeInfo);
      byte_4CC6C83 = 1;
    }
    v14 = FirebaseScript_TypeInfo;
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v14 = FirebaseScript_TypeInfo;
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
      if ( !byte_4CC6C83 )
      {
        sub_1C713B0(&FirebaseScript_TypeInfo);
        v14 = FirebaseScript_TypeInfo;
        byte_4CC6C83 = 1;
      }
    }
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = FirebaseScript_TypeInfo;
    }
    String_71682912 = UnityEngine_PlayerPrefs__GetString_71682912(
                        v14->static_fields->_AppCheckPrevMessageKey_k__BackingField,
                        0);
    RequestBase__addField_44518324((RequestBase_o *)this, AppCheckPrevMessageKey_k__BackingField, String_71682912, 0);
    if ( !byte_4CC6C83 )
    {
      sub_1C713B0(&FirebaseScript_TypeInfo);
      byte_4CC6C83 = 1;
    }
    v17 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v17 = FirebaseScript_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v17->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0);
  }
}


void AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4CC8E5B & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8E5B = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0);
  AccountRegistRequest__AddAppCheckField(this, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


System_String_o *AccountRegistRequest__getMockData(AccountRegistRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8E59 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_9130/*"MockAccountRegistRequest"*/);
    byte_4CC8E59 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9130/*"MockAccountRegistRequest"*/, 0);
}


System_String_o *AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8E58 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_16642/*"account/regist"*/);
    byte_4CC8E58 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_16642/*"account/regist"*/, 0);
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

  if ( (byte_4CC8E5A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_16966/*"authKey"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_23370/*"secretKey"*/);
    sub_1C713B0(&StringLiteral_24677/*"userId"*/);
    byte_4CC8E5A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(2, responseList, 0);
  if ( v5
    && (v6 = v5, ResponseData__checkError_44515240(v5, 0))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success,
             (Il2CppObject *)StringLiteral_24677/*"userId"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_16;
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                               Item,
                               Item->klass->vtable[3].method);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_16966/*"authKey"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method),
          (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23370/*"secretKey"*/,
                    (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0)
      || (v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0)
      || (NetworkManager__SetAuth((NetworkManager_o *)Item, v10, v11, v12, 0),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0) )
    {
LABEL_16:
      sub_1C71608(Item, v9);
    }
    NetworkManager__WriteAuth((NetworkManager_o *)Item, 0);
    v13 = &StringLiteral_22486/*"ok"*/;
  }
  else
  {
    v13 = &StringLiteral_22316/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0);
}