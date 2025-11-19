void FollowerListRequest___cctor(const MethodInfo *method)
{
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_4CB7E3F & 1) == 0 )
  {
    sub_1C6BA08(&FollowerListRequest_TypeInfo);
    byte_4CB7E3F = 1;
  }
  static_fields = FollowerListRequest_TypeInfo->static_fields;
  static_fields->refreshResetTime = -1;
  static_fields->refreshTimeUpdate = 0;
  static_fields->requestListType = 0;
  static_fields->updateRequestListType = 0;
}


int32_t FollowerListRequest__GetRequestListTypeByQuestId(
        FollowerListRequest_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4CB7E3C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_4CB7E3C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v5);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             questId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
  if ( (byte_4CB7E3B & 1) == 0 )
  {
    this = (FollowerListRequest_o *)sub_1C6BA08(&FollowerListRequest_TypeInfo);
    byte_4CB7E3B = 1;
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


// local variable allocation has failed, the output may be wrong!
void FollowerListRequest__beginRequest(
        FollowerListRequest_o *this,
        bool isEnfoceRefresh,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  BalanceConfig_c *v14; // x0
  FollowerListRequest_o *v15; // x0
  char v16; // w8
  int32_t RequestListTypeByQuestId; // w0
  const MethodInfo *v18; // x1
  FollowerListRequest_c *v19; // x8
  int32_t v20; // w20

  if ( (byte_4CB7E3D & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&FollowerListRequest_TypeInfo);
    sub_1C6BA08(&StringLiteral_23099/*"refresh"*/);
    sub_1C6BA08(&StringLiteral_22958/*"questPhase"*/);
    sub_1C6BA08(&StringLiteral_22954/*"questId"*/);
    byte_4CB7E3D = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22954/*"questId"*/,
    questId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22958/*"questPhase"*/, questPhase, v9);
  if ( !this )
    sub_1C6BC60(v10, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23099/*"refresh"*/, isEnfoceRefresh, v12);
  if ( !isEnfoceRefresh )
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
    v15 = (FollowerListRequest_o *)FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v15 = (FollowerListRequest_o *)FollowerListRequest_TypeInfo;
    }
    v16 = 0;
  }
  else
  {
    v15 = (FollowerListRequest_o *)FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v15 = (FollowerListRequest_o *)FollowerListRequest_TypeInfo;
    }
    v16 = 1;
  }
  LOBYTE(v15[4].fields.paramInteger->monitor) = v16;
  RequestListTypeByQuestId = FollowerListRequest__GetRequestListTypeByQuestId(v15, questId, v13);
  v19 = FollowerListRequest_TypeInfo;
  v20 = RequestListTypeByQuestId;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v19 = FollowerListRequest_TypeInfo;
  }
  v19->static_fields->updateRequestListType = v20;
  RequestBase__beginRequest((RequestBase_o *)this, v18);
}


bool FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  FollowerListRequest_c *v2; // x0
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CB7E3A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C6BA08(&FollowerListRequest_TypeInfo);
    byte_4CB7E3A = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C6BC60(Master_object, v4);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_33FB764 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
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

  if ( (byte_4CB7E36 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&FollowerListRequest_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB7E36 = 1;
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

  if ( (byte_4CB7E35 & 1) == 0 )
  {
    sub_1C6BA08(&FollowerListRequest_TypeInfo);
    byte_4CB7E35 = 1;
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
  if ( (byte_4CB7E39 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7E39 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t FollowerListRequest__getRefreshRemain(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  FollowerListRequest_c *v2; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_4CB7E37 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&FollowerListRequest_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB7E37 = 1;
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

  if ( (byte_4CB7E38 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19585/*"follower/list"*/);
    byte_4CB7E38 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19585/*"follower/list"*/, 0);
}


void FollowerListRequest__requestCompleted(
        FollowerListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  FollowerListRequest_c *v4; // x0
  int64_t Time; // x0
  BalanceConfig_c *v6; // x8
  int64_t v7; // x20
  __int64 FollowerRefreshRestTime; // x22
  struct FollowerListRequest_StaticFields *static_fields; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4CB7E3E & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&FollowerListRequest_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB7E3E = 1;
  }
  v4 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v4 = FollowerListRequest_TypeInfo;
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
    v4 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v6->static_fields->FollowerRefreshRestTime;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v4 = FollowerListRequest_TypeInfo;
    }
    static_fields = v4->static_fields;
    static_fields->refreshResetTime = v7 + FollowerRefreshRestTime;
    static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = FollowerListRequest_TypeInfo;
    }
    v4->static_fields->refreshResetTime = 0;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = FollowerListRequest_TypeInfo;
  }
  v4->static_fields->requestListType = v4->static_fields->updateRequestListType;
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      0,
      CallBack->fields.method);
}