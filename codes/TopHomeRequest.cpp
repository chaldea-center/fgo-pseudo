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
  __int64 v1; // x1
  __int64 v2; // x1
  int64_t Time; // x19
  TopHomeRequest_c *v4; // x8

  if ( (byte_40FB7F2 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v2);
    byte_40FB7F2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v4 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v4 = TopHomeRequest_TypeInfo;
  }
  return Time <= v4->static_fields->accessTimeUpdateEventMap;
}


void __fastcall TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  int64_t Time; // x19
  BalanceConfig_c *v5; // x8
  TopHomeRequest_c *v6; // x0
  __int64 RequestTopHomeExpirationDateSec; // x22

  if ( (byte_40FB7F4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v3);
    byte_40FB7F4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = TopHomeRequest_TypeInfo;
  RequestTopHomeExpirationDateSec = v5->static_fields->RequestTopHomeExpirationDateSec;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v6 = TopHomeRequest_TypeInfo;
  }
  v6->static_fields->accessTime = Time + RequestTopHomeExpirationDateSec;
  TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = Time
                                                                   + BalanceConfig_TypeInfo->static_fields->RequestTopHomeExpirationDateSecUpdateEventMap;
}


bool __fastcall TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x19
  TopHomeRequest_c *v4; // x8
  struct TopHomeRequest_StaticFields *static_fields; // x9
  int64_t nextRefreshTime; // x10

  if ( (byte_40FB7EF & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v2);
    byte_40FB7EF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v4 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v4 = TopHomeRequest_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( Time > static_fields->accessTime )
    return 0;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TopHomeRequest_TypeInfo;
    static_fields = TopHomeRequest_TypeInfo->static_fields;
  }
  nextRefreshTime = static_fields->nextRefreshTime;
  if ( Time < nextRefreshTime )
    return 1;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    nextRefreshTime = static_fields->nextRefreshTime;
  }
  return nextRefreshTime <= static_fields->lastRefreshTime;
}


void __fastcall TopHomeRequest__clearExpirationDate(const MethodInfo *method)
{
  __int64 v1; // x1
  TopHomeRequest_c *v2; // x0

  if ( (byte_40FB7EC & 1) == 0 )
  {
    sub_B16FFC(&TopHomeRequest_TypeInfo, v1);
    byte_40FB7EC = 1;
  }
  v2 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v2 = TopHomeRequest_TypeInfo;
  }
  v2->static_fields->accessTime = 0LL;
}


System_String_o *__fastcall TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FB7EE & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9138, v2);
    byte_40FB7EE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9138, 0LL);
}


System_String_o *__fastcall TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FB7ED & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19085, v2);
    byte_40FB7ED = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_19085, 0LL);
}


bool __fastcall TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  TopHomeRequest_c *v2; // x0

  if ( (byte_40FB7F0 & 1) == 0 )
  {
    sub_B16FFC(&TopHomeRequest_TypeInfo, method);
    byte_40FB7F0 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  TopHomeRequest_c *v11; // x0
  Il2CppObject *success; // x20
  System_String_o *v13; // x1
  TopHomeRequest_c *v14; // x0
  TopHomeRequest_c *v15; // x8
  System_String_o **v16; // x8

  if ( (byte_40FB7F5 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_21129, v7);
    sub_B16FFC(&StringLiteral_20980, v8);
    byte_40FB7F5 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( !v9 || (v10 = v9, !ResponseData__checkError_30924960(v9, 0LL)) )
  {
    v14 = TopHomeRequest_TypeInfo;
    if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TopHomeRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
      v14 = TopHomeRequest_TypeInfo;
    }
    v14->static_fields->accessTime = 0LL;
    v15 = TopHomeRequest_TypeInfo;
    TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = 0LL;
    v15->static_fields->nextRefreshTime = 0LL;
    v15->static_fields->lastRefreshTime = 0LL;
    v16 = (System_String_o **)&StringLiteral_20980;
    goto LABEL_20;
  }
  v11 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__UpdateAccessTime((const MethodInfo *)v11);
  success = (Il2CppObject *)v10->fields.success;
  if ( !success )
  {
    v16 = (System_String_o **)&StringLiteral_21129;
LABEL_20:
    v13 = *v16;
    goto LABEL_21;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__toJson(success, 0, 0, 0LL);
LABEL_21:
  RequestBase__completed((RequestBase_o *)this, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  TopHomeRequest_c *v4; // x0

  if ( (byte_40FB7F1 & 1) == 0 )
  {
    sub_B16FFC(&TopHomeRequest_TypeInfo, isEnabled);
    byte_40FB7F1 = 1;
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
  __int64 v3; // x1
  int64_t v4; // x20
  TopHomeRequest_c *v5; // x8

  if ( (byte_40FB7F3 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v3);
    byte_40FB7F3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v4 = NetworkManager__getTime(0LL);
  v5 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
    v5 = TopHomeRequest_TypeInfo;
  }
  v5->static_fields->lastRefreshTime = v4;
  v5->static_fields->nextRefreshTime = time;
}