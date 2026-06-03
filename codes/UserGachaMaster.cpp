void UserGachaMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4E78585 & 1) == 0 )
  {
    sub_1D0F0B4(&UserGachaMaster_TypeInfo);
    byte_4E78585 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400;
}


void UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E78582 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
    byte_4E78582 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_3538564 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
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
  System_DateTime_o v17; // x0
  uint64_t v18; // x23
  System_DateTime_o v19; // x0
  System_DateTime_o v20; // x1
  System_DateTime_o v21; // x0
  System_TimeSpan_o v22; // x0
  int v23; // w23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  char v27; // w8
  BalanceConfig_c *v28; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  System_DateTime_o v31; // x0
  System_DateTime_o v32; // x0
  UserGachaMaster_c *v33; // x0
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v34; // x22
  int32_t v35; // w9
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v39; // [xsp+38h] [xbp-88h] BYREF
  int64_t ticks; // [xsp+40h] [xbp-80h] BYREF
  uint64_t v41; // [xsp+48h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+50h] [xbp-70h] BYREF
  UserGachaEntity_o *v43; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4E78583 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1D0F0B4(&System_DateTime_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&System_TimeSpan_TypeInfo);
    sub_1D0F0B4(&UserGachaMaster_TypeInfo);
    byte_4E78583 = 1;
  }
  entity = 0;
  dateData = 0;
  v43 = 0;
  ticks = 0;
  v41 = 0;
  v39 = 0;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_57;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_3535BC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_57;
    if ( !LODWORD(entity[5].monitor) )
      *maxNum = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Master_object,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !MasterData_object )
    goto LABEL_57;
  v13 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)MasterData_object,
                    &v43,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v12);
  if ( (Master_object & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_57;
    freeDrawAt = v43->fields.freeDrawAt;
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v16 = 3600 * (24 - v15->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_42741668(freeDrawAt + v16, 0).fields._dateData;
    v41 = NetworkManager__getServerDateTime_42741668(v13 + v16, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v17.fields._dateData = (uint64_t)&v41;
    v18 = System_DateTime__get_Date(v17, 0).fields._dateData;
    v19.fields._dateData = (uint64_t)&dateData;
    v20.fields._dateData = System_DateTime__get_Date(v19, 0).fields._dateData;
    v21.fields._dateData = v18;
    ticks = System_DateTime__op_Subtraction_66963768(v21, v20, 0).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v22.fields._ticks = (int64_t)&ticks;
    Master_object = System_TimeSpan__get_Days(v22, 0);
    v23 = (int)Master_object < 1;
  }
  else
  {
    v23 = 0;
  }
  if ( !v11 )
LABEL_57:
    sub_1D0F30C(Master_object, v8);
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)v11,
                                                                                         gachaId,
                                                                                         0);
  if ( FriendPointSummonMultipleFreeCampaign && FriendPointSummonMultipleFreeCampaign->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v37; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v25 )
        break;
      if ( !i.fields._current )
        sub_1D0F30C(v25, v26);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v39 = NetworkManager__getServerDateTime(0).fields._dateData;
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    DailyFreeGachaResetTime = v28->static_fields->DailyFreeGachaResetTime;
    TodayStartTime = NetworkManager__getTodayStartTime(0);
    if ( (_DWORD)DailyFreeGachaResetTime )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v31.fields._dateData = (uint64_t)&v39;
      if ( (System_DateTime__get_Hour(v31, 0) & 0x80000000) == 0 )
      {
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        v32.fields._dateData = (uint64_t)&v39;
        if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v32, 0) )
        {
          v33 = UserGachaMaster_TypeInfo;
          if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
            v33 = UserGachaMaster_TypeInfo;
          }
          TodayStartTime -= v33->static_fields->ONEDAY_SECOND;
        }
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_object )
    {
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v34 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Master_object;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( v34 )
      {
        v23 += UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                 v34,
                 TodayStartTime + 3600 * DailyFreeGachaResetTime,
                 UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
               + TodayStartTime
               + 3600 * DailyFreeGachaResetTime,
                 0);
        v27 = 1;
        goto LABEL_55;
      }
    }
    goto LABEL_57;
  }
  v27 = 0;
LABEL_55:
  v35 = *maxNum - v23;
  *remainNum = v35;
  return v27 & (v35 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4E78580 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
    byte_4E78580 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_353AADC *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
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
  System_DateTime_o v12; // x0
  uint64_t v13; // x19
  System_DateTime_o v14; // x0
  System_DateTime_o v15; // x1
  System_DateTime_o v16; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  UserGachaEntity_o *v20; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E78584 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1D0F0B4(&System_DateTime_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E78584 = 1;
  }
  v20 = 0;
  entity = 0;
  dateData = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( !GachaStoryAdjustMaster__IsGachaIdAdjusted((GachaStoryAdjustMaster_o *)Master_object, gachaId, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_3535BC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_31;
  if ( !LODWORD(entity[5].monitor) )
    return 0;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !v6 )
    goto LABEL_31;
  v8 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v6, &v20, SelfUserGame->fields.userId, gachaId, v7);
  if ( (Master_object & 1) == 0 )
    return 1;
  if ( !v20 )
LABEL_31:
    sub_1D0F30C(Master_object, v4);
  freeDrawAt = v20->fields.freeDrawAt;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = 3600 * (24 - v10->static_fields->GachaDailyMaxDrawNumResetAt);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_42741668(v8 + v11, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v12.fields._dateData = (uint64_t)&dateData;
  v13 = System_DateTime__get_Date(v12, 0).fields._dateData;
  dateData = NetworkManager__getServerDateTime_42741668(freeDrawAt + v11, 0).fields._dateData;
  v14.fields._dateData = (uint64_t)&dateData;
  v15.fields._dateData = System_DateTime__get_Date(v14, 0).fields._dateData;
  v16.fields._dateData = v13;
  return System_DateTime__op_Inequality(v16, v15, 0);
}


bool UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4E78581 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
    byte_4E78581 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_353AB28 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}