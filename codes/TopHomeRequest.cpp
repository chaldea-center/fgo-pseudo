void __fastcall TopHomeRequest___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall TopHomeRequest___ctor(TopHomeRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall TopHomeRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  int64_t Time; // x19
  TopHomeRequest_c *v2; // x8

  if ( (byte_4353D09 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&TopHomeRequest_TypeInfo);
    byte_4353D09 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v2 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v2 = TopHomeRequest_TypeInfo;
  }
  return Time <= v2->static_fields->accessTimeUpdateEventMap;
}


void __fastcall TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  int64_t Time; // x19
  BalanceConfig_c *v2; // x8
  TopHomeRequest_c *v3; // x0
  __int64 RequestTopHomeExpirationDateSec; // x22

  if ( (byte_4353D0B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&TopHomeRequest_TypeInfo);
    byte_4353D0B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  v3 = TopHomeRequest_TypeInfo;
  RequestTopHomeExpirationDateSec = v2->static_fields->RequestTopHomeExpirationDateSec;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v3 = TopHomeRequest_TypeInfo;
  }
  v3->static_fields->accessTime = Time + RequestTopHomeExpirationDateSec;
  TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = Time
                                                                   + BalanceConfig_TypeInfo->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap;
}


bool __fastcall TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x19
  TopHomeRequest_c *v3; // x8
  struct TopHomeRequest_StaticFields *static_fields; // x9
  int64_t nextRefreshTime; // x10

  if ( (byte_4353D06 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&TopHomeRequest_TypeInfo);
    byte_4353D06 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v3 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v3 = TopHomeRequest_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( Time > static_fields->accessTime )
    return 0;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TopHomeRequest_TypeInfo;
    static_fields = TopHomeRequest_TypeInfo->static_fields;
  }
  nextRefreshTime = static_fields->nextRefreshTime;
  if ( Time < nextRefreshTime )
    return 1;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    nextRefreshTime = static_fields->nextRefreshTime;
  }
  return nextRefreshTime <= static_fields->lastRefreshTime;
}


void __fastcall TopHomeRequest__clearExpirationDate(const MethodInfo *method)
{
  TopHomeRequest_c *v1; // x0

  if ( (byte_4353D03 & 1) == 0 )
  {
    sub_B70694(&TopHomeRequest_TypeInfo);
    byte_4353D03 = 1;
  }
  v1 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v1 = TopHomeRequest_TypeInfo;
  }
  v1->static_fields->accessTime = 0LL;
}


System_String_o *__fastcall TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4353D05 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_9277/*"MockTopLoginRequest"*/);
    byte_4353D05 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9277/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4353D04 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_19459/*"home/top"*/);
    byte_4353D04 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_19459/*"home/top"*/, 0LL);
}


bool __fastcall TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  TopHomeRequest_c *v2; // x0

  if ( (byte_4353D07 & 1) == 0 )
  {
    sub_B70694(&TopHomeRequest_TypeInfo);
    byte_4353D07 = 1;
  }
  v2 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v2 = TopHomeRequest_TypeInfo;
  }
  return v2->static_fields->isBackgroundRequestEnabled;
}


void __fastcall TopHomeRequest__requestCompleted(
        TopHomeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  TopHomeRequest_c *v7; // x0
  Il2CppObject *success; // x20
  System_String_o *v9; // x1
  TopHomeRequest_c *v10; // x0
  TopHomeRequest_c *v11; // x8
  __int64 *v12; // x8

  if ( (byte_4353D0C & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&TopHomeRequest_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4353D0C = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( !v5 || (v6 = v5, !ResponseData__checkError_29653500(v5, 0LL)) )
  {
    v10 = TopHomeRequest_TypeInfo;
    if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TopHomeRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
      v10 = TopHomeRequest_TypeInfo;
    }
    v10->static_fields->accessTime = 0LL;
    v11 = TopHomeRequest_TypeInfo;
    TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = 0LL;
    v11->static_fields->nextRefreshTime = 0LL;
    v11->static_fields->lastRefreshTime = 0LL;
    v12 = &StringLiteral_21408/*"ng"*/;
    goto LABEL_20;
  }
  v7 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__UpdateAccessTime((const MethodInfo *)v7);
  success = (Il2CppObject *)v6->fields.success;
  if ( !success )
  {
    v12 = &StringLiteral_21560/*"ok"*/;
LABEL_20:
    v9 = (System_String_o *)*v12;
    goto LABEL_21;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(success, 0, 0, 0LL);
LABEL_21:
  RequestBase__completed((RequestBase_o *)this, v9, 0LL);
}


void __fastcall TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  TopHomeRequest_c *v4; // x0

  if ( (byte_4353D08 & 1) == 0 )
  {
    sub_B70694(&TopHomeRequest_TypeInfo);
    byte_4353D08 = 1;
  }
  v4 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v4 = TopHomeRequest_TypeInfo;
  }
  v4->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void __fastcall TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  int64_t v3; // x20
  TopHomeRequest_c *v4; // x8

  if ( (byte_4353D0A & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&TopHomeRequest_TypeInfo);
    byte_4353D0A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v3 = NetworkManager__getTime(0LL);
  v4 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v4 = TopHomeRequest_TypeInfo;
  }
  v4->static_fields->lastRefreshTime = v3;
  v4->static_fields->nextRefreshTime = time;
}