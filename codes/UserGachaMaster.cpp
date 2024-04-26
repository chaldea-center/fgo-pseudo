void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  if ( (byte_43506ED & 1) == 0 )
  {
    sub_B70694(&UserGachaMaster_TypeInfo);
    byte_43506ED = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43506EA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
    byte_43506EA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    34,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
        int32_t gachaId,
        int32_t *remainNum,
        int32_t *maxNum,
        const MethodInfo *method)
{
  int32_t v6; // w21
  UserGameEntity_o *SelfUserGame; // x22
  int64_t Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  uint64_t Entity; // x23
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t v13; // x24
  __int64 v14; // x27
  BalanceConfig_c *v15; // x0
  __int64 v16; // x28
  uint64_t v17; // x24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  BalanceConfig_c *v21; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v24; // x0
  const MethodInfo *v25; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v26; // x22
  char v27; // w8
  int32_t v28; // w9
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-90h] BYREF
  uint64_t v32; // [xsp+40h] [xbp-70h] BYREF
  int64_t ticks; // [xsp+48h] [xbp-68h] BYREF
  uint64_t v34; // [xsp+50h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF
  System_DateTime_o v36; // 0:x0.8
  System_DateTime_o v37; // 0:x0.8
  System_DateTime_o v38; // 0:x0.8
  System_TimeSpan_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x1.8

  v6 = gachaId;
  if ( (byte_43506EC & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_B70694(&System_DateTime_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    *(_QWORD *)&gachaId = sub_B70694(&UserGachaMaster_TypeInfo);
    byte_43506EC = 1;
  }
  v34 = 0LL;
  dateData = 0LL;
  v32 = 0LL;
  ticks = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(*(const MethodInfo **)&gachaId);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !SelfUserGame )
    goto LABEL_50;
  if ( !Instance )
    goto LABEL_50;
  Entity = (uint64_t)UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v6, v10);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( Entity )
  {
    v13 = Instance;
    v14 = *(_QWORD *)(Entity + 32);
    v15 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v16 = 3600 * (24 - v15->static_fields->DailyFreeGachaResetTime);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getServerDateTime_25948096(v14 + v16, 0LL).fields.dateData;
    v34 = NetworkManager__getServerDateTime_25948096(v13 + v16, 0LL).fields.dateData;
    v36.fields.dateData = (uint64_t)&v34;
    Entity = System_DateTime__get_Date(v36, 0LL).fields.dateData;
    v37.fields.dateData = (uint64_t)&dateData;
    v17 = System_DateTime__get_Date(v37, 0LL).fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v38.fields.dateData = Entity;
    v42.fields.dateData = v17;
    ticks = System_DateTime__op_Subtraction_42983664(v38, v42, 0LL).fields._ticks;
    v39.fields._ticks = (int64_t)&ticks;
    Instance = System_TimeSpan__get_Days(v39, 0LL);
    LODWORD(Entity) = (int)Instance < 1;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(MasterData_WarQuestSelectionMaster, v6, 0LL);
  if ( !FriendPointSummonMultipleFreeCampaign || FriendPointSummonMultipleFreeCampaign->fields._size < 1 )
  {
    v27 = 0;
    goto LABEL_48;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    FriendPointSummonMultipleFreeCampaign,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = v30; ; *maxNum += LODWORD(i.fields.current[3].klass) )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !i.fields.current )
      sub_B7076C(v19, v20);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v32 = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v21->static_fields->DailyFreeGachaResetTime;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  if ( (_DWORD)DailyFreeGachaResetTime )
  {
    v40.fields.dateData = (uint64_t)&v32;
    if ( (System_DateTime__get_Hour(v40, 0LL) & 0x80000000) == 0 )
    {
      v41.fields.dateData = (uint64_t)&v32;
      if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v41, 0LL) )
      {
        v24 = UserGachaMaster_TypeInfo;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
          v24 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v24->static_fields->ONEDAY_SECOND;
      }
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
  v26 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Instance;
  if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  }
  if ( !v26 )
LABEL_50:
    sub_B7076C(Instance, v9);
  LODWORD(Entity) = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                      v26,
                      TodayStartTime + 3600 * DailyFreeGachaResetTime,
                      UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
                    + TodayStartTime
                    + 3600 * DailyFreeGachaResetTime,
                      v25)
                  + Entity;
  v27 = 1;
LABEL_48:
  v28 = *maxNum - Entity;
  *remainNum = v28;
  return v27 & (v28 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43506E8 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
    byte_43506E8 = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_21C0890 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_43506E9 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
    byte_43506E9 = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__checkIsDrawGroupSummon(
        UserGachaMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v10; // x10

  if ( (byte_43506EB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&UserGachaEntity_TypeInfo);
    byte_43506EB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B7076C(list, *(_QWORD *)&gachaId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = *(&UserGachaEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (UserGachaEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] == UserGachaEntity_TypeInfo
        && LODWORD(Item[1].monitor) == gachaId
        && SHIDWORD(Item[1].monitor) > 0 )
      {
        return 1;
      }
    }
    if ( ++v8 >= v7 )
      return 0;
  }
}