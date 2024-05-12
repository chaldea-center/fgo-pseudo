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
  RaidAutoUpdateRequest_c *v1; // x0

  if ( (byte_4389988 & 1) == 0 )
  {
    sub_B775C4(&RaidAutoUpdateRequest_TypeInfo);
    byte_4389988 = 1;
  }
  v1 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v1 = RaidAutoUpdateRequest_TypeInfo;
  }
  return v1->static_fields->accessCompletedTimeEventMap;
}


bool __fastcall RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  int64_t Time; // x19
  RaidAutoUpdateRequest_c *v2; // x8

  if ( (byte_4389985 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&RaidAutoUpdateRequest_TypeInfo);
    byte_4389985 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v2 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v2 = RaidAutoUpdateRequest_TypeInfo;
  }
  return Time <= v2->static_fields->accessTimeUpdateEventMap;
}


void __fastcall RaidAutoUpdateRequest__UpdateAccessTime(const MethodInfo *method)
{
  int64_t Time; // x19
  BalanceConfig_c *v2; // x8
  RaidAutoUpdateRequest_c *v3; // x0
  __int64 RequestRaidUpdateEventMap; // x20

  if ( (byte_4389987 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&RaidAutoUpdateRequest_TypeInfo);
    byte_4389987 = 1;
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
  v3 = RaidAutoUpdateRequest_TypeInfo;
  RequestRaidUpdateEventMap = v2->static_fields->RequestRaidUpdateEventMap;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v3 = RaidAutoUpdateRequest_TypeInfo;
  }
  v3->static_fields->accessTimeUpdateEventMap = Time + RequestRaidUpdateEventMap;
}


System_String_o *__fastcall RaidAutoUpdateRequest__getURL(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4389984 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_7322/*"Home/RaidAutoUpdate"*/);
    byte_4389984 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_7322/*"Home/RaidAutoUpdate"*/, 0LL);
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
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  const MethodInfo *Time; // x0
  const MethodInfo *v8; // x21
  Il2CppObject *success; // x20
  System_String_o *v10; // x1
  RaidAutoUpdateRequest_c *v11; // x8

  if ( (byte_4389986 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&RaidAutoUpdateRequest_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_4389986 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(88, responseList, 0LL);
  if ( !v5 )
    goto LABEL_19;
  v6 = v5;
  if ( !ResponseData__checkError_30128096(v5, 0LL) )
    goto LABEL_19;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (const MethodInfo *)NetworkManager__getTime(0LL);
  v8 = Time;
  v11 = RaidAutoUpdateRequest_TypeInfo;
  if ( (BYTE3(RaidAutoUpdateRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RaidAutoUpdateRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RaidAutoUpdateRequest_TypeInfo);
    v11 = RaidAutoUpdateRequest_TypeInfo;
  }
  v11->static_fields->accessCompletedTimeEventMap = (int64_t)v8;
  RaidAutoUpdateRequest__UpdateAccessTime(Time);
  success = (Il2CppObject *)v6->fields.success;
  if ( success )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
LABEL_19:
    v10 = (System_String_o *)StringLiteral_21657/*"ok"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}