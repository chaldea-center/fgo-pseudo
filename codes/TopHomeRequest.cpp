bool TopHomeRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_593A319 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    byte_593A319 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  return NetworkManager__getTime(0) <= TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t Time; // x0
  __int64 v3; // x1
  BalanceConfig_c *v4; // x8
  int64_t v5; // x19
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct TopHomeRequest_StaticFields *v7; // x9
  int64_t v8; // x10
  int64_t v9; // x8

  if ( (byte_593A31B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    byte_593A31B = 1;
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
  static_fields = v4->static_fields;
  v7 = TopHomeRequest_TypeInfo->static_fields;
  v8 = v5 + static_fields->RequestTopHomeExpirationDateSec;
  v9 = v5 + static_fields->RequestTopHomeExpirationDateSecUpdateEventMap;
  v7->accessTime = v8;
  v7->accessTimeUpdateEventMap = v9;
}


bool TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8
  bool result; // w0
  int64_t nextRefreshTime; // x9

  if ( (byte_593A316 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    byte_593A316 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  if ( (byte_593A313 & 1) == 0 )
  {
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    byte_593A313 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
}


System_String_o *TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A315 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9508/*"MockTopLoginRequest"*/);
    byte_593A315 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9508/*"MockTopLoginRequest"*/, 0);
}


System_String_o *TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A314 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20907/*"home/top"*/);
    byte_593A314 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_20907/*"home/top"*/, 0);
}


bool TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A317 & 1) == 0 )
  {
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    byte_593A317 = 1;
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
  __int64 v10; // x1
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x21
  __int64 v15; // x1
  System_Byte_array *v16; // x21
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x20
  System_String_o *v19; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v21; // x1
  struct TopHomeRequest_StaticFields *static_fields; // x8
  __int64 *v23; // x9

  if ( (byte_593A31C & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_17594/*"assetbundleKey"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A31C = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0);
  if ( !v5 || (v7 = v5, !(v8 = ResponseData__checkError(v5, v5->fields.resCode, v6))) )
  {
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    *(_OWORD *)&static_fields->accessTime = 0u;
    *(_OWORD *)&static_fields->lastRefreshTime = 0u;
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v23 = &StringLiteral_23290/*"ng"*/;
    goto LABEL_21;
  }
  TopHomeRequest__UpdateAccessTime((const MethodInfo *)v8);
  success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
  if ( !success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v23 = &StringLiteral_23468/*"ok"*/;
LABEL_21:
    v21 = *v23;
    goto LABEL_22;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success,
         (Il2CppObject *)StringLiteral_17594/*"assetbundleKey"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_17594/*"assetbundleKey"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_21FFECC(0, v12);
    v14 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                               Item,
                               Item->klass->vtable[3].method);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
    v16 = System_Convert__FromBase64String(v14, 0);
    if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v15);
    v17 = CatAndMouseGame__MouseInfoMsgPack(v16, 0);
    CatAndMouseGame__AddAssetbundleKeys(v17, 0);
  }
  v18 = (Il2CppObject *)v7->fields.success;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10);
  v19 = JsonManager__toJson(v18, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v21 = (__int64)v19;
LABEL_22:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v21,
      CallBack->fields.method);
  }
}


void TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  if ( (byte_593A318 & 1) == 0 )
  {
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    byte_593A318 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  int64_t v3; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_593A31A & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TopHomeRequest_TypeInfo);
    byte_593A31A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v3 = NetworkManager__getTime(0);
  static_fields = TopHomeRequest_TypeInfo->static_fields;
  static_fields->nextRefreshTime = time;
  static_fields->lastRefreshTime = v3;
}