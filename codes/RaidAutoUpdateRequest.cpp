int64_t RaidAutoUpdateRequest__GetAccessCompletedTimeEventMap(const MethodInfo *method)
{
  if ( (byte_597248B & 1) == 0 )
  {
    sub_2213A60(&RaidAutoUpdateRequest_TypeInfo);
    byte_597248B = 1;
  }
  return RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap;
}


bool RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_5972488 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&RaidAutoUpdateRequest_TypeInfo);
    byte_5972488 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  return NetworkManager__getTime(0) <= RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void RaidAutoUpdateRequest__UpdateAccessTime(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t Time; // x0
  __int64 v3; // x1
  BalanceConfig_c *v4; // x8
  int64_t v5; // x19

  if ( (byte_597248A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&RaidAutoUpdateRequest_TypeInfo);
    byte_597248A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0);
  v4 = BalanceConfig_TypeInfo;
  v5 = Time;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3);
    v4 = BalanceConfig_TypeInfo;
  }
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = v5
                                                                          + v4->static_fields->RequestRaidUpdateEventMap;
}


System_String_o *RaidAutoUpdateRequest__getURL(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972487 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_7661/*"Home/RaidAutoUpdate"*/);
    byte_5972487 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_7661/*"Home/RaidAutoUpdate"*/, 0);
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
  __int64 v8; // x1
  const MethodInfo *Time; // x0
  System_Collections_Generic_Dictionary_object__object__o *success; // x21
  __int64 v11; // x1
  Il2CppObject *Item; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x21
  __int64 v16; // x1
  System_Byte_array *v17; // x21
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x20
  System_String_o *v20; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v22; // x1

  if ( (byte_5972489 & 1) == 0 )
  {
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&RaidAutoUpdateRequest_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_17631/*"assetbundleKey"*/);
    byte_5972489 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(88, responseList, 0);
  if ( !v5 )
    goto LABEL_21;
  v7 = v5;
  if ( !ResponseData__checkError(v5, v5->fields.resCode, v6) )
    goto LABEL_21;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  Time = (const MethodInfo *)NetworkManager__getTime(0);
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap = (int64_t)Time;
  RaidAutoUpdateRequest__UpdateAccessTime(Time);
  success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
  if ( success )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success,
           (Il2CppObject *)StringLiteral_17631/*"assetbundleKey"*/,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               success,
               (Il2CppObject *)StringLiteral_17631/*"assetbundleKey"*/,
               (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_2213CDC(0, v13);
      v15 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v14);
      v17 = System_Convert__FromBase64String(v15, 0);
      if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v16);
      v18 = CatAndMouseGame__MouseInfoMsgPack(v17, 0);
      CatAndMouseGame__AddAssetbundleKeys(v18, 0);
    }
    v19 = (Il2CppObject *)v7->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v20 = JsonManager__toJson(v19, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v22 = (__int64)v20;
LABEL_23:
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v22,
        CallBack->fields.method);
    }
  }
  else
  {
LABEL_21:
    CallBack = this->fields.CallBack;
    if ( CallBack )
    {
      v22 = StringLiteral_23515/*"ok"*/;
      goto LABEL_23;
    }
  }
}