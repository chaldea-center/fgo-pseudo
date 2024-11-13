void __fastcall TopHomeRequest___ctor(TopHomeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall TopHomeRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17BA0 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, v3, v4);
    byte_4B17BA0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  return NetworkManager__getTime(0LL) <= TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void __fastcall TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t Time; // x0
  __int64 v8; // x1
  BalanceConfig_c *v9; // x8
  int64_t v10; // x19
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct TopHomeRequest_StaticFields *v12; // x9

  if ( (byte_4B17BA2 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, v5, v6);
    byte_4B17BA2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0LL);
  v9 = BalanceConfig_TypeInfo;
  v10 = Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
    v9 = BalanceConfig_TypeInfo;
  }
  static_fields = v9->static_fields;
  v12 = TopHomeRequest_TypeInfo->static_fields;
  v12->accessTime = v10 + static_fields->RequestTopHomeExpirationDateSec;
  v12->accessTimeUpdateEventMap = v10 + static_fields->RequestTopHomeExpirationDateSecUpdateEventMap;
}


bool __fastcall TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int64_t Time; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8
  int64_t nextRefreshTime; // x9
  bool result; // w0

  if ( (byte_4B17B9D & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, v3, v4);
    byte_4B17B9D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  __int64 v2; // x2

  if ( (byte_4B17B9A & 1) == 0 )
  {
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, v1, v2);
    byte_4B17B9A = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
}


System_String_o *__fastcall TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17B9C & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9241/*"MockTopLoginRequest"*/, v3, v4);
    byte_4B17B9C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9241/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B9B & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20151/*"home/top"*/, v3, v4);
    byte_4B17B9B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_20151/*"home/top"*/, 0LL);
}


bool __fastcall TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17B9E & 1) == 0 )
  {
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, method, v2);
    byte_4B17B9E = 1;
  }
  return TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled;
}


void __fastcall TopHomeRequest__requestCompleted(
        TopHomeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ResponseData_o *v13; // x0
  const MethodInfo *v14; // x2
  ResponseData_o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *success; // x20
  System_String_o *v19; // x1
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4B17BA3 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    byte_4B17BA3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v13 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v13 && (v15 = v13, v16 = ResponseData__checkError(v13, v13->fields.resCode, v14)) )
  {
    TopHomeRequest__UpdateAccessTime((const MethodInfo *)v16);
    success = (Il2CppObject *)v15->fields.success;
    if ( success )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v17);
      v19 = JsonManager__toJson(success, 0, 0, 0LL);
    }
    else
    {
      v19 = (System_String_o *)StringLiteral_22465/*"ok"*/;
    }
  }
  else
  {
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    *(_OWORD *)&static_fields->accessTime = 0u;
    *(_OWORD *)&static_fields->lastRefreshTime = 0u;
    v19 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  if ( (byte_4B17B9F & 1) == 0 )
  {
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, isEnabled, method);
    byte_4B17B9F = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void __fastcall TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t v6; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4B17BA1 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, v4, v5);
    byte_4B17BA1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v6 = NetworkManager__getTime(0LL);
  static_fields = TopHomeRequest_TypeInfo->static_fields;
  static_fields->nextRefreshTime = time;
  static_fields->lastRefreshTime = v6;
}