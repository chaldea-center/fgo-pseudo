void __fastcall FollowerListRequest___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6A1B & 1) == 0 )
  {
    sub_B5D5C4(&FollowerListRequest_TypeInfo, v1, v2, v3);
    byte_42E6A1B = 1;
  }
  FollowerListRequest_TypeInfo->static_fields->refreshResetTime = -1LL;
  FollowerListRequest_TypeInfo->static_fields->refreshTimeUpdate = 0;
}


void __fastcall FollowerListRequest___ctor(FollowerListRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerListRequest__beginRequest(
        FollowerListRequest_o *this,
        bool isEnfoceRefresh,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x0
  __int64 v22; // x1
  BalanceConfig_c *v23; // x0
  FollowerListRequest_c *v24; // x0
  char v25; // w8

  if ( (byte_42E6A19 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, isEnfoceRefresh, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&FollowerListRequest_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22033/*"refresh"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21905/*"questPhase"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21903/*"questId"*/, v18, v19, v20);
    byte_42E6A19 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21903/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21905/*"questPhase"*/, questPhase, 0LL);
  if ( !this )
    sub_B5D69C(v21, v22);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22033/*"refresh"*/, isEnfoceRefresh, 0LL);
  if ( !isEnfoceRefresh )
    goto LABEL_13;
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( (v23->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
  {
LABEL_13:
    v24 = FollowerListRequest_TypeInfo;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v24 = FollowerListRequest_TypeInfo;
    }
    v25 = 0;
  }
  else
  {
    v24 = FollowerListRequest_TypeInfo;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v24 = FollowerListRequest_TypeInfo;
    }
    v25 = 1;
  }
  v24->static_fields->refreshTimeUpdate = v25;
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


bool __fastcall FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  FollowerListRequest_c *v13; // x0
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  UserGameEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_42E6A18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserFollowerMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v7, v8, v9);
    sub_B5D5C4(&FollowerListRequest_TypeInfo, v10, v11, v12);
    byte_42E6A18 = 1;
  }
  entity = 0LL;
  v13 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v13 = FollowerListRequest_TypeInfo;
  }
  if ( (v13->static_fields->refreshResetTime & 0x8000000000000000LL) != 0 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_16:
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
  if ( !DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          (const MethodInfo_23FB120 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)entity;
  if ( !entity )
    goto LABEL_16;
  return UserFollowerEntity__isEnableData((UserFollowerEntity_o *)entity, 0LL);
}


bool __fastcall FollowerListRequest__checkRefreshRate(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BalanceConfig_c *v10; // x0
  int64_t Time; // x19
  FollowerListRequest_c *v12; // x8

  if ( (byte_42E6A14 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&FollowerListRequest_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E6A14 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( (v10->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v12 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v12 = FollowerListRequest_TypeInfo;
  }
  return Time >= v12->static_fields->refreshResetTime;
}


void __fastcall FollowerListRequest__clearRefreshRate(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  FollowerListRequest_c *v4; // x0

  if ( (byte_42E6A13 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerListRequest_TypeInfo, v1, v2, v3);
    byte_42E6A13 = 1;
  }
  v4 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v4 = FollowerListRequest_TypeInfo;
  }
  v4->static_fields->refreshResetTime = -1LL;
}


System_String_o *__fastcall FollowerListRequest__getMockData(FollowerListRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6A17 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E6A17 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t __fastcall FollowerListRequest__getRefreshRemain(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BalanceConfig_c *v10; // x0
  FollowerListRequest_c *v11; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_42E6A15 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&FollowerListRequest_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E6A15 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( (v10->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 0LL;
  v11 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v11 = FollowerListRequest_TypeInfo;
  }
  refreshResetTime = v11->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0LL;
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    refreshResetTime = FollowerListRequest_TypeInfo->static_fields->refreshResetTime;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return (refreshResetTime - Time) & ~((refreshResetTime - Time) >> 63);
}


System_String_o *__fastcall FollowerListRequest__getURL(FollowerListRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E6A16 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19021/*"follower/list"*/, v4, v5, v6);
    byte_42E6A16 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_19021/*"follower/list"*/, 0LL);
}


void __fastcall FollowerListRequest__requestCompleted(
        FollowerListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FollowerListRequest_c *v12; // x0
  struct FollowerListRequest_StaticFields *static_fields; // x8
  int64_t Time; // x21
  BalanceConfig_c *v15; // x8
  FollowerListRequest_c *v16; // x0
  __int64 FollowerRefreshRestTime; // x23

  if ( (byte_42E6A1A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&FollowerListRequest_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E6A1A = 1;
  }
  v12 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v12 = FollowerListRequest_TypeInfo;
  }
  static_fields = v12->static_fields;
  if ( static_fields->refreshTimeUpdate )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v15 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v16 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v15->static_fields->FollowerRefreshRestTime;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v16 = FollowerListRequest_TypeInfo;
    }
    v16->static_fields->refreshResetTime = Time + FollowerRefreshRestTime;
    FollowerListRequest_TypeInfo->static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = FollowerListRequest_TypeInfo->static_fields;
    }
    static_fields->refreshResetTime = 0LL;
  }
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0LL);
}