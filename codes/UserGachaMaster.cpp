void __fastcall UserGachaMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16F2F & 1) == 0 )
  {
    sub_1BCA7E0(&UserGachaMaster_TypeInfo, v1, v2);
    byte_4B16F2F = 1;
  }
  UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND = 86400LL;
}


void __fastcall UserGachaMaster___ctor(UserGachaMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__, method, v2);
    byte_4B16F2C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    34,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string___ctor__);
}


bool __fastcall UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
        int32_t gachaId,
        int32_t *remainNum,
        int32_t *maxNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  int64_t Master_object; // x0
  __int64 v40; // x1
  UserGameEntity_o *SelfUserGame; // x23
  Il2CppObject *MasterData_object; // x25
  __int64 v43; // x1
  Il2CppObject *v44; // x22
  const MethodInfo *v45; // x4
  int64_t v46; // x24
  int64_t freeDrawAt; // x25
  BalanceConfig_c *v48; // x0
  __int64 v49; // x28
  __int64 v50; // x1
  uint64_t v51; // x23
  __int64 v52; // x1
  int v53; // w23
  System_Collections_Generic_List_object__o *FriendPointSummonMultipleFreeCampaign; // x0
  _BOOL8 v55; // x0
  __int64 v56; // x1
  char v57; // w8
  __int64 v58; // x1
  __int64 v59; // x1
  BalanceConfig_c *v60; // x8
  __int64 DailyFreeGachaResetTime; // x24
  __int64 v62; // x1
  int64_t TodayStartTime; // x21
  __int64 v64; // x1
  __int64 v65; // x1
  UserGachaMaster_c *v66; // x0
  const MethodInfo *v67; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v68; // x22
  int32_t v69; // w9
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  uint64_t v73; // [xsp+38h] [xbp-88h] BYREF
  int64_t ticks; // [xsp+40h] [xbp-80h] BYREF
  uint64_t v75; // [xsp+48h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+50h] [xbp-70h] BYREF
  UserGachaEntity_o *v77; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF
  System_DateTime_o v79; // 0:x0.8
  System_DateTime_o v80; // 0:x0.8
  System_DateTime_o v81; // 0:x0.8
  System_TimeSpan_o v82; // 0:x0.8
  System_DateTime_o v83; // 0:x0.8
  System_DateTime_o v84; // 0:x0.8
  System_DateTime_o v85; // 0:x1.8

  if ( (byte_4B16F2E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, remainNum, maxNum);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGachaMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&System_TimeSpan_TypeInfo, v35, v36);
    sub_1BCA7E0(&UserGachaMaster_TypeInfo, v37, v38);
    byte_4B16F2E = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  v77 = 0LL;
  ticks = 0LL;
  v75 = 0LL;
  v73 = 0LL;
  memset(&i, 0, sizeof(i));
  *maxNum = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, remainNum);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_57;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    gachaId,
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_57;
    if ( !LODWORD(entity[5].monitor) )
      *maxNum = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)Master_object);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_57;
  v44 = DataManager__GetMasterData_object_(
          (DataManager_o *)Master_object,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v43);
  Master_object = NetworkManager__getTime(0LL);
  if ( !SelfUserGame || !MasterData_object )
    goto LABEL_57;
  v46 = Master_object;
  Master_object = UserGachaMaster__TryGetEntity(
                    (UserGachaMaster_o *)MasterData_object,
                    &v77,
                    SelfUserGame->fields.userId,
                    gachaId,
                    v45);
  if ( (Master_object & 1) != 0 )
  {
    if ( !v77 )
      goto LABEL_57;
    freeDrawAt = v77->fields.freeDrawAt;
    v48 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40);
      v48 = BalanceConfig_TypeInfo;
    }
    v49 = 3600 * (24 - v48->static_fields->DailyFreeGachaResetTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
    dateData = NetworkManager__getServerDateTime_39270492(freeDrawAt + v49, 0LL).fields._dateData;
    v75 = NetworkManager__getServerDateTime_39270492(v46 + v49, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v50);
    v79.fields._dateData = (uint64_t)&v75;
    v51 = System_DateTime__get_Date(v79, 0LL).fields._dateData;
    v80.fields._dateData = (uint64_t)&dateData;
    v85.fields._dateData = System_DateTime__get_Date(v80, 0LL).fields._dateData;
    v81.fields._dateData = v51;
    ticks = System_DateTime__op_Subtraction_63094440(v81, v85, 0LL).fields._ticks;
    if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v52);
    v82.fields._ticks = (int64_t)&ticks;
    Master_object = System_TimeSpan__get_Days(v82, 0LL);
    v53 = (int)Master_object < 1;
  }
  else
  {
    v53 = 0;
  }
  if ( !v44 )
