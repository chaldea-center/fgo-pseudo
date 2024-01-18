void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186F65 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__, method);
    byte_4186F65 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    212,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
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

  if ( (byte_4186F63 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__, userId);
    byte_4186F63 = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
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
  System_Collections_Generic_Dictionary_int__long__o *v16; // x23
  int32_t v17; // w27
  int64_t v18; // x19
  int32_t v19; // w26
  int64_t v20; // x28
  __int64 v21; // x10
  int32_t v22; // w2
  __int64 v23; // x9
  __int64 v24; // x9
  struct System_Int32_array *groupIds; // x21
  unsigned __int64 v26; // x24
  signed __int64 v27; // x25
  int32_t *v28; // x22
  int64_t v29; // x8
  __int64 v30; // x9
  int64_t v31; // x2
  __int64 v33; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t Count; // [xsp+1Ch] [xbp-74h]
  int64_t v38; // [xsp+20h] [xbp-70h]
  int64_t value; // [xsp+30h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4186F66 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__long__Remove__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&UserEventRaceEntity_TypeInfo, v13);
    byte_4186F66 = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v16 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v16,
    (const MethodInfo_2E5FF00 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v38 = Instance;
  if ( !this->fields.list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = 0;
    v18 = 0LL;
    v19 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v19,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_46;
      v20 = Instance;
      v21 = *(&UserEventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v21
        || *(UserEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v21 - 8) != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_46;
      }
      if ( *(_QWORD *)(Instance + 16) == v38 )
      {
        v22 = *(_DWORD *)(Instance + 24);
        if ( v22 == eventId || v22 == baseEventId )
        {
          Instance = (int64_t)MasterData_WarQuestSelectionMaster;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_46;
          Instance = EventRaceMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       v22,
                       *(_DWORD *)(v20 + 28),
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_46;
            v23 = *(_QWORD *)(v20 + 32);
            if ( !v23 )
              goto LABEL_46;
            v24 = *(_QWORD *)(v23 + 24);
            if ( (int)v24 >= 1 )
              break;
          }
        }
      }
LABEL_42:
      if ( ++v19 >= Count )
        return v17;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v26 = 0LL;
      v27 = (int)v24;
      v28 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v26 >= groupIds->max_length )
        {
LABEL_47:
          v33 = sub_B2C460(Instance);
          sub_B2C400(v33, 0LL);
        }
        if ( !v16 )
          break;
        Instance = System_Collections_Generic_Dictionary_int__long___TryGetValue(
                     v16,
                     v28[v26],
                     &value,
                     (const MethodInfo_2E62770 *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( (Instance & 1) != 0 )
        {
          if ( v26 >= groupIds->max_length )
            goto LABEL_47;
          Instance = System_Collections_Generic_Dictionary_int__long___Remove(
                       v16,
                       v28[v26],
                       (const MethodInfo_2E62428 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v29 = value;
        }
        else
        {
          v29 = 0LL;
          value = 0LL;
        }
        v30 = *(_QWORD *)(v20 + 32);
        if ( !v30 )
          break;
        if ( v26 >= *(unsigned int *)(v30 + 24) )
          goto LABEL_47;
        v31 = *(_QWORD *)(v30 + 8 * v26 + 32) + v29;
        value = v31;
        if ( v26 >= groupIds->max_length )
          goto LABEL_47;
        System_Collections_Generic_Dictionary_int__long___Add(
          v16,
          v28[v26],
          v31,
          (const MethodInfo_2E60AB4 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v18 )
        {
          if ( v26 >= groupIds->max_length )
            goto LABEL_47;
          if ( v28[v26] < v17 )
            v17 = v28[v26];
        }
        else if ( value > v18 )
        {
          if ( v26 >= groupIds->max_length )
            goto LABEL_47;
          v17 = v28[v26];
          v18 = value;
        }
        if ( (__int64)++v26 >= v27 )
          goto LABEL_42;
      }
    }
LABEL_46:
    sub_B2C434(Instance, v15);
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
    sub_B2C434(0LL, v5);
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
      v12 = sub_B2C460(result);
      sub_B2C400(v12, 0LL);
    }
    v11 = m_Items[v9++];
    result += v11;
  }
  while ( (__int64)v9 < (int)max_length );
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
  __int64 v13; // x1
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186F67 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&long___TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4186F67 = 1;
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
    sub_B2C434(Instance, v13);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_13;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_B2C374(long___TypeInfo, EventJoinGroupNum);
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

  if ( (byte_4186F64 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__, entity);
    byte_4186F64 = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}