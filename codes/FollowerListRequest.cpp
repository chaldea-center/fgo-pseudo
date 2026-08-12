void FollowerListRequest___cctor(const MethodInfo *method)
{
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_5972428 & 1) == 0 )
  {
    sub_2213A60(&FollowerListRequest_TypeInfo);
    byte_5972428 = 1;
  }
  static_fields = FollowerListRequest_TypeInfo->static_fields;
  static_fields->refreshResetTime = -1;
  static_fields->refreshTimeUpdate = 0;
  static_fields->requestListType = 0;
  static_fields->updateRequestListType = 0;
}


void FollowerListRequest___ctor(FollowerListRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerListRequest__GetRequestListTypeByQuestId(
        FollowerListRequest_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_5972425 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_5972425 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             questId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0) )
    return 2;
  else
    return 1;
}


bool FollowerListRequest__IsNeedRequestList(FollowerListRequest_o *this, int32_t questId, const MethodInfo *method)
{
  FollowerListRequest_o *v4; // x19
  int32_t RequestListTypeByQuestId; // w0
  __int64 v6; // x1
  FollowerListRequest_c *v7; // x8
  int32_t v8; // w20
  char v9; // w8

  v4 = this;
  if ( (byte_5972424 & 1) == 0 )
  {
    this = (FollowerListRequest_o *)sub_2213A60(&FollowerListRequest_TypeInfo);
    byte_5972424 = 1;
  }
  RequestListTypeByQuestId = FollowerListRequest__GetRequestListTypeByQuestId(this, questId, method);
  v7 = FollowerListRequest_TypeInfo;
  v8 = RequestListTypeByQuestId;
  if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v6);
    v7 = FollowerListRequest_TypeInfo;
  }
  if ( v8 == v7->static_fields->requestListType )
    v9 = ((__int64 (__fastcall *)(FollowerListRequest_o *, const MethodInfo *))v4->klass->vtable._7_checkExpirationDate.methodPtr)(
           v4,
           v4->klass->vtable._7_checkExpirationDate.method)
       ^ 1;
  else
    v9 = 1;
  return v9 & 1;
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  BalanceConfig_c *v13; // x0
  FollowerListRequest_c *v14; // x0
  char v15; // w21
  char v16; // w8
  int32_t RequestListTypeByQuestId; // w0
  __int64 v18; // x1
  FollowerListRequest_c *v19; // x8
  int32_t v20; // w20

  if ( (byte_5972426 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&FollowerListRequest_TypeInfo);
    sub_2213A60(&StringLiteral_24202/*"refresh"*/);
    sub_2213A60(&StringLiteral_24055/*"questPhase"*/);
    sub_2213A60(&StringLiteral_24051/*"questId"*/);
    byte_5972426 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24051/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24055/*"questPhase"*/, questPhase, 0);
  if ( !this )
    sub_2213CDC(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24202/*"refresh"*/, isEnfoceRefresh, 0);
  if ( !isEnfoceRefresh )
    goto LABEL_9;
  v13 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( v13->static_fields->FollowerRefreshRestTime < 0 )
  {
LABEL_9:
    v14 = FollowerListRequest_TypeInfo;
    v15 = 0;
    v16 = 0;
  }
  else
  {
    v14 = FollowerListRequest_TypeInfo;
    v15 = 1;
    v16 = 1;
  }
  if ( !*(&v14->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v14, v11);
    v14 = FollowerListRequest_TypeInfo;
    v16 = v15;
  }
  v14->static_fields->refreshTimeUpdate = v16;
  RequestListTypeByQuestId = FollowerListRequest__GetRequestListTypeByQuestId(
                               (FollowerListRequest_o *)v14,
                               questId,
                               v12);
  v19 = FollowerListRequest_TypeInfo;
  v20 = RequestListTypeByQuestId;
  if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v18);
    v19 = FollowerListRequest_TypeInfo;
  }
  v19->static_fields->updateRequestListType = v20;
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


