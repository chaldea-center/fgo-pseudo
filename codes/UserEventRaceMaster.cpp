void UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43DF3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
    byte_4C43DF3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    220,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRaceEntity_o *UserEventRaceMaster__GetEntity(
        UserEventRaceMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43DF1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
    byte_4C43DF1 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33A5B58 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
}


int32_t UserEventRaceMaster__GetTotalMostProgressedGroupId(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t baseEventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_Collections_Generic_Dictionary_int__long__o *v5; // x23
  int32_t v6; // w26
  int64_t v7; // x29
  int32_t v8; // w25
  _DWORD *v9; // x27
  int32_t v10; // w2
  __int64 v11; // x9
  __int64 v12; // x9
  struct System_Int32_array *groupIds; // x20
  unsigned __int64 v14; // x21
  __int64 v15; // x28
  int32_t *m_Items; // x24
  int64_t v17; // x8
  __int64 v18; // x9
  int64_t v19; // x2
  EventRaceMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  int32_t Count; // [xsp+1Ch] [xbp-84h]
  __int64 v25; // [xsp+20h] [xbp-80h]
  int64_t value; // [xsp+30h] [xbp-70h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C43DF4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__long__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43DF4 = 1;
  }
  value = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = (EventRaceMaster_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v5 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v5,
    (const MethodInfo_33F6CF8 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_48;
  v25 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Count__);
  if ( Count >= 1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_48;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v8,
                   (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Item__);
      if ( !Instance )
        goto LABEL_48;
      v9 = Instance;
      if ( *((_QWORD *)Instance + 2) == v25 )
      {
        v10 = *((_DWORD *)Instance + 6);
        if ( v10 == eventId || v10 == baseEventId )
        {
          Instance = MasterData_object;
          if ( !MasterData_object )
            goto LABEL_48;
          Instance = (void *)EventRaceMaster__TryGetEntity(MasterData_object, &entity, v10, v9[7], 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_48;
            v11 = *((_QWORD *)v9 + 4);
            if ( !v11 )
              goto LABEL_48;
            v12 = *(_QWORD *)(v11 + 24);
            if ( (int)v12 >= 1 )
              break;
          }
        }
      }
LABEL_43:
      if ( ++v8 == Count )
        return v6;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v14 = 0;
      v15 = (unsigned int)v12;
      m_Items = groupIds->m_Items;
      while ( 1 )
      {
        if ( v14 >= LODWORD(groupIds->max_length) )
LABEL_47:
          sub_1C372BC(Instance);
        if ( !v5 )
          break;
        Instance = (void *)System_Collections_Generic_Dictionary_int__long___TryGetValue(
                             v5,
                             m_Items[v14],
                             &value,
                             (const MethodInfo_33F8DF0 *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v14 >= LODWORD(groupIds->max_length) )
            goto LABEL_47;
          Instance = (void *)System_Collections_Generic_Dictionary_int__long___Remove(
                               v5,
                               m_Items[v14],
                               (const MethodInfo_33F8AF0 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v17 = value;
        }
        else
        {
          v17 = 0;
          value = 0;
        }
        v18 = *((_QWORD *)v9 + 4);
        if ( !v18 )
          break;
        if ( v14 >= *(unsigned int *)(v18 + 24) )
          goto LABEL_47;
        v19 = *(_QWORD *)(v18 + 8 * v14 + 32) + v17;
        value = v19;
        if ( v14 >= LODWORD(groupIds->max_length) )
          goto LABEL_47;
        System_Collections_Generic_Dictionary_int__long___Add(
          v5,
          m_Items[v14],
          v19,
          (const MethodInfo_33F76CC *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v7 )
        {
          if ( v14 >= LODWORD(groupIds->max_length) )
            goto LABEL_47;
          if ( m_Items[v14] < v6 )
            v6 = m_Items[v14];
        }
        else if ( value > v7 )
        {
          if ( v14 >= LODWORD(groupIds->max_length) )
            goto LABEL_47;
          v6 = m_Items[v14];
          v7 = value;
        }
        if ( v15 == ++v14 )
          goto LABEL_43;
      }
    }
LABEL_48:
    sub_1C372B4(Instance);
  }
  return 0;
}


int64_t UserEventRaceMaster__GetTotalRacePointInTerm(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  System_Int64_array *UserRacePoints; // x0
  __int64 max_length_low; // x9
  System_Int64_array *v6; // x8
  int64_t result; // x0
  __int64 v8; // x10
  int64_t *m_Items; // x8
  __int64 v10; // t1

  UserRacePoints = UserEventRaceMaster__GetUserRacePoints(this, eventId, term, method);
  if ( !UserRacePoints )
    sub_1C372B4(0);
  max_length_low = LODWORD(UserRacePoints->max_length);
  v6 = UserRacePoints;
  if ( max_length_low << 32 < 1 )
    return 0;
  result = 0;
  v8 = (int)max_length_low;
  m_Items = v6->m_Items;
  do
  {
    if ( !max_length_low )
      sub_1C372BC(result);
    v10 = *m_Items++;
    --v8;
    --max_length_low;
    result += v10;
  }
  while ( v8 );
  return result;
}


System_Int64_array *UserEventRaceMaster__GetUserRacePoints(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  NetworkManager_c *v8; // x0
  Il2CppObject *Instance; // x0
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C43DF5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43DF5 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  Instance = (Il2CppObject *)UserEventRaceMaster__TryGetEntity(
                               this,
                               &entity,
                               v8->static_fields->userIdNumber,
                               eventId,
                               term,
                               v4);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.points;
LABEL_16:
    sub_1C372B4(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0);
  return (System_Int64_array *)sub_1C37100(long___TypeInfo, EventJoinGroupNum);
}


// local variable allocation has failed, the output may be wrong!
bool UserEventRaceMaster__TryGetEntity(
        UserEventRaceMaster_o *this,
        UserEventRaceEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43DF2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
    byte_4C43DF2 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}