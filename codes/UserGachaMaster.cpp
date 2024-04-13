void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7127 & 1) == 0 )
  {
    sub_B5D5C4(&UserGachaMaster_TypeInfo, v1, v2, v3);
    byte_42E7127 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7124 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7124 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    34,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
        int32_t gachaId,
        int32_t *remainNum,
        int32_t *maxNum,
        const MethodInfo *method)
{
  int32_t v6; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  UserGameEntity_o *SelfUserGame; // x22
  int64_t Instance; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  uint64_t Entity; // x23
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t v49; // x24
  __int64 v50; // x27
  BalanceConfig_c *v51; // x0
  __int64 v52; // x28
  uint64_t v53; // x24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v55; // x0
  __int64 v56; // x1
  BalanceConfig_c *v57; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v60; // x0
  const MethodInfo *v61; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v62; // x22
  char v63; // w8
  int32_t v64; // w9
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-90h] BYREF
  uint64_t v68; // [xsp+40h] [xbp-70h] BYREF
  int64_t ticks; // [xsp+48h] [xbp-68h] BYREF
  uint64_t v70; // [xsp+50h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF
  System_DateTime_o v72; // 0:x0.8
  System_DateTime_o v73; // 0:x0.8
  System_DateTime_o v74; // 0:x0.8
  System_TimeSpan_o v75; // 0:x0.8
  System_DateTime_o v76; // 0:x0.8
  System_DateTime_o v77; // 0:x0.8
  System_DateTime_o v78; // 0:x1.8

  v6 = gachaId;
  if ( (byte_42E7126 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)remainNum, (_DWORD)maxNum, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserGachaMaster___, v13, v14, v15);
    sub_B5D5C4(&System_DateTime_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v31, v32, v33);
    sub_B5D5C4(&NetworkManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    *(_QWORD *)&gachaId = sub_B5D5C4(&UserGachaMaster_TypeInfo, v40, v41, v42);
    byte_42E7126 = 1;
  }
  v70 = 0LL;
  dateData = 0LL;
  v68 = 0LL;
  ticks = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(*(const MethodInfo **)&gachaId);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !SelfUserGame )
    goto LABEL_50;
  if ( !Instance )
    goto LABEL_50;
  Entity = (uint64_t)UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v6, v46);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( Entity )
  {
    v49 = Instance;
    v50 = *(_QWORD *)(Entity + 32);
    v51 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = BalanceConfig_TypeInfo;
    }
    v52 = 3600 * (24 - v51->static_fields->DailyFreeGachaResetTime);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getServerDateTime_26077756(v50 + v52, 0LL).fields.dateData;
    v70 = NetworkManager__getServerDateTime_26077756(v49 + v52, 0LL).fields.dateData;
    v72.fields.dateData = (uint64_t)&v70;
    Entity = System_DateTime__get_Date(v72, 0LL).fields.dateData;
    v73.fields.dateData = (uint64_t)&dateData;
    v53 = System_DateTime__get_Date(v73, 0LL).fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v74.fields.dateData = Entity;
    v78.fields.dateData = v53;
    ticks = System_DateTime__op_Subtraction_15579448(v74, v78, 0LL).fields._ticks;
    v75.fields._ticks = (int64_t)&ticks;
    Instance = System_TimeSpan__get_Days(v75, 0LL);
    LODWORD(Entity) = (int)Instance < 1;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(MasterData_WarQuestSelectionMaster, v6, 0LL);
  if ( !FriendPointSummonMultipleFreeCampaign || FriendPointSummonMultipleFreeCampaign->fields._size < 1 )
  {
    v63 = 0;
    goto LABEL_48;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v66,
    FriendPointSummonMultipleFreeCampaign,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = v66; ; *maxNum += LODWORD(i.fields.current[3].klass) )
  {
    v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v55 )
      break;
    if ( !i.fields.current )
      sub_B5D69C(v55, v56);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v68 = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v57 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v57->static_fields->DailyFreeGachaResetTime;
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  if ( (_DWORD)DailyFreeGachaResetTime )
  {
    v76.fields.dateData = (uint64_t)&v68;
    if ( (System_DateTime__get_Hour(v76, 0LL) & 0x80000000) == 0 )
    {
      v77.fields.dateData = (uint64_t)&v68;
      if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v77, 0LL) )
      {
        v60 = UserGachaMaster_TypeInfo;
        if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
          v60 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v60->static_fields->ONEDAY_SECOND;
      }
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
  v62 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Instance;
  if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  }
  if ( !v62 )
LABEL_50:
    sub_B5D69C(Instance, v45);
  LODWORD(Entity) = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                      v62,
                      TodayStartTime + 3600 * DailyFreeGachaResetTime,
                      UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
                    + TodayStartTime
                    + 3600 * DailyFreeGachaResetTime,
                      v61)
                  + Entity;
  v63 = 1;
LABEL_48:
  v64 = *maxNum - Entity;
  *remainNum = v64;
  return v63 & (v64 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E7122 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__, userId, gachaId, method);
    byte_42E7122 = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E7123 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&gachaId);
    byte_42E7123 = 1;
  }
  PK = UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__checkIsDrawGroupSummon(
        UserGachaMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v17; // x10

  if ( (byte_42E7125 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      gachaId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserGachaEntity_TypeInfo, v9, v10, v11);
    byte_42E7125 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&gachaId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v15,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = *(&UserGachaEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (UserGachaEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == UserGachaEntity_TypeInfo
        && LODWORD(Item[1].monitor) == gachaId
        && SHIDWORD(Item[1].monitor) > 0 )
      {
        return 1;
      }
    }
    if ( ++v15 >= v14 )
      return 0;
  }
}