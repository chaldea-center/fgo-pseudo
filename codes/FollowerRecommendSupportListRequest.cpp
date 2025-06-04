void __fastcall FollowerRecommendSupportListRequest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8

  if ( (byte_4B03AE0 & 1) == 0 )
  {
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v1);
    byte_4B03AE0 = 1;
  }
  static_fields = FollowerRecommendSupportListRequest_TypeInfo->static_fields;
  static_fields->refreshResetTime = -1LL;
  static_fields->refreshTimeUpdate = 0;
}


bool __fastcall FollowerRecommendSupportListRequest__CheckRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  int64_t Time; // x0
  FollowerRecommendSupportListRequest_c *v6; // x8
  int64_t v7; // x19

  if ( (byte_4B03ADA & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, v1);
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v2);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    byte_4B03ADA = 1;
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
  v6 = FollowerRecommendSupportListRequest_TypeInfo;
  v7 = Time;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v6 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  return v7 >= v6->static_fields->refreshResetTime;
}


void __fastcall FollowerRecommendSupportListRequest__ClearRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerRecommendSupportListRequest_c *v2; // x0

  if ( (byte_4B03AD9 & 1) == 0 )
  {
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v1);
    byte_4B03AD9 = 1;
  }
  v2 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v2 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  v2->static_fields->refreshResetTime = -1LL;
}


int64_t __fastcall FollowerRecommendSupportListRequest__GetRefreshRemain(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  FollowerRecommendSupportListRequest_c *v5; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_4B03ADC & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, v1);
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v2);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    byte_4B03ADC = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( (v4->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 0LL;
  v5 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v5 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  refreshResetTime = v5->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0LL;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    refreshResetTime = FollowerRecommendSupportListRequest_TypeInfo->static_fields->refreshResetTime;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return (refreshResetTime - Time) & ~((refreshResetTime - Time) >> 63);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerRecommendSupportListRequest__beginRequest(
        FollowerRecommendSupportListRequest_o *this,
        bool isEnforceRefresh,
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
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  BalanceConfig_c *v18; // x0
  FollowerRecommendSupportListRequest_c *v19; // x0
  char v20; // w8

  if ( (byte_4B03ADE & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, isEnforceRefresh);
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_22780/*"refresh"*/, v10);
    sub_1BC3008(&StringLiteral_22639/*"questPhase"*/, v11);
    sub_1BC3008(&StringLiteral_22635/*"questId"*/, v12);
    byte_4B03ADE = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22635/*"questId"*/,
    questId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22639/*"questPhase"*/, questPhase, v13);
  if ( !this )
    sub_1BC3264(v14, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22780/*"refresh"*/, isEnforceRefresh, v16);
  if ( !isEnforceRefresh )
    goto LABEL_11;
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  if ( (v18->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
  {
LABEL_11:
    v19 = FollowerRecommendSupportListRequest_TypeInfo;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v19 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v20 = 0;
  }
  else
  {
    v19 = FollowerRecommendSupportListRequest_TypeInfo;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v19 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v20 = 1;
  }
  v19->static_fields->refreshTimeUpdate = v20;
  RequestBase__beginRequest((RequestBase_o *)this, v17);
  return 1;
}


bool __fastcall FollowerRecommendSupportListRequest__checkExpirationDate(
        FollowerRecommendSupportListRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerRecommendSupportListRequest_c *v5; // x0
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B03ADB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v2);
    sub_1BC3008(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v3);
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v4);
    byte_4B03ADB = 1;
  }
  v5 = FollowerRecommendSupportListRequest_TypeInfo;
  entity = 0LL;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v5 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  if ( (v5->static_fields->refreshResetTime & 0x8000000000000000LL) != 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1BC3264(Master_object, v7);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_32B16F8 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)entity, 0LL);
}


System_String_o *__fastcall FollowerRecommendSupportListRequest__getURL(
        FollowerRecommendSupportListRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03ADD & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_19336/*"follower/recommendSupportList"*/, v2);
    byte_4B03ADD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_19336/*"follower/recommendSupportList"*/, 0LL);
}


void __fastcall FollowerRecommendSupportListRequest__requestCompleted(
        FollowerRecommendSupportListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  FollowerRecommendSupportListRequest_c *v6; // x0
  int64_t Time; // x0
  BalanceConfig_c *v8; // x8
  int64_t v9; // x20
  FollowerRecommendSupportListRequest_c *v10; // x0
  __int64 FollowerRefreshRestTime; // x22
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4B03ADF & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, responseList);
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v4);
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    byte_4B03ADF = 1;
  }
  v6 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v6 = FollowerRecommendSupportListRequest_TypeInfo;
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
    v10 = FollowerRecommendSupportListRequest_TypeInfo;
    FollowerRefreshRestTime = v8->static_fields->FollowerRefreshRestTime;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v10 = FollowerRecommendSupportListRequest_TypeInfo;
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
      v6 = FollowerRecommendSupportListRequest_TypeInfo;
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