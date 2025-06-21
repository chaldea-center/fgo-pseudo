void __fastcall AccountRegistRequest___ctor(AccountRegistRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountRegistRequest__AddAppCheckField(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FirebaseScript_c *v7; // x0
  FirebaseScript_c *v8; // x0
  __int64 v9; // x1
  bool IsNullOrEmpty; // w21
  FirebaseScript_c *v11; // x0
  __int64 v12; // x1
  __int64 *v13; // x9
  __int64 v14; // x1
  char v15; // w21
  FirebaseScript_c *v16; // x0
  __int64 *v17; // x9
  System_String_o *AppCheckToken_k__BackingField; // x2
  FirebaseScript_c *v19; // x0
  FirebaseScript_c *v20; // x0
  __int64 v21; // x1
  FirebaseScript_c *v22; // x0
  System_String_o *AppCheckPrevMessageKey_k__BackingField; // x21
  __int64 v24; // x1
  System_String_o *String_70094888; // x0
  __int64 v26; // x1
  FirebaseScript_c *v27; // x0

  if ( (byte_4B1DED9 & 1) == 0 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_14144/*"The token wasn't created in time"*/, v3);
    sub_1BCAFF8(&StringLiteral_16675/*"appCheckToken"*/, v4);
    sub_1BCAFF8(&StringLiteral_16673/*"appCheckErrorMessage"*/, v5);
    sub_1BCAFF8(&StringLiteral_6699/*"Firebase wasn't available"*/, v6);
    byte_4B1DED9 = 1;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4B165D0 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, method);
    byte_4B165D0 = 1;
  }
  v7 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v7 = FirebaseScript_TypeInfo;
  }
  if ( !v7->static_fields->_CanUseFirebase_k__BackingField )
  {
    if ( !v7->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v7);
    if ( !byte_4B1BDF1 )
    {
      sub_1BCAFF8(&FirebaseScript_TypeInfo, method);
      byte_4B1BDF1 = 1;
    }
    v7 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v7 = FirebaseScript_TypeInfo;
    }
    if ( v7->static_fields->_IsFirebaseInitialized_k__BackingField )
    {
      v13 = &StringLiteral_6699/*"Firebase wasn't available"*/;
      goto LABEL_32;
    }
  }
  if ( !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  if ( !byte_4B1BDF4 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, method);
    byte_4B1BDF4 = 1;
  }
  v8 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v8 = FirebaseScript_TypeInfo;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v8->static_fields->_AppCheckToken_k__BackingField, 0LL);
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    if ( IsNullOrEmpty )
      goto LABEL_18;
LABEL_34:
    if ( !byte_4B1BDF4 )
    {
      sub_1BCAFF8(&FirebaseScript_TypeInfo, v9);
      byte_4B1BDF4 = 1;
    }
    v16 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v16 = FirebaseScript_TypeInfo;
    }
    v17 = &StringLiteral_16675/*"appCheckToken"*/;
    AppCheckToken_k__BackingField = v16->static_fields->_AppCheckToken_k__BackingField;
    goto LABEL_46;
  }
  if ( !IsNullOrEmpty )
    goto LABEL_34;
LABEL_18:
  if ( !byte_4B1BDF5 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, v9);
    byte_4B1BDF5 = 1;
  }
  v11 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v11 = FirebaseScript_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v11->static_fields->_AppCheckTokenError_k__BackingField, 0LL) )
  {
    v13 = &StringLiteral_14144/*"The token wasn't created in time"*/;
LABEL_32:
    RequestBase__addField_43348616(
      (RequestBase_o *)this,
      (System_String_o *)StringLiteral_16673/*"appCheckErrorMessage"*/,
      (System_String_o *)*v13,
      0LL);
    v15 = 0;
    goto LABEL_47;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4B1BDF5 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, v12);
    byte_4B1BDF5 = 1;
  }
  v19 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v19 = FirebaseScript_TypeInfo;
  }
  v17 = &StringLiteral_16673/*"appCheckErrorMessage"*/;
  AppCheckToken_k__BackingField = v19->static_fields->_AppCheckTokenError_k__BackingField;
