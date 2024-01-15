void __fastcall TopGameDataRequest___ctor(TopGameDataRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FB7E9 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9136/*"MockTopGameDataRequest"*/, v2);
    byte_40FB7E9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9136/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0

  if ( (byte_40FB7EA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9137/*"MockTopGameDataRequest.txt"*/, v2);
    byte_40FB7EA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_40FA9CF )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FA9CF = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_43743732(
           v3->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9137/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FB7E8 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18884/*"gamedata/top"*/, v2);
    byte_40FB7E8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18884/*"gamedata/top"*/, 0LL);
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
  System_String_o **v26; // x8
  TopHomeRequest_c *v27; // x0
  ResponseData_o *v28; // x0
  ResponseData_o *v29; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  UnityEngine_Purchasing_IStoreExtension_o *v34; // x0
  WebViewManager_o *Instance; // x23
  int32_t v36; // w21
  int64_t v37; // x22
  Il2CppObject *v38; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v39; // x0
  System_String_o *v40; // x21
  System_Byte_array *v41; // x21
  Il2CppObject *v42; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_28953032; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v44; // x21
  UnityEngine_Purchasing_IStoreExtension_o *v45; // x0
  System_String_o *v46; // x22
  UnityEngine_Purchasing_IStoreExtension_o *v47; // x0
  System_String_o *v48; // x22
  UnityEngine_Purchasing_IStoreExtension_o *v49; // x0
  System_String_o *v50; // x21
  UnityEngine_Purchasing_IStoreExtension_o *v51; // x0
  System_String_o *v52; // x21
  System_Byte_array *v53; // x21
  Il2CppObject *v54; // x0
  WebViewManager_o *v55; // x21
  Il2CppObject *v56; // x0
  WebViewManager_o *v57; // x21
  Il2CppObject *v58; // x0

  if ( (byte_40FB7EB & 1) == 0 )
  {
    sub_B16FFC(&CatAndMouseGame_TypeInfo, responseList);
    sub_B16FFC(&System_Convert_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_21897/*"serverHash"*/, v13);
    sub_B16FFC(&StringLiteral_17825/*"dateVer"*/, v14);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v15);
    sub_B16FFC(&StringLiteral_17809/*"dataVer"*/, v16);
    sub_B16FFC(&StringLiteral_16432/*"assetbundleKey"*/, v17);
    sub_B16FFC(&StringLiteral_20301/*"master"*/, v18);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v19);
    sub_B16FFC(&StringLiteral_16430/*"assetbundle"*/, v20);
    sub_B16FFC(&StringLiteral_23169/*"webview"*/, v21);
    sub_B16FFC(&StringLiteral_16283/*"animalName"*/, v22);
    sub_B16FFC(&StringLiteral_18706/*"folderName"*/, v23);
    sub_B16FFC(&StringLiteral_23373/*"zooName"*/, v24);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v25);
    byte_40FB7EB = 1;
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
    || (v29 = v28, !ResponseData__checkError_30924960(v28, 0LL))
    || (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v29->fields.success) == 0LL )
  {
    v26 = (System_String_o **)&StringLiteral_20980/*"ng"*/;
    goto LABEL_68;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17809/*"dataVer"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_17809/*"dataVer"*/,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v32 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    v33 = (System_String_o *)StringLiteral_951/*"0"*/;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17825/*"dateVer"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v34 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              success,
              (System_Type_o *)StringLiteral_17825/*"dateVer"*/,
              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v34 )
        goto LABEL_69;
      v33 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v34->klass->vtable[3].method)(
                                 v34,
                                 v34->klass->vtable[4].methodPtr);
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_20301/*"master"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v36 = System_Int32__Parse(v32, 0LL);
      v37 = System_Int64__Parse(v33, 0LL);
      v38 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              success,
                              (System_Type_o *)StringLiteral_20301/*"master"*/,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Instance )
        goto LABEL_69;
      DataManager__setMasterData((DataManager_o *)Instance, v36, v37, v38, 0LL);
    }
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16430/*"assetbundle"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v39 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            success,
            (System_Type_o *)StringLiteral_16430/*"assetbundle"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v39 )
      goto LABEL_69;
    v40 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v39->klass->vtable[3].method)(
                               v39,
                               v39->klass->vtable[4].methodPtr);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v41 = System_Convert__FromBase64String(v40, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v42 = CatAndMouseGame__MouseInfoMsgPack(v41, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary_28953032 = JsonManager__getDictionary_28953032(v42, 0LL);
    if ( Dictionary_28953032 )
    {
      v44 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary_28953032;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary_28953032,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_18706/*"folderName"*/,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v45 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                v44,
                (System_Type_o *)StringLiteral_18706/*"folderName"*/,
                (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v45 )
          goto LABEL_69;
        v46 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v45->klass->vtable[3].method)(
                                   v45,
                                   v45->klass->vtable[4].methodPtr);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__SetDataServerFolderName(v46, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v44,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_16283/*"animalName"*/,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v47 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                v44,
                (System_Type_o *)StringLiteral_16283/*"animalName"*/,
                (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v47 )
          goto LABEL_69;
        v48 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v47->klass->vtable[3].method)(
                                   v47,
                                   v47->klass->vtable[4].methodPtr);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        CatAndMouseGame__ThirdHomeBuilding(v48, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v44,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_23373/*"zooName"*/,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v49 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                v44,
                (System_Type_o *)StringLiteral_23373/*"zooName"*/,
                (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v49 )
          goto LABEL_69;
        v50 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v49->klass->vtable[3].method)(
                                   v49,
                                   v49->klass->vtable[4].methodPtr);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        CatAndMouseGame__ForthHomeBuilding(v50, 0LL);
      }
    }
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16432/*"assetbundleKey"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v51 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            success,
            (System_Type_o *)StringLiteral_16432/*"assetbundleKey"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v51 )
      goto LABEL_69;
    v52 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v51->klass->vtable[3].method)(
                               v51,
                               v51->klass->vtable[4].methodPtr);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v53 = System_Convert__FromBase64String(v52, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v54 = CatAndMouseGame__MouseInfoMsgPack(v53, 0LL);
    CatAndMouseGame__SetAssetbundleKeys(v54, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23169/*"webview"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    v56 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            success,
                            (System_Type_o *)StringLiteral_23169/*"webview"*/,
                            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v55 )
      goto LABEL_69;
    DataManager__setWebViewData((DataManager_o *)v55, v56, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21897/*"serverHash"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v57 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    v58 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            success,
                            (System_Type_o *)StringLiteral_21897/*"serverHash"*/,
                            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( v57 )
    {
      DataManager__setServerHash((DataManager_o *)v57, v58, 0LL);
      goto LABEL_4;
    }
LABEL_69:
    sub_B170D4();
  }
LABEL_4:
  v26 = (System_String_o **)&StringLiteral_21129/*"ok"*/;
LABEL_68:
  RequestBase__completed((RequestBase_o *)this, *v26, 0LL);
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}