void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F96DC & 1) == 0 )
  {
    sub_B16FFC(&UserGachaMaster_TypeInfo, v1);
    byte_40F96DC = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F96D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, method);
    byte_40F96D9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    33,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
        int32_t gachaId,
        int32_t *remainNum,
        int32_t *maxNum,
        const MethodInfo *method)
{
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UserGameEntity_o *SelfUserGame; // x22
  WebViewManager_o *Instance; // x0
  UserGachaMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v22; // x3
  uint64_t Entity; // x23
  WebViewManager_o *v24; // x0
  EventCampaignMaster_o *v25; // x22
  int64_t Time; // x0
  int64_t v27; // x24
  __int64 v28; // x27
  BalanceConfig_c *v29; // x0
  __int64 v30; // x28
  uint64_t v31; // x24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FriendPointSummonMultipleFreeCampaign; // x0
  BalanceConfig_c *v33; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v36; // x0
  WebViewManager_o *v37; // x0
  const MethodInfo *v38; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v39; // x22
  char v40; // w8
  int32_t v41; // w9
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-90h] BYREF
  uint64_t v45; // [xsp+40h] [xbp-70h] BYREF
  int64_t ticks; // [xsp+48h] [xbp-68h] BYREF
  uint64_t v47; // [xsp+50h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x0.8
  System_TimeSpan_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x0.8
  System_DateTime_o v55; // 0:x1.8

  v6 = gachaId;
  if ( (byte_40F96DB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, remainNum);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserGachaMaster___, v9);
    sub_B16FFC(&System_DateTime_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    *(_QWORD *)&gachaId = sub_B16FFC(&UserGachaMaster_TypeInfo, v18);
    byte_40F96DB = 1;
  }
  v47 = 0LL;
  dateData = 0LL;
  v45 = 0LL;
  ticks = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(*(const MethodInfo **)&gachaId);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !SelfUserGame )
    goto LABEL_50;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = (uint64_t)UserGachaMaster__GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       SelfUserGame->fields.userId,
                       v6,
                       v22);
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24 )
    goto LABEL_50;
  v25 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v24,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Entity )
  {
    v27 = Time;
    v28 = *(_QWORD *)(Entity + 32);
    v29 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    v30 = 3600 * (24 - v29->static_fields->DailyFreeGachaResetTime);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getServerDateTime_23685560(v28 + v30, 0LL).fields.dateData;
    v47 = NetworkManager__getServerDateTime_23685560(v27 + v30, 0LL).fields.dateData;
    v49.fields.dateData = (uint64_t)&v47;
    Entity = System_DateTime__get_Date(v49, 0LL).fields.dateData;
    v50.fields.dateData = (uint64_t)&dateData;
    v31 = System_DateTime__get_Date(v50, 0LL).fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v51.fields.dateData = Entity;
    v55.fields.dateData = v31;
    ticks = System_DateTime__op_Subtraction_15199104(v51, v55, 0LL).fields._ticks;
    v52.fields._ticks = (int64_t)&ticks;
    LODWORD(Entity) = System_TimeSpan__get_Days(v52, 0LL) < 1;
  }
  if ( !v25 )
    goto LABEL_50;
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(v25, v6, 0LL);
  if ( !FriendPointSummonMultipleFreeCampaign || FriendPointSummonMultipleFreeCampaign->fields._size < 1 )
  {
    v40 = 0;
    goto LABEL_48;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    FriendPointSummonMultipleFreeCampaign,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = v43;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        *maxNum += LODWORD(i.fields.current[3].klass) )
  {
    if ( !i.fields.current )
      sub_B170D4();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v45 = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v33 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v33->static_fields->DailyFreeGachaResetTime;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  if ( (_DWORD)DailyFreeGachaResetTime )
  {
    v53.fields.dateData = (uint64_t)&v45;
    if ( (System_DateTime__get_Hour(v53, 0LL) & 0x80000000) == 0 )
    {
      v54.fields.dateData = (uint64_t)&v45;
      if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v54, 0LL) )
      {
        v36 = UserGachaMaster_TypeInfo;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
          v36 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v36->static_fields->ONEDAY_SECOND;
      }
    }
  }
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v37 )
    goto LABEL_50;
  v39 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v37,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
  if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  }
  if ( !v39 )
LABEL_50:
    sub_B170D4();
  LODWORD(Entity) = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                      v39,
                      TodayStartTime + 3600 * DailyFreeGachaResetTime,
                      UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
                    + TodayStartTime
                    + 3600 * DailyFreeGachaResetTime,
                      v38)
                  + Entity;
  v40 = 1;
LABEL_48:
  v41 = *maxNum - Entity;
  *remainNum = v41;
  return v40 & (v41 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F96D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__, userId);
    byte_40F96D7 = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F96D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__, entity);
    byte_40F96D8 = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__checkIsDrawGroupSummon(
        UserGachaMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10

  if ( (byte_40F96DA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&UserGachaEntity_TypeInfo, v6);
    byte_40F96DA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = *(&UserGachaEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (UserGachaEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserGachaEntity_TypeInfo
        && LODWORD(Item[1].monitor) == gachaId
        && SHIDWORD(Item[1].monitor) > 0 )
      {
        return 1;
      }
    }
    if ( ++v10 >= v9 )
      return 0;
  }
}