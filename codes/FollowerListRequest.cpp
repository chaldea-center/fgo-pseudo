void __fastcall FollowerListRequest___cctor(const MethodInfo *method)
{
  if ( (byte_4389769 & 1) == 0 )
  {
    sub_B775C4(&FollowerListRequest_TypeInfo);
    byte_4389769 = 1;
  }
  FollowerListRequest_TypeInfo->static_fields->refreshResetTime = -1LL;
  FollowerListRequest_TypeInfo->static_fields->refreshTimeUpdate = 0;
}


void __fastcall FollowerListRequest___ctor(FollowerListRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall FollowerListRequest__beginRequest(
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

  if ( (byte_4389767 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&FollowerListRequest_TypeInfo);
    sub_B775C4(&StringLiteral_22202/*"refresh"*/);
    sub_B775C4(&StringLiteral_22071/*"questPhase"*/);
    sub_B775C4(&StringLiteral_22069/*"questId"*/);
    byte_4389767 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22069/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22071/*"questPhase"*/, questPhase, 0LL);
  if ( !this )
    sub_B7769C(v9, v10);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22202/*"refresh"*/, isEnfoceRefresh, 0LL);
  if ( !isEnfoceRefresh )
    goto LABEL_13;
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( (v11->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
  {
LABEL_13:
    v12 = FollowerListRequest_TypeInfo;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v12 = FollowerListRequest_TypeInfo;
    }
    v13 = 0;
  }
  else
  {
    v12 = FollowerListRequest_TypeInfo;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v12 = FollowerListRequest_TypeInfo;
    }
    v13 = 1;
  }
  v12->static_fields->refreshTimeUpdate = v13;
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


bool __fastcall FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  FollowerListRequest_c *v2; // x0
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  UserGameEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_4389766 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_B775C4(&FollowerListRequest_TypeInfo);
    byte_4389766 = 1;
  }
  entity = 0LL;
  v2 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v2 = FollowerListRequest_TypeInfo;
  }
  if ( (v2->static_fields->refreshResetTime & 0x8000000000000000LL) != 0 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_16:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  if ( !DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          (const MethodInfo_21FBBA4 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)entity;
  if ( !entity )
    goto LABEL_16;
  return UserFollowerEntity__isEnableData((UserFollowerEntity_o *)entity, 0LL);
}


bool __fastcall FollowerListRequest__checkRefreshRate(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  int64_t Time; // x19
  FollowerListRequest_c *v3; // x8

  if ( (byte_4389762 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&FollowerListRequest_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4389762 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  if ( (v1->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v3 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v3 = FollowerListRequest_TypeInfo;
  }
  return Time >= v3->static_fields->refreshResetTime;
}


void __fastcall FollowerListRequest__clearRefreshRate(const MethodInfo *method)
{
  FollowerListRequest_c *v1; // x0

  if ( (byte_4389761 & 1) == 0 )
  {
    sub_B775C4(&FollowerListRequest_TypeInfo);
    byte_4389761 = 1;
  }
  v1 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v1 = FollowerListRequest_TypeInfo;
  }
  v1->static_fields->refreshResetTime = -1LL;
}


System_String_o *__fastcall FollowerListRequest__getMockData(FollowerListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4389765 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389765 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t __fastcall FollowerListRequest__getRefreshRemain(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  FollowerListRequest_c *v2; // x0
  int64_t refreshResetTime; // x20
  int64_t Time; // x0

  if ( (byte_4389763 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&FollowerListRequest_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4389763 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  if ( (v1->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 0LL;
  v2 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v2 = FollowerListRequest_TypeInfo;
  }
  refreshResetTime = v2->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0LL;
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
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
  System_String_o *BaseUrl; // x0

  if ( (byte_4389764 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_19161/*"follower/list"*/);
    byte_4389764 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_19161/*"follower/list"*/, 0LL);
}


void __fastcall FollowerListRequest__requestCompleted(
        FollowerListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  FollowerListRequest_c *v5; // x0
  struct FollowerListRequest_StaticFields *static_fields; // x8
  int64_t Time; // x21
  BalanceConfig_c *v8; // x8
  FollowerListRequest_c *v9; // x0
  __int64 FollowerRefreshRestTime; // x23

  if ( (byte_4389768 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&FollowerListRequest_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4389768 = 1;
  }
  v5 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v5 = FollowerListRequest_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->refreshTimeUpdate )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v8->static_fields->FollowerRefreshRestTime;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v9 = FollowerListRequest_TypeInfo;
    }
    v9->static_fields->refreshResetTime = Time + FollowerRefreshRestTime;
    FollowerListRequest_TypeInfo->static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = FollowerListRequest_TypeInfo->static_fields;
    }
    static_fields->refreshResetTime = 0LL;
  }
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0LL);
}