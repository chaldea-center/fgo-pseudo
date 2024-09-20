System_String_o *__fastcall TopGameDataRequest__getMockData(TopGameDataRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CAD3 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9109/*"MockTopGameDataRequest"*/);
    byte_4A5CAD3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9109/*"MockTopGameDataRequest"*/, 0LL);
}


System_String_o *__fastcall TopGameDataRequest__getMockURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4A5CAD4 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9110/*"MockTopGameDataRequest.txt"*/);
    byte_4A5CAD4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A591BD )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A591BD = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_61707032(
           v2->static_fields->gameServerAddress,
           (System_String_o *)StringLiteral_9110/*"MockTopGameDataRequest.txt"*/,
           0LL);
}


System_String_o *__fastcall TopGameDataRequest__getURL(TopGameDataRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAD2 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19705/*"gamedata/top"*/);
    byte_4A5CAD2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19705/*"gamedata/top"*/, 0LL);
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
  System_Collections_Generic_Dictionary_string__object__o *Dictionary_38158536; // x0
  System_Collections_Generic_Dictionary_object__object__o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x22
  System_String_o *v25; // x21
  System_String_o *v26; // x21
  System_Byte_array *v27; // x21
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x21
  Il2CppObject *v30; // x21

  if ( (byte_4A5CAD5 & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_23126/*"serverHash"*/);
    sub_1B885B0(&StringLiteral_18486/*"dateVer"*/);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_18471/*"dataVer"*/);
    sub_1B885B0(&StringLiteral_16938/*"assetbundleKey"*/);
    sub_1B885B0(&StringLiteral_21290/*"master"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_16936/*"assetbundle"*/);
    sub_1B885B0(&StringLiteral_24675/*"webview"*/);
    sub_1B885B0(&StringLiteral_16782/*"animalName"*/);
    sub_1B885B0(&StringLiteral_19493/*"folderName"*/);
    sub_1B885B0(&StringLiteral_24910/*"zooName"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5CAD5 = 1;
  }
  if ( this->fields._isNoRedirect_k__BackingField )
  {
LABEL_4:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v6 = &StringLiteral_22225/*"ok"*/;
LABEL_58:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v6,
        *(_QWORD *)&CallBack->fields.extra_arg);
      return;
    }
    return;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(3, responseList, 0LL);
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
               (Il2CppObject *)StringLiteral_18471/*"dataVer"*/,
               (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_18471/*"dataVer"*/,
                   (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_60;
          v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr);
          v14 = (System_String_o *)StringLiteral_1212/*"0"*/;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_18486/*"dateVer"*/,
                 (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     success,
                     (Il2CppObject *)StringLiteral_18486/*"dateVer"*/,
                     (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !Item )
              goto LABEL_60;
            v14 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                       Item,
                                       Item->klass->vtable[4].methodPtr);
          }
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 success,
                 (Il2CppObject *)StringLiteral_21290/*"master"*/,
                 (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            v16 = System_Int32__Parse(v13, 0LL);
            v17 = System_Int64__Parse(v14, 0LL);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     success,
                     (Il2CppObject *)StringLiteral_21290/*"master"*/,
                     (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !Instance )
              goto LABEL_60;
            DataManager__setMasterData((DataManager_o *)Instance, v16, v17, Item, 0LL);
          }
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_16936/*"assetbundle"*/,
               (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_16936/*"assetbundle"*/,
                   (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_60;
          v18 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr);
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v19 = System_Convert__FromBase64String(v18, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v20 = CatAndMouseGame__MouseInfoMsgPack(v19, 0LL);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          Dictionary_38158536 = JsonManager__getDictionary_38158536(v20, 0LL);
          if ( Dictionary_38158536 )
          {
            v22 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_38158536;
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary_38158536,
                   (Il2CppObject *)StringLiteral_19493/*"folderName"*/,
                   (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v22,
                       (Il2CppObject *)StringLiteral_19493/*"folderName"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_60;
              v23 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              NetworkManager__SetDataServerFolderName(v23, 0LL);
            }
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v22,
                   (Il2CppObject *)StringLiteral_16782/*"animalName"*/,
                   (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v22,
                       (Il2CppObject *)StringLiteral_16782/*"animalName"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_60;
              v24 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
              if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
              CatAndMouseGame__ThirdHomeBuilding(v24, 0LL);
            }
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v22,
                   (Il2CppObject *)StringLiteral_24910/*"zooName"*/,
                   (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                       v22,
                       (Il2CppObject *)StringLiteral_24910/*"zooName"*/,
                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_60;
              v25 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
              if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
              CatAndMouseGame__ForthHomeBuilding(v25, 0LL);
            }
          }
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_16938/*"assetbundleKey"*/,
               (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_16938/*"assetbundleKey"*/,
                   (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_60;
          v26 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                     Item,
                                     Item->klass->vtable[4].methodPtr);
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v27 = System_Convert__FromBase64String(v26, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v28 = CatAndMouseGame__MouseInfoMsgPack(v27, 0LL);
          CatAndMouseGame__SetAssetbundleKeys(v28, 0LL);
        }
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               success,
               (Il2CppObject *)StringLiteral_24675/*"webview"*/,
               (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   success,
                   (Il2CppObject *)StringLiteral_24675/*"webview"*/,
                   (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v29 )
            goto LABEL_60;
          DataManager__setWebViewData((DataManager_o *)v29, Item, 0LL);
        }
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                success,
                (Il2CppObject *)StringLiteral_23126/*"serverHash"*/,
                (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          goto LABEL_4;
        v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 success,
                 (Il2CppObject *)StringLiteral_23126/*"serverHash"*/,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v30 )
        {
          DataManager__setServerHash((DataManager_o *)v30, Item, 0LL);
          goto LABEL_4;
        }
LABEL_60:
        sub_1B8880C(Item, v12);
      }
    }
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v6 = &StringLiteral_22055/*"ng"*/;
    goto LABEL_58;
  }
}


void __fastcall TopGameDataRequest__set_isNoRedirect(TopGameDataRequest_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNoRedirect_k__BackingField = value;
}