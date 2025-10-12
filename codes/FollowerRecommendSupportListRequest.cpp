void FollowerRecommendSupportListRequest___cctor(const MethodInfo *method)
{
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8

  if ( (byte_4C39505 & 1) == 0 )
  {
    sub_1C32C20(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_4C39505 = 1;
  }
  static_fields = FollowerRecommendSupportListRequest_TypeInfo->static_fields;
  static_fields->refreshResetTime = -1;
  static_fields->refreshTimeUpdate = 0;
}


void FollowerRecommendSupportListRequest___ctor(FollowerRecommendSupportListRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


bool FollowerRecommendSupportListRequest__CheckRefreshRate(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  int64_t Time; // x0
  FollowerRecommendSupportListRequest_c *v3; // x8
  int64_t v4; // x19

  if ( (byte_4C394FF & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C394FF = 1;
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

  if ( (byte_4C394FE & 1) == 0 )
  {
    sub_1C32C20(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_4C394FE = 1;
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

  if ( (byte_4C39501 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C39501 = 1;
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


bool FollowerRecommendSupportListRequest__beginRequest(
        FollowerRecommendSupportListRequest_o *this,
        bool isEnforceRefresh,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x0
  BalanceConfig_c *v10; // x0
  FollowerRecommendSupportListRequest_c *v11; // x0
  char v12; // w8

  if ( (byte_4C39503 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C32C20(&StringLiteral_23002/*"refresh"*/);
    sub_1C32C20(&StringLiteral_22861/*"questPhase"*/);
    sub_1C32C20(&StringLiteral_22857/*"questId"*/);
    byte_4C39503 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22857/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22861/*"questPhase"*/, questPhase, 0);
  if ( !this )
    sub_1C32E7C(v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23002/*"refresh"*/, isEnforceRefresh, 0);
  if ( !isEnforceRefresh )
    goto LABEL_11;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( v10->static_fields->FollowerRefreshRestTime < 0 )
  {
LABEL_11:
    v11 = FollowerRecommendSupportListRequest_TypeInfo;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v11 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v12 = 0;
  }
  else
  {
    v11 = FollowerRecommendSupportListRequest_TypeInfo;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v11 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v12 = 1;
  }
  v11->static_fields->refreshTimeUpdate = v12;
  RequestBase__beginRequest((RequestBase_o *)this, 0);
  return 1;
}


bool FollowerRecommendSupportListRequest__checkExpirationDate(
        FollowerRecommendSupportListRequest_o *this,
        const MethodInfo *method)
{
  FollowerRecommendSupportListRequest_c *v2; // x0
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C39500 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C32C20(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_4C39500 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C32E7C(Master_object);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3398EC0 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
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

  if ( (byte_4C39502 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19520/*"follower/recommendSupportList"*/);
    byte_4C39502 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_19520/*"follower/recommendSupportList"*/, 0);
}


void FollowerRecommendSupportListRequest__requestCompleted(
        FollowerRecommendSupportListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  FollowerRecommendSupportListRequest_c *v5; // x0
  int64_t Time; // x0
  BalanceConfig_c *v7; // x8
  int64_t v8; // x21
  FollowerRecommendSupportListRequest_c *v9; // x0
  __int64 FollowerRefreshRestTime; // x23
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8

  if ( (byte_4C39504 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C39504 = 1;
  }
  v5 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v5 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  if ( v5->static_fields->refreshTimeUpdate )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    v7 = BalanceConfig_TypeInfo;
    v8 = Time;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v9 = FollowerRecommendSupportListRequest_TypeInfo;
    FollowerRefreshRestTime = v7->static_fields->FollowerRefreshRestTime;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v9 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->refreshResetTime = v8 + FollowerRefreshRestTime;
    static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v5->static_fields->refreshResetTime = 0;
  }
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0);
}