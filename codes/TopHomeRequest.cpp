bool TopHomeRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  if ( (byte_4D2E4D6 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&TopHomeRequest_TypeInfo);
    byte_4D2E4D6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) <= TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  int64_t Time; // x0
  BalanceConfig_c *v2; // x8
  int64_t v3; // x19
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct TopHomeRequest_StaticFields *v5; // x9

  if ( (byte_4D2E4D8 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&TopHomeRequest_TypeInfo);
    byte_4D2E4D8 = 1;
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
  static_fields = v2->static_fields;
  v5 = TopHomeRequest_TypeInfo->static_fields;
  v5->accessTime = v3 + static_fields->RequestTopHomeExpirationDateSec;
  v5->accessTimeUpdateEventMap = v3 + static_fields->RequestTopHomeExpirationDateSecUpdateEventMap;
}


bool TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8
  int64_t nextRefreshTime; // x9
  bool result; // w0

  if ( (byte_4D2E4D3 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&TopHomeRequest_TypeInfo);
    byte_4D2E4D3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  static_fields = TopHomeRequest_TypeInfo->static_fields;
  result = 0;
  if ( Time <= static_fields->accessTime )
  {
    nextRefreshTime = static_fields->nextRefreshTime;
    if ( Time < nextRefreshTime || nextRefreshTime <= static_fields->lastRefreshTime )
      return 1;
  }
  return result;
}


void TopHomeRequest__clearExpirationDate(const MethodInfo *method)
{
  if ( (byte_4D2E4D0 & 1) == 0 )
  {
    sub_1C94098(&TopHomeRequest_TypeInfo);
    byte_4D2E4D0 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
}


System_String_o *TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E4D2 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_9162/*"MockTopLoginRequest"*/);
    byte_4D2E4D2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9162/*"MockTopLoginRequest"*/, 0);
}


System_String_o *TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E4D1 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_20159/*"home/top"*/);
    byte_4D2E4D1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_20159/*"home/top"*/, 0);
}


bool TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E4D4 & 1) == 0 )
  {
    sub_1C94098(&TopHomeRequest_TypeInfo);
    byte_4D2E4D4 = 1;
  }
  return TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled;
}


void TopHomeRequest__requestCompleted(
        TopHomeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  _BOOL8 v8; // x0
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
  struct TopHomeRequest_StaticFields *static_fields; // x8
  __int64 *v22; // x9

  if ( (byte_4D2E4D9 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&TopHomeRequest_TypeInfo);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    sub_1C94098(&StringLiteral_16994/*"assetbundleKey"*/);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E4D9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0);
  if ( !v5 || (v7 = v5, !(v8 = ResponseData__checkError(v5, v5->fields.resCode, v6))) )
  {
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    *(_OWORD *)&static_fields->accessTime = 0u;
    *(_OWORD *)&static_fields->lastRefreshTime = 0u;
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v22 = &StringLiteral_22424/*"ng"*/;
    goto LABEL_21;
  }
  TopHomeRequest__UpdateAccessTime((const MethodInfo *)v8);
  success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
  if ( !success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v22 = &StringLiteral_22594/*"ok"*/;
LABEL_21:
    invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
    method_code = CallBack->fields.method_code;
    v18 = *v22;
    goto LABEL_22;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success,
         (Il2CppObject *)StringLiteral_16994/*"assetbundleKey"*/,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_16994/*"assetbundleKey"*/,
             (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_1C942F0(0, v11);
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
LABEL_22:
    invoke_impl(method_code, v18, CallBack->fields.method);
  }
}


void TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  if ( (byte_4D2E4D5 & 1) == 0 )
  {
    sub_1C94098(&TopHomeRequest_TypeInfo);
    byte_4D2E4D5 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  int64_t v3; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4D2E4D7 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&TopHomeRequest_TypeInfo);
    byte_4D2E4D7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v3 = NetworkManager__getTime(0);
  static_fields = TopHomeRequest_TypeInfo->static_fields;
  static_fields->nextRefreshTime = time;
  static_fields->lastRefreshTime = v3;
}