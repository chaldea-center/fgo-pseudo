void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC8829 & 1) == 0 )
  {
    sub_1C1ABD4(&UserGachaMaster_TypeInfo, v1);
    byte_4BC8829 = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8826 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, method);
    byte_4BC8826 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
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
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v43; // x22
  int32_t v44; // w9
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v48; // [xsp+38h] [xbp-88h] BYREF
  int64_t ticks; // [xsp+40h] [xbp-80h] BYREF
  uint64_t v50; // [xsp+48h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+50h] [xbp-70h] BYREF
  UserGachaEntity_o *v52; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF
  System_DateTime_o v54; // 0:x0.8
  System_DateTime_o v55; // 0:x0.8
  System_DateTime_o v56; // 0:x0.8
  System_TimeSpan_o v57; // 0:x0.8
  System_DateTime_o v58; // 0:x0.8
  System_DateTime_o v59; // 0:x0.8
  System_DateTime_o v60; // 0:x1.8

  if ( (byte_4BC8828 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, remainNum);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserGachaMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMaster_GachaMaster___, v10);
    sub_1C1ABD4(&DataManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v12);
    sub_1C1ABD4(&System_DateTime_TypeInfo, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v18);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v19);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C1ABD4(&System_TimeSpan_TypeInfo, v21);
    sub_1C1ABD4(&UserGachaMaster_TypeInfo, v22);
    byte_4BC8828 = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  v52 = 0LL;
  ticks = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_57;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_32486C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_57;
    if ( !LODWORD(entity[5].monitor) )
      *maxNum = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Master_object,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__getTime(0LL);
  if ( !SelfUserGame || !MasterData_object )
    goto LABEL_57;
  v29 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)MasterData_object,
                    &v52,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v28);
  if ( (Master_object & 1) != 0 )
  {
    if ( !v52 )
      goto LABEL_57;
    freeDrawAt = v52->fields.freeDrawAt;
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    v32 = 3600 * (24 - v31->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime_39760980(freeDrawAt + v32, 0LL).fields._dateData;
    v50 = NetworkManager__getServerDateTime_39760980(v29 + v32, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v54.fields._dateData = (uint64_t)&v50;
    v33 = System_DateTime__get_Date(v54, 0LL).fields._dateData;
    v55.fields._dateData = (uint64_t)&dateData;
    v60.fields._dateData = System_DateTime__get_Date(v55, 0LL).fields._dateData;
    v56.fields._dateData = v33;
    ticks = System_DateTime__op_Subtraction_63733588(v56, v60, 0LL).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
    v57.fields._ticks = (int64_t)&ticks;
    Master_object = System_TimeSpan__get_Days(v57, 0LL);
    v34 = (int)Master_object < 1;
  }
  else
  {
    v34 = 0;
  }
  if ( !v27 )
LABEL_57:
    sub_1C1AE30(Master_object, v24);
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)v27,
                                                                                         gachaId,
                                                                                         0LL);
  if ( FriendPointSummonMultipleFreeCampaign && FriendPointSummonMultipleFreeCampaign->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v46; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v36 )
        break;
      if ( !i.fields._current )
        sub_1C1AE30(v36, v37);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v48 = NetworkManager__getServerDateTime(0LL).fields._dateData;
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
      v58.fields._dateData = (uint64_t)&v48;
      if ( (System_DateTime__get_Hour(v58, 0LL) & 0x80000000) == 0 )
      {
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        v59.fields._dateData = (uint64_t)&v48;
        if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v59, 0LL) )
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
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_object )
    {
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v43 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Master_object;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( v43 )
      {
        v34 += UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                 v43,
                 TodayStartTime + 3600 * DailyFreeGachaResetTime,
                 UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
               + TodayStartTime
               + 3600 * DailyFreeGachaResetTime,
                 0LL);
        v38 = 1;
        goto LABEL_55;
      }
    }
    goto LABEL_57;
  }
  v38 = 0;
LABEL_55:
  v44 = *maxNum - v34;
  *remainNum = v44;
  return v38 & (v44 > 0);
}


UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8824 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__, userId);
    byte_4BC8824 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, 0LL);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_324D130 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8825 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__, entity);
    byte_4BC8825 = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
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

  if ( (byte_4BC8827 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Count__, *(_QWORD *)&gachaId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Item__, v5);
    byte_4BC8827 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Count__);
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
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserGachaEntity__get_Item__);
      if ( !Item || LODWORD(Item[1].monitor) != gachaId || SHIDWORD(Item[1].monitor) <= 0 )
      {
        v10 = ++v9 < v8;
        if ( v8 != v9 )
          continue;
      }
      return v10;
    }
LABEL_14:
    sub_1C1AE30(list, *(_QWORD *)&gachaId);
  }
  return 0;
}