void __fastcall FollowerListRequest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8ED6 & 1) == 0 )
  {
    sub_B16FFC(&FollowerListRequest_TypeInfo, v1);
    byte_40F8ED6 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BalanceConfig_c *v13; // x0
  FollowerListRequest_c *v14; // x0
  char v15; // w8

  if ( (byte_40F8ED4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isEnfoceRefresh);
    sub_B16FFC(&FollowerListRequest_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_21647, v10);
    sub_B16FFC(&StringLiteral_21522, v11);
    sub_B16FFC(&StringLiteral_21520, v12);
    byte_40F8ED4 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21520, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21522, questPhase, 0LL);
  if ( !this )
    sub_B170D4();
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21647, isEnfoceRefresh, 0LL);
  if ( !isEnfoceRefresh )
    goto LABEL_13;
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( (v13->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
  {
LABEL_13:
    v14 = FollowerListRequest_TypeInfo;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v14 = FollowerListRequest_TypeInfo;
    }
    v15 = 0;
  }
  else
  {
    v14 = FollowerListRequest_TypeInfo;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v14 = FollowerListRequest_TypeInfo;
    }
    v15 = 1;
  }
  v14->static_fields->refreshTimeUpdate = v15;
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


bool __fastcall FollowerListRequest__checkExpirationDate(FollowerListRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerListRequest_c *v5; // x0
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_40F8ED3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserFollowerMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v2);
    sub_B16FFC(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v3);
    sub_B16FFC(&FollowerListRequest_TypeInfo, v4);
    byte_40F8ED3 = 1;
  }
  entity = 0LL;
  v5 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v5 = FollowerListRequest_TypeInfo;
  }
  if ( (v5->static_fields->refreshResetTime & 0x8000000000000000LL) != 0 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_16:
    sub_B170D4();
  if ( !DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          (const MethodInfo_266F698 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    return 0;
  if ( !entity )
    goto LABEL_16;
  return UserFollowerEntity__isEnableData((UserFollowerEntity_o *)entity, 0LL);
}


bool __fastcall FollowerListRequest__checkRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  int64_t Time; // x19
  FollowerListRequest_c *v6; // x8

  if ( (byte_40F8ECF & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&FollowerListRequest_TypeInfo, v2);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40F8ECF = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( (v4->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v6 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v6 = FollowerListRequest_TypeInfo;
  }
  return Time >= v6->static_fields->refreshResetTime;
}


void __fastcall FollowerListRequest__clearRefreshRate(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerListRequest_c *v2; // x0

  if ( (byte_40F8ECE & 1) == 0 )
  {
    sub_B16FFC(&FollowerListRequest_TypeInfo, v1);
    byte_40F8ECE = 1;
  }
  v2 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v2 = FollowerListRequest_TypeInfo;
  }
  v2->static_fields->refreshResetTime = -1LL;
}


System_String_o *__fastcall FollowerListRequest__getMockData(FollowerListRequest_o *this, const MethodInfo *method)
{
  if ( (byte_40F8ED2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F8ED2 = 1;
  }
  return (System_String_o *)StringLiteral_1;
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

  if ( (byte_40F8ED0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&FollowerListRequest_TypeInfo, v2);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40F8ED0 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( (v4->static_fields->FollowerRefreshRestTime & 0x80000000) != 0 )
    return 0LL;
  v5 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v5 = FollowerListRequest_TypeInfo;
  }
  refreshResetTime = v5->static_fields->refreshResetTime;
  if ( refreshResetTime == -1 )
    return 0LL;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
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
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F8ED1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18713, v2);
    byte_40F8ED1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18713, 0LL);
}


void __fastcall FollowerListRequest__requestCompleted(
        FollowerListRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FollowerListRequest_c *v7; // x0
  struct FollowerListRequest_StaticFields *static_fields; // x8
  int64_t Time; // x21
  BalanceConfig_c *v10; // x8
  FollowerListRequest_c *v11; // x0
  __int64 FollowerRefreshRestTime; // x23

  if ( (byte_40F8ED5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, responseList);
    sub_B16FFC(&FollowerListRequest_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    byte_40F8ED5 = 1;
  }
  v7 = FollowerListRequest_TypeInfo;
  if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerListRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    v7 = FollowerListRequest_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->refreshTimeUpdate )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = FollowerListRequest_TypeInfo;
    FollowerRefreshRestTime = v10->static_fields->FollowerRefreshRestTime;
    if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerListRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v11 = FollowerListRequest_TypeInfo;
    }
    v11->static_fields->refreshResetTime = Time + FollowerRefreshRestTime;
    FollowerListRequest_TypeInfo->static_fields->refreshTimeUpdate = 0;
  }
  else
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = FollowerListRequest_TypeInfo->static_fields;
    }
    static_fields->refreshResetTime = 0LL;
  }
  RequestBase__requestCompleted((RequestBase_o *)this, responseList, 0LL);
}