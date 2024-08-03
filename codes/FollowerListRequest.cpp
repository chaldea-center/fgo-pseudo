void __fastcall FollowerListRequest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_49FDC91 & 1) == 0 )
  {
    sub_1B640C8(&FollowerListRequest_TypeInfo, v1);
    byte_49FDC91 = 1;
  }
  static_fields = FollowerListRequest_TypeInfo->static_fields;
  static_fields->refreshResetTime = -1LL;
  static_fields->refreshTimeUpdate = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerListRequest__beginRequest(
        FollowerListRequest_o *this,
        bool isEnfoceRefresh,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  BalanceConfig_c *v17; // x0
  FollowerListRequest_c *v18; // x0
  char v19; // w8

  if ( (byte_49FDC8F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isEnfoceRefresh);
    sub_1B640C8(&FollowerListRequest_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_22737/*"refresh"*/, v10);
    sub_1B640C8(&StringLiteral_22600/*"questPhase"*/, v11);
    sub_1B640C8(&StringLiteral_22598/*"questId"*/, v12);
    byte_49FDC8F = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22598/*"questId"*/,
    questId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22600/*"questPhase"*/, questPhase, v13);
  if ( !this )
    sub_1B64324(v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22737/*"refresh"*/, isEnfoceRefresh, v15);
  if ( !isEnfoceRefresh )
    goto LABEL_11;
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( (v17->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
  {
LABEL_11:
    v18 = FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v18 = FollowerListRequest_TypeInfo;
    }
    v19 = 0;
  }
  else
  {
    v18 = FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v18 = FollowerListRequest_TypeInfo;
    }
    v19 = 1;
  }
  v18->static_fields->refreshTimeUpdate = v19;
  RequestBase__beginRequest((RequestBase_o *)this, v16);
}


bool __fastcall FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerListRequest_c *v5; // x0
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FDC8E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserFollowerMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    sub_1B640C8(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v3);
    sub_1B640C8(&FollowerListRequest_TypeInfo, v4);
    byte_49FDC8E = 1;
  }
  v5 = FollowerListRequest_TypeInfo;
  entity = 0LL;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v5 = FollowerListRequest_TypeInfo;
  }
  if ( (v5->static_fields->refreshResetTime & 0x8000000000000000LL) != 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1B64324(Master_object);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_30D412C *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return UserFollowerEntity__isEnableData((UserFollowerEntity_o *)entity, 0LL);
}


bool __fastcall FollowerListRequest__checkRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  int64_t Time; // x0
  FollowerListRequest_c *v6; // x8
  int64_t v7; // x19

  if ( (byte_49FDC8A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v1);
    sub_1B640C8(&FollowerListRequest_TypeInfo, v2);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49FDC8A = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( (v4->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v6 = FollowerListRequest_TypeInfo;
  v7 = Time;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v6 = FollowerListRequest_TypeInfo;
  }
  return v7 >= v6->static_fields->refreshResetTime;
}


void __fastcall FollowerListRequest__clearRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerListRequest_c *v2; // x0

  if ( (byte_49FDC89 & 1) == 0 )
  {
    sub_1B640C8(&FollowerListRequest_TypeInfo, v1);
    byte_49FDC89 = 1;
  }
  v2 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v2 = FollowerListRequest_TypeInfo;
  }
  v2->static_fields->refreshResetTime = -1LL;
}


System_String_o *__fastcall FollowerListRequest__getMockData(FollowerListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_49FDC8D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FDC8D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t __fastcall FollowerListRequest__getRefreshRemain(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  FollowerListRequest_c *v5; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_49FDC8B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v1);
    sub_1B640C8(&FollowerListRequest_TypeInfo, v2);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49FDC8B = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( (v4->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 0LL;
  v5 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v5 = FollowerListRequest_TypeInfo;
  }
  refreshResetTime = v5->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0LL;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    refreshResetTime = FollowerListRequest_TypeInfo->static_fields->refreshResetTime;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return (refreshResetTime - Time) & ~((refreshResetTime - Time) >> 63);
}


System_String_o *__fastcall FollowerListRequest__getURL(FollowerListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDC8C & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19422/*"follower/list"*/, v2);
    byte_49FDC8C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_19422/*"follower/list"*/, 0LL);
}


void __fastcall FollowerListRequest__requestCompleted(
        FollowerListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  FollowerListRequest_c *v6; // x0
  int64_t Time; // x0
  BalanceConfig_c *v8; // x8
  int64_t v9; // x20
  FollowerListRequest_c *v10; // x0
  __int64 FollowerRefreshRestTime; // x22
  struct FollowerListRequest_StaticFields *static_fields; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_49FDC90 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, responseList);
    sub_1B640C8(&FollowerListRequest_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    byte_49FDC90 = 1;
  }
  v6 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v6 = FollowerListRequest_TypeInfo;
  }
  if ( v6->static_fields->refreshTimeUpdate )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v8 = BalanceConfig_TypeInfo;
    v9 = Time;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v10 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v8->static_fields->FollowerRefreshRestTime;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v10 = FollowerListRequest_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->refreshResetTime = v9 + FollowerRefreshRestTime;
    static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FollowerListRequest_TypeInfo;
    }
    v6->static_fields->refreshResetTime = 0LL;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      0LL,
      *(_QWORD *)&CallBack->fields.extra_arg);
}