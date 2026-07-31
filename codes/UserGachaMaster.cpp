void UserGachaMaster___cctor(const MethodInfo *method)
{
  if ( (byte_59395C0 & 1) == 0 )
  {
    sub_21FFC50(&UserGachaMaster_TypeInfo);
    byte_59395C0 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400;
}


void UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59395BD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
    byte_59395BD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
}


bool UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
        int32_t gachaId,
        int32_t *remainNum,
        int32_t *maxNum,
        const MethodInfo *method)
{
  int v7; // w8
  int64_t Master_object; // x0
  __int64 v9; // x1
  UserGameEntity_o *SelfUserGame; // x23
  Il2CppObject *MasterData_object; // x25
  __int64 v12; // x1
  Il2CppObject *v13; // x22
  const MethodInfo *v14; // x4
  int64_t v15; // x24
  int64_t freeDrawAt; // x25
  BalanceConfig_c *v17; // x0
  __int64 v18; // x28
  System_DateTime_o v19; // x1
  System_DateTime_o v20; // x0
  uint64_t v21; // x23
  System_DateTime_o v22; // x0
  System_DateTime_o v23; // x1
  System_DateTime_o v24; // x0
  System_TimeSpan_o v25; // x1
  System_TimeSpan_o v26; // x0
  int v27; // w23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  bool v31; // w8
  __int64 v32; // x1
  System_DateTime_o v33; // x1
  BalanceConfig_c *v34; // x8
  int32_t DailyFreeGachaResetTime; // w24
  __int64 v36; // x1
  int64_t TodayStartTime; // x21
  System_DateTime_o v38; // x0
  __int64 v39; // x1
  System_DateTime_o v40; // x0
  __int64 v41; // x1
  UserGachaMaster_c *v42; // x0
  const MethodInfo *v43; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v44; // x22
  int32_t DrawLogNum; // w0
  int32_t v46; // w9
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v50; // [xsp+38h] [xbp-88h] BYREF
  int64_t ticks; // [xsp+40h] [xbp-80h] BYREF
  uint64_t v52; // [xsp+48h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+50h] [xbp-70h] BYREF
  UserGachaEntity_o *v54; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_59395BE & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&System_TimeSpan_TypeInfo);
    sub_21FFC50(&UserGachaMaster_TypeInfo);
    byte_59395BE = 1;
  }
  entity = 0;
  *maxNum = 1;
  dateData = 0;
  v54 = 0;
  ticks = 0;
  v52 = 0;
  v50 = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v49, 0, sizeof(v49));
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, remainNum);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_60;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_60;
    if ( !LODWORD(entity[5].monitor) )
      *maxNum = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_60;
  v13 = DataManager__GetMasterData_object_(
          (DataManager_o *)Master_object,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !MasterData_object )
    goto LABEL_60;
  v15 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)MasterData_object,
                    &v54,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v14);
  if ( (Master_object & 1) != 0 )
  {
    if ( !v54 )
      goto LABEL_60;
    freeDrawAt = v54->fields.freeDrawAt;
    v17 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
      v17 = BalanceConfig_TypeInfo;
    }
    v18 = 3600 * (24 - v17->static_fields->DailyFreeGachaResetTime);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    dateData = NetworkManager__getServerDateTime_48311712(freeDrawAt + v18, 0).fields._dateData;
    v52 = NetworkManager__getServerDateTime_48311712(v15 + v18, 0).fields._dateData;
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v19.fields._dateData);
    v20.fields._dateData = (uint64_t)&v52;
    v21 = System_DateTime__get_Date(v20, 0).fields._dateData;
    v22.fields._dateData = (uint64_t)&dateData;
    v23.fields._dateData = System_DateTime__get_Date(v22, 0).fields._dateData;
    v24.fields._dateData = v21;
    ticks = System_DateTime__op_Subtraction_76817280(v24, v23, 0).fields._ticks;
    if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v25.fields._ticks);
    v26.fields._ticks = (int64_t)&ticks;
    Master_object = System_TimeSpan__get_Days(v26, 0);
    v27 = (int)Master_object < 1;
  }
  else
  {
    v27 = 0;
  }
  if ( !v13 )
    goto LABEL_60;
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)v13,
                                                                                         gachaId,
                                                                                         0);
  if ( !FriendPointSummonMultipleFreeCampaign || FriendPointSummonMultipleFreeCampaign->fields._size < 1 )
  {
    v31 = 0;
    goto LABEL_55;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    FriendPointSummonMultipleFreeCampaign,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v49 = v48;
  v48.fields._list = 0;
  *(_QWORD *)&v48.fields._index = &v49;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v29 )
      break;
    if ( !v49.fields._current )
      sub_21FFECC(v29, v30);
    *maxNum += LODWORD(v49.fields._current[3].klass);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
  v50 = NetworkManager__getServerDateTime(0).fields._dateData;
  v34 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33.fields._dateData);
    v34 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v34->static_fields->DailyFreeGachaResetTime;
  TodayStartTime = NetworkManager__getTodayStartTime(0);
  if ( DailyFreeGachaResetTime )
  {
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v36);
    v38.fields._dateData = (uint64_t)&v50;
    if ( (System_DateTime__get_Hour(v38, 0) & 0x80000000) == 0 )
    {
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v39);
      v40.fields._dateData = (uint64_t)&v50;
      if ( DailyFreeGachaResetTime > System_DateTime__get_Hour(v40, 0) )
      {
        v42 = UserGachaMaster_TypeInfo;
        if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v41);
          v42 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v42->static_fields->ONEDAY_SECOND;
      }
    }
  }
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_60;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
  v44 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Master_object;
  if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v9);
  if ( !v44 )
