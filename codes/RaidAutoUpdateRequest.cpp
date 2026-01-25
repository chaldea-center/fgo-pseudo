int64_t RaidAutoUpdateRequest__GetAccessCompletedTimeEventMap(const MethodInfo *method)
{
  if ( (byte_4CF01DA & 1) == 0 )
  {
    sub_1C7BAE8(&RaidAutoUpdateRequest_TypeInfo);
    byte_4CF01DA = 1;
  }
  return RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap;
}


bool RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  if ( (byte_4CF01D7 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&RaidAutoUpdateRequest_TypeInfo);
    byte_4CF01D7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) <= RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void RaidAutoUpdateRequest__UpdateAccessTime(const MethodInfo *method)
{
  int64_t Time; // x0
  BalanceConfig_c *v2; // x8
  int64_t v3; // x19

  if ( (byte_4CF01D9 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&RaidAutoUpdateRequest_TypeInfo);
    byte_4CF01D9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v2 = BalanceConfig_TypeInfo;
  v3 = Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = v3
                                                                          + v2->static_fields->RequestRaidUpdateEventMap;
}


System_String_o *RaidAutoUpdateRequest__getURL(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF01D6 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7361/*"Home/RaidAutoUpdate"*/);
    byte_4CF01D6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_7361/*"Home/RaidAutoUpdate"*/, 0);
}


bool RaidAutoUpdateRequest__isBackgroundRequest(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void RaidAutoUpdateRequest__requestCompleted(
        RaidAutoUpdateRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  const MethodInfo *Time; // x0
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  System_Byte_array *v13; // x21
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x20
  System_String_o *v16; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v18; // x1
  void (__fastcall *invoke_impl)(intptr_t, __int64, intptr_t); // x3
  intptr_t method_code; // x0

  if ( (byte_4CF01D8 & 1) == 0 )
  {
    sub_1C7BAE8(&CatAndMouseGame_TypeInfo);
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&RaidAutoUpdateRequest_TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_16995/*"assetbundleKey"*/);
    byte_4CF01D8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(88, responseList, 0);
  if ( !v5 )
    goto LABEL_21;
  v7 = v5;
  if ( !ResponseData__checkError(v5, v5->fields.resCode, v6) )
    goto LABEL_21;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (const MethodInfo *)NetworkManager__getTime(0);
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap = (int64_t)Time;
  RaidAutoUpdateRequest__UpdateAccessTime(Time);
  success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
  if ( success )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success,
           (Il2CppObject *)StringLiteral_16995/*"assetbundleKey"*/,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_16995/*"assetbundleKey"*/,
               (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_1C7BD40(0, v11);
      v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v13 = System_Convert__FromBase64String(v12, 0);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v14 = CatAndMouseGame__MouseInfoMsgPack(v13, 0);
      CatAndMouseGame__AddAssetbundleKeys(v14, 0);
    }
    v15 = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson(v15, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v18 = (__int64)v16;
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
      method_code = CallBack->fields.method_code;
LABEL_23:
      invoke_impl(method_code, v18, CallBack->fields.method);
    }
  }
  else
  {
LABEL_21:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
      method_code = CallBack->fields.method_code;
      v18 = StringLiteral_22590/*"ok"*/;
      goto LABEL_23;
    }
  }
}