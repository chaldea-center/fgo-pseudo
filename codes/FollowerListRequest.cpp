void FollowerListRequest___cctor(const MethodInfo *method)
{
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_4E06550 & 1) == 0 )
  {
    sub_1CE6700(&FollowerListRequest_TypeInfo);
    byte_4E06550 = 1;
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


int32_t FollowerListRequest__GetRequestListTypeByQuestId(
        FollowerListRequest_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4E0654D & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_4E0654D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    sub_1CE6958(0, v5);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             questId,
             (const MethodInfo_34E925C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0) )
    return 2;
  else
    return 1;
}


bool FollowerListRequest__IsNeedRequestList(FollowerListRequest_o *this, int32_t questId, const MethodInfo *method)
{
  FollowerListRequest_o *v4; // x19
  int32_t RequestListTypeByQuestId; // w0
  FollowerListRequest_c *v6; // x8
  int32_t v7; // w20

  v4 = this;
  if ( (byte_4E0654C & 1) == 0 )
  {
    this = (FollowerListRequest_o *)sub_1CE6700(&FollowerListRequest_TypeInfo);
    byte_4E0654C = 1;
  }
  RequestListTypeByQuestId = FollowerListRequest__GetRequestListTypeByQuestId(this, questId, method);
  v6 = FollowerListRequest_TypeInfo;
  v7 = RequestListTypeByQuestId;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v6 = FollowerListRequest_TypeInfo;
  }
  return v7 != v6->static_fields->requestListType
      || (((__int64 (__fastcall *)(FollowerListRequest_o *, const MethodInfo *))v4->klass->vtable._7_checkExpirationDate.methodPtr)(
            v4,
            v4->klass->vtable._7_checkExpirationDate.method)
        & 1) == 0;
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
  const MethodInfo *v11; // x2
  BalanceConfig_c *v12; // x0
  FollowerListRequest_o *v13; // x0
  char v14; // w8
  int32_t RequestListTypeByQuestId; // w0
  FollowerListRequest_c *v16; // x8
  int32_t v17; // w20

  if ( (byte_4E0654E & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&FollowerListRequest_TypeInfo);
    sub_1CE6700(&StringLiteral_23372/*"refresh"*/);
    sub_1CE6700(&StringLiteral_23229/*"questPhase"*/);
    sub_1CE6700(&StringLiteral_23225/*"questId"*/);
    byte_4E0654E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23225/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23229/*"questPhase"*/, questPhase, 0);
  if ( !this )
    sub_1CE6958(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23372/*"refresh"*/, isEnfoceRefresh, 0);
  if ( !isEnfoceRefresh )
    goto LABEL_11;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v12->static_fields->FollowerRefreshRestTime < 0 )
  {
LABEL_11:
    v13 = (FollowerListRequest_o *)FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v13 = (FollowerListRequest_o *)FollowerListRequest_TypeInfo;
    }
    v14 = 0;
  }
  else
  {
    v13 = (FollowerListRequest_o *)FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v13 = (FollowerListRequest_o *)FollowerListRequest_TypeInfo;
    }
    v14 = 1;
  }
  LOBYTE(v13[4].fields.paramInteger->monitor) = v14;
  RequestListTypeByQuestId = FollowerListRequest__GetRequestListTypeByQuestId(v13, questId, v11);
  v16 = FollowerListRequest_TypeInfo;
  v17 = RequestListTypeByQuestId;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v16 = FollowerListRequest_TypeInfo;
  }
  v16->static_fields->updateRequestListType = v17;
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


bool FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  FollowerListRequest_c *v2; // x0
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E0654B & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1CE6700(&FollowerListRequest_TypeInfo);
    byte_4E0654B = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1CE6958(Master_object, v4);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_34EBB38 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
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

  if ( (byte_4E06547 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&FollowerListRequest_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E06547 = 1;
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
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_4E06546 & 1) == 0 )
  {
    sub_1CE6700(&FollowerListRequest_TypeInfo);
    byte_4E06546 = 1;
  }
  v1 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v1 = FollowerListRequest_TypeInfo;
  }
  static_fields = v1->static_fields;
  static_fields->refreshResetTime = -1;
  static_fields->requestListType = 0;
  static_fields->updateRequestListType = 0;
}


System_String_o *FollowerListRequest__getMockData(FollowerListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E0654A & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E0654A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t FollowerListRequest__getRefreshRemain(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  FollowerListRequest_c *v2; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_4E06548 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&FollowerListRequest_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E06548 = 1;
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

  if ( (byte_4E06549 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19795/*"follower/list"*/);
    byte_4E06549 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_19795/*"follower/list"*/, 0);
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
  __int64 FollowerRefreshRestTime; // x23
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_4E0654F & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&FollowerListRequest_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E0654F = 1;
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
    v5 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v7->static_fields->FollowerRefreshRestTime;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v5 = FollowerListRequest_TypeInfo;
    }
    static_fields = v5->static_fields;
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
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = FollowerListRequest_TypeInfo;
  }
  v5->static_fields->requestListType = v5->static_fields->updateRequestListType;
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0);
}