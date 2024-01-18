void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4186FD2 & 1) == 0 )
  {
    sub_B2C35C(&UserGachaMaster_TypeInfo, v1);
    byte_4186FD2 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FCF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, method);
    byte_4186FCF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    33,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
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
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  uint64_t Entity; // x23
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t v25; // x24
  __int64 v26; // x27
  BalanceConfig_c *v27; // x0
  __int64 v28; // x28
  uint64_t v29; // x24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  BalanceConfig_c *v33; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v36; // x0
  const MethodInfo *v37; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v38; // x22
  char v39; // w8
  int32_t v40; // w9
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-90h] BYREF
  uint64_t v44; // [xsp+40h] [xbp-70h] BYREF
  int64_t ticks; // [xsp+48h] [xbp-68h] BYREF
  uint64_t v46; // [xsp+50h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_TimeSpan_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x1.8

  v6 = gachaId;
  if ( (byte_4186FD1 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, remainNum);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserGachaMaster___, v9);
    sub_B2C35C(&System_DateTime_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    *(_QWORD *)&gachaId = sub_B2C35C(&UserGachaMaster_TypeInfo, v18);
    byte_4186FD1 = 1;
  }
  v46 = 0LL;
  dateData = 0LL;
  v44 = 0LL;
  ticks = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(*(const MethodInfo **)&gachaId);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !SelfUserGame )
    goto LABEL_50;
  if ( !Instance )
    goto LABEL_50;
  Entity = (uint64_t)UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v6, v22);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( Entity )
  {
    v25 = Instance;
    v26 = *(_QWORD *)(Entity + 32);
    v27 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    v28 = 3600 * (24 - v27->static_fields->DailyFreeGachaResetTime);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getServerDateTime_26271756(v26 + v28, 0LL).fields.dateData;
    v46 = NetworkManager__getServerDateTime_26271756(v25 + v28, 0LL).fields.dateData;
    v48.fields.dateData = (uint64_t)&v46;
    Entity = System_DateTime__get_Date(v48, 0LL).fields.dateData;
    v49.fields.dateData = (uint64_t)&dateData;
    v29 = System_DateTime__get_Date(v49, 0LL).fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v50.fields.dateData = Entity;
    v54.fields.dateData = v29;
    ticks = System_DateTime__op_Subtraction_15284788(v50, v54, 0LL).fields._ticks;
    v51.fields._ticks = (int64_t)&ticks;
    Instance = System_TimeSpan__get_Days(v51, 0LL);
    LODWORD(Entity) = (int)Instance < 1;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(MasterData_WarQuestSelectionMaster, v6, 0LL);
  if ( !FriendPointSummonMultipleFreeCampaign || FriendPointSummonMultipleFreeCampaign->fields._size < 1 )
  {
    v39 = 0;
    goto LABEL_48;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    FriendPointSummonMultipleFreeCampaign,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = v42; ; *maxNum += LODWORD(i.fields.current[3].klass) )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v31 )
      break;
    if ( !i.fields.current )
      sub_B2C434(v31, v32);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v44 = NetworkManager__getServerDateTime(0LL).fields.dateData;
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
    v52.fields.dateData = (uint64_t)&v44;
    if ( (System_DateTime__get_Hour(v52, 0LL) & 0x80000000) == 0 )
    {
      v53.fields.dateData = (uint64_t)&v44;
      if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v53, 0LL) )
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
  v38 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Instance;
  if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  }
  if ( !v38 )
LABEL_50:
    sub_B2C434(Instance, v21);
  LODWORD(Entity) = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                      v38,
                      TodayStartTime + 3600 * DailyFreeGachaResetTime,
                      UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
                    + TodayStartTime
                    + 3600 * DailyFreeGachaResetTime,
                      v37)
                  + Entity;
  v39 = 1;
LABEL_48:
  v40 = *maxNum - Entity;
  *remainNum = v40;
  return v39 & (v40 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186FCD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__, userId);
    byte_4186FCD = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4186FCE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__, entity);
    byte_4186FCE = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
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

  if ( (byte_4186FD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserGachaEntity_TypeInfo, v6);
    byte_4186FD0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&gachaId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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