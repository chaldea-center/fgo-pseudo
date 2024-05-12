void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389CA9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
    byte_4389CA9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    213,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
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

  if ( (byte_4389CA7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
    byte_4389CA7 = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
}


int32_t __fastcall UserEventRaceMaster__GetTotalMostProgressedGroupId(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t baseEventId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__long__o *v6; // x23
  int32_t v7; // w27
  int64_t v8; // x19
  int32_t v9; // w26
  int64_t v10; // x28
  __int64 v11; // x10
  int32_t v12; // w2
  __int64 v13; // x9
  __int64 v14; // x9
  struct System_Int32_array *groupIds; // x21
  unsigned __int64 v16; // x24
  signed __int64 v17; // x25
  int32_t *v18; // x22
  int64_t v19; // x8
  __int64 v20; // x9
  int64_t v21; // x2
  __int64 v23; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t Count; // [xsp+1Ch] [xbp-74h]
  int64_t v28; // [xsp+20h] [xbp-70h]
  int64_t value; // [xsp+30h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4389CAA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__long__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserEventRaceEntity_TypeInfo);
    byte_4389CAA = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B77694(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v6,
    (const MethodInfo_2FEF92C *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v28 = Instance;
  if ( !this->fields.list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_46;
      v10 = Instance;
      v11 = *(&UserEventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v11
        || *(UserEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_46;
      }
      if ( *(_QWORD *)(Instance + 16) == v28 )
      {
        v12 = *(_DWORD *)(Instance + 24);
        if ( v12 == eventId || v12 == baseEventId )
        {
          Instance = (int64_t)MasterData_WarQuestSelectionMaster;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_46;
          Instance = EventRaceMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       v12,
                       *(_DWORD *)(v10 + 28),
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_46;
            v13 = *(_QWORD *)(v10 + 32);
            if ( !v13 )
              goto LABEL_46;
            v14 = *(_QWORD *)(v13 + 24);
            if ( (int)v14 >= 1 )
              break;
          }
        }
      }
LABEL_42:
      if ( ++v9 >= Count )
        return v7;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v16 = 0LL;
      v17 = (int)v14;
      v18 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v16 >= groupIds->max_length )
        {
LABEL_47:
          v23 = sub_B776C8(Instance);
          sub_B77668(v23, 0LL);
        }
        if ( !v6 )
          break;
        Instance = System_Collections_Generic_Dictionary_int__long___TryGetValue(
                     v6,
                     v18[v16],
                     &value,
                     (const MethodInfo_2FF219C *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( (Instance & 1) != 0 )
        {
          if ( v16 >= groupIds->max_length )
            goto LABEL_47;
          Instance = System_Collections_Generic_Dictionary_int__long___Remove(
                       v6,
                       v18[v16],
                       (const MethodInfo_2FF1E54 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v19 = value;
        }
        else
        {
          v19 = 0LL;
          value = 0LL;
        }
        v20 = *(_QWORD *)(v10 + 32);
        if ( !v20 )
          break;
        if ( v16 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_47;
        v21 = *(_QWORD *)(v20 + 8 * v16 + 32) + v19;
        value = v21;
        if ( v16 >= groupIds->max_length )
          goto LABEL_47;
        System_Collections_Generic_Dictionary_int__long___Add(
          v6,
          v18[v16],
          v21,
          (const MethodInfo_2FF04E0 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v8 )
        {
          if ( v16 >= groupIds->max_length )
            goto LABEL_47;
          if ( v18[v16] < v7 )
            v7 = v18[v16];
        }
        else if ( value > v8 )
        {
          if ( v16 >= groupIds->max_length )
            goto LABEL_47;
          v7 = v18[v16];
          v8 = value;
        }
        if ( (__int64)++v16 >= v17 )
          goto LABEL_42;
      }
    }
LABEL_46:
    sub_B7769C(Instance, v5);
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
  __int64 v5; // x1
  unsigned __int64 max_length; // x9
  System_Int64_array *v7; // x8
  int64_t result; // x0
  unsigned __int64 v9; // x10
  int64_t *m_Items; // x8
  int64_t v11; // x12
  __int64 v12; // x0

  UserRacePoints = UserEventRaceMaster__GetUserRacePoints(this, eventId, term, method);
  if ( !UserRacePoints )
    sub_B7769C(0LL, v5);
  max_length = UserRacePoints->max_length;
  v7 = UserRacePoints;
  if ( (__int64)(max_length << 32) < 1 )
    return 0LL;
  result = 0LL;
  v9 = 0LL;
  m_Items = v7->m_Items;
  do
  {
    if ( v9 >= max_length )
    {
      v12 = sub_B776C8(result);
      sub_B77668(v12, 0LL);
    }
    v11 = m_Items[v9++];
    result += v11;
  }
  while ( (__int64)v9 < (int)max_length );
  return result;
}


System_Int64_array *__fastcall UserEventRaceMaster__GetUserRacePoints(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  const MethodInfo *v8; // x5
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4389CAB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389CAB = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)UserEventRaceMaster__TryGetEntity(this, &entity, UserId, eventId, term, v8);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.points;
LABEL_13:
    sub_B7769C(Instance, v10);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_13;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_B775DC(long___TypeInfo, EventJoinGroupNum);
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

  if ( (byte_4389CA8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
    byte_4389CA8 = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}