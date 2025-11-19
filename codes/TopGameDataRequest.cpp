System_String_o *TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7F03 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9137/*"MockTopGameDataRequest"*/);
    byte_4CB7F03 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9137/*"MockTopGameDataRequest"*/, 0);
}


System_String_o *TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4CB7F04 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9138/*"MockTopGameDataRequest.txt"*/);
    byte_4CB7F04 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB409B )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB409B = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_63966792(v2->static_fields->gameServerAddress, (System_String_o *)StringLiteral_9138/*"MockTopGameDataRequest.txt"*/, 0);
}


System_String_o *TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7F02 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19816/*"gamedata/top"*/);
    byte_4CB7F02 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19816/*"gamedata/top"*/, 0);
}


bool TopGameDataRequest__get_isNoRedirect(TopGameDataRequest_o *this, const MethodInfo *method)
{
  return this->fields._isNoRedirect_k__BackingField;
}


void TopGameDataRequest__requestCompleted(
        TopGameDataRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v6; // x9
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  System_String_o *v14; // x22
  Il2CppObject *Instance; // x23
  int32_t v16; // w21
  int64_t v17; // x22
  System_String_o *v18; // x21
  System_Byte_array *v19; // x21
  Il2CppObject *v20; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_41168016; // x0
  System_Collections_Generic_Dictionary_object__object__o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x22
  System_String_o *v25; // x21
  System_String_o *v26; // x21
  System_Byte_array *v27; // x21
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x21
  Il2CppObject *v30; // x21

  if ( (byte_4CB7F05 & 1) == 0 )
  {
    sub_1C6BA08(&CatAndMouseGame_TypeInfo);
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_23399/*"serverHash"*/);
    sub_1C6BA08(&StringLiteral_18519/*"dateVer"*/);
    sub_1C6BA08(&StringLiteral_22471/*"ok"*/);
    sub_1C6BA08(&StringLiteral_18506/*"dataVer"*/);
    sub_1C6BA08(&StringLiteral_16928/*"assetbundleKey"*/);
    sub_1C6BA08(&StringLiteral_21526/*"master"*/);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_16926/*"assetbundle"*/);
    sub_1C6BA08(&StringLiteral_24907/*"webview"*/);
    sub_1C6BA08(&StringLiteral_16796/*"animalName"*/);
    sub_1C6BA08(&StringLiteral_19578/*"folderName"*/);
    sub_1C6BA08(&StringLiteral_25138/*"zooName"*/);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB7F05 = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
  {
LABEL_4:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v6 = &StringLiteral_22471/*"ok"*/;
LABEL_60:
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        *v6,
        CallBack->fields.method);
      return;
    }
    return;
  }
  if ( (byte_4CB7F06 & 1) == 0 )
  {
    sub_1C6BA08(&TopHomeRequest_TypeInfo);
    byte_4CB7F06 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(3, responseList, 0);
  if ( v7 )
  {
    v9 = v7;
    if ( ResponseData__checkError(v7, v7->fields.resCode, v8) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v9->fields.success;
      if ( success )
      {
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_18506/*"dataVer"*/,
               (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_18506/*"dataVer"*/,
                   (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method);
          v14 = (System_String_o *)StringLiteral_1115/*"0"*/;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_18519/*"dateVer"*/,
                 (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     success,
                     (Il2CppObject *)StringLiteral_18519/*"dateVer"*/,
                     (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !Item )
              goto LABEL_62;
            v14 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                       Item,
                                       Item->klass->vtable[3].method);
          }
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_21526/*"master"*/,
                 (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            v16 = System_Int32__Parse(v13, 0);
            v17 = System_Int64__Parse(v14, 0);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     success,
                     (Il2CppObject *)StringLiteral_21526/*"master"*/,
                     (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !Instance )
              goto LABEL_62;
            DataManager__setMasterData((DataManager_o *)Instance, v16, v17, Item, 0);
          }
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_16926/*"assetbundle"*/,
               (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_16926/*"assetbundle"*/,
                   (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v18 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method);
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v19 = System_Convert__FromBase64String(v18, 0);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v20 = CatAndMouseGame__MouseInfoMsgPack(v19, 0);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          Dictionary_41168016 = JsonManager__getDictionary_41168016(v20, 0);
          if ( Dictionary_41168016 )
          {
            v22 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_41168016;
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_41168016,
                   (Il2CppObject *)StringLiteral_19578/*"folderName"*/,
                   (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v22,
                       (Il2CppObject *)StringLiteral_19578/*"folderName"*/,
                       (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v23 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                         Item,
                                         Item->klass->vtable[3].method);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              NetworkManager__SetDataServerFolderName(v23, 0);
            }
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v22,
                   (Il2CppObject *)StringLiteral_16796/*"animalName"*/,
                   (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v22,
                       (Il2CppObject *)StringLiteral_16796/*"animalName"*/,
                       (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v24 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                         Item,
                                         Item->klass->vtable[3].method);
              if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
              CatAndMouseGame__ThirdHomeBuilding(v24, 0);
            }
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v22,
                   (Il2CppObject *)StringLiteral_25138/*"zooName"*/,
                   (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v22,
                       (Il2CppObject *)StringLiteral_25138/*"zooName"*/,
                       (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v25 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                         Item,
                                         Item->klass->vtable[3].method);
              if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
              CatAndMouseGame__ForthHomeBuilding(v25, 0);
            }
          }
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_16928/*"assetbundleKey"*/,
               (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_16928/*"assetbundleKey"*/,
                   (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v26 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->klass->vtable[3].method);
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v27 = System_Convert__FromBase64String(v26, 0);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v28 = CatAndMouseGame__MouseInfoMsgPack(v27, 0);
          CatAndMouseGame__SetAssetbundleKeys(v28, 0);
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_24907/*"webview"*/,
               (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_24907/*"webview"*/,
                   (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v29 )
            goto LABEL_62;
          DataManager__setWebViewData((DataManager_o *)v29, Item, 0);
        }
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                success,
                (Il2CppObject *)StringLiteral_23399/*"serverHash"*/,
                (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_4;
        v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23399/*"serverHash"*/,
                 (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v30 )
        {
          DataManager__setServerHash((DataManager_o *)v30, Item, 0);
          goto LABEL_4;
        }
LABEL_62:
        sub_1C6BC60(Item, v12);
      }
    }
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v6 = &StringLiteral_22301/*"ng"*/;
    goto LABEL_60;
  }
}


void TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}