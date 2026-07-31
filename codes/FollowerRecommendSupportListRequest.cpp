void FollowerRecommendSupportListRequest___cctor(const MethodInfo *method)
{
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8

  if ( (byte_593A253 & 1) == 0 )
  {
    sub_21FFC50(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_593A253 = 1;
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
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0
  int64_t Time; // x0
  __int64 v4; // x1
  FollowerRecommendSupportListRequest_c *v5; // x8
  int64_t v6; // x19

  if ( (byte_593A24D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A24D = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v2 = BalanceConfig_TypeInfo;
  }
  if ( v2->static_fields->FollowerRefreshRestTime < 0 )
    return 1;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0);
  v5 = FollowerRecommendSupportListRequest_TypeInfo;
  v6 = Time;
  if ( !*(&FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, v4);
    v5 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  return v6 >= v5->static_fields->refreshResetTime;
}


void FollowerRecommendSupportListRequest__ClearRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerRecommendSupportListRequest_c *v2; // x0

  if ( (byte_593A24C & 1) == 0 )
  {
    sub_21FFC50(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_593A24C = 1;
  }
  v2 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !*(&FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, v1);
    v2 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  v2->static_fields->refreshResetTime = -1;
}


int64_t FollowerRecommendSupportListRequest__GetRefreshRemain(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0
  FollowerRecommendSupportListRequest_c *v3; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_593A24F & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A24F = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v2 = BalanceConfig_TypeInfo;
  }
  if ( v2->static_fields->FollowerRefreshRestTime < 0 )
    return 0;
  v3 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !*(&FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, v1);
    v3 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  refreshResetTime = v3->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    refreshResetTime = FollowerRecommendSupportListRequest_TypeInfo->static_fields->refreshResetTime;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
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
  __int64 v10; // x1
  __int64 v11; // x1
  BalanceConfig_c *v12; // x0
  FollowerRecommendSupportListRequest_c *v13; // x0
  char v14; // w20
  char v15; // w8

  if ( (byte_593A251 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_21FFC50(&StringLiteral_24154/*"refresh"*/);
    sub_21FFC50(&StringLiteral_24008/*"questPhase"*/);
    sub_21FFC50(&StringLiteral_24004/*"questId"*/);
    byte_593A251 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24004/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24008/*"questPhase"*/, questPhase, 0);
  if ( !this )
    sub_21FFECC(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24154/*"refresh"*/, isEnforceRefresh, 0);
  if ( !isEnforceRefresh )
    goto LABEL_9;
  v12 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v12->static_fields->FollowerRefreshRestTime < 0 )
  {
LABEL_9:
    v13 = FollowerRecommendSupportListRequest_TypeInfo;
    v14 = 0;
    v15 = 0;
  }
  else
  {
    v13 = FollowerRecommendSupportListRequest_TypeInfo;
    v14 = 1;
    v15 = 1;
  }
  if ( !*(&v13->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v13, v11);
    v13 = FollowerRecommendSupportListRequest_TypeInfo;
    v15 = v14;
  }
  v13->static_fields->refreshTimeUpdate = v15;
  RequestBase__beginRequest((RequestBase_o *)this, 0);
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

  if ( (byte_593A24E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_21FFC50(&FollowerRecommendSupportListRequest_TypeInfo);
    byte_593A24E = 1;
  }
  v2 = FollowerRecommendSupportListRequest_TypeInfo;
  entity = 0;
  if ( !*(&FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, method);
    v2 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  if ( v2->static_fields->refreshResetTime < 0 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_21FFECC(Master_object, v4);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3EDFB14 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
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

  if ( (byte_593A250 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20401/*"follower/recommendSupportList"*/);
    byte_593A250 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_20401/*"follower/recommendSupportList"*/, 0);
}


void FollowerRecommendSupportListRequest__requestCompleted(
        FollowerRecommendSupportListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  FollowerRecommendSupportListRequest_c *v5; // x0
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8
  int64_t Time; // x0
  __int64 v8; // x1
  BalanceConfig_c *v9; // x8
  int64_t v10; // x21
  FollowerRecommendSupportListRequest_c *v11; // x0
  __int64 FollowerRefreshRestTime; // x23
  struct FollowerRecommendSupportListRequest_StaticFields *v13; // x8

  if ( (byte_593A252 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A252 = 1;
  }
  v5 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !*(&FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, responseList);
    v5 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->refreshTimeUpdate )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, responseList);
    Time = NetworkManager__getTime(0);
    v9 = BalanceConfig_TypeInfo;
    v10 = Time;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
      v9 = BalanceConfig_TypeInfo;
    }
    v11 = FollowerRecommendSupportListRequest_TypeInfo;
    FollowerRefreshRestTime = v9->static_fields->FollowerRefreshRestTime;
    if ( !*(&FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, v8);
      v11 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v13 = v11->static_fields;
    v13->refreshResetTime = v10 + FollowerRefreshRestTime;
    v13->refreshTimeUpdate = 0;
  }
  else
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, responseList);
      static_fields = FollowerRecommendSupportListRequest_TypeInfo->static_fields;
    }
    static_fields->refreshResetTime = 0;
  }
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0);
}