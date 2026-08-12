void UserGachaMaster___cctor(const MethodInfo *method)
{
  if ( (byte_5971780 & 1) == 0 )
  {
    sub_2213A60(&UserGachaMaster_TypeInfo);
    byte_5971780 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400;
}


void UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597177D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
    byte_597177D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
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
  uint64_t v20; // x23
  System_DateTime_o v21; // x0
  System_TimeSpan_o v22; // x1
  int v23; // w23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  bool v27; // w8
  __int64 v28; // x1
  System_DateTime_o v29; // x1
  BalanceConfig_c *v30; // x8
  int32_t DailyFreeGachaResetTime; // w24
  __int64 v32; // x1
  int64_t TodayStartTime; // x21
  __int64 v34; // x1
  __int64 v35; // x1
  UserGachaMaster_c *v36; // x0
  const MethodInfo *v37; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v38; // x22
  int32_t DrawLogNum; // w0
  int32_t v40; // w9
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v44; // [xsp+38h] [xbp-88h] BYREF
  int64_t ticks; // [xsp+40h] [xbp-80h] BYREF
  uint64_t v46; // [xsp+48h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+50h] [xbp-70h] BYREF
  UserGachaEntity_o *v48; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_597177E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_TimeSpan_TypeInfo);
    sub_2213A60(&UserGachaMaster_TypeInfo);
    byte_597177E = 1;
  }
  entity = 0;
  *maxNum = 1;
  dateData = 0;
  v48 = 0;
  ticks = 0;
  v46 = 0;
  v44 = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v43, 0, sizeof(v43));
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, remainNum);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_60;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_60;
    if ( !LODWORD(entity[5].monitor) )
      *maxNum = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_60;
  v13 = DataManager__GetMasterData_object_(
          (DataManager_o *)Master_object,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !MasterData_object )
    goto LABEL_60;
  v15 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)MasterData_object,
                    &v48,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v14);
  if ( (Master_object & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_60;
    freeDrawAt = v48->fields.freeDrawAt;
    v17 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
      v17 = BalanceConfig_TypeInfo;
    }
    v18 = 3600 * (24 - v17->static_fields->DailyFreeGachaResetTime);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    dateData = NetworkManager__getServerDateTime_48347596(freeDrawAt + v18, 0).fields._dateData;
    v46 = NetworkManager__getServerDateTime_48347596(v15 + v18, 0).fields._dateData;
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v19.fields._dateData);
    v20 = System_DateTime__get_Date((System_DateTime_o)&v46, 0).fields._dateData;
    v21.fields._dateData = System_DateTime__get_Date((System_DateTime_o)&dateData, 0).fields._dateData;
    ticks = System_DateTime__op_Subtraction_77030584((System_DateTime_o)v20, v21, 0).fields._ticks;
    if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v22.fields._ticks);
    Master_object = System_TimeSpan__get_Days((System_TimeSpan_o)&ticks, 0);
    v23 = (int)Master_object < 1;
  }
  else
  {
    v23 = 0;
  }
  if ( !v13 )
    goto LABEL_60;
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)v13,
                                                                                         gachaId,
                                                                                         0);
  if ( !FriendPointSummonMultipleFreeCampaign || FriendPointSummonMultipleFreeCampaign->fields._size < 1 )
  {
    v27 = 0;
    goto LABEL_55;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    FriendPointSummonMultipleFreeCampaign,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v43 = v42;
  v42.fields._list = 0;
  *(_QWORD *)&v42.fields._index = &v43;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v25 )
      break;
    if ( !v43.fields._current )
      sub_2213CDC(v25, v26);
    *maxNum += LODWORD(v43.fields._current[3].klass);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
  v44 = NetworkManager__getServerDateTime(0).fields._dateData;
  v30 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29.fields._dateData);
    v30 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v30->static_fields->DailyFreeGachaResetTime;
  TodayStartTime = NetworkManager__getTodayStartTime(0);
  if ( DailyFreeGachaResetTime )
  {
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v32);
    if ( (System_DateTime__get_Hour((System_DateTime_o)&v44, 0) & 0x80000000) == 0 )
    {
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v34);
      if ( DailyFreeGachaResetTime > System_DateTime__get_Hour((System_DateTime_o)&v44, 0) )
      {
        v36 = UserGachaMaster_TypeInfo;
        if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v35);
          v36 = UserGachaMaster_TypeInfo;
        }
        TodayStartTime -= v36->static_fields->ONEDAY_SECOND;
      }
    }
  }
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_60;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
  v38 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Master_object;
  if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v9);
  if ( !v38 )
LABEL_60:
    sub_2213CDC(Master_object, v9);
  DrawLogNum = UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                 v38,
                 TodayStartTime + 3600LL * DailyFreeGachaResetTime,
                 UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
               + TodayStartTime
               + 3600LL * DailyFreeGachaResetTime,
                 v37);
  v27 = 1;
  v23 += DrawLogNum;
LABEL_55:
  v40 = *maxNum - v23;
  *remainNum = v40;
  return v40 > 0 && v27;
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597177B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
    byte_597177B = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3F157EC *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
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
  uint64_t v17; // x19
  System_DateTime_o v18; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  UserGachaEntity_o *v22; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_597177F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597177F = 1;
  }
  entity = 0;
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  dateData = 0;
  v22 = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( !GachaStoryAdjustMaster__IsGachaIdAdjusted((GachaStoryAdjustMaster_o *)Master_object, gachaId, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_31;
  if ( !LODWORD(entity[5].monitor) )
    return 0;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !v10 )
    goto LABEL_31;
  v12 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)v10,
                    &v22,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v11);
  if ( (Master_object & 1) == 0 )
    return 1;
  if ( !v22 )
LABEL_31:
    sub_2213CDC(Master_object, v5);
  freeDrawAt = v22->fields.freeDrawAt;
  v14 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = 3600 * (24 - v14->static_fields->GachaDailyMaxDrawNumResetAt);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  dateData = NetworkManager__getServerDateTime_48347596(v12 + v15, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v16.fields._dateData);
  v17 = System_DateTime__get_Date((System_DateTime_o)&dateData, 0).fields._dateData;
  dateData = NetworkManager__getServerDateTime_48347596(freeDrawAt + v15, 0).fields._dateData;
  v18.fields._dateData = System_DateTime__get_Date((System_DateTime_o)&dateData, 0).fields._dateData;
  return System_DateTime__op_Inequality((System_DateTime_o)v17, v18, 0);
}


bool UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_597177C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
    byte_597177C = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}