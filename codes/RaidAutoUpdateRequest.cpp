int64_t __fastcall RaidAutoUpdateRequest__GetAccessCompletedTimeEventMap(const MethodInfo *method)
{
  if ( (byte_4A5CA7B & 1) == 0 )
  {
    sub_1B885B0(&RaidAutoUpdateRequest_TypeInfo);
    byte_4A5CA7B = 1;
  }
  return RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap;
}


bool __fastcall RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  if ( (byte_4A5CA78 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&RaidAutoUpdateRequest_TypeInfo);
    byte_4A5CA78 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) <= RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void __fastcall RaidAutoUpdateRequest__UpdateAccessTime(const MethodInfo *method)
{
  int64_t Time; // x0
  BalanceConfig_c *v2; // x8
  int64_t v3; // x19

  if ( (byte_4A5CA7A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&RaidAutoUpdateRequest_TypeInfo);
    byte_4A5CA7A = 1;
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
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = v3
                                                                          + v2->static_fields->RequestRaidUpdateEventMap;
}


System_String_o *__fastcall RaidAutoUpdateRequest__getURL(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CA77 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_7252/*"Home/RaidAutoUpdate"*/);
    byte_4A5CA77 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_7252/*"Home/RaidAutoUpdate"*/, 0LL);
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
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  const MethodInfo *Time; // x0
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4A5CA79 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&RaidAutoUpdateRequest_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A5CA79 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(88, responseList, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v7 = v5;
  if ( !ResponseData__checkError(v5, v5->fields.resCode, v6) )
    goto LABEL_14;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (const MethodInfo *)NetworkManager__getTime(0LL);
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap = (int64_t)Time;
  RaidAutoUpdateRequest__UpdateAccessTime(Time);
  success = (Il2CppObject *)v7->fields.success;
  if ( success )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
LABEL_14:
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22225/*"ok"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}