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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int64_t Time; // x19
  TopHomeRequest_c *v8; // x8

  if ( (byte_42EAC28 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v4, v5, v6);
    byte_42EAC28 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v8 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v8 = TopHomeRequest_TypeInfo;
  }
  return Time <= v8->static_fields->accessTimeUpdateEventMap;
}


void __fastcall TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int64_t Time; // x19
  BalanceConfig_c *v11; // x8
  TopHomeRequest_c *v12; // x0
  __int64 RequestTopHomeExpirationDateSec; // x22

  if ( (byte_42EAC2A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v7, v8, v9);
    byte_42EAC2A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = TopHomeRequest_TypeInfo;
  RequestTopHomeExpirationDateSec = v11->static_fields->RequestTopHomeExpirationDateSec;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v12 = TopHomeRequest_TypeInfo;
  }
  v12->static_fields->accessTime = Time + RequestTopHomeExpirationDateSec;
  TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = Time
                                                                   + BalanceConfig_TypeInfo->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap;
}


bool __fastcall TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int64_t Time; // x19
  TopHomeRequest_c *v8; // x8
  struct TopHomeRequest_StaticFields *static_fields; // x9
  int64_t nextRefreshTime; // x10

  if ( (byte_42EAC25 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v4, v5, v6);
    byte_42EAC25 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v8 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v8 = TopHomeRequest_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( Time > static_fields->accessTime )
    return 0;
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TopHomeRequest_TypeInfo;
    static_fields = TopHomeRequest_TypeInfo->static_fields;
  }
  nextRefreshTime = static_fields->nextRefreshTime;
  if ( Time < nextRefreshTime )
    return 1;
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    nextRefreshTime = static_fields->nextRefreshTime;
  }
  return nextRefreshTime <= static_fields->lastRefreshTime;
}


void __fastcall TopHomeRequest__clearExpirationDate(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TopHomeRequest_c *v4; // x0

  if ( (byte_42EAC22 & 1) == 0 )
  {
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v1, v2, v3);
    byte_42EAC22 = 1;
  }
  v4 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v4 = TopHomeRequest_TypeInfo;
  }
  v4->static_fields->accessTime = 0LL;
}


System_String_o *__fastcall TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42EAC24 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9262/*"MockTopLoginRequest"*/, v4, v5, v6);
    byte_42EAC24 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9262/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EAC23 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19401/*"home/top"*/, v4, v5, v6);
    byte_42EAC23 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_19401/*"home/top"*/, 0LL);
}


bool __fastcall TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TopHomeRequest_c *v4; // x0

  if ( (byte_42EAC26 & 1) == 0 )
  {
    sub_B5D5C4(&TopHomeRequest_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC26 = 1;
  }
  v4 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v4 = TopHomeRequest_TypeInfo;
  }
  return v4->static_fields->isBackgroundRequestEnabled;
}


void __fastcall TopHomeRequest__requestCompleted(
        TopHomeRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ResponseData_o *v18; // x0
  ResponseData_o *v19; // x20
  TopHomeRequest_c *v20; // x0
  Il2CppObject *success; // x20
  System_String_o *v22; // x1
  TopHomeRequest_c *v23; // x0
  TopHomeRequest_c *v24; // x8
  __int64 *v25; // x8

  if ( (byte_42EAC2B & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    byte_42EAC2B = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v18 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( !v18 || (v19 = v18, !ResponseData__checkError_29500464(v18, 0LL)) )
  {
    v23 = TopHomeRequest_TypeInfo;
    if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TopHomeRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
      v23 = TopHomeRequest_TypeInfo;
    }
    v23->static_fields->accessTime = 0LL;
    v24 = TopHomeRequest_TypeInfo;
    TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = 0LL;
    v24->static_fields->nextRefreshTime = 0LL;
    v24->static_fields->lastRefreshTime = 0LL;
    v25 = &StringLiteral_21345/*"ng"*/;
    goto LABEL_20;
  }
  v20 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__UpdateAccessTime((const MethodInfo *)v20);
  success = (Il2CppObject *)v19->fields.success;
  if ( !success )
  {
    v25 = &StringLiteral_21497/*"ok"*/;
LABEL_20:
    v22 = (System_String_o *)*v25;
    goto LABEL_21;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v22 = JsonManager__toJson(success, 0, 0, 0LL);
LABEL_21:
  RequestBase__completed((RequestBase_o *)this, v22, 0LL);
}


void __fastcall TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  __int64 v3; // x3
  TopHomeRequest_c *v5; // x0

  if ( (byte_42EAC27 & 1) == 0 )
  {
    sub_B5D5C4(&TopHomeRequest_TypeInfo, isEnabled, (_DWORD)method, v3);
    byte_42EAC27 = 1;
  }
  v5 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v5 = TopHomeRequest_TypeInfo;
  }
  v5->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void __fastcall TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t v8; // x20
  TopHomeRequest_c *v9; // x8

  if ( (byte_42EAC29 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v5, v6, v7);
    byte_42EAC29 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v8 = NetworkManager__getTime(0LL);
  v9 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v9 = TopHomeRequest_TypeInfo;
  }
  v9->static_fields->lastRefreshTime = v8;
  v9->static_fields->nextRefreshTime = time;
}