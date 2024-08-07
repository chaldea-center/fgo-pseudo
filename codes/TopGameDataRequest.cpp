System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A00467 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_9070/*"MockTopGameDataRequest"*/, v2);
    byte_4A00467 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9070/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0

  if ( (byte_4A00468 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_9071/*"MockTopGameDataRequest.txt"*/, v2);
    byte_4A00468 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49FCB14 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    byte_49FCB14 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_61385136(
           v3->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9071/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A00466 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_19629/*"gamedata/top"*/, v2);
    byte_4A00466 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_19629/*"gamedata/top"*/, 0LL);
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
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v26; // x9
  ResponseData_o *v27; // x0
  const MethodInfo *v28; // x2
  ResponseData_o *v29; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  __int64 v32; // x1
  System_String_o *v33; // x21
  System_String_o *v34; // x22
  Il2CppObject *Instance; // x23
  int32_t v36; // w21
  int64_t v37; // x22
  System_String_o *v38; // x21
  System_Byte_array *v39; // x21
  Il2CppObject *v40; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_37847032; // x0
  System_Collections_Generic_Dictionary_object__object__o *v42; // x21
  System_String_o *v43; // x22
  System_String_o *v44; // x22
  System_String_o *v45; // x21
  System_String_o *v46; // x21
  System_Byte_array *v47; // x21
  Il2CppObject *v48; // x0
  Il2CppObject *v49; // x21
  Il2CppObject *v50; // x21

  if ( (byte_4A00469 & 1) == 0 )
  {
    sub_1B64A00(&CatAndMouseGame_TypeInfo, responseList);
    sub_1B64A00(&System_Convert_TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64A00(&JsonManager_TypeInfo, v8);
    sub_1B64A00(&NetworkManager_TypeInfo, v9);
    sub_1B64A00(&ResponseCommandKind_TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64A00(&StringLiteral_23033/*"serverHash"*/, v12);
    sub_1B64A00(&StringLiteral_18417/*"dateVer"*/, v13);
    sub_1B64A00(&StringLiteral_22140/*"ok"*/, v14);
    sub_1B64A00(&StringLiteral_18402/*"dataVer"*/, v15);
    sub_1B64A00(&StringLiteral_16872/*"assetbundleKey"*/, v16);
    sub_1B64A00(&StringLiteral_21211/*"master"*/, v17);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v18);
    sub_1B64A00(&StringLiteral_16870/*"assetbundle"*/, v19);
    sub_1B64A00(&StringLiteral_24580/*"webview"*/, v20);
    sub_1B64A00(&StringLiteral_16716/*"animalName"*/, v21);
    sub_1B64A00(&StringLiteral_19418/*"folderName"*/, v22);
    sub_1B64A00(&StringLiteral_24815/*"zooName"*/, v23);
    sub_1B64A00(&StringLiteral_1213/*"0"*/, v24);
    byte_4A00469 = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
  {
LABEL_4:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v26 = &StringLiteral_22140/*"ok"*/;
LABEL_60:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v26,
        *(_QWORD *)&CallBack->fields.extra_arg);
      return;
    }
    return;
  }
  if ( (byte_4A0046A & 1) == 0 )
  {
    sub_1B64A00(&TopHomeRequest_TypeInfo, responseList);
    byte_4A0046A = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v27 = ResponseCommandKind__SearchData(3, responseList, 0LL);
  if ( v27 )
  {
    v29 = v27;
    if ( ResponseData__checkError(v27, v27->fields.resCode, v28) )
    {
      success = (System_Collections_Generic_Dictionary_object__object__o *)v29->fields.success;
      if ( success )
      {
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_18402/*"dataVer"*/,
               (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_18402/*"dataVer"*/,
                   (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v33 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr);
          v34 = (System_String_o *)StringLiteral_1213/*"0"*/;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_18417/*"dateVer"*/,
                 (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     success,
                     (Il2CppObject *)StringLiteral_18417/*"dateVer"*/,
                     (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !Item )
              goto LABEL_62;
            v34 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                       Item,
                                       Item->klass->vtable[4].methodPtr);
          }
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_21211/*"master"*/,
                 (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            v36 = System_Int32__Parse(v33, 0LL);
            v37 = System_Int64__Parse(v34, 0LL);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     success,
                     (Il2CppObject *)StringLiteral_21211/*"master"*/,
                     (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !Instance )
              goto LABEL_62;
            DataManager__setMasterData((DataManager_o *)Instance, v36, v37, Item, 0LL);
          }
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_16870/*"assetbundle"*/,
               (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_16870/*"assetbundle"*/,
                   (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v38 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr);
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v39 = System_Convert__FromBase64String(v38, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v40 = CatAndMouseGame__MouseInfoMsgPack(v39, 0LL);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          Dictionary_37847032 = JsonManager__getDictionary_37847032(v40, 0LL);
          if ( Dictionary_37847032 )
          {
            v42 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_37847032;
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_37847032,
                   (Il2CppObject *)StringLiteral_19418/*"folderName"*/,
                   (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v42,
                       (Il2CppObject *)StringLiteral_19418/*"folderName"*/,
                       (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v43 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              NetworkManager__SetDataServerFolderName(v43, 0LL);
            }
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v42,
                   (Il2CppObject *)StringLiteral_16716/*"animalName"*/,
                   (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v42,
                       (Il2CppObject *)StringLiteral_16716/*"animalName"*/,
                       (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v44 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
              if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
              CatAndMouseGame__ThirdHomeBuilding(v44, 0LL);
            }
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v42,
                   (Il2CppObject *)StringLiteral_24815/*"zooName"*/,
                   (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v42,
                       (Il2CppObject *)StringLiteral_24815/*"zooName"*/,
                       (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_62;
              v45 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
              if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
              CatAndMouseGame__ForthHomeBuilding(v45, 0LL);
            }
          }
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_16872/*"assetbundleKey"*/,
               (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_16872/*"assetbundleKey"*/,
                   (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_62;
          v46 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr);
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v47 = System_Convert__FromBase64String(v46, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v48 = CatAndMouseGame__MouseInfoMsgPack(v47, 0LL);
          CatAndMouseGame__SetAssetbundleKeys(v48, 0LL);
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_24580/*"webview"*/,
               (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_24580/*"webview"*/,
                   (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v49 )
            goto LABEL_62;
          DataManager__setWebViewData((DataManager_o *)v49, Item, 0LL);
        }
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                success,
                (Il2CppObject *)StringLiteral_23033/*"serverHash"*/,
                (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_4;
        v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23033/*"serverHash"*/,
                 (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v50 )
        {
          DataManager__setServerHash((DataManager_o *)v50, Item, 0LL);
          goto LABEL_4;
        }
LABEL_62:
        sub_1B64C5C(Item, v32);
      }
    }
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v26 = &StringLiteral_21971/*"ng"*/;
    goto LABEL_60;
  }
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}