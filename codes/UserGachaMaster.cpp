void UserGachaMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4D3188A & 1) == 0 )
  {
    sub_1C93AD4(&UserGachaMaster_TypeInfo);
    byte_4D3188A = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400;
}


void UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31887 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
    byte_4D31887 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
}


bool UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
        int32_t gachaId,
        int32_t *remainNum,
        int32_t *maxNum,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v11; // x22
  const MethodInfo *v12; // x4
  int64_t v13; // x24
  int64_t freeDrawAt; // x25
  BalanceConfig_c *v15; // x0
  __int64 v16; // x28
  uint64_t v17; // x23
  System_DateTime_o v18; // x0
  int v19; // w23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  char v23; // w8
  BalanceConfig_c *v24; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  UserGachaMaster_c *v27; // x0
  const MethodInfo *v28; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v29; // x22
  int32_t v30; // w9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v34; // [xsp+38h] [xbp-88h] BYREF
  int64_t ticks; // [xsp+40h] [xbp-80h] BYREF
  uint64_t v36; // [xsp+48h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+50h] [xbp-70h] BYREF
  UserGachaEntity_o *v38; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4D31888 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&System_TimeSpan_TypeInfo);
    sub_1C93AD4(&UserGachaMaster_TypeInfo);
    byte_4D31888 = 1;
  }
  entity = 0;
  dateData = 0;
  v38 = 0;
  ticks = 0;
  v36 = 0;
  v34 = 0;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_57;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_34632C0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_57;
    if ( !LODWORD(entity[5].monitor) )
      *maxNum = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Master_object,
          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !MasterData_object )
    goto LABEL_57;
  v13 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)MasterData_object,
                    &v38,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v12);
  if ( (Master_object & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_57;
    freeDrawAt = v38->fields.freeDrawAt;
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v16 = 3600 * (24 - v15->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_42097084(freeDrawAt + v16, 0).fields._dateData;
    v36 = NetworkManager__getServerDateTime_42097084(v13 + v16, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v17 = System_DateTime__get_Date((System_DateTime_o)&v36, 0).fields._dateData;
    v18.fields._dateData = System_DateTime__get_Date((System_DateTime_o)&dateData, 0).fields._dateData;
    ticks = System_DateTime__op_Subtraction_65826720((System_DateTime_o)v17, v18, 0).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    Master_object = System_TimeSpan__get_Days((System_TimeSpan_o)&ticks, 0);
    v19 = (int)Master_object < 1;
  }
  else
  {
    v19 = 0;
  }
  if ( !v11 )
LABEL_57:
    sub_1C93D2C(Master_object, v8);
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)v11,
                                                                                         gachaId,
                                                                                         0);
  if ( FriendPointSummonMultipleFreeCampaign && FriendPointSummonMultipleFreeCampaign->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v32; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v21 )
        break;
      if ( !i.fields._current )
        sub_1C93D2C(v21, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v34 = NetworkManager__getServerDateTime(0).fields._dateData;
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    DailyFreeGachaResetTime = v24->static_fields->DailyFreeGachaResetTime;
    TodayStartTime = NetworkManager__getTodayStartTime(0);
    if ( (_DWORD)DailyFreeGachaResetTime )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      if ( (System_DateTime__get_Hour((System_DateTime_o)&v34, 0) & 0x80000000) == 0 )
      {
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour((System_DateTime_o)&v34, 0) )
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
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_object )
    {
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v29 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Master_object;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( v29 )
      {
        v19 += UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                 v29,
                 TodayStartTime + 3600 * DailyFreeGachaResetTime,
                 UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
               + TodayStartTime
               + 3600 * DailyFreeGachaResetTime,
                 v28);
        v23 = 1;
        goto LABEL_55;
      }
    }
    goto LABEL_57;
  }
  v23 = 0;
LABEL_55:
  v30 = *maxNum - v19;
  *remainNum = v30;
  return v23 & (v30 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D31885 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
    byte_4D31885 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_34681D4 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool UserGachaMaster__IsOneTimeFreeCampaignActive(int32_t gachaId, const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x21
  Il2CppObject *v6; // x22
  const MethodInfo *v7; // x4
  int64_t v8; // x20
  int64_t freeDrawAt; // x21
  BalanceConfig_c *v10; // x0
  __int64 v11; // x22
  uint64_t v12; // x19
  System_DateTime_o v13; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  UserGachaEntity_o *v17; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D31889 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D31889 = 1;
  }
  v17 = 0;
  entity = 0;
  dateData = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( !GachaStoryAdjustMaster__IsGachaIdAdjusted((GachaStoryAdjustMaster_o *)Master_object, gachaId, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_34632C0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_31;
  if ( !LODWORD(entity[5].monitor) )
    return 0;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !v6 )
    goto LABEL_31;
  v8 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v6, &v17, SelfUserGame->fields.userId, gachaId, v7);
  if ( (Master_object & 1) == 0 )
    return 1;
  if ( !v17 )
LABEL_31:
    sub_1C93D2C(Master_object, v4);
  freeDrawAt = v17->fields.freeDrawAt;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = 3600 * (24 - v10->static_fields->GachaDailyMaxDrawNumResetAt);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_42097084(v8 + v11, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v12 = System_DateTime__get_Date((System_DateTime_o)&dateData, 0).fields._dateData;
  dateData = NetworkManager__getServerDateTime_42097084(freeDrawAt + v11, 0).fields._dateData;
  v13.fields._dateData = System_DateTime__get_Date((System_DateTime_o)&dateData, 0).fields._dateData;
  return System_DateTime__op_Inequality((System_DateTime_o)v12, v13, 0);
}


bool UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D31886 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
    byte_4D31886 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}