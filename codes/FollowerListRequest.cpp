void __fastcall FollowerListRequest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_4B38AA9 & 1) == 0 )
  {
    sub_1BD3458(&FollowerListRequest_TypeInfo, v1);
    byte_4B38AA9 = 1;
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
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  BalanceConfig_c *v18; // x0
  FollowerListRequest_c *v19; // x0
  char v20; // w8

  if ( (byte_4B38AA7 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, isEnfoceRefresh);
    sub_1BD3458(&FollowerListRequest_TypeInfo, v9);
    sub_1BD3458(&StringLiteral_23110/*"refresh"*/, v10);
    sub_1BD3458(&StringLiteral_22968/*"questPhase"*/, v11);
    sub_1BD3458(&StringLiteral_22966/*"questId"*/, v12);
    byte_4B38AA7 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22966/*"questId"*/,
    questId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22968/*"questPhase"*/, questPhase, v13);
  if ( !this )
    sub_1BD36B4(v14, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23110/*"refresh"*/, isEnfoceRefresh, v16);
  if ( !isEnfoceRefresh )
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
    v19 = FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v19 = FollowerListRequest_TypeInfo;
    }
    v20 = 0;
  }
  else
  {
    v19 = FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v19 = FollowerListRequest_TypeInfo;
    }
    v20 = 1;
  }
  v19->static_fields->refreshTimeUpdate = v20;
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


bool __fastcall FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerListRequest_c *v5; // x0
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B38AA6 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_UserFollowerMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v2);
    sub_1BD3458(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v3);
    sub_1BD3458(&FollowerListRequest_TypeInfo, v4);
    byte_4B38AA6 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1BD36B4(Master_object, v7);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_31D2178 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
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

  if ( (byte_4B38AA2 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, v1);
    sub_1BD3458(&FollowerListRequest_TypeInfo, v2);
    sub_1BD3458(&NetworkManager_TypeInfo, v3);
    byte_4B38AA2 = 1;
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

  if ( (byte_4B38AA1 & 1) == 0 )
  {
    sub_1BD3458(&FollowerListRequest_TypeInfo, v1);
    byte_4B38AA1 = 1;
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
  if ( (byte_4B38AA5 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B38AA5 = 1;
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

  if ( (byte_4B38AA3 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, v1);
    sub_1BD3458(&FollowerListRequest_TypeInfo, v2);
    sub_1BD3458(&NetworkManager_TypeInfo, v3);
    byte_4B38AA3 = 1;
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

  if ( (byte_4B38AA4 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_19732/*"follower/list"*/, v2);
    byte_4B38AA4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62525248(BaseUrl, (System_String_o *)StringLiteral_19732/*"follower/list"*/, 0LL);
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

  if ( (byte_4B38AA8 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, responseList);
    sub_1BD3458(&FollowerListRequest_TypeInfo, v4);
    sub_1BD3458(&NetworkManager_TypeInfo, v5);
    byte_4B38AA8 = 1;
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