void __fastcall TopGameDataRequest___ctor(TopGameDataRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDF7B & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9300/*"MockTopGameDataRequest"*/);
    byte_4BDDF7B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9300/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4BDDF7C & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9301/*"MockTopGameDataRequest.txt"*/);
    byte_4BDDF7C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BDA4D3 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDA4D3 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_63115476(
           v2->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9301/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDF7A & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_20048/*"gamedata/top"*/);
    byte_4BDDF7A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_20048/*"gamedata/top"*/, 0LL);
}


bool __fastcall TopGameDataRequest__get_isNoRedirect(TopGameDataRequest_o *this, const MethodInfo *method)
{
  return this->fields._isNoRedirect_k__BackingField;
}


void __fastcall TopGameDataRequest__requestCompleted(
        TopGameDataRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 *v5; // x8
  ResponseData_o *v6; // x0
  const MethodInfo *v7; // x2
  ResponseData_o *v8; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  Il2CppObject *Instance; // x23
  int32_t v15; // w21
  int64_t v16; // x22
  System_String_o *v17; // x21
  System_Byte_array *v18; // x21
  Il2CppObject *v19; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_39400404; // x0
  System_Collections_Generic_Dictionary_object__object__o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x22
  System_String_o *v24; // x21
  System_String_o *v25; // x21
  System_Byte_array *v26; // x21
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x21

  if ( (byte_4BDDF7D & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_23549/*"serverHash"*/);
    sub_1C21E38(&StringLiteral_18797/*"dateVer"*/);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_18782/*"dataVer"*/);
    sub_1C21E38(&StringLiteral_17223/*"assetbundleKey"*/);
    sub_1C21E38(&StringLiteral_21677/*"master"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_17221/*"assetbundle"*/);
    sub_1C21E38(&StringLiteral_25116/*"webview"*/);
    sub_1C21E38(&StringLiteral_17063/*"animalName"*/);
    sub_1C21E38(&StringLiteral_19827/*"folderName"*/);
    sub_1C21E38(&StringLiteral_25353/*"zooName"*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BDDF7D = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
    goto LABEL_4;
  if ( (byte_4BDDF7E & 1) == 0 )
  {
    sub_1C21E38(&TopHomeRequest_TypeInfo);
    byte_4BDDF7E = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v6 = ResponseCommandKind__SearchData(3, responseList, 0LL);
  if ( !v6
    || (v8 = v6, !ResponseData__checkError(v6, v6->fields.resCode, v7))
    || (success = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.success) == 0LL )
  {
    v5 = &StringLiteral_22456/*"ng"*/;
    goto LABEL_58;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_18782/*"dataVer"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_18782/*"dataVer"*/,
             (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    v13 = (System_String_o *)StringLiteral_1212/*"0"*/;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           success,
           (Il2CppObject *)StringLiteral_18797/*"dateVer"*/,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_18797/*"dateVer"*/,
               (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           success,
           (Il2CppObject *)StringLiteral_21677/*"master"*/,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v15 = System_Int32__Parse(v12, 0LL);
      v16 = System_Int64__Parse(v13, 0LL);
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_21677/*"master"*/,
               (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Instance )
        goto LABEL_59;
      DataManager__setMasterData((DataManager_o *)Instance, v15, v16, Item, 0LL);
    }
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_17221/*"assetbundle"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17221/*"assetbundle"*/,
             (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v18 = System_Convert__FromBase64String(v17, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v19 = CatAndMouseGame__MouseInfoMsgPack(v18, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary_39400404 = JsonManager__getDictionary_39400404(v19, 0LL);
    if ( Dictionary_39400404 )
    {
      v21 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_39400404;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_39400404,
             (Il2CppObject *)StringLiteral_19827/*"folderName"*/,
             (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v21,
                 (Il2CppObject *)StringLiteral_19827/*"folderName"*/,
                 (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v22 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__SetDataServerFolderName(v22, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v21,
             (Il2CppObject *)StringLiteral_17063/*"animalName"*/,
             (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v21,
                 (Il2CppObject *)StringLiteral_17063/*"animalName"*/,
                 (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v23 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        CatAndMouseGame__ThirdHomeBuilding(v23, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v21,
             (Il2CppObject *)StringLiteral_25353/*"zooName"*/,
             (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v21,
                 (Il2CppObject *)StringLiteral_25353/*"zooName"*/,
                 (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v24 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        CatAndMouseGame__ForthHomeBuilding(v24, 0LL);
      }
    }
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_17223/*"assetbundleKey"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17223/*"assetbundleKey"*/,
             (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v25 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v26 = System_Convert__FromBase64String(v25, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v27 = CatAndMouseGame__MouseInfoMsgPack(v26, 0LL);
    CatAndMouseGame__SetAssetbundleKeys(v27, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_25116/*"webview"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25116/*"webview"*/,
             (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v28 )
      goto LABEL_59;
    DataManager__setWebViewData((DataManager_o *)v28, Item, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_23549/*"serverHash"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23549/*"serverHash"*/,
             (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( v29 )
    {
      DataManager__setServerHash((DataManager_o *)v29, Item, 0LL);
      goto LABEL_4;
    }
LABEL_59:
    sub_1C22094(Item, v11);
  }
LABEL_4:
  v5 = &StringLiteral_22632/*"ok"*/;
LABEL_58:
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}