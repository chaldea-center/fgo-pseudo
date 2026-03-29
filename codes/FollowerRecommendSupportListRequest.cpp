void FollowerRecommendSupportListRequest___cctor(const MethodInfo *method)
{
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8

  if ( (byte_4D32510 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_4D32510 = 1;
  }
  static_fields = FollowerRecommendSupportListRequest_TypeInfo->static_fields;
  static_fields->refreshResetTime = -1;
  static_fields->refreshTimeUpdate = 0;
}


bool FollowerRecommendSupportListRequest__CheckRefreshRate(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  int64_t Time; // x0
  FollowerRecommendSupportListRequest_c *v3; // x8
  int64_t v4; // x19

  if ( (byte_4D3250A & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D3250A = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  if ( v1->static_fields->FollowerRefreshRestTime < 0 )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v3 = FollowerRecommendSupportListRequest_TypeInfo;
  v4 = Time;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v3 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  return v4 >= v3->static_fields->refreshResetTime;
}


void FollowerRecommendSupportListRequest__ClearRefreshRate(const MethodInfo *method)
{
  FollowerRecommendSupportListRequest_c *v1; // x0

  if ( (byte_4D32509 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_4D32509 = 1;
  }
  v1 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v1 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  v1->static_fields->refreshResetTime = -1;
}


int64_t FollowerRecommendSupportListRequest__GetRefreshRemain(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  FollowerRecommendSupportListRequest_c *v2; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_4D3250C & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D3250C = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  if ( v1->static_fields->FollowerRefreshRestTime < 0 )
    return 0;
  v2 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v2 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  refreshResetTime = v2->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    refreshResetTime = FollowerRecommendSupportListRequest_TypeInfo->static_fields->refreshResetTime;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return (refreshResetTime - Time) & ~((refreshResetTime - Time) >> 63);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerRecommendSupportListRequest__beginRequest(
        FollowerRecommendSupportListRequest_o *this,
        bool isEnforceRefresh,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  BalanceConfig_c *v14; // x0
  FollowerRecommendSupportListRequest_c *v15; // x0
  char v16; // w8

  if ( (byte_4D3250E & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C93AD4(&StringLiteral_23291/*"refresh"*/);
    sub_1C93AD4(&StringLiteral_23150/*"questPhase"*/);
    sub_1C93AD4(&StringLiteral_23146/*"questId"*/);
    byte_4D3250E = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23146/*"questId"*/,
    questId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23150/*"questPhase"*/, questPhase, v9);
  if ( !this )
    sub_1C93D2C(v10, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23291/*"refresh"*/, isEnforceRefresh, v12);
  if ( !isEnforceRefresh )
    goto LABEL_11;
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( v14->static_fields->FollowerRefreshRestTime < 0 )
  {
LABEL_11:
    v15 = FollowerRecommendSupportListRequest_TypeInfo;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v15 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v16 = 0;
  }
  else
  {
    v15 = FollowerRecommendSupportListRequest_TypeInfo;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v15 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v16 = 1;
  }
  v15->static_fields->refreshTimeUpdate = v16;
  RequestBase__beginRequest((RequestBase_o *)this, v13);
  return 1;
}


bool FollowerRecommendSupportListRequest__checkExpirationDate(
        FollowerRecommendSupportListRequest_o *this,
        const MethodInfo *method)
{
  FollowerRecommendSupportListRequest_c *v2; // x0
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D3250B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_4D3250B = 1;
  }
  v2 = FollowerRecommendSupportListRequest_TypeInfo;
  entity = 0;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v2 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  if ( v2->static_fields->refreshResetTime < 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C93D2C(Master_object, v4);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3465B50 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)entity, 0);
}


System_String_o *FollowerRecommendSupportListRequest__getURL(
        FollowerRecommendSupportListRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D3250D & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_19732/*"follower/recommendSupportList"*/);
    byte_4D3250D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_19732/*"follower/recommendSupportList"*/, 0);
}


void FollowerRecommendSupportListRequest__requestCompleted(
        FollowerRecommendSupportListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  FollowerRecommendSupportListRequest_c *v4; // x0
  int64_t Time; // x0
  BalanceConfig_c *v6; // x8
  int64_t v7; // x20
  FollowerRecommendSupportListRequest_c *v8; // x0
  __int64 FollowerRefreshRestTime; // x22
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4D3250F & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D3250F = 1;
  }
  v4 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v4 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  if ( v4->static_fields->refreshTimeUpdate )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    v6 = BalanceConfig_TypeInfo;
    v7 = Time;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    v8 = FollowerRecommendSupportListRequest_TypeInfo;
    FollowerRefreshRestTime = v6->static_fields->FollowerRefreshRestTime;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v8 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->refreshResetTime = v7 + FollowerRefreshRestTime;
    static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v4->static_fields->refreshResetTime = 0;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      0,
      CallBack->fields.method);
}