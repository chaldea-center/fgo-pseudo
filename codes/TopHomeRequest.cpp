void __fastcall TopHomeRequest___ctor(TopHomeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall TopHomeRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  if ( (byte_4A5CADC & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CADC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) <= TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void __fastcall TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  int64_t Time; // x0
  BalanceConfig_c *v2; // x8
  int64_t v3; // x19
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct TopHomeRequest_StaticFields *v5; // x9

  if ( (byte_4A5CADE & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CADE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
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


bool __fastcall TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8
  int64_t nextRefreshTime; // x9
  bool result; // w0

  if ( (byte_4A5CAD9 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CAD9 = 1;
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
  if ( (byte_4A5CAD6 & 1) == 0 )
  {
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CAD6 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
}


System_String_o *__fastcall TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CAD8 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9111/*"MockTopLoginRequest"*/);
    byte_4A5CAD8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9111/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAD7 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19943/*"home/top"*/);
    byte_4A5CAD7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19943/*"home/top"*/, 0LL);
}


bool __fastcall TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CADA & 1) == 0 )
  {
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CADA = 1;
  }
  return TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled;
}


void __fastcall TopHomeRequest__requestCompleted(
        TopHomeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  _BOOL8 v7; // x0
  Il2CppObject *success; // x20
  System_String_o *v9; // x1
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4A5CADF & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CADF = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v5 && (v6 = v5, v7 = ResponseData__checkError_41126424(v5, 0LL)) )
  {
    TopHomeRequest__UpdateAccessTime((const MethodInfo *)v7);
    success = (Il2CppObject *)v6->fields.success;
    if ( success )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v9 = JsonManager__toJson(success, 0, 0, 0LL);
    }
    else
    {
      v9 = (System_String_o *)StringLiteral_22225/*"ok"*/;
    }
  }
  else
  {
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    *(_OWORD *)&static_fields->accessTime = 0u;
    *(_OWORD *)&static_fields->lastRefreshTime = 0u;
    v9 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0LL);
}


void __fastcall TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  if ( (byte_4A5CADB & 1) == 0 )
  {
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CADB = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void __fastcall TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  int64_t v3; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4A5CADD & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CADD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v3 = NetworkManager__getTime(0LL);
  static_fields = TopHomeRequest_TypeInfo->static_fields;
  static_fields->nextRefreshTime = time;
  static_fields->lastRefreshTime = v3;
}