bool TopHomeRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  if ( (byte_4C44BC4 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&TopHomeRequest_TypeInfo);
    byte_4C44BC4 = 1;
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

  if ( (byte_4C44BC6 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&TopHomeRequest_TypeInfo);
    byte_4C44BC6 = 1;
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

  if ( (byte_4C44BC1 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&TopHomeRequest_TypeInfo);
    byte_4C44BC1 = 1;
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
  if ( (byte_4C44BBE & 1) == 0 )
  {
    sub_1C37058(&TopHomeRequest_TypeInfo);
    byte_4C44BBE = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
}


System_String_o *TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C44BC0 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_9142/*"MockTopLoginRequest"*/);
    byte_4C44BC0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9142/*"MockTopLoginRequest"*/, 0);
}


System_String_o *TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44BBF & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_19993/*"home/top"*/);
    byte_4C44BBF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_19993/*"home/top"*/, 0);
}


bool TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C44BC2 & 1) == 0 )
  {
    sub_1C37058(&TopHomeRequest_TypeInfo);
    byte_4C44BC2 = 1;
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
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1
  void (__fastcall *invoke_impl)(intptr_t, __int64, intptr_t); // x3
  intptr_t method_code; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8
  __int64 *v16; // x9

  if ( (byte_4C44BC7 & 1) == 0 )
  {
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&TopHomeRequest_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44BC7 = 1;
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
    v16 = &StringLiteral_22215/*"ng"*/;
    goto LABEL_14;
  }
  TopHomeRequest__UpdateAccessTime((const MethodInfo *)v8);
  success = (Il2CppObject *)v7->fields.success;
  if ( !success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v16 = &StringLiteral_22382/*"ok"*/;
LABEL_14:
    invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
    method_code = CallBack->fields.method_code;
    v12 = *v16;
    goto LABEL_15;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
    invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl;
    method_code = CallBack->fields.method_code;
LABEL_15:
    invoke_impl(method_code, v12, CallBack->fields.method);
  }
}


void TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  if ( (byte_4C44BC3 & 1) == 0 )
  {
    sub_1C37058(&TopHomeRequest_TypeInfo);
    byte_4C44BC3 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  int64_t v3; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4C44BC5 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&TopHomeRequest_TypeInfo);
    byte_4C44BC5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v3 = NetworkManager__getTime(0);
  static_fields = TopHomeRequest_TypeInfo->static_fields;
  static_fields->nextRefreshTime = time;
  static_fields->lastRefreshTime = v3;
}