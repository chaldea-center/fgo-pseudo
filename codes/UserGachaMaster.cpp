void UserGachaMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4C43E70 & 1) == 0 )
  {
    sub_1C37058(&UserGachaMaster_TypeInfo);
    byte_4C43E70 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400;
}


void UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43E6C & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
    byte_4C43E6C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
}


bool UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
        int32_t gachaId,
        int32_t *remainNum,
        int32_t *maxNum,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  UserGameEntity_o *SelfUserGame; // x23
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v10; // x22
  const MethodInfo *v11; // x4
  int64_t v12; // x24
  int64_t freeDrawAt; // x25
  BalanceConfig_c *v14; // x0
  __int64 v15; // x28
  System_DateTime_o v16; // x0
  uint64_t v17; // x23
  System_DateTime_o v18; // x0
  System_DateTime_o v19; // x1
  System_DateTime_o v20; // x0
  System_TimeSpan_o v21; // x0
  int v22; // w23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v24; // x0
  char v25; // w8
  BalanceConfig_c *v26; // x8
  __int64 DailyFreeGachaResetTime; // x24
  int64_t TodayStartTime; // x21
  System_DateTime_o v29; // x0
  System_DateTime_o v30; // x0
  UserGachaMaster_c *v31; // x0
  const MethodInfo *v32; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v33; // x22
  int32_t v34; // w9
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v38; // [xsp+38h] [xbp-88h] BYREF
  int64_t ticks; // [xsp+40h] [xbp-80h] BYREF
  uint64_t v40; // [xsp+48h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+50h] [xbp-70h] BYREF
  UserGachaEntity_o *v42; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4C43E6E & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&System_TimeSpan_TypeInfo);
    sub_1C37058(&UserGachaMaster_TypeInfo);
    byte_4C43E6E = 1;
  }
  entity = 0;
  dateData = 0;
  v42 = 0;
  ticks = 0;
  v40 = 0;
  v38 = 0;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_57;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_33A10EC *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_57;
    if ( !LODWORD(entity[5].monitor) )
      *maxNum = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Master_object,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !MasterData_object )
    goto LABEL_57;
  v12 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)MasterData_object,
                    &v42,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v11);
  if ( (Master_object & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_57;
    freeDrawAt = v42->fields.freeDrawAt;
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v15 = 3600 * (24 - v14->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_41367476(freeDrawAt + v15, 0).fields._dateData;
    v40 = NetworkManager__getServerDateTime_41367476(v12 + v15, 0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v16.fields._dateData = (uint64_t)&v40;
    v17 = System_DateTime__get_Date(v16, 0).fields._dateData;
    v18.fields._dateData = (uint64_t)&dateData;
    v19.fields._dateData = System_DateTime__get_Date(v18, 0).fields._dateData;
    v20.fields._dateData = v17;
    ticks = System_DateTime__op_Subtraction_64964264(v20, v19, 0).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v21.fields._ticks = (int64_t)&ticks;
    Master_object = System_TimeSpan__get_Days(v21, 0);
    v22 = (int)Master_object < 1;
  }
  else
  {
    v22 = 0;
  }
  if ( !v10 )
LABEL_57:
    sub_1C372B4(Master_object);
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)v10,
                                                                                         gachaId,
                                                                                         0);
  if ( FriendPointSummonMultipleFreeCampaign && FriendPointSummonMultipleFreeCampaign->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v36; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v24 )
        break;
      if ( !i.fields._current )
        sub_1C372B4(v24);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v38 = NetworkManager__getServerDateTime(0).fields._dateData;
    v26 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    DailyFreeGachaResetTime = v26->static_fields->DailyFreeGachaResetTime;
    TodayStartTime = NetworkManager__getTodayStartTime(0);
    if ( (_DWORD)DailyFreeGachaResetTime )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v29.fields._dateData = (uint64_t)&v38;
      if ( (System_DateTime__get_Hour(v29, 0) & 0x80000000) == 0 )
      {
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        v30.fields._dateData = (uint64_t)&v38;
        if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v30, 0) )
        {
          v31 = UserGachaMaster_TypeInfo;
          if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
            v31 = UserGachaMaster_TypeInfo;
          }
          TodayStartTime -= v31->static_fields->ONEDAY_SECOND;
        }
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_object )
    {
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v33 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Master_object;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( v33 )
      {
        v22 += UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                 v33,
                 TodayStartTime + 3600 * DailyFreeGachaResetTime,
                 UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
               + TodayStartTime
               + 3600 * DailyFreeGachaResetTime,
                 v32);
        v25 = 1;
        goto LABEL_55;
      }
    }
    goto LABEL_57;
  }
  v25 = 0;
LABEL_55:
  v34 = *maxNum - v22;
  *remainNum = v34;
  return v25 & (v34 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43E6A & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
    byte_4C43E6A = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_33A5B58 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool UserGachaMaster__IsOneTimeFreeCampaignActive(int32_t gachaId, const MethodInfo *method)
{
  int64_t Master_object; // x0
  UserGameEntity_o *SelfUserGame; // x21
  Il2CppObject *v5; // x22
  const MethodInfo *v6; // x4
  int64_t v7; // x20
  int64_t freeDrawAt; // x21
  BalanceConfig_c *v9; // x0
  __int64 v10; // x22
  System_DateTime_o v11; // x0
  uint64_t v12; // x19
  System_DateTime_o v13; // x0
  System_DateTime_o v14; // x1
  System_DateTime_o v15; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  UserGachaEntity_o *v19; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C43E6F & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43E6F = 1;
  }
  v19 = 0;
  entity = 0;
  dateData = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaStoryAdjustMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( !GachaStoryAdjustMaster__IsGachaIdAdjusted((GachaStoryAdjustMaster_o *)Master_object, gachaId, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_33A10EC *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_31;
  if ( !LODWORD(entity[5].monitor) )
    return 0;
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v5 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__getTime(0);
  if ( !SelfUserGame || !v5 )
    goto LABEL_31;
  v7 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v5, &v19, SelfUserGame->fields.userId, gachaId, v6);
  if ( (Master_object & 1) == 0 )
    return 1;
  if ( !v19 )
LABEL_31:
    sub_1C372B4(Master_object);
  freeDrawAt = v19->fields.freeDrawAt;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = 3600 * (24 - v9->static_fields->GachaDailyMaxDrawNumResetAt);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41367476(v7 + v10, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v11.fields._dateData = (uint64_t)&dateData;
  v12 = System_DateTime__get_Date(v11, 0).fields._dateData;
  dateData = NetworkManager__getServerDateTime_41367476(freeDrawAt + v10, 0).fields._dateData;
  v13.fields._dateData = (uint64_t)&dateData;
  v14.fields._dateData = System_DateTime__get_Date(v13, 0).fields._dateData;
  v15.fields._dateData = v12;
  return System_DateTime__op_Inequality(v15, v14, 0);
}


bool UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43E6B & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
    byte_4C43E6B = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}


bool UserGachaMaster__checkIsDrawGroupSummon(UserGachaMaster_o *this, int32_t gachaId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4C43E6D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Item__);
    byte_4C43E6D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Count__);
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
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Item__);
      if ( !Item || LODWORD(Item[1].monitor) != gachaId || SHIDWORD(Item[1].monitor) <= 0 )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_14:
    sub_1C372B4(list);
  }
  return 0;
}