LABEL_46:
  RequestBase__addField_43348616((RequestBase_o *)this, (System_String_o *)*v17, AppCheckToken_k__BackingField, 0LL);
  v15 = 1;
LABEL_47:
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4B1BDF0 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, v14);
    byte_4B1BDF0 = 1;
  }
  v20 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v20 = FirebaseScript_TypeInfo;
  }
  v20->static_fields->_IsSendAppCheckToken_k__BackingField = v15;
  if ( !byte_4B1BDF3 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, v14);
    v20 = FirebaseScript_TypeInfo;
    byte_4B1BDF3 = 1;
  }
  if ( !v20->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v20);
    v20 = FirebaseScript_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v20->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0LL) )
  {
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    if ( !byte_4B1BDF3 )
    {
      sub_1BCAFF8(&FirebaseScript_TypeInfo, v21);
      byte_4B1BDF3 = 1;
    }
    v22 = FirebaseScript_TypeInfo;
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v22 = FirebaseScript_TypeInfo;
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
      if ( !byte_4B1BDF3 )
      {
        sub_1BCAFF8(&FirebaseScript_TypeInfo, v24);
        v22 = FirebaseScript_TypeInfo;
        byte_4B1BDF3 = 1;
      }
    }
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = FirebaseScript_TypeInfo;
    }
    String_70094888 = UnityEngine_PlayerPrefs__GetString_70094888(
                        v22->static_fields->_AppCheckPrevMessageKey_k__BackingField,
                        0LL);
    RequestBase__addField_43348616((RequestBase_o *)this, AppCheckPrevMessageKey_k__BackingField, String_70094888, 0LL);
    if ( !byte_4B1BDF3 )
    {
      sub_1BCAFF8(&FirebaseScript_TypeInfo, v26);
      byte_4B1BDF3 = 1;
    }
    v27 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v27 = FirebaseScript_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v27->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0LL);
  }
}


void __fastcall AccountRegistRequest__beginRequest(AccountRegistRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4B1DED8 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1DED8 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  AccountRegistRequest__AddAppCheckField(this, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getMockData(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B1DED6 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_9058/*"MockAccountRegistRequest"*/, v2);
    byte_4B1DED6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9058/*"MockAccountRegistRequest"*/, 0LL);
}


System_String_o *__fastcall AccountRegistRequest__getURL(AccountRegistRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1DED5 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_16504/*"account/regist"*/, v2);
    byte_4B1DED5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_16504/*"account/regist"*/, 0LL);
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
  __int64 *v20; // x8

  if ( (byte_4B1DED7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6);
    sub_1BCAFF8(&StringLiteral_22181/*"ok"*/, v7);
    sub_1BCAFF8(&StringLiteral_16808/*"authKey"*/, v8);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v9);
    sub_1BCAFF8(&StringLiteral_23039/*"secretKey"*/, v10);
    sub_1BCAFF8(&StringLiteral_24337/*"userId"*/, v11);
    byte_4B1DED7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v12 = ResponseCommandKind__SearchData(2, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_43347888(v12, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v13->fields.success,
             (Il2CppObject *)StringLiteral_24337/*"userId"*/,
             (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_16;
    v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_16808/*"authKey"*/,
             (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item
      || (v18 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr),
          (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                    success,
                    (Il2CppObject *)StringLiteral_23039/*"secretKey"*/,
                    (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL)
      || (v19 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetAuth((NetworkManager_o *)Item, v17, v18, v19, 0LL),
          (Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_16:
      sub_1BCB254(Item, v16);
    }
    NetworkManager__WriteAuth((NetworkManager_o *)Item, 0LL);
    v20 = &StringLiteral_22181/*"ok"*/;
  }
  else
  {
    v20 = &StringLiteral_22015/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v20, 0LL);
}