bool FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  FollowerListRequest_c *v2; // x0
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5972423 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_2213A60(&FollowerListRequest_TypeInfo);
    byte_5972423 = 1;
  }
  v2 = FollowerListRequest_TypeInfo;
  entity = 0;
  if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, method);
    v2 = FollowerListRequest_TypeInfo;
  }
  if ( v2->static_fields->refreshResetTime < 0 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_2213CDC(Master_object, v4);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_3F132BC *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return UserFollowerEntity__isEnableData((UserFollowerEntity_o *)entity, 0);
}


bool FollowerListRequest__checkRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0
  int64_t Time; // x0
  __int64 v4; // x1
  FollowerListRequest_c *v5; // x8
  int64_t v6; // x19

  if ( (byte_597241F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&FollowerListRequest_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597241F = 1;
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
  v5 = FollowerListRequest_TypeInfo;
  v6 = Time;
  if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v4);
    v5 = FollowerListRequest_TypeInfo;
  }
  return v6 >= v5->static_fields->refreshResetTime;
}


void FollowerListRequest__clearRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerListRequest_c *v2; // x0
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_597241E & 1) == 0 )
  {
    sub_2213A60(&FollowerListRequest_TypeInfo);
    byte_597241E = 1;
  }
  v2 = FollowerListRequest_TypeInfo;
  if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v1);
    v2 = FollowerListRequest_TypeInfo;
  }
  static_fields = v2->static_fields;
  static_fields->refreshResetTime = -1;
  static_fields->requestListType = 0;
  static_fields->updateRequestListType = 0;
}


System_String_o *FollowerListRequest__getMockData(FollowerListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_5972422 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972422 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t FollowerListRequest__getRefreshRemain(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0
  FollowerListRequest_c *v3; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_5972420 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&FollowerListRequest_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5972420 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v2 = BalanceConfig_TypeInfo;
  }
  if ( v2->static_fields->FollowerRefreshRestTime < 0 )
    return 0;
  v3 = FollowerListRequest_TypeInfo;
  if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v1);
    v3 = FollowerListRequest_TypeInfo;
  }
  refreshResetTime = v3->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    refreshResetTime = FollowerListRequest_TypeInfo->static_fields->refreshResetTime;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0);
  return (refreshResetTime - Time) & ~((refreshResetTime - Time) >> 63);
}


System_String_o *FollowerListRequest__getURL(FollowerListRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972421 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20441/*"follower/list"*/);
    byte_5972421 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20441/*"follower/list"*/, 0);
}


void FollowerListRequest__requestCompleted(
        FollowerListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  FollowerListRequest_c *v5; // x0
  struct FollowerListRequest_StaticFields *static_fields; // x8
  int64_t Time; // x0
  BalanceConfig_c *v8; // x8
  int64_t v9; // x21
  __int64 FollowerRefreshRestTime; // x23
  struct FollowerListRequest_StaticFields *v11; // x8

  if ( (byte_5972427 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&FollowerListRequest_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5972427 = 1;
  }
  v5 = FollowerListRequest_TypeInfo;
  if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, responseList);
    v5 = FollowerListRequest_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->refreshTimeUpdate )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, responseList);
    Time = NetworkManager__getTime(0);
    v8 = BalanceConfig_TypeInfo;
    v9 = Time;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, responseList);
      v8 = BalanceConfig_TypeInfo;
    }
    v5 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v8->static_fields->FollowerRefreshRestTime;
    if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, responseList);
      v5 = FollowerListRequest_TypeInfo;
    }
    v11 = v5->static_fields;
    v11->refreshResetTime = v9 + FollowerRefreshRestTime;
    v11->refreshTimeUpdate = 0;
  }
  else
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, responseList);
      v5 = FollowerListRequest_TypeInfo;
      static_fields = FollowerListRequest_TypeInfo->static_fields;
    }
    static_fields->refreshResetTime = 0;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, responseList);
    v5 = FollowerListRequest_TypeInfo;
  }
  v5->static_fields->requestListType = v5->static_fields->updateRequestListType;
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0);
}