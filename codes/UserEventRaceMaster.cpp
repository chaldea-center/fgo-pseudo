void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BDFC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
    byte_4A5BDFC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    214,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
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

  if ( (byte_4A5BDFA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
    byte_4A5BDFA = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
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
  __int64 methodPtr_low; // x10
  int32_t v12; // w2
  __int64 v13; // x9
  __int64 v14; // x9
  struct System_Int32_array *groupIds; // x22
  unsigned __int64 v16; // x21
  __int64 v17; // x24
  int32_t *v18; // x25
  int64_t v19; // x8
  __int64 v20; // x9
  int64_t v21; // x2
  EventRaceMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  int32_t Count; // [xsp+1Ch] [xbp-84h]
  int64_t v27; // [xsp+20h] [xbp-80h]
  int64_t value; // [xsp+30h] [xbp-70h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5BDFD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__long__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEventRaceEntity_TypeInfo);
    byte_4A5BDFD = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = (EventRaceMaster_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v6,
    (const MethodInfo_316A0C4 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v27 = Instance;
  if ( !this->fields.list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_45;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_45;
      v10 = Instance;
      methodPtr_low = LOBYTE(UserEventRaceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_45;
      }
      if ( *(_QWORD *)(Instance + 16) == v27 )
      {
        v12 = *(_DWORD *)(Instance + 24);
        if ( v12 == eventId || v12 == baseEventId )
        {
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_45;
          Instance = EventRaceMaster__TryGetEntity(MasterData_object, &entity, v12, *(_DWORD *)(v10 + 28), 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_45;
            v13 = *(_QWORD *)(v10 + 32);
            if ( !v13 )
              goto LABEL_45;
            v14 = *(_QWORD *)(v13 + 24);
            if ( (int)v14 >= 1 )
              break;
          }
        }
      }
LABEL_41:
      if ( ++v9 == Count )
        return v7;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v16 = 0LL;
      v17 = (unsigned int)v14;
      v18 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v16 >= groupIds->max_length )
LABEL_46:
          sub_1B88814(Instance, v5);
        if ( !v6 )
          break;
        Instance = System_Collections_Generic_Dictionary_int__long___TryGetValue(
                     v6,
                     v18[v16],
                     &value,
                     (const MethodInfo_316C1BC *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( (Instance & 1) != 0 )
        {
          if ( v16 >= groupIds->max_length )
            goto LABEL_46;
          Instance = System_Collections_Generic_Dictionary_int__long___Remove(
                       v6,
                       v18[v16],
                       (const MethodInfo_316BEBC *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
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
          goto LABEL_46;
        v21 = *(_QWORD *)(v20 + 8 * v16 + 32) + v19;
        value = v21;
        if ( v16 >= groupIds->max_length )
          goto LABEL_46;
        System_Collections_Generic_Dictionary_int__long___Add(
          v6,
          v18[v16],
          v21,
          (const MethodInfo_316AA98 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v8 )
        {
          if ( v16 >= groupIds->max_length )
            goto LABEL_46;
          if ( v18[v16] < v7 )
            v7 = v18[v16];
        }
        else if ( value > v8 )
        {
          if ( v16 >= groupIds->max_length )
            goto LABEL_46;
          v7 = v18[v16];
          v8 = value;
        }
        if ( v17 == ++v16 )
          goto LABEL_41;
      }
    }
LABEL_45:
    sub_1B8880C(Instance, v5);
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
    sub_1B8880C(0LL, v5);
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
      sub_1B88814(result, v5);
    v11 = *m_Items++;
    --v9;
    --max_length;
    result += v11;
  }
  while ( v9 );
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5BDFE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BDFE = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (Il2CppObject *)UserEventRaceMaster__TryGetEntity(this, &entity, UserId, eventId, term, v8);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.points;
LABEL_12:
    sub_1B8880C(Instance, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_12;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_1B88658(long___TypeInfo, EventJoinGroupNum);
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

  if ( (byte_4A5BDFB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
    byte_4A5BDFB = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}