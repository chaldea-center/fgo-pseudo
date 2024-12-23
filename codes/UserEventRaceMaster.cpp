void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B678A8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__, method);
    byte_4B678A8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    218,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
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

  if ( (byte_4B678A6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__, userId);
    byte_4B678A6 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
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
  void *Instance; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__long__o *v16; // x23
  int32_t v17; // w26
  int64_t v18; // x19
  int32_t v19; // w25
  _DWORD *v20; // x27
  __int64 methodPtr_low; // x10
  int32_t v22; // w2
  __int64 v23; // x9
  __int64 v24; // x9
  struct System_Int32_array *groupIds; // x22
  unsigned __int64 v26; // x21
  __int64 v27; // x28
  int32_t *v28; // x24
  int64_t v29; // x8
  __int64 v30; // x9
  int64_t v31; // x2
  EventRaceMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  int32_t Count; // [xsp+1Ch] [xbp-84h]
  __int64 v37; // [xsp+20h] [xbp-80h]
  int64_t value; // [xsp+30h] [xbp-70h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B678A9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__long__Remove__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v10);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BE4ACC(&UserEventRaceEntity_TypeInfo, v13);
    byte_4B678A9 = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = (EventRaceMaster_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v16 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v16,
    (const MethodInfo_324CE34 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    byte_4B61717 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_49;
  v37 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = 0;
    v18 = 0LL;
    v19 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_49;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v19,
                   (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_49;
      v20 = Instance;
      methodPtr_low = LOBYTE(UserEventRaceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_49;
      }
      if ( *((_QWORD *)Instance + 2) == v37 )
      {
        v22 = *((_DWORD *)Instance + 6);
        if ( v22 == eventId || v22 == baseEventId )
        {
          Instance = MasterData_object;
          if ( !MasterData_object )
            goto LABEL_49;
          Instance = (void *)EventRaceMaster__TryGetEntity(MasterData_object, &entity, v22, v20[7], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_49;
            v23 = *((_QWORD *)v20 + 4);
            if ( !v23 )
              goto LABEL_49;
            v24 = *(_QWORD *)(v23 + 24);
            if ( (int)v24 >= 1 )
              break;
          }
        }
      }
LABEL_45:
      if ( ++v19 == Count )
        return v17;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v26 = 0LL;
      v27 = (unsigned int)v24;
      v28 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v26 >= groupIds->max_length )
LABEL_50:
          sub_1BE4D30(Instance, v15);
        if ( !v16 )
          break;
        Instance = (void *)System_Collections_Generic_Dictionary_int__long___TryGetValue(
                             v16,
                             v28[v26],
                             &value,
                             (const MethodInfo_324EF2C *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v26 >= groupIds->max_length )
            goto LABEL_50;
          Instance = (void *)System_Collections_Generic_Dictionary_int__long___Remove(
                               v16,
                               v28[v26],
                               (const MethodInfo_324EC2C *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v29 = value;
        }
        else
        {
          v29 = 0LL;
          value = 0LL;
        }
        v30 = *((_QWORD *)v20 + 4);
        if ( !v30 )
          break;
        if ( v26 >= *(unsigned int *)(v30 + 24) )
          goto LABEL_50;
        v31 = *(_QWORD *)(v30 + 8 * v26 + 32) + v29;
        value = v31;
        if ( v26 >= groupIds->max_length )
          goto LABEL_50;
        System_Collections_Generic_Dictionary_int__long___Add(
          v16,
          v28[v26],
          v31,
          (const MethodInfo_324D808 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v18 )
        {
          if ( v26 >= groupIds->max_length )
            goto LABEL_50;
          if ( v28[v26] < v17 )
            v17 = v28[v26];
        }
        else if ( value > v18 )
        {
          if ( v26 >= groupIds->max_length )
            goto LABEL_50;
          v17 = v28[v26];
          v18 = value;
        }
        if ( v27 == ++v26 )
          goto LABEL_45;
      }
    }
LABEL_49:
    sub_1BE4D28(Instance, v15);
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
    sub_1BE4D28(0LL, v5);
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
      sub_1BE4D30(result, v5);
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

  if ( (byte_4B678AA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&long___TypeInfo, v8);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B678AA = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B61717 = 1;
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
    sub_1BE4D28(Instance, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_1BE4B74(long___TypeInfo, EventJoinGroupNum);
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

  if ( (byte_4B678A7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__, entity);
    byte_4B678A7 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}