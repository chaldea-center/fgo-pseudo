void __fastcall TopGameDataRequest___ctor(TopGameDataRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BC94D1 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_9290/*"MockTopGameDataRequest"*/, v2);
    byte_4BC94D1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9290/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0

  if ( (byte_4BC94D2 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_9291/*"MockTopGameDataRequest.txt"*/, v2);
    byte_4BC94D2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC5A44 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC5A44 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_63040368(
           v3->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9291/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC94D0 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_20033/*"gamedata/top"*/, v2);
    byte_4BC94D0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_20033/*"gamedata/top"*/, 0LL);
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
  __int64 *v25; // x8
  ResponseData_o *v26; // x0
  const MethodInfo *v27; // x2
  ResponseData_o *v28; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v31; // x1
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  Il2CppObject *Instance; // x23
  int32_t v35; // w21
  int64_t v36; // x22
  System_String_o *v37; // x21
  System_Byte_array *v38; // x21
  Il2CppObject *v39; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_39353960; // x0
  System_Collections_Generic_Dictionary_object__object__o *v41; // x21
  System_String_o *v42; // x22
  System_String_o *v43; // x22
  System_String_o *v44; // x21
  System_String_o *v45; // x21
  System_Byte_array *v46; // x21
  Il2CppObject *v47; // x0
  Il2CppObject *v48; // x21
  Il2CppObject *v49; // x21

  if ( (byte_4BC94D3 & 1) == 0 )
  {
    sub_1C1ABD4(&CatAndMouseGame_TypeInfo, responseList);
    sub_1C1ABD4(&System_Convert_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C1ABD4(&JsonManager_TypeInfo, v8);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C1ABD4(&StringLiteral_23529/*"serverHash"*/, v12);
    sub_1C1ABD4(&StringLiteral_18782/*"dateVer"*/, v13);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v14);
    sub_1C1ABD4(&StringLiteral_18767/*"dataVer"*/, v15);
    sub_1C1ABD4(&StringLiteral_17210/*"assetbundleKey"*/, v16);
    sub_1C1ABD4(&StringLiteral_21659/*"master"*/, v17);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v18);
    sub_1C1ABD4(&StringLiteral_17208/*"assetbundle"*/, v19);
    sub_1C1ABD4(&StringLiteral_25095/*"webview"*/, v20);
    sub_1C1ABD4(&StringLiteral_17051/*"animalName"*/, v21);
    sub_1C1ABD4(&StringLiteral_19812/*"folderName"*/, v22);
    sub_1C1ABD4(&StringLiteral_25331/*"zooName"*/, v23);
    sub_1C1ABD4(&StringLiteral_1212/*"0"*/, v24);
    byte_4BC94D3 = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
    goto LABEL_4;
  if ( (byte_4BC94D4 & 1) == 0 )
  {
    sub_1C1ABD4(&TopHomeRequest_TypeInfo, responseList);
    byte_4BC94D4 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v26 = ResponseCommandKind__SearchData(3, responseList, 0LL);
  if ( !v26
    || (v28 = v26, !ResponseData__checkError(v26, v26->fields.resCode, v27))
    || (success = (System_Collections_Generic_Dictionary_object__object__o *)v28->fields.success) == 0LL )
  {
    v25 = &StringLiteral_22437/*"ng"*/;
    goto LABEL_58;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_18767/*"dataVer"*/,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_18767/*"dataVer"*/,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v32 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    v33 = (System_String_o *)StringLiteral_1212/*"0"*/;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           success,
           (Il2CppObject *)StringLiteral_18782/*"dateVer"*/,
           (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_18782/*"dateVer"*/,
               (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v33 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           success,
           (Il2CppObject *)StringLiteral_21659/*"master"*/,
           (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v35 = System_Int32__Parse(v32, 0LL);
      v36 = System_Int64__Parse(v33, 0LL);
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_21659/*"master"*/,
               (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Instance )
        goto LABEL_59;
      DataManager__setMasterData((DataManager_o *)Instance, v35, v36, Item, 0LL);
    }
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_17208/*"assetbundle"*/,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17208/*"assetbundle"*/,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v37 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v38 = System_Convert__FromBase64String(v37, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v39 = CatAndMouseGame__MouseInfoMsgPack(v38, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary_39353960 = JsonManager__getDictionary_39353960(v39, 0LL);
    if ( Dictionary_39353960 )
    {
      v41 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_39353960;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_39353960,
             (Il2CppObject *)StringLiteral_19812/*"folderName"*/,
             (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v41,
                 (Il2CppObject *)StringLiteral_19812/*"folderName"*/,
                 (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v42 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__SetDataServerFolderName(v42, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v41,
             (Il2CppObject *)StringLiteral_17051/*"animalName"*/,
             (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v41,
                 (Il2CppObject *)StringLiteral_17051/*"animalName"*/,
                 (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v43 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        CatAndMouseGame__ThirdHomeBuilding(v43, 0LL);
      }
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v41,
             (Il2CppObject *)StringLiteral_25331/*"zooName"*/,
             (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v41,
                 (Il2CppObject *)StringLiteral_25331/*"zooName"*/,
                 (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !Item )
          goto LABEL_59;
        v44 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        CatAndMouseGame__ForthHomeBuilding(v44, 0LL);
      }
    }
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_17210/*"assetbundleKey"*/,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17210/*"assetbundleKey"*/,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_59;
    v45 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v46 = System_Convert__FromBase64String(v45, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v47 = CatAndMouseGame__MouseInfoMsgPack(v46, 0LL);
    CatAndMouseGame__SetAssetbundleKeys(v47, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_25095/*"webview"*/,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25095/*"webview"*/,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v48 )
      goto LABEL_59;
    DataManager__setWebViewData((DataManager_o *)v48, Item, 0LL);
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         success,
         (Il2CppObject *)StringLiteral_23529/*"serverHash"*/,
         (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_23529/*"serverHash"*/,
             (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( v49 )
    {
      DataManager__setServerHash((DataManager_o *)v49, Item, 0LL);
      goto LABEL_4;
    }
LABEL_59:
    sub_1C1AE30(Item, v31);
  }
LABEL_4:
  v25 = &StringLiteral_22613/*"ok"*/;
LABEL_58:
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v25, 0LL);
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}