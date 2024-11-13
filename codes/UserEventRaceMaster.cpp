void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__, method, v2);
    byte_4B16EB1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    214,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
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

  if ( (byte_4B16EAF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16EAF = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventRaceMaster__GetTotalMostProgressedGroupId(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t baseEventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_Dictionary_int__long__o *v29; // x23
  __int64 v30; // x1
  int32_t v31; // w27
  int64_t v32; // x19
  int32_t v33; // w26
  int64_t v34; // x28
  __int64 methodPtr_low; // x10
  int32_t v36; // w2
  __int64 v37; // x9
  __int64 v38; // x9
  struct System_Int32_array *groupIds; // x22
  unsigned __int64 v40; // x21
  __int64 v41; // x24
  int32_t *v42; // x25
  int64_t v43; // x8
  __int64 v44; // x9
  int64_t v45; // x2
  EventRaceMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  int32_t Count; // [xsp+1Ch] [xbp-84h]
  int64_t v51; // [xsp+20h] [xbp-80h]
  int64_t value; // [xsp+30h] [xbp-70h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B16EB2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&baseEventId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__long__Remove__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&UserEventRaceEntity_TypeInfo, v22, v23);
    byte_4B16EB2 = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = (EventRaceMaster_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v29 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                v26,
                                                                v27,
                                                                v28);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v29,
    (const MethodInfo_32024B0 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  v51 = Instance;
  if ( !this->fields.list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = 0;
    v32 = 0LL;
    v33 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_45;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v33,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_45;
      v34 = Instance;
      methodPtr_low = LOBYTE(UserEventRaceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_45;
      }
      if ( *(_QWORD *)(Instance + 16) == v51 )
      {
        v36 = *(_DWORD *)(Instance + 24);
        if ( v36 == eventId || v36 == baseEventId )
        {
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_45;
          Instance = EventRaceMaster__TryGetEntity(MasterData_object, &entity, v36, *(_DWORD *)(v34 + 28), 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_45;
            v37 = *(_QWORD *)(v34 + 32);
            if ( !v37 )
              goto LABEL_45;
            v38 = *(_QWORD *)(v37 + 24);
            if ( (int)v38 >= 1 )
              break;
          }
        }
      }
LABEL_41:
      if ( ++v33 == Count )
        return v31;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v40 = 0LL;
      v41 = (unsigned int)v38;
      v42 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v40 >= groupIds->max_length )
LABEL_46:
          sub_1BCAA44(Instance, v25);
        if ( !v29 )
          break;
        Instance = System_Collections_Generic_Dictionary_int__long___TryGetValue(
                     v29,
                     v42[v40],
                     &value,
                     (const MethodInfo_32045A8 *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( (Instance & 1) != 0 )
        {
          if ( v40 >= groupIds->max_length )
            goto LABEL_46;
          Instance = System_Collections_Generic_Dictionary_int__long___Remove(
                       v29,
                       v42[v40],
                       (const MethodInfo_32042A8 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v43 = value;
        }
        else
        {
          v43 = 0LL;
          value = 0LL;
        }
        v44 = *(_QWORD *)(v34 + 32);
        if ( !v44 )
          break;
        if ( v40 >= *(unsigned int *)(v44 + 24) )
          goto LABEL_46;
        v45 = *(_QWORD *)(v44 + 8 * v40 + 32) + v43;
        value = v45;
        if ( v40 >= groupIds->max_length )
          goto LABEL_46;
        System_Collections_Generic_Dictionary_int__long___Add(
          v29,
          v42[v40],
          v45,
          (const MethodInfo_3202E84 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v32 )
        {
          if ( v40 >= groupIds->max_length )
            goto LABEL_46;
          if ( v42[v40] < v31 )
            v31 = v42[v40];
        }
        else if ( value > v32 )
        {
          if ( v40 >= groupIds->max_length )
            goto LABEL_46;
          v31 = v42[v40];
          v32 = value;
        }
        if ( v41 == ++v40 )
          goto LABEL_41;
      }
    }
LABEL_45:
    sub_1BCAA3C(Instance, v25);
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
    sub_1BCAA3C(0LL, v5);
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
      sub_1BCAA44(result, v5);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t UserId; // x0
  const MethodInfo *v14; // x5
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  unsigned int EventJoinGroupNum; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16EB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId, *(_QWORD *)&term);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B16EB3 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (Il2CppObject *)UserEventRaceMaster__TryGetEntity(this, &entity, UserId, eventId, term, v14);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.points;
LABEL_12:
    sub_1BCAA3C(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !Instance )
    goto LABEL_12;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum((EventPointGroupMaster_o *)Instance, eventId, 0LL);
  return (System_Int64_array *)sub_1BCA888(long___TypeInfo, EventJoinGroupNum);
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

  if ( (byte_4B16EB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__, entity, userId);
    byte_4B16EB0 = 1;
  }
  PK = (Il2CppObject *)UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}