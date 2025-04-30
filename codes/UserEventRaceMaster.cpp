void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F248 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__, method);
    byte_4A4F248 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    220,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRaceEntity_o *__fastcall UserEventRaceMaster__GetEntity(
        UserEventRaceMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4F246 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__, userId);
    byte_4A4F246 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3218D38 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
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
  void *Instance; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_int__long__o *v15; // x23
  int32_t v16; // w26
  int64_t v17; // x29
  int32_t v18; // w25
  _DWORD *v19; // x27
  int32_t v20; // w2
  __int64 v21; // x9
  __int64 v22; // x9
  struct System_Int32_array *groupIds; // x20
  unsigned __int64 v24; // x21
  __int64 v25; // x28
  int32_t *v26; // x24
  int64_t v27; // x8
  __int64 v28; // x9
  int64_t v29; // x2
  EventRaceMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  int32_t Count; // [xsp+1Ch] [xbp-84h]
  __int64 v35; // [xsp+20h] [xbp-80h]
  int64_t value; // [xsp+30h] [xbp-70h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A4F249 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Item__, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__long__Remove__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v10);
    sub_1B863B8(&NetworkManager_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A4F249 = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = (EventRaceMaster_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v15 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v15,
    (const MethodInfo_3269ED8 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    byte_4A48C25 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_48;
  v35 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Count__);
  if ( Count >= 1 )
  {
    v16 = 0;
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_48;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v18,
                   (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserEventRaceEntity__get_Item__);
      if ( !Instance )
        goto LABEL_48;
      v19 = Instance;
      if ( *((_QWORD *)Instance + 2) == v35 )
      {
        v20 = *((_DWORD *)Instance + 6);
        if ( v20 == eventId || v20 == baseEventId )
        {
          Instance = MasterData_object;
          if ( !MasterData_object )
            goto LABEL_48;
          Instance = (void *)EventRaceMaster__TryGetEntity(MasterData_object, &entity, v20, v19[7], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_48;
            v21 = *((_QWORD *)v19 + 4);
            if ( !v21 )
              goto LABEL_48;
            v22 = *(_QWORD *)(v21 + 24);
            if ( (int)v22 >= 1 )
              break;
          }
        }
      }
LABEL_43:
      if ( ++v18 == Count )
        return v16;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v24 = 0LL;
      v25 = (unsigned int)v22;
      v26 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v24 >= groupIds->max_length )
LABEL_47:
          sub_1B8661C(Instance, v14);
        if ( !v15 )
          break;
        Instance = (void *)System_Collections_Generic_Dictionary_int__long___TryGetValue(
                             v15,
                             v26[v24],
                             &value,
                             (const MethodInfo_326BFD0 *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v24 >= groupIds->max_length )
            goto LABEL_47;
          Instance = (void *)System_Collections_Generic_Dictionary_int__long___Remove(
                               v15,
                               v26[v24],
                               (const MethodInfo_326BCD0 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v27 = value;
        }
        else
        {
          v27 = 0LL;
          value = 0LL;
        }
        v28 = *((_QWORD *)v19 + 4);
        if ( !v28 )
          break;
        if ( v24 >= *(unsigned int *)(v28 + 24) )
          goto LABEL_47;
        v29 = *(_QWORD *)(v28 + 8 * v24 + 32) + v27;
        value = v29;
        if ( v24 >= groupIds->max_length )
          goto LABEL_47;
        System_Collections_Generic_Dictionary_int__long___Add(
          v15,
          v26[v24],
          v29,
          (const MethodInfo_326A8AC *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v17 )
        {
          if ( v24 >= groupIds->max_length )
            goto LABEL_47;
          if ( v26[v24] < v16 )
            v16 = v26[v24];
        }
        else if ( value > v17 )
        {
          if ( v24 >= groupIds->max_length )
            goto LABEL_47;
          v16 = v26[v24];
          v17 = value;
        }
        if ( v25 == ++v24 )
          goto LABEL_43;
      }
    }
LABEL_48:
    sub_1B86614(Instance, v14);
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
  __int64 max_length; // x9
  System_Int64_array *v7; // x8
  int64_t result; // x0
  __int64 v9; // x10
  int64_t *m_Items; // x8
  __int64 v11; // t1

  UserRacePoints = UserEventRaceMaster__GetUserRacePoints(this, eventId, term, method);
  if ( !UserRacePoints )
    sub_1B86614(0LL, v5);
  max_length = UserRacePoints->max_length;
  v7 = UserRacePoints;
  if ( max_length << 32 < 1 )
    return 0LL;
  result = 0LL;
  v9 = (int)max_length;
  m_Items = v7->m_Items;
  do
  {
    if ( !max_length )
      sub_1B8661C(result, v5);
    v11 = *m_Items++;
    --v9;
    --max_length;
    result += v11;
  }
  while ( v9 );
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventRaceMaster__GetUserRacePoints(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  NetworkManager_c *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4F24A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&long___TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A4F24A = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A48C25 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  Instance = (Il2CppObject *)UserEventRaceMaster__TryGetEntity(
                               this,
                               &entity,
                               v11->static_fields->userIdNumber,
                               eventId,
                               term,
                               v4);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.points;
LABEL_16:
    sub_1B86614(Instance, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_1B86460(long___TypeInfo, EventJoinGroupNum);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A4F247 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__, entity);
    byte_4A4F247 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}