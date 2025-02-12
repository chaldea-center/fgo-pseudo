int64_t __fastcall RaidAutoUpdateRequest__GetAccessCompletedTimeEventMap(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB6093 & 1) == 0 )
  {
    sub_1C13D24(&RaidAutoUpdateRequest_TypeInfo, v1);
    byte_4BB6093 = 1;
  }
  return RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap;
}


bool __fastcall RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4BB6090 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v1);
    sub_1C13D24(&RaidAutoUpdateRequest_TypeInfo, v2);
    byte_4BB6090 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) <= RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void __fastcall RaidAutoUpdateRequest__UpdateAccessTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  int64_t Time; // x0
  BalanceConfig_c *v5; // x8
  int64_t v6; // x19

  if ( (byte_4BB6092 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, v1);
    sub_1C13D24(&NetworkManager_TypeInfo, v2);
    sub_1C13D24(&RaidAutoUpdateRequest_TypeInfo, v3);
    byte_4BB6092 = 1;
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
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = v6
                                                                          + v5->static_fields->RequestRaidUpdateEventMap;
}


System_String_o *__fastcall RaidAutoUpdateRequest__getURL(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB608F & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_7416/*"Highlighted"*/, v2);
    byte_4BB608F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_7416/*"Highlighted"*/, 0LL);
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
  Il2CppObject *success; // x20
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8

  if ( (byte_4BB6091 & 1) == 0 )
  {
    sub_1C13D24(&JsonManager_TypeInfo, responseList);
    sub_1C13D24(&NetworkManager_TypeInfo, v5);
    sub_1C13D24(&RaidAutoUpdateRequest_TypeInfo, v6);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v8);
    byte_4BB6091 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v9 = ResponseCommandKind__SearchData(88, responseList, 0LL);
  if ( !v9 )
    goto LABEL_14;
  v10 = v9;
  if ( !ResponseData__checkError_42394144(v9, 0LL) )
    goto LABEL_14;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (const MethodInfo *)NetworkManager__getTime(0LL);
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap = (int64_t)Time;
  RaidAutoUpdateRequest__UpdateAccessTime(Time);
  success = (Il2CppObject *)v10->fields.success;
  if ( success )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v13,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
LABEL_14:
    v15 = this->fields.CallBack;
    if ( v15 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v15->fields.m_target)(
        v15->fields.original_method_info,
        StringLiteral_22595/*"offline"*/,
        *(_QWORD *)&v15->fields.extra_arg);
  }
}