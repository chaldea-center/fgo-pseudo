void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42136A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__, method);
    byte_42136A6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    212,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRaceEntity_o *__fastcall UserEventRaceMaster__GetEntity(
        UserEventRaceMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42136A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__, userId);
    byte_42136A4 = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventRaceMaster__GetTotalMostProgressedGroupId(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t baseEventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__long__o *v17; // x23
  int32_t v18; // w27
  int64_t v19; // x19
  int32_t v20; // w26
  int64_t v21; // x28
  __int64 v22; // x10
  int32_t v23; // w2
  __int64 v24; // x9
  __int64 v25; // x9
  struct System_Int32_array *groupIds; // x21
  unsigned __int64 v27; // x24
  signed __int64 v28; // x25
  int32_t *v29; // x22
  int64_t v30; // x8
  __int64 v31; // x9
  int64_t v32; // x2
  __int64 v34; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t Count; // [xsp+1Ch] [xbp-74h]
  int64_t v39; // [xsp+20h] [xbp-70h]
  int64_t value; // [xsp+30h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42136A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__long__Remove__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&UserEventRaceEntity_TypeInfo, v13);
    byte_42136A7 = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v17 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                v15,
                                                                v16);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v17,
    (const MethodInfo_2E8BBDC *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v39 = Instance;
  if ( !this->fields.list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = 0;
    v19 = 0LL;
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v20,
                            (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_46;
      v21 = Instance;
      v22 = *(&UserEventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v22
        || *(UserEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v22 - 8) != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_46;
      }
      if ( *(_QWORD *)(Instance + 16) == v39 )
      {
        v23 = *(_DWORD *)(Instance + 24);
        if ( v23 == eventId || v23 == baseEventId )
        {
          Instance = (int64_t)MasterData_WarQuestSelectionMaster;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_46;
          Instance = EventRaceMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       v23,
                       *(_DWORD *)(v21 + 28),
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_46;
            v24 = *(_QWORD *)(v21 + 32);
            if ( !v24 )
              goto LABEL_46;
            v25 = *(_QWORD *)(v24 + 24);
            if ( (int)v25 >= 1 )
              break;
          }
        }
      }
LABEL_42:
      if ( ++v20 >= Count )
        return v18;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v27 = 0LL;
      v28 = (int)v25;
      v29 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v27 >= groupIds->max_length )
        {
LABEL_47:
          v34 = sub_B0D9A8(Instance);
          sub_B0D948(v34, 0LL);
        }
        if ( !v17 )
          break;
        Instance = System_Collections_Generic_Dictionary_int__long___TryGetValue(
                     v17,
                     v29[v27],
                     &value,
                     (const MethodInfo_2E8E44C *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( (Instance & 1) != 0 )
        {
          if ( v27 >= groupIds->max_length )
            goto LABEL_47;
          Instance = System_Collections_Generic_Dictionary_int__long___Remove(
                       v17,
                       v29[v27],
                       (const MethodInfo_2E8E104 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v30 = value;
        }
        else
        {
          v30 = 0LL;
          value = 0LL;
        }
        v31 = *(_QWORD *)(v21 + 32);
        if ( !v31 )
          break;
        if ( v27 >= *(unsigned int *)(v31 + 24) )
          goto LABEL_47;
        v32 = *(_QWORD *)(v31 + 8 * v27 + 32) + v30;
        value = v32;
        if ( v27 >= groupIds->max_length )
          goto LABEL_47;
        System_Collections_Generic_Dictionary_int__long___Add(
          v17,
          v29[v27],
          v32,
          (const MethodInfo_2E8C790 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v19 )
        {
          if ( v27 >= groupIds->max_length )
            goto LABEL_47;
          if ( v29[v27] < v18 )
            v18 = v29[v27];
        }
        else if ( value > v19 )
        {
          if ( v27 >= groupIds->max_length )
            goto LABEL_47;
          v18 = v29[v27];
          v19 = value;
        }
        if ( (__int64)++v27 >= v28 )
          goto LABEL_42;
      }
    }
LABEL_46:
    sub_B0D97C(Instance);
  }
  return 0;
}


int64_t __fastcall UserEventRaceMaster__GetTotalRacePointInTerm(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  System_Int64_array *UserRacePoints; // x0
  unsigned __int64 max_length; // x9
  System_Int64_array *v6; // x8
  int64_t result; // x0
  unsigned __int64 v8; // x10
  int64_t *m_Items; // x8
  int64_t v10; // x12
  __int64 v11; // x0

  UserRacePoints = UserEventRaceMaster__GetUserRacePoints(this, eventId, term, method);
  if ( !UserRacePoints )
    sub_B0D97C(0LL);
  max_length = UserRacePoints->max_length;
  v6 = UserRacePoints;
  if ( (__int64)(max_length << 32) < 1 )
    return 0LL;
  result = 0LL;
  v8 = 0LL;
  m_Items = v6->m_Items;
  do
  {
    if ( v8 >= max_length )
    {
      v11 = sub_B0D9A8(result);
      sub_B0D948(v11, 0LL);
    }
    v10 = m_Items[v8++];
    result += v10;
  }
  while ( (__int64)v8 < (int)max_length );
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventRaceMaster__GetUserRacePoints(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t UserId; // x0
  const MethodInfo *v11; // x5
  DataManager_o *Instance; // x0
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42136A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&long___TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42136A8 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)UserEventRaceMaster__TryGetEntity(this, &entity, UserId, eventId, term, v11);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.points;
LABEL_13:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_13;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_B0D8BC(long___TypeInfo, EventJoinGroupNum);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventRaceMaster__TryGetEntity(
        UserEventRaceMaster_o *this,
        UserEventRaceEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42136A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__, entity);
    byte_42136A5 = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}