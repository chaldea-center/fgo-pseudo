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
  __int64 v1; // x1
  RaidAutoUpdateRequest_c *v2; // x0

  if ( (byte_40F828A & 1) == 0 )
  {
    sub_B16FFC(&RaidAutoUpdateRequest_TypeInfo, v1);
    byte_40F828A = 1;
  }
  v2 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v2 = RaidAutoUpdateRequest_TypeInfo;
  }
  return v2->static_fields->accessCompletedTimeEventMap;
}


bool __fastcall RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int64_t Time; // x19
  RaidAutoUpdateRequest_c *v4; // x8

  if ( (byte_40F8287 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    sub_B16FFC(&RaidAutoUpdateRequest_TypeInfo, v2);
    byte_40F8287 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v4 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v4 = RaidAutoUpdateRequest_TypeInfo;
  }
  return Time <= v4->static_fields->accessTimeUpdateEventMap;
}


void __fastcall RaidAutoUpdateRequest__UpdateAccessTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  int64_t Time; // x19
  BalanceConfig_c *v5; // x8
  RaidAutoUpdateRequest_c *v6; // x0
  __int64 RequestRaidUpdateEventMap; // x20

  if ( (byte_40F8289 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    sub_B16FFC(&RaidAutoUpdateRequest_TypeInfo, v3);
    byte_40F8289 = 1;
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
  v6 = RaidAutoUpdateRequest_TypeInfo;
  RequestRaidUpdateEventMap = v5->static_fields->RequestRaidUpdateEventMap;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v6 = RaidAutoUpdateRequest_TypeInfo;
  }
  v6->static_fields->accessTimeUpdateEventMap = Time + RequestRaidUpdateEventMap;
}


System_String_o *__fastcall RaidAutoUpdateRequest__getURL(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F8286 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_7141/*"Home/RaidAutoUpdate"*/, v2);
    byte_40F8286 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_7141/*"Home/RaidAutoUpdate"*/, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  const MethodInfo *Time; // x0
  const MethodInfo *v12; // x21
  RaidAutoUpdateRequest_c *v13; // x8
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_40F8288 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&RaidAutoUpdateRequest_TypeInfo, v6);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v8);
    byte_40F8288 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(87, responseList, 0LL);
  if ( !v9 )
    goto LABEL_19;
  v10 = v9;
  if ( !ResponseData__checkError_30924960(v9, 0LL) )
    goto LABEL_19;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (const MethodInfo *)NetworkManager__getTime(0LL);
  v12 = Time;
  v13 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v13 = RaidAutoUpdateRequest_TypeInfo;
  }
  v13->static_fields->accessCompletedTimeEventMap = (int64_t)v12;
  RaidAutoUpdateRequest__UpdateAccessTime(Time);
  success = (Il2CppObject *)v10->fields.success;
  if ( success )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
LABEL_19:
    v15 = (System_String_o *)StringLiteral_21129/*"ok"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}