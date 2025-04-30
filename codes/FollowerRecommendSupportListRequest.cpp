void __fastcall FollowerRecommendSupportListRequest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8

  if ( (byte_4A4FF01 & 1) == 0 )
  {
    sub_1B863B8(&FollowerRecommendSupportListRequest_TypeInfo, v1);
    byte_4A4FF01 = 1;
  }
  static_fields = FollowerRecommendSupportListRequest_TypeInfo->static_fields;
  static_fields->refreshResetTime = -1LL;
  static_fields->refreshTimeUpdate = 0;
}


void __fastcall FollowerRecommendSupportListRequest___ctor(
        FollowerRecommendSupportListRequest_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
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

  if ( (byte_4A4FEFB & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, v1);
    sub_1B863B8(&FollowerRecommendSupportListRequest_TypeInfo, v2);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A4FEFB = 1;
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

  if ( (byte_4A4FEFA & 1) == 0 )
  {
    sub_1B863B8(&FollowerRecommendSupportListRequest_TypeInfo, v1);
    byte_4A4FEFA = 1;
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

  if ( (byte_4A4FEFD & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, v1);
    sub_1B863B8(&FollowerRecommendSupportListRequest_TypeInfo, v2);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A4FEFD = 1;
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
  __int64 v13; // x0
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  FollowerRecommendSupportListRequest_c *v16; // x0
  char v17; // w8

  if ( (byte_4A4FEFF & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, isEnforceRefresh);
    sub_1B863B8(&FollowerRecommendSupportListRequest_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_22681/*"refresh"*/, v10);
    sub_1B863B8(&StringLiteral_22541/*"questPhase"*/, v11);
    sub_1B863B8(&StringLiteral_22539/*"questId"*/, v12);
    byte_4A4FEFF = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22539/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22541/*"questPhase"*/, questPhase, 0LL);
  if ( !this )
    sub_1B86614(v13, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22681/*"refresh"*/, isEnforceRefresh, 0LL);
  if ( !isEnforceRefresh )
    goto LABEL_11;
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  if ( (v15->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
  {
LABEL_11:
    v16 = FollowerRecommendSupportListRequest_TypeInfo;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v16 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v17 = 0;
  }
  else
  {
    v16 = FollowerRecommendSupportListRequest_TypeInfo;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v16 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v17 = 1;
  }
  v16->static_fields->refreshTimeUpdate = v17;
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
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

  if ( (byte_4A4FEFC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v2);
    sub_1B863B8(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v3);
    sub_1B863B8(&FollowerRecommendSupportListRequest_TypeInfo, v4);
    byte_4A4FEFC = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1B86614(Master_object, v7);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3216908 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
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

  if ( (byte_4A4FEFE & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_19286/*"follower/recommendSupportList"*/, v2);
    byte_4A4FEFE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_19286/*"follower/recommendSupportList"*/, 0LL);
}


void __fastcall FollowerRecommendSupportListRequest__requestCompleted(
        FollowerRecommendSupportListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FollowerRecommendSupportListRequest_c *v7; // x0
  int64_t Time; // x0
  BalanceConfig_c *v9; // x8
  int64_t v10; // x21
  FollowerRecommendSupportListRequest_c *v11; // x0
  __int64 FollowerRefreshRestTime; // x23
  struct FollowerRecommendSupportListRequest_StaticFields *static_fields; // x8

  if ( (byte_4A4FF00 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, responseList);
    sub_1B863B8(&FollowerRecommendSupportListRequest_TypeInfo, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    byte_4A4FF00 = 1;
  }
  v7 = FollowerRecommendSupportListRequest_TypeInfo;
  if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    v7 = FollowerRecommendSupportListRequest_TypeInfo;
  }
  if ( v7->static_fields->refreshTimeUpdate )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v9 = BalanceConfig_TypeInfo;
    v10 = Time;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v11 = FollowerRecommendSupportListRequest_TypeInfo;
    FollowerRefreshRestTime = v9->static_fields->FollowerRefreshRestTime;
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
      v11 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->refreshResetTime = v10 + FollowerRefreshRestTime;
    static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FollowerRecommendSupportListRequest_TypeInfo;
    }
    v7->static_fields->refreshResetTime = 0LL;
  }
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0LL);
}