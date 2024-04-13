void __fastcall RaidAutoUpdateRequest___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall RaidAutoUpdateRequest___ctor(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


int64_t __fastcall RaidAutoUpdateRequest__GetAccessCompletedTimeEventMap(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  RaidAutoUpdateRequest_c *v4; // x0

  if ( (byte_42E6F6E & 1) == 0 )
  {
    sub_B5D5C4(&RaidAutoUpdateRequest_TypeInfo, v1, v2, v3);
    byte_42E6F6E = 1;
  }
  v4 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v4 = RaidAutoUpdateRequest_TypeInfo;
  }
  return v4->static_fields->accessCompletedTimeEventMap;
}


bool __fastcall RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int64_t Time; // x19
  RaidAutoUpdateRequest_c *v8; // x8

  if ( (byte_42E6F6B & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&RaidAutoUpdateRequest_TypeInfo, v4, v5, v6);
    byte_42E6F6B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v8 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v8 = RaidAutoUpdateRequest_TypeInfo;
  }
  return Time <= v8->static_fields->accessTimeUpdateEventMap;
}


void __fastcall RaidAutoUpdateRequest__UpdateAccessTime(const MethodInfo *method)
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
  RaidAutoUpdateRequest_c *v12; // x0
  __int64 RequestRaidUpdateEventMap; // x20

  if ( (byte_42E6F6D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&RaidAutoUpdateRequest_TypeInfo, v7, v8, v9);
    byte_42E6F6D = 1;
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
  v12 = RaidAutoUpdateRequest_TypeInfo;
  RequestRaidUpdateEventMap = v11->static_fields->RequestRaidUpdateEventMap;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v12 = RaidAutoUpdateRequest_TypeInfo;
  }
  v12->static_fields->accessTimeUpdateEventMap = Time + RequestRaidUpdateEventMap;
}


System_String_o *__fastcall RaidAutoUpdateRequest__getURL(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E6F6A & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_7251/*"Home/RaidAutoUpdate"*/, v4, v5, v6);
    byte_42E6F6A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_7251/*"Home/RaidAutoUpdate"*/, 0LL);
}


bool __fastcall RaidAutoUpdateRequest__isBackgroundRequest(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  return 1;
}


void __fastcall RaidAutoUpdateRequest__requestCompleted(
        RaidAutoUpdateRequest_o *this,
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
  const MethodInfo *Time; // x0
  const MethodInfo *v21; // x21
  RaidAutoUpdateRequest_c *v22; // x8
  Il2CppObject *success; // x20
  System_String_o *v24; // x1

  if ( (byte_42E6F6C & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&RaidAutoUpdateRequest_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v15, v16, v17);
    byte_42E6F6C = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v18 = ResponseCommandKind__SearchData(88, responseList, 0LL);
  if ( !v18 )
    goto LABEL_19;
  v19 = v18;
  if ( !ResponseData__checkError_29500464(v18, 0LL) )
    goto LABEL_19;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (const MethodInfo *)NetworkManager__getTime(0LL);
  v21 = Time;
  v22 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v22 = RaidAutoUpdateRequest_TypeInfo;
  }
  v22->static_fields->accessCompletedTimeEventMap = (int64_t)v21;
  RaidAutoUpdateRequest__UpdateAccessTime(Time);
  success = (Il2CppObject *)v19->fields.success;
  if ( success )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v24 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
LABEL_19:
    v24 = (System_String_o *)StringLiteral_21497/*"ok"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v24, 0LL);
}