LABEL_57:
    sub_1BCAA3C(Master_object, v40);
  FriendPointSummonMultipleFreeCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
                                                                                         (EventCampaignMaster_o *)v44,
                                                                                         gachaId,
                                                                                         0LL);
  if ( FriendPointSummonMultipleFreeCampaign && FriendPointSummonMultipleFreeCampaign->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v71,
      FriendPointSummonMultipleFreeCampaign,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    for ( i = v71; ; *maxNum += LODWORD(i.fields._current[3].klass) )
    {
      v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v55 )
        break;
      if ( !i.fields._current )
        sub_1BCAA3C(v55, v56);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v58);
    v73 = NetworkManager__getServerDateTime(0LL).fields._dateData;
    v60 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v59);
      v60 = BalanceConfig_TypeInfo;
    }
    DailyFreeGachaResetTime = v60->static_fields->DailyFreeGachaResetTime;
    TodayStartTime = NetworkManager__getTodayStartTime(0LL);
    if ( (_DWORD)DailyFreeGachaResetTime )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v62);
      v83.fields._dateData = (uint64_t)&v73;
      if ( (System_DateTime__get_Hour(v83, 0LL) & 0x80000000) == 0 )
      {
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v64);
        v84.fields._dateData = (uint64_t)&v73;
        if ( (int)DailyFreeGachaResetTime > System_DateTime__get_Hour(v84, 0LL) )
        {
          v66 = UserGachaMaster_TypeInfo;
          if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v65);
            v66 = UserGachaMaster_TypeInfo;
          }
          TodayStartTime -= v66->static_fields->ONEDAY_SECOND;
        }
      }
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_object )
    {
      Master_object = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Master_object,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFriendPointGachaFreeDrawCampaignLogMaster___);
      v68 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)Master_object;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v40);
      if ( v68 )
      {
        v53 += UserFriendPointGachaFreeDrawCampaignLogMaster__GetDrawLogNum(
                 v68,
                 TodayStartTime + 3600 * DailyFreeGachaResetTime,
                 UserGachaMaster_TypeInfo->static_fields->ONEDAY_SECOND
               + TodayStartTime
               + 3600 * DailyFreeGachaResetTime,
                 v67);
        v57 = 1;
        goto LABEL_55;
      }
    }
    goto LABEL_57;
  }
  v57 = 0;
LABEL_55:
  v69 = *maxNum - v53;
  *remainNum = v69;
  return v57 & (v69 > 0);
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall UserGachaMaster__GetEntity(
        UserGachaMaster_o *this,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16F2A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&gachaId);
    byte_4B16F2A = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, *(const MethodInfo **)&gachaId);
  return (UserGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__GetEntity__);
}


bool __fastcall UserGachaMaster__TryGetEntity(
        UserGachaMaster_o *this,
        UserGachaEntity_o **entity,
        int64_t userId,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16F2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__, entity, userId);
    byte_4B16F2B = 1;
  }
  PK = (Il2CppObject *)UserGachaEntity__CreatePK(userId, gachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserGachaMaster__UserGachaEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaMaster__checkIsDrawGroupSummon(
        UserGachaMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  bool v13; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16F2D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&gachaId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&UserGachaEntity_TypeInfo, v7, v8);
    byte_4B16F2D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(UserGachaEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (UserGachaEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserGachaEntity_TypeInfo
        || LODWORD(Item[1].monitor) != gachaId
        || SHIDWORD(Item[1].monitor) <= 0 )
      {
        v13 = ++v12 < v11;
        if ( v11 != v12 )
          continue;
      }
      return v13;
    }
LABEL_16:
    sub_1BCAA3C(list, *(_QWORD *)&gachaId);
  }
  return 0;
}