void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4213713 & 1) == 0 )
  {
    sub_B0D8A4(&UserGachaMaster_TypeInfo, v1);
    byte_4213713 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4213710 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, method);
    byte_4213710 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    33,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
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
  int64_t Instance; // x0
  const MethodInfo *v21; // x3
  uint64_t Entity; // x23
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t v24; // x24
  __int64 v25; // x27
  BalanceConfig_c *v26; // x0
  __int64 v27; // x28
  uint64_t v28; // x24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v30; // x0
  BalanceConfig_c *v31; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v34; // x0
  const MethodInfo *v35; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v36; // x22
  char v37; // w8
  int32_t v38; // w9
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-90h] BYREF
  uint64_t v42; // [xsp+40h] [xbp-70h] BYREF
  int64_t ticks; // [xsp+48h] [xbp-68h] BYREF
  uint64_t v44; // [xsp+50h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_TimeSpan_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x1.8

  v6 = gachaId;
  if ( (byte_4213712 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, remainNum);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserGachaMaster___, v9);
    sub_B0D8A4(&System_DateTime_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    *(_QWORD *)&gachaId = sub_B0D8A4(&UserGachaMaster_TypeInfo, v18);
    byte_4213712 = 1;
  }
  v44 = 0LL;
  dateData = 0LL;
  v42 = 0LL;
  ticks = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(*(const MethodInfo **)&gachaId);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !SelfUserGame )
    goto LABEL_50;
  if ( !Instance )
    goto LABEL_50;
  Entity = (uint64_t)UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v6, v21);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( Entity )
  {
    v24 = Instance;
    v25 = *(_QWORD *)(Entity + 32);
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    v27 = 3600 * (24 - v26->static_fields->DailyFreeGachaResetTime);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getServerDateTime_25504848(v25 + v27, 0LL).fields.dateData;
    v44 = NetworkManager__getServerDateTime_25504848(v24 + v27, 0LL).fields.dateData;
    v46.fields.dateData = (uint64_t)&v44;
    Entity = System_DateTime__get_Date(v46, 0LL).fields.dateData;
    v47.fields.dateData = (uint64_t)&dateData;
    v28 = System_DateTime__get_Date(v47, 0LL).fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v48.fields.dateData = Entity;
    v52.fields.dateData = v28;
    ticks = System_DateTime__op_Subtraction_15047996(v48, v52, 0LL).fields._ticks;
    v49.fields._ticks = (int64_t)&ticks;
    Instance = System_TimeSpan__get_Days(v49, 0LL);
    LODWORD(Entity) = (int)Instance < 1;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(MasterData_WarQuestSelectionMaster, v6, 0LL);
  if ( !FriendPointSummonMultipleFreeCampaign || FriendPointSummonMultipleFreeCampaign->fields._size < 1 )
  {
    v37 = 0;
    goto LABEL_48;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    FriendPointSummonMultipleFreeCampaign,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = v40; ; *maxNum += LODWORD(i.fields.current[3].klass) )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v30 )
      break;
    if ( !i.fields.current )
      sub_B0D97C(v30);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v42 = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v31 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v31->static_fields->DailyFreeGachaResetTime;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  if ( (_DWORD)DailyFreeGachaResetTime )
  {
    v50.fields.dateData = (uint64_t)&v42;
    if ( (System_DateTime__get_Hour(v50, 0LL) & 0x80000000) == 0 )
    {
      v51.fields.dateData = (uint64_t)&v42;
      if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v51, 0LL) )
      {
        v34 = UserGachaMaster_TypeInfo;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
          v34 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v34->static_fields->ONEDAY_SECOND;
      }
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
  v36 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Instance;
  if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  }
  if ( !v36 )
LABEL_50:
    sub_B0D97C(Instance);
  LODWORD(Entity) = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                      v36,
                      TodayStartTime + 3600 * DailyFreeGachaResetTime,
                      UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
                    + TodayStartTime
                    + 3600 * DailyFreeGachaResetTime,
                      v35)
                  + Entity;
  v37 = 1;
LABEL_48:
  v38 = *maxNum - Entity;
  *remainNum = v38;
  return v37 & (v38 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_421370E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__, userId);
    byte_421370E = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266A024 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_421370F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__, entity);
    byte_421370F = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v12; // x10

  if ( (byte_4213711 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&UserGachaEntity_TypeInfo, v6);
    byte_4213711 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = *(&UserGachaEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (UserGachaEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == UserGachaEntity_TypeInfo
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