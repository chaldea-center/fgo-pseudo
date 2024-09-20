void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4A5BE7A & 1) == 0 )
  {
    sub_1B885B0(&UserGachaMaster_TypeInfo);
    byte_4A5BE7A = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE77 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
    byte_4A5BE77 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
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
  UserGachaEntity_o *Entity; // x23
  Il2CppObject *MasterData_object; // x22
  int64_t v13; // x24
  BalanceConfig_c *v14; // x0
  int64_t freeDrawAt; // x29
  __int64 v16; // x26
  uint64_t v17; // x23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t *v21; // x27
  char v22; // w8
  System_DateTime_o v23; // x0
  BalanceConfig_c *v24; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v27; // x0
  const MethodInfo *v28; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v29; // x22
  int32_t v30; // w9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v34; // [xsp+40h] [xbp-80h] BYREF
  int64_t ticks; // [xsp+48h] [xbp-78h] BYREF
  uint64_t v36; // [xsp+50h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-68h] BYREF
  System_DateTime_o v38; // 0:x0.8
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_TimeSpan_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8
  System_DateTime_o v43; // 0:x0.8
  System_DateTime_o v44; // 0:x1.8

  v6 = gachaId;
  if ( (byte_4A5BE79 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_TimeSpan_TypeInfo);
    *(_QWORD *)&gachaId = sub_1B885B0(&UserGachaMaster_TypeInfo);
    byte_4A5BE79 = 1;
  }
  v36 = 0LL;
  dateData = 0LL;
  v34 = 0LL;
  ticks = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(*(const MethodInfo **)&gachaId);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !SelfUserGame )
    goto LABEL_49;
  if ( !Instance )
    goto LABEL_49;
  Entity = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v6, v10);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( Entity )
  {
    v13 = Instance;
    v14 = BalanceConfig_TypeInfo;
    freeDrawAt = Entity->fields.freeDrawAt;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v16 = 3600 * (24 - v14->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_38479168(freeDrawAt + v16, 0LL).fields._dateData;
    v36 = NetworkManager__getServerDateTime_38479168(v13 + v16, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v38.fields._dateData = (uint64_t)&v36;
    v17 = System_DateTime__get_Date(v38, 0LL).fields._dateData;
    v39.fields._dateData = (uint64_t)&dateData;
    v44.fields._dateData = System_DateTime__get_Date(v39, 0LL).fields._dateData;
    v40.fields._dateData = v17;
    ticks = System_DateTime__op_Subtraction_62399924(v40, v44, 0LL).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v41.fields._ticks = (int64_t)&ticks;
    Instance = System_TimeSpan__get_Days(v41, 0LL);
    LODWORD(Entity) = (int)Instance < 1;
  }
  if ( !MasterData_object )
    goto LABEL_49;
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)MasterData_object,
                                                                                         v6,
                                                                                         0LL);
  if ( FriendPointSummonMultipleFreeCampaign && FriendPointSummonMultipleFreeCampaign->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v32; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v19 )
        break;
      if ( !i.fields._current )
        sub_1B8880C(v19, v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v23.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    v24 = BalanceConfig_TypeInfo;
    v34 = v23.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    DailyFreeGachaResetTime = v24->static_fields->DailyFreeGachaResetTime;
    TodayStartTime = NetworkManager__getTodayStartTime(0LL);
    if ( !(_DWORD)DailyFreeGachaResetTime )
      goto LABEL_41;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v42.fields._dateData = (uint64_t)&v34;
    if ( (System_DateTime__get_Hour(v42, 0LL) & 0x80000000) != 0 )
    {
LABEL_41:
      v21 = remainNum;
    }
    else
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v43.fields._dateData = (uint64_t)&v34;
      v21 = remainNum;
      if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v43, 0LL) )
      {
        v27 = UserGachaMaster_TypeInfo;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
          v27 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v27->static_fields->ONEDAY_SECOND;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v29 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Instance;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( v29 )
      {
        LODWORD(Entity) = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                            v29,
                            TodayStartTime + 3600 * DailyFreeGachaResetTime,
                            UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
                          + TodayStartTime
                          + 3600 * DailyFreeGachaResetTime,
                            v28)
                        + (_DWORD)Entity;
        v22 = 1;
        goto LABEL_47;
      }
    }
LABEL_49:
    sub_1B8880C(Instance, v9);
  }
  v21 = remainNum;
  v22 = 0;
LABEL_47:
  v30 = *maxNum - (_DWORD)Entity;
  *v21 = v30;
  return v22 & (v30 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BE75 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
    byte_4A5BE75 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BE76 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
    byte_4A5BE76 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__checkIsDrawGroupSummon(
        UserGachaMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BE78 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserGachaEntity_TypeInfo);
    byte_4A5BE78 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(UserGachaEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (UserGachaEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserGachaEntity_TypeInfo
        || LODWORD(Item[1].monitor) != gachaId
        || SHIDWORD(Item[1].monitor) <= 0 )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_16:
    sub_1B8880C(list, *(_QWORD *)&gachaId);
  }
  return 0;
}