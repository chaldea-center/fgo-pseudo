void __fastcall TopGameDataRequest___ctor(TopGameDataRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4353D00 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_9275/*"MockTopGameDataRequest"*/);
    byte_4353D00 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9275/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4353D01 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_9276/*"MockTopGameDataRequest.txt"*/);
    byte_4353D01 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_435273D )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_435273D = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_44758168(
           v2->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9276/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4353CFF & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_19251/*"gamedata/top"*/);
    byte_4353CFF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_19251/*"gamedata/top"*/, 0LL);
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
  TopHomeRequest_c *v6; // x0
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  WebViewManager_o *Instance; // x23
  int32_t v15; // w21
  int64_t v16; // x22
  System_String_o *v17; // x21
  System_Byte_array *v18; // x21
  Il2CppObject *v19; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_23905808; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x22
  System_String_o *v24; // x21
  System_String_o *v25; // x21
  System_Byte_array *v26; // x21
  Il2CppObject *v27; // x0
  WebViewManager_o *v28; // x21
  WebViewManager_o *v29; // x21

  if ( (byte_4353D02 & 1) == 0 )
  {
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TopHomeRequest_TypeInfo);
    sub_B70694(&StringLiteral_22356/*"serverHash"*/);
    sub_B70694(&StringLiteral_18159/*"dateVer"*/);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    sub_B70694(&StringLiteral_18143/*"dataVer"*/);
    sub_B70694(&StringLiteral_16738/*"assetbundleKey"*/);
    sub_B70694(&StringLiteral_20704/*"master"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_16736/*"assetbundle"*/);
    sub_B70694(&StringLiteral_23646/*"webview"*/);
    sub_B70694(&StringLiteral_16589/*"animalName"*/);
    sub_B70694(&StringLiteral_19066/*"folderName"*/);
    sub_B70694(&StringLiteral_23850/*"zooName"*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    byte_4353D02 = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
    goto LABEL_4;
  v6 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v6);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(3, responseList, 0LL);
  if ( !v7
    || (v8 = v7, !ResponseData__checkError_29653500(v7, 0LL))
    || (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8->fields.success) == 0LL )
  {
    v5 = &StringLiteral_21408/*"ng"*/;
    goto LABEL_68;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18143/*"dataVer"*/,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_18143/*"dataVer"*/,
                             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    v13 = (System_String_o *)StringLiteral_978/*"0"*/;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18159/*"dateVer"*/,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               success,
                               (System_Type_o *)StringLiteral_18159/*"dateVer"*/,
                               (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_69;
      v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_20704/*"master"*/,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v15 = System_Int32__Parse(v12, 0LL);
      v16 = System_Int64__Parse(v13, 0LL);
      Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               success,
                               (System_Type_o *)StringLiteral_20704/*"master"*/,
                               (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Instance )
        goto LABEL_69;
      DataManager__setMasterData((DataManager_o *)Instance, v15, v16, Item, 0LL);
    }
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16736/*"assetbundle"*/,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_16736/*"assetbundle"*/,
                             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v18 = System_Convert__FromBase64String(v17, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v19 = CatAndMouseGame__MouseInfoMsgPack(v18, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary_23905808 = JsonManager__getDictionary_23905808(v19, 0LL);
    if ( Dictionary_23905808 )
    {
      v21 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary_23905808;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary_23905808,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_19066/*"folderName"*/,
             (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v21,
                                 (System_Type_o *)StringLiteral_19066/*"folderName"*/,
                                 (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v22 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__SetDataServerFolderName(v22, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_16589/*"animalName"*/,
             (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v21,
                                 (System_Type_o *)StringLiteral_16589/*"animalName"*/,
                                 (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v23 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        CatAndMouseGame__ThirdHomeBuilding(v23, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_23850/*"zooName"*/,
             (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v21,
                                 (System_Type_o *)StringLiteral_23850/*"zooName"*/,
                                 (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v24 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        CatAndMouseGame__ForthHomeBuilding(v24, 0LL);
      }
    }
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16738/*"assetbundleKey"*/,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_16738/*"assetbundleKey"*/,
                             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v25 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v26 = System_Convert__FromBase64String(v25, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v27 = CatAndMouseGame__MouseInfoMsgPack(v26, 0LL);
    CatAndMouseGame__SetAssetbundleKeys(v27, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23646/*"webview"*/,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23646/*"webview"*/,
                             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v28 )
      goto LABEL_69;
    DataManager__setWebViewData((DataManager_o *)v28, Item, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22356/*"serverHash"*/,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_22356/*"serverHash"*/,
                             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( v29 )
    {
      DataManager__setServerHash((DataManager_o *)v29, Item, 0LL);
      goto LABEL_4;
    }
LABEL_69:
    sub_B7076C(Item, v11);
  }
LABEL_4:
  v5 = &StringLiteral_21560/*"ok"*/;
LABEL_68:
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}