System_String_o *TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  if ( (byte_59724ED & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_9519/*"MockTopGameDataRequest"*/);
    byte_59724ED = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9519/*"MockTopGameDataRequest"*/, 0);
}


System_String_o *TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_59724EE & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_9520/*"MockTopGameDataRequest.txt"*/);
    byte_59724EE = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_596E50A )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596E50A = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v2 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_75651716(v2->static_fields->gameServerAddress, (System_String_o *)StringLiteral_9520/*"MockTopGameDataRequest.txt"*/, 0);
}


System_String_o *TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59724EC & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20683/*"gamedata/top"*/);
    byte_59724EC = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20683/*"gamedata/top"*/, 0);
}


bool TopGameDataRequest__get_isNoRedirect(TopGameDataRequest_o *this, const MethodInfo *method)
{
  return *(&this->fields.shouldShowConnect + 1);
}


void TopGameDataRequest__requestCompleted(
        TopGameDataRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v6; // x9
  ResponseCommandKind_c *v7; // x0
  int v8; // w9
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  ResponseData_o *v11; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v14; // x1
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  Il2CppObject *Instance; // x23
  int32_t v18; // w21
  int64_t v19; // x22
  __int64 v20; // x1
  System_String_o *v21; // x21
  __int64 v22; // x1
  System_Byte_array *v23; // x21
  __int64 v24; // x1
  Il2CppObject *v25; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_47982492; // x0
  System_Collections_Generic_Dictionary_object__object__o *v27; // x21
  __int64 v28; // x1
  System_String_o *v29; // x22
  __int64 v30; // x1
  System_String_o *v31; // x22
  __int64 v32; // x1
  System_String_o *v33; // x21
  __int64 v34; // x1
  System_String_o *v35; // x21
  __int64 v36; // x1
  System_Byte_array *v37; // x21
  Il2CppObject *v38; // x0
  Il2CppObject *v39; // x21
  Il2CppObject *v40; // x21

  if ( (byte_59724EF & 1) == 0 )
  {
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_24534/*"serverHash"*/);
    sub_2213A60(&StringLiteral_19324/*"dateVer"*/);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_19311/*"dataVer"*/);
    sub_2213A60(&StringLiteral_17631/*"assetbundleKey"*/);
    sub_2213A60(&StringLiteral_22535/*"master"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_17629/*"assetbundle"*/);
    sub_2213A60(&StringLiteral_26172/*"webview"*/);
    sub_2213A60(&StringLiteral_17495/*"animalName"*/);
    sub_2213A60(&StringLiteral_20434/*"folderName"*/);
    sub_2213A60(&StringLiteral_26407/*"zooName"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_59724EF = 1;
  }
  if ( *(&this->fields.shouldShowConnect + 1) )
  {
LABEL_4:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v6 = &StringLiteral_23515/*"ok"*/;
LABEL_60:
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        *v6,
        CallBack->fields.method);
      return;
    }
    return;
  }
  if ( (byte_59724F0 & 1) == 0 )
  {
    sub_2213A60(&TopHomeRequest_TypeInfo);
    byte_59724F0 = 1;
  }
  v7 = ResponseCommandKind_TypeInfo;
  v8 = *(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1);
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, responseList);
  v9 = ResponseCommandKind__SearchData(3, responseList, 0);
  if ( v9 )
  {
    v11 = v9;
    if ( ResponseData__checkError(v9, v9->fields.resCode, v10) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.success;
      if ( success )
      {
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_19311/*"dataVer"*/,
               (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_19311/*"dataVer"*/,
                   (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v15 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method);
          v16 = (System_String_o *)StringLiteral_1198/*"0"*/;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_19324/*"dateVer"*/,
                 (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     success,
                     (Il2CppObject *)StringLiteral_19324/*"dateVer"*/,
                     (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !Item )
              goto LABEL_62;
            v16 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                       Item,
                                       Item->klass->vtable[3].method);
          }
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_22535/*"master"*/,
                 (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            v18 = System_Int32__Parse(v15, 0);
            v19 = System_Int64__Parse(v16, 0);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     success,
                     (Il2CppObject *)StringLiteral_22535/*"master"*/,
                     (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !Instance )
              goto LABEL_62;
            DataManager__setMasterData((DataManager_o *)Instance, v18, v19, Item, 0);
          }
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_17629/*"assetbundle"*/,
               (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_17629/*"assetbundle"*/,
                   (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v21 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method);
          if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v20);
          v23 = System_Convert__FromBase64String(v21, 0);
          if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v22);
          v25 = CatAndMouseGame__MouseInfoMsgPack(v23, 0);
          if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v24);
          Dictionary_47982492 = JsonManager__getDictionary_47982492(v25, 0);
          if ( Dictionary_47982492 )
          {
            v27 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_47982492;
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_47982492,
                   (Il2CppObject *)StringLiteral_20434/*"folderName"*/,
                   (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v27,
                       (Il2CppObject *)StringLiteral_20434/*"folderName"*/,
                       (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v29 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                         Item,
                                         Item->klass->vtable[3].method);
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
              NetworkManager__SetDataServerFolderName(v29, 0);
            }
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v27,
                   (Il2CppObject *)StringLiteral_17495/*"animalName"*/,
                   (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v27,
                       (Il2CppObject *)StringLiteral_17495/*"animalName"*/,
                       (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v31 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                         Item,
                                         Item->klass->vtable[3].method);
              if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v30);
              CatAndMouseGame__ThirdHomeBuilding(v31, 0);
            }
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v27,
                   (Il2CppObject *)StringLiteral_26407/*"zooName"*/,
                   (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v27,
                       (Il2CppObject *)StringLiteral_26407/*"zooName"*/,
                       (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v33 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                         Item,
                                         Item->klass->vtable[3].method);
              if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v32);
              CatAndMouseGame__ForthHomeBuilding(v33, 0);
            }
          }
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_17631/*"assetbundleKey"*/,
               (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_17631/*"assetbundleKey"*/,
                   (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v35 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method);
          if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v34);
          v37 = System_Convert__FromBase64String(v35, 0);
          if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v36);
          v38 = CatAndMouseGame__MouseInfoMsgPack(v37, 0);
          CatAndMouseGame__SetAssetbundleKeys(v38, 0);
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_26172/*"webview"*/,
               (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_26172/*"webview"*/,
                   (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v39 )
            goto LABEL_62;
          DataManager__setWebViewData((DataManager_o *)v39, Item, 0);
        }
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                success,
                (Il2CppObject *)StringLiteral_24534/*"serverHash"*/,
                (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_4;
        v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_24534/*"serverHash"*/,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v40 )
        {
          DataManager__setServerHash((DataManager_o *)v40, Item, 0);
          goto LABEL_4;
        }
LABEL_62:
        sub_2213CDC(Item, v14);
      }
    }
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v6 = &StringLiteral_23336/*"ng"*/;
    goto LABEL_60;
  }
}


void TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  *(&this->fields.shouldShowConnect + 1) = value;
}