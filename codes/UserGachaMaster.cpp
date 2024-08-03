void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FD101 & 1) == 0 )
  {
    sub_1B640C8(&UserGachaMaster_TypeInfo, v1);
    byte_49FD101 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD0FE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, method);
    byte_49FD0FE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
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
  const MethodInfo *v22; // x3
  UserGachaEntity_o *Entity; // x23
  Il2CppObject *MasterData_object; // x22
  int64_t v25; // x24
  BalanceConfig_c *v26; // x0
  int64_t freeDrawAt; // x29
  __int64 v28; // x26
  uint64_t v29; // x23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v31; // x0
  int32_t *v32; // x27
  char v33; // w8
  System_DateTime_o v34; // x0
  BalanceConfig_c *v35; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v38; // x0
  const MethodInfo *v39; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v40; // x22
  int32_t v41; // w9
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v45; // [xsp+40h] [xbp-80h] BYREF
  int64_t ticks; // [xsp+48h] [xbp-78h] BYREF
  uint64_t v47; // [xsp+50h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-68h] BYREF
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x0.8
  System_TimeSpan_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x0.8
  System_DateTime_o v55; // 0:x1.8

  v6 = gachaId;
  if ( (byte_49FD100 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, remainNum);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserGachaMaster___, v9);
    sub_1B640C8(&System_DateTime_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&System_TimeSpan_TypeInfo, v18);
    *(_QWORD *)&gachaId = sub_1B640C8(&UserGachaMaster_TypeInfo, v19);
    byte_49FD100 = 1;
  }
  v47 = 0LL;
  dateData = 0LL;
  v45 = 0LL;
  ticks = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(*(const MethodInfo **)&gachaId);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !SelfUserGame )
    goto LABEL_49;
  if ( !Instance )
    goto LABEL_49;
  Entity = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v6, v22);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( Entity )
  {
    v25 = Instance;
    v26 = BalanceConfig_TypeInfo;
    freeDrawAt = Entity->fields.freeDrawAt;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    v28 = 3600 * (24 - v26->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_38078100(freeDrawAt + v28, 0LL).fields._dateData;
    v47 = NetworkManager__getServerDateTime_38078100(v25 + v28, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v49.fields._dateData = (uint64_t)&v47;
    v29 = System_DateTime__get_Date(v49, 0LL).fields._dateData;
    v50.fields._dateData = (uint64_t)&dateData;
    v55.fields._dateData = System_DateTime__get_Date(v50, 0LL).fields._dateData;
    v51.fields._dateData = v29;
    ticks = System_DateTime__op_Subtraction_62068280(v51, v55, 0LL).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v52.fields._ticks = (int64_t)&ticks;
    Instance = System_TimeSpan__get_Days(v52, 0LL);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v43; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v31 )
        break;
      if ( !i.fields._current )
        sub_1B64324(v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v34.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    v35 = BalanceConfig_TypeInfo;
    v45 = v34.fields._dateData;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    DailyFreeGachaResetTime = v35->static_fields->DailyFreeGachaResetTime;
    TodayStartTime = NetworkManager__getTodayStartTime(0LL);
    if ( !(_DWORD)DailyFreeGachaResetTime )
      goto LABEL_41;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v53.fields._dateData = (uint64_t)&v45;
    if ( (System_DateTime__get_Hour(v53, 0LL) & 0x80000000) != 0 )
    {
LABEL_41:
      v32 = remainNum;
    }
    else
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v54.fields._dateData = (uint64_t)&v45;
      v32 = remainNum;
      if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v54, 0LL) )
      {
        v38 = UserGachaMaster_TypeInfo;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
          v38 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v38->static_fields->ONEDAY_SECOND;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v40 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Instance;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( v40 )
      {
        LODWORD(Entity) = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                            v40,
                            TodayStartTime + 3600 * DailyFreeGachaResetTime,
                            UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
                          + TodayStartTime
                          + 3600 * DailyFreeGachaResetTime,
                            v39)
                        + (_DWORD)Entity;
        v33 = 1;
        goto LABEL_47;
      }
    }
LABEL_49:
    sub_1B64324(Instance);
  }
  v32 = remainNum;
  v33 = 0;
LABEL_47:
  v41 = *maxNum - (_DWORD)Entity;
  *v32 = v41;
  return v33 & (v41 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FD0FC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__, userId);
    byte_49FD0FC = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D41FC *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FD0FD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__, entity);
    byte_49FD0FD = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
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

  if ( (byte_49FD0FF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&UserGachaEntity_TypeInfo, v6);
    byte_49FD0FF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B64324(list);
  }
  return 0;
}