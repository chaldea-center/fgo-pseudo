void __fastcall FollowerListRequest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct FollowerListRequest_StaticFields *static_fields; // x8

  if ( (byte_4B17ADA & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v1, v2);
    byte_4B17ADA = 1;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  BalanceConfig_c *v22; // x0
  FollowerListRequest_c *v23; // x0
  char v24; // w8

  if ( (byte_4B17AD8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isEnfoceRefresh, *(_QWORD *)&questId);
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_23076/*"refresh"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22935/*"questPhase"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22933/*"questId"*/, v15, v16);
    byte_4B17AD8 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22933/*"questId"*/,
    questId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22935/*"questPhase"*/, questPhase, v17);
  if ( !this )
    sub_1BCAA3C(v18, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23076/*"refresh"*/, isEnfoceRefresh, v20);
  if ( !isEnfoceRefresh )
    goto LABEL_11;
  v22 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
    v22 = BalanceConfig_TypeInfo;
  }
  if ( (v22->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
  {
LABEL_11:
    v23 = FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v21);
      v23 = FollowerListRequest_TypeInfo;
    }
    v24 = 0;
  }
  else
  {
    v23 = FollowerListRequest_TypeInfo;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v21);
      v23 = FollowerListRequest_TypeInfo;
    }
    v24 = 1;
  }
  v23->static_fields->refreshTimeUpdate = v24;
  RequestBase__beginRequest((RequestBase_o *)this, v21);
}


bool __fastcall FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FollowerListRequest_c *v9; // x0
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B17AD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserFollowerMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5, v6);
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v7, v8);
    byte_4B17AD7 = 1;
  }
  v9 = FollowerListRequest_TypeInfo;
  entity = 0LL;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, method);
    v9 = FollowerListRequest_TypeInfo;
  }
  if ( (v9->static_fields->refreshResetTime & 0x8000000000000000LL) != 0 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1BCAA3C(Master_object, v11);
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_31B30C8 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return UserFollowerEntity__isEnableData((UserFollowerEntity_o *)entity, 0LL);
}


bool __fastcall FollowerListRequest__checkRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x0
  int64_t Time; // x0
  __int64 v9; // x1
  FollowerListRequest_c *v10; // x8
  int64_t v11; // x19

  if ( (byte_4B17AD3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v3, v4);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B17AD3 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( (v7->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0LL);
  v10 = FollowerListRequest_TypeInfo;
  v11 = Time;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v9);
    v10 = FollowerListRequest_TypeInfo;
  }
  return v11 >= v10->static_fields->refreshResetTime;
}


void __fastcall FollowerListRequest__clearRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FollowerListRequest_c *v3; // x0

  if ( (byte_4B17AD2 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v1, v2);
    byte_4B17AD2 = 1;
  }
  v3 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v1);
    v3 = FollowerListRequest_TypeInfo;
  }
  v3->static_fields->refreshResetTime = -1LL;
}


System_String_o *__fastcall FollowerListRequest__getMockData(FollowerListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17AD6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17AD6 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t __fastcall FollowerListRequest__getRefreshRemain(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x0
  FollowerListRequest_c *v8; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_4B17AD4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v3, v4);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B17AD4 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( (v7->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 0LL;
  v8 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v1);
    v8 = FollowerListRequest_TypeInfo;
  }
  refreshResetTime = v8->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0LL;
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, v1);
    refreshResetTime = FollowerListRequest_TypeInfo->static_fields->refreshResetTime;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0LL);
  return (refreshResetTime - Time) & ~((refreshResetTime - Time) >> 63);
}


System_String_o *__fastcall FollowerListRequest__getURL(FollowerListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17AD5 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19702/*"follower/list"*/, v3, v4);
    byte_4B17AD5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19702/*"follower/list"*/, 0LL);
}


void __fastcall FollowerListRequest__requestCompleted(
        FollowerListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  FollowerListRequest_c *v8; // x0
  int64_t Time; // x0
  __int64 v10; // x1
  BalanceConfig_c *v11; // x8
  int64_t v12; // x20
  FollowerListRequest_c *v13; // x0
  __int64 FollowerRefreshRestTime; // x22
  struct FollowerListRequest_StaticFields *static_fields; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4B17AD9 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, responseList, method);
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B17AD9 = 1;
  }
  v8 = FollowerListRequest_TypeInfo;
  if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, responseList);
    v8 = FollowerListRequest_TypeInfo;
  }
  if ( v8->static_fields->refreshTimeUpdate )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, responseList);
    Time = NetworkManager__getTime(0LL);
    v11 = BalanceConfig_TypeInfo;
    v12 = Time;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v11 = BalanceConfig_TypeInfo;
    }
    v13 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v11->static_fields->FollowerRefreshRestTime;
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v10);
      v13 = FollowerListRequest_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->refreshResetTime = v12 + FollowerRefreshRestTime;
    static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8, responseList);
      v8 = FollowerListRequest_TypeInfo;
    }
    v8->static_fields->refreshResetTime = 0LL;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      0LL,
      *(_QWORD *)&CallBack->fields.extra_arg);
}