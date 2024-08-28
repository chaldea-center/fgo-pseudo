bool __fastcall TopHomeRequest__IsExpirationDateUpdateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4A0A5C0 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, v1);
    sub_1B686D4(&TopHomeRequest_TypeInfo, v2);
    byte_4A0A5C0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) <= TopHomeRequest_TypeInfo->static_fields->accessTimeUpdateEventMap;
}


void __fastcall TopHomeRequest__UpdateAccessTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  int64_t Time; // x0
  BalanceConfig_c *v5; // x8
  int64_t v6; // x19
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct TopHomeRequest_StaticFields *v8; // x9

  if ( (byte_4A0A5C2 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, v1);
    sub_1B686D4(&NetworkManager_TypeInfo, v2);
    sub_1B686D4(&TopHomeRequest_TypeInfo, v3);
    byte_4A0A5C2 = 1;
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
  static_fields = v5->static_fields;
  v8 = TopHomeRequest_TypeInfo->static_fields;
  v8->accessTime = v6 + static_fields->RequestTopHomeExpirationDateSec;
  v8->accessTimeUpdateEventMap = v6 + static_fields->RequestTopHomeExpirationDateSecUpdateEventMap;
}


bool __fastcall TopHomeRequest__checkExpirationDate(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8
  int64_t nextRefreshTime; // x9
  bool result; // w0

  if ( (byte_4A0A5BD & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&TopHomeRequest_TypeInfo, v2);
    byte_4A0A5BD = 1;
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
  __int64 v1; // x1

  if ( (byte_4A0A5BA & 1) == 0 )
  {
    sub_1B686D4(&TopHomeRequest_TypeInfo, v1);
    byte_4A0A5BA = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
}


System_String_o *__fastcall TopHomeRequest__getMockData(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A0A5BC & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_9074/*"MockTopLoginRequest"*/, v2);
    byte_4A0A5BC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9074/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopHomeRequest__getURL(TopHomeRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A5BB & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_19874/*"home/top"*/, v2);
    byte_4A0A5BB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_19874/*"home/top"*/, 0LL);
}


bool __fastcall TopHomeRequest__isBackgroundRequest(TopHomeRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A0A5BE & 1) == 0 )
  {
    sub_1B686D4(&TopHomeRequest_TypeInfo, method);
    byte_4A0A5BE = 1;
  }
  return TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled;
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
  const MethodInfo *v10; // x2
  ResponseData_o *v11; // x20
  _BOOL8 v12; // x0
  Il2CppObject *success; // x20
  System_String_o *v14; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v16; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8
  __int64 *v20; // x9

  if ( (byte_4A0A5C3 & 1) == 0 )
  {
    sub_1B686D4(&JsonManager_TypeInfo, responseList);
    sub_1B686D4(&ResponseCommandKind_TypeInfo, v5);
    sub_1B686D4(&TopHomeRequest_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_22150/*"ok"*/, v7);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v8);
    byte_4A0A5C3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v9 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( !v9 || (v11 = v9, !(v12 = ResponseData__checkError(v9, v9->fields.resCode, v10))) )
  {
    static_fields = TopHomeRequest_TypeInfo->static_fields;
    *(_OWORD *)&static_fields->accessTime = 0u;
    *(_OWORD *)&static_fields->lastRefreshTime = 0u;
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v20 = &StringLiteral_21981/*"ng"*/;
    goto LABEL_14;
  }
  TopHomeRequest__UpdateAccessTime((const MethodInfo *)v12);
  success = (Il2CppObject *)v11->fields.success;
  if ( !success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v20 = &StringLiteral_22150/*"ok"*/;
LABEL_14:
    m_target = CallBack->fields.m_target;
    original_method_info = CallBack->fields.original_method_info;
    v16 = *v20;
    goto LABEL_15;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson(success, 0, 0, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v16 = (__int64)v14;
    m_target = CallBack->fields.m_target;
    original_method_info = CallBack->fields.original_method_info;
LABEL_15:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))m_target)(
      original_method_info,
      v16,
      *(_QWORD *)&CallBack->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TopHomeRequest__setBackgroundRequest(TopHomeRequest_o *this, bool isEnabled, const MethodInfo *method)
{
  if ( (byte_4A0A5BF & 1) == 0 )
  {
    sub_1B686D4(&TopHomeRequest_TypeInfo, isEnabled);
    byte_4A0A5BF = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->isBackgroundRequestEnabled = isEnabled;
}


void __fastcall TopHomeRequest__setRecentRefreshTime(int64_t time, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x0
  struct TopHomeRequest_StaticFields *static_fields; // x8

  if ( (byte_4A0A5C1 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&TopHomeRequest_TypeInfo, v3);
    byte_4A0A5C1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4 = NetworkManager__getTime(0LL);
  static_fields = TopHomeRequest_TypeInfo->static_fields;
  static_fields->nextRefreshTime = time;
  static_fields->lastRefreshTime = v4;
}