void __fastcall TopGameDataRequest___ctor(TopGameDataRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42EAC1F & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9260/*"MockTopGameDataRequest"*/, v4, v5, v6);
    byte_42EAC1F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9260/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  NetworkManager_c *v7; // x0

  if ( (byte_42EAC20 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9261/*"MockTopGameDataRequest.txt"*/, v4, v5, v6);
    byte_42EAC20 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42E9416 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9416 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_44577788(
           v7->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9261/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EAC1E & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19195/*"gamedata/top"*/, v4, v5, v6);
    byte_42EAC1E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_19195/*"gamedata/top"*/, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  __int64 *v69; // x8
  TopHomeRequest_c *v70; // x0
  ResponseData_o *v71; // x0
  ResponseData_o *v72; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v75; // x1
  System_String_o *v76; // x21
  System_String_o *v77; // x22
  WebViewManager_o *Instance; // x23
  int32_t v79; // w21
  int64_t v80; // x22
  System_String_o *v81; // x21
  System_Byte_array *v82; // x21
  Il2CppObject *v83; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_23840980; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v85; // x21
  System_String_o *v86; // x22
  System_String_o *v87; // x22
  System_String_o *v88; // x21
  System_String_o *v89; // x21
  System_Byte_array *v90; // x21
  Il2CppObject *v91; // x0
  WebViewManager_o *v92; // x21
  WebViewManager_o *v93; // x21

  if ( (byte_42EAC21 & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&System_Convert_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22288/*"serverHash"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_18112/*"dateVer"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_18096/*"dataVer"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_16694/*"assetbundleKey"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_20644/*"master"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_16692/*"assetbundle"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_23574/*"webview"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_16545/*"animalName"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_19014/*"folderName"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_23778/*"zooName"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v66, v67, v68);
    byte_42EAC21 = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
    goto LABEL_4;
  v70 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v70);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v71 = ResponseCommandKind__SearchData(3, responseList, 0LL);
  if ( !v71
    || (v72 = v71, !ResponseData__checkError_29500464(v71, 0LL))
    || (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v72->fields.success) == 0LL )
  {
    v69 = &StringLiteral_21345/*"ng"*/;
    goto LABEL_68;
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18096/*"dataVer"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_18096/*"dataVer"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v76 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    v77 = (System_String_o *)StringLiteral_973/*"0"*/;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18112/*"dateVer"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               success,
                               (System_Type_o *)StringLiteral_18112/*"dateVer"*/,
                               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_69;
      v77 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_20644/*"master"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v79 = System_Int32__Parse(v76, 0LL);
      v80 = System_Int64__Parse(v77, 0LL);
      Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               success,
                               (System_Type_o *)StringLiteral_20644/*"master"*/,
                               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Instance )
        goto LABEL_69;
      DataManager__setMasterData((DataManager_o *)Instance, v79, v80, Item, 0LL);
    }
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16692/*"assetbundle"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_16692/*"assetbundle"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v81 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v82 = System_Convert__FromBase64String(v81, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v83 = CatAndMouseGame__MouseInfoMsgPack(v82, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary_23840980 = JsonManager__getDictionary_23840980(v83, 0LL);
    if ( Dictionary_23840980 )
    {
      v85 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary_23840980;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary_23840980,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_19014/*"folderName"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v85,
                                 (System_Type_o *)StringLiteral_19014/*"folderName"*/,
                                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v86 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__SetDataServerFolderName(v86, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v85,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_16545/*"animalName"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v85,
                                 (System_Type_o *)StringLiteral_16545/*"animalName"*/,
                                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v87 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        CatAndMouseGame__ThirdHomeBuilding(v87, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v85,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_23778/*"zooName"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v85,
                                 (System_Type_o *)StringLiteral_23778/*"zooName"*/,
                                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_69;
        v88 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        CatAndMouseGame__ForthHomeBuilding(v88, 0LL);
      }
    }
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16694/*"assetbundleKey"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_16694/*"assetbundleKey"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_69;
    v89 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v90 = System_Convert__FromBase64String(v89, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v91 = CatAndMouseGame__MouseInfoMsgPack(v90, 0LL);
    CatAndMouseGame__SetAssetbundleKeys(v91, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23574/*"webview"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23574/*"webview"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v92 )
      goto LABEL_69;
    DataManager__setWebViewData((DataManager_o *)v92, Item, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22288/*"serverHash"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v93 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_22288/*"serverHash"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( v93 )
    {
      DataManager__setServerHash((DataManager_o *)v93, Item, 0LL);
      goto LABEL_4;
    }
LABEL_69:
    sub_B5D69C(Item, v75);
  }
LABEL_4:
  v69 = &StringLiteral_21497/*"ok"*/;
LABEL_68:
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v69, 0LL);
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}