void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B458C6 & 1) == 0 )
  {
    sub_1BDB878(&UserGachaMaster_TypeInfo, v1);
    byte_4B458C6 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B458C3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, method);
    byte_4B458C3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
}


bool __fastcall UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
        int32_t gachaId,
        int32_t *remainNum,
        int32_t *maxNum,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int64_t Master_object; // x0
  __int64 v24; // x1
  UserGameEntity_o *SelfUserGame; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v27; // x22
  const MethodInfo *v28; // x4
  int64_t v29; // x24
  int64_t freeDrawAt; // x25
  BalanceConfig_c *v31; // x0
  __int64 v32; // x28
  uint64_t v33; // x23
  int v34; // w23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  char v38; // w8
  BalanceConfig_c *v39; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v42; // x0
  const MethodInfo *v43; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v44; // x22
  int32_t v45; // w9
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v49; // [xsp+38h] [xbp-88h] BYREF
  int64_t ticks; // [xsp+40h] [xbp-80h] BYREF
  uint64_t v51; // [xsp+48h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+50h] [xbp-70h] BYREF
  UserGachaEntity_o *v53; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF
  System_DateTime_o v55; // 0:x0.8
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x0.8
  System_TimeSpan_o v58; // 0:x0.8
  System_DateTime_o v59; // 0:x0.8
  System_DateTime_o v60; // 0:x0.8
  System_DateTime_o v61; // 0:x1.8

  if ( (byte_4B458C5 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, remainNum);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserGachaMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_GachaMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v12);
    sub_1BDB878(&System_DateTime_TypeInfo, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v18);
    sub_1BDB878(&NetworkManager_TypeInfo, v19);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BDB878(&System_TimeSpan_TypeInfo, v21);
    sub_1BDB878(&UserGachaMaster_TypeInfo, v22);
    byte_4B458C5 = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  v53 = 0LL;
  ticks = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_57;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_32E1E88 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_57;
    if ( !LODWORD(entity[5].monitor) )
      *maxNum = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Master_object,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__getTime(0LL);
  if ( !SelfUserGame || !MasterData_object )
    goto LABEL_57;
  v29 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)MasterData_object,
                    &v53,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v28);
  if ( (Master_object & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_57;
    freeDrawAt = v53->fields.freeDrawAt;
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    v32 = 3600 * (24 - v31->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_40279056(freeDrawAt + v32, 0LL).fields._dateData;
    v51 = NetworkManager__getServerDateTime_40279056(v29 + v32, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v55.fields._dateData = (uint64_t)&v51;
    v33 = System_DateTime__get_Date(v55, 0LL).fields._dateData;
    v56.fields._dateData = (uint64_t)&dateData;
    v61.fields._dateData = System_DateTime__get_Date(v56, 0LL).fields._dateData;
    v57.fields._dateData = v33;
    ticks = System_DateTime__op_Subtraction_63979148(v57, v61, 0LL).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v58.fields._ticks = (int64_t)&ticks;
    Master_object = System_TimeSpan__get_Days(v58, 0LL);
    v34 = (int)Master_object < 1;
  }
  else
  {
    v34 = 0;
  }
  if ( !v27 )
LABEL_57:
    sub_1BDBAD4(Master_object, v24);
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)v27,
                                                                                         gachaId,
                                                                                         0LL);
  if ( FriendPointSummonMultipleFreeCampaign && FriendPointSummonMultipleFreeCampaign->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v47; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v36 )
        break;
      if ( !i.fields._current )
        sub_1BDBAD4(v36, v37);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v49 = NetworkManager__getServerDateTime(0LL).fields._dateData;
    v39 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    DailyFreeGachaResetTime = v39->static_fields->DailyFreeGachaResetTime;
    TodayStartTime = NetworkManager__getTodayStartTime(0LL);
    if ( (_DWORD)DailyFreeGachaResetTime )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v59.fields._dateData = (uint64_t)&v49;
      if ( (System_DateTime__get_Hour(v59, 0LL) & 0x80000000) == 0 )
      {
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        v60.fields._dateData = (uint64_t)&v49;
        if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v60, 0LL) )
        {
          v42 = UserGachaMaster_TypeInfo;
          if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
            v42 = UserGachaMaster_TypeInfo;
          }
          TodayStartTime -= v42->static_fields->ONEDAY_SECOND;
        }
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_object )
    {
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v44 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Master_object;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( v44 )
      {
        v34 += UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                 v44,
                 TodayStartTime + 3600 * DailyFreeGachaResetTime,
                 UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
               + TodayStartTime
               + 3600 * DailyFreeGachaResetTime,
                 v43);
        v38 = 1;
        goto LABEL_55;
      }
    }
    goto LABEL_57;
  }
  v38 = 0;
LABEL_55:
  v45 = *maxNum - v34;
  *remainNum = v45;
  return v38 & (v45 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B458C1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__, userId);
    byte_4B458C1 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_32E68F4 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B458C2 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__, entity);
    byte_4B458C2 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__checkIsDrawGroupSummon(
        UserGachaMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  bool v10; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4B458C4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Count__, *(_QWORD *)&gachaId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Item__, v5);
    byte_4B458C4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Item__);
      if ( !Item || LODWORD(Item[1].monitor) != gachaId || SHIDWORD(Item[1].monitor) <= 0 )
      {
        v10 = ++v9 < v8;
        if ( v8 != v9 )
          continue;
      }
      return v10;
    }
LABEL_14:
    sub_1BDBAD4(list, *(_QWORD *)&gachaId);
  }
  return 0;
}