void FollowerListRequest___cctor(const MethodInfo *method)
{
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_4C28DF4 & 1) == 0 )
  {
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    byte_4C28DF4 = 1;
  }
  static_fields = FollowerListRequest_TypeInfo->static_fields;
  static_fields->refreshResetTime = -1;
  static_fields->refreshTimeUpdate = 0;
}


void FollowerListRequest___ctor(FollowerListRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void FollowerListRequest__beginRequest(
        FollowerListRequest_o *this,
        bool isEnfoceRefresh,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0
  FollowerListRequest_c *v12; // x0
  char v13; // w8

  if ( (byte_4C28DF2 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    sub_1C2D490(&StringLiteral_22985/*"refresh"*/);
    sub_1C2D490(&StringLiteral_22844/*"questPhase"*/);
    sub_1C2D490(&StringLiteral_22840/*"questId"*/);
    byte_4C28DF2 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22840/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22844/*"questPhase"*/, questPhase, 0);
  if ( !this )
    sub_1C2D6EC(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22985/*"refresh"*/, isEnfoceRefresh, 0);
  if ( !isEnfoceRefresh )
    goto LABEL_11;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( v11->static_fields->FollowerRefreshRestTime < 0 )
  {
LABEL_11:
    v12 = FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v12 = FollowerListRequest_TypeInfo;
    }
    v13 = 0;
  }
  else
  {
    v12 = FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v12 = FollowerListRequest_TypeInfo;
    }
    v13 = 1;
  }
  v12->static_fields->refreshTimeUpdate = v13;
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


bool FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  FollowerListRequest_c *v2; // x0
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C28DF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    byte_4C28DF1 = 1;
  }
  v2 = FollowerListRequest_TypeInfo;
  entity = 0;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v2 = FollowerListRequest_TypeInfo;
  }
  if ( v2->static_fields->refreshResetTime < 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C2D6EC(Master_object, v4);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_338A420 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return UserFollowerEntity__isEnableData((UserFollowerEntity_o *)entity, 0);
}


bool FollowerListRequest__checkRefreshRate(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  int64_t Time; // x0
  FollowerListRequest_c *v3; // x8
  int64_t v4; // x19

  if ( (byte_4C28DED & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28DED = 1;
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
  v3 = FollowerListRequest_TypeInfo;
  v4 = Time;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v3 = FollowerListRequest_TypeInfo;
  }
  return v4 >= v3->static_fields->refreshResetTime;
}


void FollowerListRequest__clearRefreshRate(const MethodInfo *method)
{
  FollowerListRequest_c *v1; // x0

  if ( (byte_4C28DEC & 1) == 0 )
  {
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    byte_4C28DEC = 1;
  }
  v1 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v1 = FollowerListRequest_TypeInfo;
  }
  v1->static_fields->refreshResetTime = -1;
}


System_String_o *FollowerListRequest__getMockData(FollowerListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28DF0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28DF0 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t FollowerListRequest__getRefreshRemain(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  FollowerListRequest_c *v2; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_4C28DEE & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28DEE = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  if ( v1->static_fields->FollowerRefreshRestTime < 0 )
    return 0;
  v2 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v2 = FollowerListRequest_TypeInfo;
  }
  refreshResetTime = v2->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    refreshResetTime = FollowerListRequest_TypeInfo->static_fields->refreshResetTime;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return (refreshResetTime - Time) & ~((refreshResetTime - Time) >> 63);
}


System_String_o *FollowerListRequest__getURL(FollowerListRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28DEF & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19507/*"follower/list"*/);
    byte_4C28DEF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_19507/*"follower/list"*/, 0);
}


void FollowerListRequest__requestCompleted(
        FollowerListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  FollowerListRequest_c *v5; // x0
  int64_t Time; // x0
  BalanceConfig_c *v7; // x8
  int64_t v8; // x21
  FollowerListRequest_c *v9; // x0
  __int64 FollowerRefreshRestTime; // x23
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_4C28DF3 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28DF3 = 1;
  }
  v5 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v5 = FollowerListRequest_TypeInfo;
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
    v9 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v7->static_fields->FollowerRefreshRestTime;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v9 = FollowerListRequest_TypeInfo;
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
      v5 = FollowerListRequest_TypeInfo;
    }
    v5->static_fields->refreshResetTime = 0;
  }
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0);
}