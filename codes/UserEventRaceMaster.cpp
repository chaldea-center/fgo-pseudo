void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD083 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__, method);
    byte_49FD083 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    214,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
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

  if ( (byte_49FD081 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__, userId);
    byte_49FD081 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D41FC *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
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
  __int64 methodPtr_low; // x10
  int32_t v23; // w2
  __int64 v24; // x1
  __int64 v25; // x9
  __int64 v26; // x9
  struct System_Int32_array *groupIds; // x22
  unsigned __int64 v28; // x21
  __int64 v29; // x24
  int32_t *v30; // x25
  int64_t v31; // x8
  __int64 v32; // x9
  int64_t v33; // x2
  EventRaceMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  int32_t Count; // [xsp+1Ch] [xbp-84h]
  int64_t v39; // [xsp+20h] [xbp-80h]
  int64_t value; // [xsp+30h] [xbp-70h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49FD084 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__long__Remove__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&UserEventRaceEntity_TypeInfo, v13);
    byte_49FD084 = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = (EventRaceMaster_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v17 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                v15,
                                                                v16);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v17,
    (const MethodInfo_31200F0 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v39 = Instance;
  if ( !this->fields.list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = 0;
    v19 = 0LL;
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_45;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_45;
      v21 = Instance;
      methodPtr_low = LOBYTE(UserEventRaceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_45;
      }
      if ( *(_QWORD *)(Instance + 16) == v39 )
      {
        v23 = *(_DWORD *)(Instance + 24);
        if ( v23 == eventId || v23 == baseEventId )
        {
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_45;
          Instance = EventRaceMaster__TryGetEntity(MasterData_object, &entity, v23, *(_DWORD *)(v21 + 28), 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_45;
            v25 = *(_QWORD *)(v21 + 32);
            if ( !v25 )
              goto LABEL_45;
            v26 = *(_QWORD *)(v25 + 24);
            if ( (int)v26 >= 1 )
              break;
          }
        }
      }
LABEL_41:
      if ( ++v20 == Count )
        return v18;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v28 = 0LL;
      v29 = (unsigned int)v26;
      v30 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v28 >= groupIds->max_length )
LABEL_46:
          sub_1B6432C(Instance, v24);
        if ( !v17 )
          break;
        Instance = System_Collections_Generic_Dictionary_int__long___TryGetValue(
                     v17,
                     v30[v28],
                     &value,
                     (const MethodInfo_31221E8 *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( (Instance & 1) != 0 )
        {
          if ( v28 >= groupIds->max_length )
            goto LABEL_46;
          Instance = System_Collections_Generic_Dictionary_int__long___Remove(
                       v17,
                       v30[v28],
                       (const MethodInfo_3121EE8 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v31 = value;
        }
        else
        {
          v31 = 0LL;
          value = 0LL;
        }
        v32 = *(_QWORD *)(v21 + 32);
        if ( !v32 )
          break;
        if ( v28 >= *(unsigned int *)(v32 + 24) )
          goto LABEL_46;
        v33 = *(_QWORD *)(v32 + 8 * v28 + 32) + v31;
        value = v33;
        if ( v28 >= groupIds->max_length )
          goto LABEL_46;
        System_Collections_Generic_Dictionary_int__long___Add(
          v17,
          v30[v28],
          v33,
          (const MethodInfo_3120AC4 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v19 )
        {
          if ( v28 >= groupIds->max_length )
            goto LABEL_46;
          if ( v30[v28] < v18 )
            v18 = v30[v28];
        }
        else if ( value > v19 )
        {
          if ( v28 >= groupIds->max_length )
            goto LABEL_46;
          v18 = v30[v28];
          v19 = value;
        }
        if ( v29 == ++v28 )
          goto LABEL_41;
      }
    }
LABEL_45:
    sub_1B64324(Instance);
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
    sub_1B64324(0LL);
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
      sub_1B6432C(result, v5);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t UserId; // x0
  const MethodInfo *v11; // x5
  Il2CppObject *Instance; // x0
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FD085 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&long___TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FD085 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (Il2CppObject *)UserEventRaceMaster__TryGetEntity(this, &entity, UserId, eventId, term, v11);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.points;
LABEL_12:
    sub_1B64324(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_12;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_1B64170(long___TypeInfo, EventJoinGroupNum);
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

  if ( (byte_49FD082 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__, entity);
    byte_49FD082 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}