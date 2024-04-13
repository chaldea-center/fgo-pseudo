void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E70BA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    213,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
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

  if ( (byte_42E70B8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&termId);
    byte_42E70B8 = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
}


int32_t __fastcall UserEventRaceMaster__GetTotalMostProgressedGroupId(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t baseEventId,
        const MethodInfo *method)
{
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int64_t Instance; // x0
  __int64 v35; // x1
  System_Collections_Generic_Dictionary_int__long__o *v36; // x23
  int32_t v37; // w27
  int64_t v38; // x19
  int32_t v39; // w26
  int64_t v40; // x28
  __int64 v41; // x10
  int32_t v42; // w2
  __int64 v43; // x9
  __int64 v44; // x9
  struct System_Int32_array *groupIds; // x21
  unsigned __int64 v46; // x24
  signed __int64 v47; // x25
  int32_t *v48; // x22
  int64_t v49; // x8
  __int64 v50; // x9
  int64_t v51; // x2
  __int64 v53; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t Count; // [xsp+1Ch] [xbp-74h]
  int64_t v58; // [xsp+20h] [xbp-70h]
  int64_t value; // [xsp+30h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42E70BB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      baseEventId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__long__Remove__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&UserEventRaceEntity_TypeInfo, v31, v32, v33);
    byte_42E70BB = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v36 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v36,
    (const MethodInfo_2F2D878 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v58 = Instance;
  if ( !this->fields.list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v37 = 0;
    v38 = 0LL;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v39,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_46;
      v40 = Instance;
      v41 = *(&UserEventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v41
        || *(UserEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v41 - 8) != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_46;
      }
      if ( *(_QWORD *)(Instance + 16) == v58 )
      {
        v42 = *(_DWORD *)(Instance + 24);
        if ( v42 == eventId || v42 == baseEventId )
        {
          Instance = (int64_t)MasterData_WarQuestSelectionMaster;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_46;
          Instance = EventRaceMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       v42,
                       *(_DWORD *)(v40 + 28),
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_46;
            v43 = *(_QWORD *)(v40 + 32);
            if ( !v43 )
              goto LABEL_46;
            v44 = *(_QWORD *)(v43 + 24);
            if ( (int)v44 >= 1 )
              break;
          }
        }
      }
LABEL_42:
      if ( ++v39 >= Count )
        return v37;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v46 = 0LL;
      v47 = (int)v44;
      v48 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v46 >= groupIds->max_length )
        {
LABEL_47:
          v53 = sub_B5D6C8(Instance);
          sub_B5D668(v53, 0LL);
        }
        if ( !v36 )
          break;
        Instance = System_Collections_Generic_Dictionary_int__long___TryGetValue(
                     v36,
                     v48[v46],
                     &value,
                     (const MethodInfo_2F300E8 *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( (Instance & 1) != 0 )
        {
          if ( v46 >= groupIds->max_length )
            goto LABEL_47;
          Instance = System_Collections_Generic_Dictionary_int__long___Remove(
                       v36,
                       v48[v46],
                       (const MethodInfo_2F2FDA0 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v49 = value;
        }
        else
        {
          v49 = 0LL;
          value = 0LL;
        }
        v50 = *(_QWORD *)(v40 + 32);
        if ( !v50 )
          break;
        if ( v46 >= *(unsigned int *)(v50 + 24) )
          goto LABEL_47;
        v51 = *(_QWORD *)(v50 + 8 * v46 + 32) + v49;
        value = v51;
        if ( v46 >= groupIds->max_length )
          goto LABEL_47;
        System_Collections_Generic_Dictionary_int__long___Add(
          v36,
          v48[v46],
          v51,
          (const MethodInfo_2F2E42C *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v38 )
        {
          if ( v46 >= groupIds->max_length )
            goto LABEL_47;
          if ( v48[v46] < v37 )
            v37 = v48[v46];
        }
        else if ( value > v38 )
        {
          if ( v46 >= groupIds->max_length )
            goto LABEL_47;
          v37 = v48[v46];
          v38 = value;
        }
        if ( (__int64)++v46 >= v47 )
          goto LABEL_42;
      }
    }
LABEL_46:
    sub_B5D69C(Instance, v35);
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
    sub_B5D69C(0LL, v5);
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
      v12 = sub_B5D6C8(result);
      sub_B5D668(v12, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int64_t UserId; // x0
  const MethodInfo *v17; // x5
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E70BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, eventId, term, method);
    sub_B5D5C4(&long___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E70BC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)UserEventRaceMaster__TryGetEntity(this, &entity, UserId, eventId, term, v17);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.points;
LABEL_13:
    sub_B5D69C(Instance, v19);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_13;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_B5D5DC(long___TypeInfo, EventJoinGroupNum);
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

  if ( (byte_42E70B9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42E70B9 = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}