void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A70B89 & 1) == 0 )
  {
    sub_1B90010(&UserGachaMaster_TypeInfo, v1);
    byte_4A70B89 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70B86 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, method);
    byte_4A70B86 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
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
  __int64 v19; // x1
  UserGameEntity_o *SelfUserGame; // x22
  int64_t Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  UserGachaEntity_o *Entity; // x23
  Il2CppObject *MasterData_object; // x22
  int64_t v26; // x24
  BalanceConfig_c *v27; // x0
  int64_t freeDrawAt; // x29
  __int64 v29; // x26
  uint64_t v30; // x23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int32_t *v34; // x27
  char v35; // w8
  System_DateTime_o v36; // x0
  BalanceConfig_c *v37; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v40; // x0
  const MethodInfo *v41; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v42; // x22
  int32_t v43; // w9
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v47; // [xsp+40h] [xbp-80h] BYREF
  int64_t ticks; // [xsp+48h] [xbp-78h] BYREF
  uint64_t v49; // [xsp+50h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-68h] BYREF
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8
  System_TimeSpan_o v54; // 0:x0.8
  System_DateTime_o v55; // 0:x0.8
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x1.8

  v6 = gachaId;
  if ( (byte_4A70B88 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, remainNum);
    sub_1B90010(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_UserGachaMaster___, v9);
    sub_1B90010(&System_DateTime_TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v15);
    sub_1B90010(&NetworkManager_TypeInfo, v16);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B90010(&System_TimeSpan_TypeInfo, v18);
    *(_QWORD *)&gachaId = sub_1B90010(&UserGachaMaster_TypeInfo, v19);
    byte_4A70B88 = 1;
  }
  v49 = 0LL;
  dateData = 0LL;
  v47 = 0LL;
  ticks = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(*(const MethodInfo **)&gachaId);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !SelfUserGame )
    goto LABEL_49;
  if ( !Instance )
    goto LABEL_49;
  Entity = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v6, v23);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( Entity )
  {
    v26 = Instance;
    v27 = BalanceConfig_TypeInfo;
    freeDrawAt = Entity->fields.freeDrawAt;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    v29 = 3600 * (24 - v27->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_38531292(freeDrawAt + v29, 0LL).fields._dateData;
    v49 = NetworkManager__getServerDateTime_38531292(v26 + v29, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v51.fields._dateData = (uint64_t)&v49;
    v30 = System_DateTime__get_Date(v51, 0LL).fields._dateData;
    v52.fields._dateData = (uint64_t)&dateData;
    v57.fields._dateData = System_DateTime__get_Date(v52, 0LL).fields._dateData;
    v53.fields._dateData = v30;
    ticks = System_DateTime__op_Subtraction_62479984(v53, v57, 0LL).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v54.fields._ticks = (int64_t)&ticks;
    Instance = System_TimeSpan__get_Days(v54, 0LL);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v45; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v32 )
        break;
      if ( !i.fields._current )
        sub_1B9026C(v32, v33);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v36.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    v37 = BalanceConfig_TypeInfo;
    v47 = v36.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    DailyFreeGachaResetTime = v37->static_fields->DailyFreeGachaResetTime;
    TodayStartTime = NetworkManager__getTodayStartTime(0LL);
    if ( !(_DWORD)DailyFreeGachaResetTime )
      goto LABEL_41;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v55.fields._dateData = (uint64_t)&v47;
    if ( (System_DateTime__get_Hour(v55, 0LL) & 0x80000000) != 0 )
    {
LABEL_41:
      v34 = remainNum;
    }
    else
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v56.fields._dateData = (uint64_t)&v47;
      v34 = remainNum;
      if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v56, 0LL) )
      {
        v40 = UserGachaMaster_TypeInfo;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
          v40 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v40->static_fields->ONEDAY_SECOND;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v42 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Instance;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( v42 )
      {
        LODWORD(Entity) = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                            v42,
                            TodayStartTime + 3600 * DailyFreeGachaResetTime,
                            UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
                          + TodayStartTime
                          + 3600 * DailyFreeGachaResetTime,
                            v41)
                        + (_DWORD)Entity;
        v35 = 1;
        goto LABEL_47;
      }
    }
LABEL_49:
    sub_1B9026C(Instance, v22);
  }
  v34 = remainNum;
  v35 = 0;
LABEL_47:
  v43 = *maxNum - (_DWORD)Entity;
  *v34 = v43;
  return v35 & (v43 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70B84 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__, userId);
    byte_4A70B84 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_312C900 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A70B85 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__, entity);
    byte_4A70B85 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__checkIsDrawGroupSummon(
        UserGachaMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  bool v11; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A70B87 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&UserGachaEntity_TypeInfo, v6);
    byte_4A70B87 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(UserGachaEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (UserGachaEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserGachaEntity_TypeInfo
        || LODWORD(Item[1].monitor) != gachaId
        || SHIDWORD(Item[1].monitor) <= 0 )
      {
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_16:
    sub_1B9026C(list, *(_QWORD *)&gachaId);
  }
  return 0;
}