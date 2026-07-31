void UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939545 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
    byte_5939545 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    222,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
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

  if ( (byte_5939543 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
    byte_5939543 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
}


int32_t UserEventRaceMaster__GetTotalMostProgressedGroupId(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t baseEventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__long__o *v6; // x23
  int32_t v7; // w25
  int64_t v8; // x29
  int32_t v9; // w26
  _DWORD *v10; // x27
  int32_t v11; // w2
  __int64 v12; // x9
  __int64 v13; // x9
  struct System_Int32_array *groupIds; // x20
  unsigned __int64 v15; // x21
  __int64 v16; // x28
  int32_t *m_Items; // x24
  int64_t v18; // x8
  __int64 v19; // x9
  unsigned __int64 max_length_low; // x10
  int64_t v21; // x2
  EventRaceMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  int32_t Count; // [xsp+1Ch] [xbp-84h]
  __int64 v27; // [xsp+20h] [xbp-80h]
  int64_t value; // [xsp+30h] [xbp-70h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5939546 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__long__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939546 = 1;
  }
  value = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = (EventRaceMaster_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__long__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v6,
    (const MethodInfo_3F65054 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_48;
  v27 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_48;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v9,
                   (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Item__);
      if ( !Instance )
        goto LABEL_48;
      v10 = Instance;
      if ( *((_QWORD *)Instance + 2) == v27 )
      {
        v11 = *((_DWORD *)Instance + 6);
        if ( v11 == eventId || v11 == baseEventId )
        {
          Instance = MasterData_object;
          if ( !MasterData_object )
            goto LABEL_48;
          Instance = (void *)EventRaceMaster__TryGetEntity(MasterData_object, &entity, v11, v10[7], 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_48;
            v12 = *((_QWORD *)v10 + 4);
            if ( !v12 )
              goto LABEL_48;
            v13 = *(_QWORD *)(v12 + 24);
            if ( (int)v13 >= 1 )
              break;
          }
        }
      }
LABEL_43:
      if ( ++v9 == Count )
        return v7;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v15 = 0;
      v16 = (unsigned int)v13;
      m_Items = groupIds->m_Items;
      while ( 1 )
      {
        if ( v15 >= LODWORD(groupIds->max_length) )
LABEL_47:
          sub_21FFED4(Instance);
        if ( !v6 )
          break;
        Instance = (void *)System_Collections_Generic_Dictionary_int__long___TryGetValue(
                             v6,
                             m_Items[v15],
                             &value,
                             (const MethodInfo_3F6746C *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v15 >= LODWORD(groupIds->max_length) )
            goto LABEL_47;
          Instance = (void *)System_Collections_Generic_Dictionary_int__long___Remove(
                               v6,
                               m_Items[v15],
                               (const MethodInfo_3F66E48 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v18 = value;
        }
        else
        {
          v18 = 0;
          value = 0;
        }
        v19 = *((_QWORD *)v10 + 4);
        if ( !v19 )
          break;
        if ( v15 >= *(unsigned int *)(v19 + 24) )
          goto LABEL_47;
        max_length_low = LODWORD(groupIds->max_length);
        v21 = *(_QWORD *)(v19 + 8 * v15 + 32) + v18;
        value = v21;
        if ( v15 >= max_length_low )
          goto LABEL_47;
        System_Collections_Generic_Dictionary_int__long___Add(
          v6,
          m_Items[v15],
          v21,
          (const MethodInfo_3F65A08 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v8 )
        {
          if ( v15 >= LODWORD(groupIds->max_length) )
            goto LABEL_47;
          if ( m_Items[v15] < v7 )
            v7 = m_Items[v15];
        }
        else if ( value > v8 )
        {
          if ( v15 >= LODWORD(groupIds->max_length) )
            goto LABEL_47;
          v7 = m_Items[v15];
          v8 = value;
        }
        if ( v16 == ++v15 )
          goto LABEL_43;
      }
    }
LABEL_48:
    sub_21FFECC(Instance, v5);
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
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // x10
  System_Int64_array *v7; // x8
  __int64 v8; // x9
  int64_t result; // x0
  int64_t *m_Items; // x8
  __int64 v11; // t1

  UserRacePoints = UserEventRaceMaster__GetUserRacePoints(this, eventId, term, method);
  if ( !UserRacePoints )
    sub_21FFECC(0, v5);
  max_length = UserRacePoints->max_length;
  v7 = UserRacePoints;
  if ( (int)max_length < 1 )
    return 0;
  v8 = (unsigned int)max_length & ~((int)max_length >> 31);
  result = 0;
  max_length = (unsigned int)max_length;
  m_Items = v7->m_Items;
  do
  {
    if ( !max_length )
      sub_21FFED4(result);
    v11 = *m_Items++;
    --v8;
    --max_length;
    result += v11;
  }
  while ( v8 );
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *UserEventRaceMaster__GetUserRacePoints(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  NetworkManager_c *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5939547 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939547 = 1;
  }
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
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
    sub_21FFECC(Instance, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0);
  return (System_Int64_array *)sub_21FFD10(long___TypeInfo, EventJoinGroupNum);
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

  if ( (byte_5939544 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
    byte_5939544 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}