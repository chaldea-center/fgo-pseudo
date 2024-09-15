void __fastcall TopHomeRequest___ctor(TopHomeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall TopHomeRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4A2F8A8 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, v1);
    sub_1B761C0(&TopHomeRequest_TypeInfo, v2);
    byte_4A2F8A8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) <= TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void __fastcall TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  int64_t Time; // x0
  BalanceConfig_c *v5; // x8
  int64_t v6; // x19
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct TopHomeRequest_StaticFields *v8; // x9

  if ( (byte_4A2F8AA & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, v1);
    sub_1B761C0(&NetworkManager_TypeInfo, v2);
    sub_1B761C0(&TopHomeRequest_TypeInfo, v3);
    byte_4A2F8AA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v5 = BalanceConfig_TypeInfo;
  v6 = Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  v8 = TopHomeRequest_TypeInfo->static_fields;
  v8->accessTime = v6 + static_fields->RequestTopHomeExpirationDateSec;
  v8->accessTimeUpdateEventMap = v6 + static_fields->RequestTopHomeExpirationDateSecUpdateEventMap;
}


bool __fastcall TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8
  int64_t nextRefreshTime; // x9
  bool result; // w0

  if ( (byte_4A2F8A5 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&TopHomeRequest_TypeInfo, v2);
    byte_4A2F8A5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
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


void __fastcall TopHomeRequest__clearExpirationDate(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2F8A2 & 1) == 0 )
  {
    sub_1B761C0(&TopHomeRequest_TypeInfo, v1);
    byte_4A2F8A2 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
}


System_String_o *__fastcall TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A2F8A4 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_9108/*"MockTopLoginRequest"*/, v2);
    byte_4A2F8A4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9108/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F8A3 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_19937/*"home/top"*/, v2);
    byte_4A2F8A3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_19937/*"home/top"*/, 0LL);
}


bool __fastcall TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A2F8A6 & 1) == 0 )
  {
    sub_1B761C0(&TopHomeRequest_TypeInfo, method);
    byte_4A2F8A6 = 1;
  }
  return TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled;
}


void __fastcall TopHomeRequest__requestCompleted(
        TopHomeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  _BOOL8 v11; // x0
  Il2CppObject *success; // x20
  System_String_o *v13; // x1
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4A2F8AB & 1) == 0 )
  {
    sub_1B761C0(&JsonManager_TypeInfo, responseList);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v5);
    sub_1B761C0(&TopHomeRequest_TypeInfo, v6);
    sub_1B761C0(&StringLiteral_22216/*"ok"*/, v7);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v8);
    byte_4A2F8AB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v9 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v9 && (v10 = v9, v11 = ResponseData__checkError_40940600(v9, 0LL)) )
  {
    TopHomeRequest__UpdateAccessTime((const MethodInfo *)v11);
    success = (Il2CppObject *)v10->fields.success;
    if ( success )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v13 = JsonManager__toJson(success, 0, 0, 0LL);
    }
    else
    {
      v13 = (System_String_o *)StringLiteral_22216/*"ok"*/;
    }
  }
  else
  {
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    *(_OWORD *)&static_fields->accessTime = 0u;
    *(_OWORD *)&static_fields->lastRefreshTime = 0u;
    v13 = (System_String_o *)StringLiteral_22046/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  if ( (byte_4A2F8A7 & 1) == 0 )
  {
    sub_1B761C0(&TopHomeRequest_TypeInfo, isEnabled);
    byte_4A2F8A7 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void __fastcall TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4A2F8A9 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&TopHomeRequest_TypeInfo, v3);
    byte_4A2F8A9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = NetworkManager__getTime(0LL);
  static_fields = TopHomeRequest_TypeInfo->static_fields;
  static_fields->nextRefreshTime = time;
  static_fields->lastRefreshTime = v4;
}