LABEL_60:
    sub_21FFECC(Master_object, v9);
  DrawLogNum = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                 v44,
                 TodayStartTime + 3600LL * DailyFreeGachaResetTime,
                 UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
               + TodayStartTime
               + 3600LL * DailyFreeGachaResetTime,
                 v43);
  v31 = 1;
  v27 += DrawLogNum;
LABEL_55:
  v46 = *maxNum - v27;
  *remainNum = v46;
  return v46 > 0 && v31;
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59395BB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
    byte_59395BB = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool UserGachaMaster__IsOneTimeFreeCampaignActive(int32_t gachaId, const MethodInfo *method)
{
  int v3; // w8
  int64_t Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserGameEntity_o *SelfUserGame; // x21
  __int64 v9; // x1
  Il2CppObject *v10; // x22
  const MethodInfo *v11; // x4
  int64_t v12; // x20
  int64_t freeDrawAt; // x21
  BalanceConfig_c *v14; // x0
  __int64 v15; // x22
  System_DateTime_o v16; // x1
  System_DateTime_o v17; // x0
  uint64_t v18; // x19
  System_DateTime_o v19; // x0
  System_DateTime_o v20; // x1
  System_DateTime_o v21; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  UserGachaEntity_o *v25; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59395BF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59395BF = 1;
  }
  entity = 0;
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  dateData = 0;
  v25 = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( !GachaStoryAdjustMaster__IsGachaIdAdjusted((GachaStoryAdjustMaster_o *)Master_object, gachaId, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_31;
  if ( !LODWORD(entity[5].monitor) )
    return 0;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !v10 )
    goto LABEL_31;
  v12 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)v10,
                    &v25,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v11);
  if ( (Master_object & 1) == 0 )
    return 1;
  if ( !v25 )
LABEL_31:
    sub_21FFECC(Master_object, v5);
  freeDrawAt = v25->fields.freeDrawAt;
  v14 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = 3600 * (24 - v14->static_fields->GachaDailyMaxDrawNumResetAt);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  dateData = NetworkManager__getServerDateTime_48311712(v12 + v15, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v16.fields._dateData);
  v17.fields._dateData = (uint64_t)&dateData;
  v18 = System_DateTime__get_Date(v17, 0).fields._dateData;
  dateData = NetworkManager__getServerDateTime_48311712(freeDrawAt + v15, 0).fields._dateData;
  v19.fields._dateData = (uint64_t)&dateData;
  v20.fields._dateData = System_DateTime__get_Date(v19, 0).fields._dateData;
  v21.fields._dateData = v18;
  return System_DateTime__op_Inequality(v21, v20, 0);
}


bool UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59395BC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
    byte_59395BC = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}