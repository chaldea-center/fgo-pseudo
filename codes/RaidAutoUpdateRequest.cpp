int64_t __fastcall RaidAutoUpdateRequest__GetAccessCompletedTimeEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B17B3C & 1) == 0 )
  {
    sub_1BCA7E0(&RaidAutoUpdateRequest_TypeInfo, v1, v2);
    byte_4B17B3C = 1;
  }
  return RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap;
}


bool __fastcall RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17B39 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&RaidAutoUpdateRequest_TypeInfo, v3, v4);
    byte_4B17B39 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  return NetworkManager__getTime(0LL) <= RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void __fastcall RaidAutoUpdateRequest__UpdateAccessTime(const MethodInfo *method)
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

  if ( (byte_4B17B3B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&RaidAutoUpdateRequest_TypeInfo, v5, v6);
    byte_4B17B3B = 1;
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
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessTimeUpdateEventMap = v10
                                                                          + v9->static_fields->RequestRaidUpdateEventMap;
}


System_String_o *__fastcall RaidAutoUpdateRequest__getURL(RaidAutoUpdateRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B38 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_7377/*"Home/RaidAutoUpdate"*/, v3, v4);
    byte_4B17B38 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_7377/*"Home/RaidAutoUpdate"*/, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ResponseData_o *v13; // x0
  ResponseData_o *v14; // x20
  __int64 v15; // x1
  const MethodInfo *Time; // x0
  __int64 v17; // x1
  Il2CppObject *success; // x20
  System_String_o *v19; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v21; // x8

  if ( (byte_4B17B3A & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&RaidAutoUpdateRequest_TypeInfo, v7, v8);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v11, v12);
    byte_4B17B3A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v13 = ResponseCommandKind__SearchData(88, responseList, 0LL);
  if ( !v13 )
    goto LABEL_14;
  v14 = v13;
  if ( !ResponseData__checkError_41952396(v13, 0LL) )
    goto LABEL_14;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Time = (const MethodInfo *)NetworkManager__getTime(0LL);
  RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap = (int64_t)Time;
  RaidAutoUpdateRequest__UpdateAccessTime(Time);
  success = (Il2CppObject *)v14->fields.success;
  if ( success )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v17);
    v19 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v19,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
LABEL_14:
    v21 = this->fields.CallBack;
    if ( v21 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v21->fields.m_target)(
        v21->fields.original_method_info,
        StringLiteral_22465/*"ok"*/,
        *(_QWORD *)&v21->fields.extra_arg);
  }
}