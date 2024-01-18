void __fastcall TopGameDataRequest___ctor(TopGameDataRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4189920 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9166/*"MockTopGameDataRequest"*/, v2);
    byte_4189920 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9166/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0

  if ( (byte_4189921 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9167/*"MockTopGameDataRequest.txt"*/, v2);
    byte_4189921 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_41889AD )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41889AD = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_44305532(
           v3->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9167/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418991F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18956/*"gamedata/top"*/, v2);
    byte_418991F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18956/*"gamedata/top"*/, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 *v26; // x8
  TopHomeRequest_c *v27; // x0
  ResponseData_o *v28; // x0
  ResponseData_o *v29; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v32; // x1
  System_String_o *v33; // x21
  System_String_o *v34; // x22
  WebViewManager_o *Instance; // x23
  int32_t v36; // w21
  int64_t v37; // x22
  System_String_o *v38; // x21
  System_Byte_array *v39; // x21
  Il2CppObject *v40; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_24067780; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v42; // x21
  System_String_o *v43; // x22
  System_String_o *v44; // x22
  System_String_o *v45; // x21
  System_String_o *v46; // x21
  System_Byte_array *v47; // x21
  Il2CppObject *v48; // x0
  WebViewManager_o *v49; // x21
  WebViewManager_o *v50; // x21

  if ( (byte_4189922 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, responseList);
    sub_B2C35C(&System_Convert_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&JsonManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&TopHomeRequest_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_21989/*"serverHash"*/, v13);
    sub_B2C35C(&StringLiteral_17893/*"dateVer"*/, v14);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v15);
    sub_B2C35C(&StringLiteral_17877/*"dataVer"*/, v16);
    sub_B2C35C(&StringLiteral_16496/*"assetbundleKey"*/, v17);
    sub_B2C35C(&StringLiteral_20384/*"master"*/, v18);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v19);
    sub_B2C35C(&StringLiteral_16494/*"assetbundle"*/, v20);
    sub_B2C35C(&StringLiteral_23263/*"webview"*/, v21);
    sub_B2C35C(&StringLiteral_16347/*"animalName"*/, v22);
    sub_B2C35C(&StringLiteral_18778/*"folderName"*/, v23);
    sub_B2C35C(&StringLiteral_23467/*"zooName"*/, v24);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v25);
    byte_4189922 = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
    goto LABEL_4;
  v27 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v27);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v28 = ResponseCommandKind__SearchData(3, responseList, 0LL);
  if ( !v28
    || (v29 = v28, !ResponseData__checkError_31019724(v28, 0LL))
    || (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v29->fields.success) == 0LL )
  {
    v26 = &StringLiteral_21068/*"ng"*/;
    goto LABEL_68;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17877/*"dataVer"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_17877/*"dataVer"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v33 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    v34 = (System_String_o *)StringLiteral_953/*"0"*/;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17893/*"dateVer"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               success,
                               (System_Type_o *)StringLiteral_17893/*"dateVer"*/,
                               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_69;
      v34 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_20384/*"master"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v36 = System_Int32__Parse(v33, 0LL);
      v37 = System_Int64__Parse(v34, 0LL);
      Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               success,
                               (System_Type_o *)StringLiteral_20384/*"master"*/,
                               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Instance )
        goto LABEL_69;
      DataManager__setMasterData((DataManager_o *)Instance, v36, v37, Item, 0LL);
    }
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16494/*"assetbundle"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_16494/*"assetbundle"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v38 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v39 = System_Convert__FromBase64String(v38, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v40 = CatAndMouseGame__MouseInfoMsgPack(v39, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary_24067780 = JsonManager__getDictionary_24067780(v40, 0LL);
    if ( Dictionary_24067780 )
    {
      v42 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary_24067780;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary_24067780,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_18778/*"folderName"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v42,
                                 (System_Type_o *)StringLiteral_18778/*"folderName"*/,
                                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v43 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__SetDataServerFolderName(v43, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v42,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_16347/*"animalName"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v42,
                                 (System_Type_o *)StringLiteral_16347/*"animalName"*/,
                                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v44 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        CatAndMouseGame__ThirdHomeBuilding(v44, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v42,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_23467/*"zooName"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v42,
                                 (System_Type_o *)StringLiteral_23467/*"zooName"*/,
                                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v45 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        CatAndMouseGame__ForthHomeBuilding(v45, 0LL);
      }
    }
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16496/*"assetbundleKey"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_16496/*"assetbundleKey"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v46 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v47 = System_Convert__FromBase64String(v46, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v48 = CatAndMouseGame__MouseInfoMsgPack(v47, 0LL);
    CatAndMouseGame__SetAssetbundleKeys(v48, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23263/*"webview"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23263/*"webview"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v49 )
      goto LABEL_69;
    DataManager__setWebViewData((DataManager_o *)v49, Item, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21989/*"serverHash"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_21989/*"serverHash"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( v50 )
    {
      DataManager__setServerHash((DataManager_o *)v50, Item, 0LL);
      goto LABEL_4;
    }
LABEL_69:
    sub_B2C434(Item, v32);
  }
LABEL_4:
  v26 = &StringLiteral_21218/*"ok"*/;
LABEL_68:
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v26, 0LL);
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}