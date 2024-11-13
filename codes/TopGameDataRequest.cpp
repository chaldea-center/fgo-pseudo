void __fastcall TopGameDataRequest___ctor(TopGameDataRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17B97 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9239/*"MockTopGameDataRequest"*/, v3, v4);
    byte_4B17B97 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9239/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  NetworkManager_c *v5; // x0

  if ( (byte_4B17B98 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9240/*"MockTopGameDataRequest.txt"*/, v3, v4);
    byte_4B17B98 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_4B141E1 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B141E1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v5 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_62401220(
           v5->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9240/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B96 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19907/*"gamedata/top"*/, v3, v4);
    byte_4B17B96 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19907/*"gamedata/top"*/, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 *v45; // x8
  ResponseData_o *v46; // x0
  const MethodInfo *v47; // x2
  ResponseData_o *v48; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v51; // x1
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  Il2CppObject *Instance; // x23
  int32_t v55; // w21
  int64_t v56; // x22
  __int64 v57; // x1
  System_String_o *v58; // x21
  __int64 v59; // x1
  System_Byte_array *v60; // x21
  __int64 v61; // x1
  Il2CppObject *v62; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_38868828; // x0
  System_Collections_Generic_Dictionary_object__object__o *v64; // x21
  __int64 v65; // x1
  System_String_o *v66; // x22
  __int64 v67; // x1
  System_String_o *v68; // x22
  __int64 v69; // x1
  System_String_o *v70; // x21
  __int64 v71; // x1
  System_String_o *v72; // x21
  __int64 v73; // x1
  System_Byte_array *v74; // x21
  Il2CppObject *v75; // x0
  Il2CppObject *v76; // x21
  Il2CppObject *v77; // x21

  if ( (byte_4B17B99 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, responseList, method);
    sub_1BCA7E0(&System_Convert_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_23370/*"serverHash"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_18671/*"dateVer"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_18656/*"dataVer"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17109/*"assetbundleKey"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_21524/*"master"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17107/*"assetbundle"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_24929/*"webview"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_16950/*"animalName"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_19695/*"folderName"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_25165/*"zooName"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v43, v44);
    byte_4B17B99 = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
    goto LABEL_4;
  if ( (byte_4B17B9A & 1) == 0 )
  {
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, responseList, method);
    byte_4B17B9A = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v46 = ResponseCommandKind__SearchData(3, responseList, 0LL);
  if ( !v46
    || (v48 = v46, !ResponseData__checkError(v46, v46->fields.resCode, v47))
    || (success = (System_Collections_Generic_Dictionary_object__object__o *)v48->fields.success) == 0LL )
  {
    v45 = &StringLiteral_22292/*"ng"*/;
    goto LABEL_58;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_18656/*"dataVer"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_18656/*"dataVer"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v52 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    v53 = (System_String_o *)StringLiteral_1209/*"0"*/;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           success,
           (Il2CppObject *)StringLiteral_18671/*"dateVer"*/,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_18671/*"dateVer"*/,
               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v53 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           success,
           (Il2CppObject *)StringLiteral_21524/*"master"*/,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v55 = System_Int32__Parse(v52, 0LL);
      v56 = System_Int64__Parse(v53, 0LL);
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_21524/*"master"*/,
               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Instance )
        goto LABEL_59;
      DataManager__setMasterData((DataManager_o *)Instance, v55, v56, Item, 0LL);
    }
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_17107/*"assetbundle"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17107/*"assetbundle"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v58 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v57);
    v60 = System_Convert__FromBase64String(v58, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v59);
    v62 = CatAndMouseGame__MouseInfoMsgPack(v60, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v61);
    Dictionary_38868828 = JsonManager__getDictionary_38868828(v62, 0LL);
    if ( Dictionary_38868828 )
    {
      v64 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_38868828;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_38868828,
             (Il2CppObject *)StringLiteral_19695/*"folderName"*/,
             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v64,
                 (Il2CppObject *)StringLiteral_19695/*"folderName"*/,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v66 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v65);
        NetworkManager__SetDataServerFolderName(v66, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v64,
             (Il2CppObject *)StringLiteral_16950/*"animalName"*/,
             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v64,
                 (Il2CppObject *)StringLiteral_16950/*"animalName"*/,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v68 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v67);
        CatAndMouseGame__ThirdHomeBuilding(v68, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v64,
             (Il2CppObject *)StringLiteral_25165/*"zooName"*/,
             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v64,
                 (Il2CppObject *)StringLiteral_25165/*"zooName"*/,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v70 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v69);
        CatAndMouseGame__ForthHomeBuilding(v70, 0LL);
      }
    }
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_17109/*"assetbundleKey"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17109/*"assetbundleKey"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v72 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v71);
    v74 = System_Convert__FromBase64String(v72, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v73);
    v75 = CatAndMouseGame__MouseInfoMsgPack(v74, 0LL);
    CatAndMouseGame__SetAssetbundleKeys(v75, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_24929/*"webview"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v76 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24929/*"webview"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v76 )
      goto LABEL_59;
    DataManager__setWebViewData((DataManager_o *)v76, Item, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_23370/*"serverHash"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23370/*"serverHash"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( v77 )
    {
      DataManager__setServerHash((DataManager_o *)v77, Item, 0LL);
      goto LABEL_4;
    }
LABEL_59:
    sub_1BCAA3C(Item, v51);
  }
LABEL_4:
  v45 = &StringLiteral_22465/*"ok"*/;
LABEL_58:
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v45, 0LL);
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}