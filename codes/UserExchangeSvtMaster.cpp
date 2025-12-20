void UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D712 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
    byte_4D2D712 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    470,
    (const MethodInfo_345919C *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
}


System_Collections_Generic_HashSet_int__o *UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4D2D713 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D713 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( v18 )
    {
      v20 = System_Linq_Enumerable__Contains_int_(
              *(System_Collections_Generic_IEnumerable_TSource__o **)(v18 + 32),
              svtId,
              (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( v20 )
      {
        if ( !v5 )
          sub_1C942F0(v20, v21);
        System_Collections_Generic_HashSet_int___Add(
          v5,
          *(_DWORD *)(v19 + 16),
          (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_26;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_26:
    v25 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v5;
}


int32_t UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w19
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  int32_t current; // w22
  NetworkManager_c *v13; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t FriendShipRank; // w0
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4D2D71A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D71A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0) )
  {
    sub_1C942F0(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_1C942F0(v13, v10);
    v14 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v13->static_fields->userIdNumber,
            current,
            v11);
    if ( v14 )
    {
      if ( !entity )
        sub_1C942F0(v14, v15);
      if ( entity->fields.status && UserServantCollectionEntity__getFriendShipRank(entity, v15) > v9 )
      {
        if ( !entity )
          sub_1C942F0(0, v16);
        FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, v16);
        if ( v9 <= FriendShipRank )
          v9 = FriendShipRank;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


int32_t UserExchangeSvtMaster__GetExchangeServantHighestLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x2
  int32_t maxLv; // w19
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  int32_t current; // w22
  NetworkManager_c *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4D2D717 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D717 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0) )
  {
    sub_1C942F0(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  maxLv = 0;
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v18,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_1C942F0(v13, v10);
    v14 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v13->static_fields->userIdNumber,
            current,
            v11);
    if ( v14 )
    {
      if ( !entity )
        sub_1C942F0(v14, v15);
      if ( entity->fields.status )
      {
        if ( maxLv <= entity->fields.maxLv )
          maxLv = entity->fields.maxLv;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v18,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return maxLv;
}


int32_t UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w19
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  int32_t current; // w22
  NetworkManager_c *v13; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v17; // x1
  __int64 max_length_low; // x8
  __int64 v19; // x9
  int32_t *m_Items; // x10
  int32_t v21; // w11
  int32_t v22; // t1
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4D2D719 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D719 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0) )
  {
    sub_1C942F0(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_1C942F0(v13, v10);
    v14 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v13->static_fields->userIdNumber,
            current,
            v11);
    if ( v14 )
    {
      if ( !entity )
        sub_1C942F0(v14, v15);
      if ( entity->fields.status )
      {
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, v15);
        if ( !SkillLevelList )
          sub_1C942F0(0, v17);
        max_length_low = LODWORD(SkillLevelList->max_length);
        if ( max_length_low << 32 >= 1 )
        {
          v19 = (int)max_length_low;
          m_Items = SkillLevelList->m_Items;
          do
          {
            if ( !max_length_low )
              sub_1C942F8(SkillLevelList);
            v22 = *m_Items++;
            v21 = v22;
            --v19;
            --max_length_low;
            if ( v9 <= v22 )
              v9 = v21;
          }
          while ( v19 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


int32_t UserExchangeSvtMaster__GetExchangeServantMaxLimitCount(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w19
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  int32_t current; // w22
  NetworkManager_c *v13; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  UserServantCollectionEntity_o *v16; // x22
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4D2D718 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D718 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0) )
  {
    sub_1C942F0(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v19,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_1C942F0(v13, v10);
    v14 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v13->static_fields->userIdNumber,
            current,
            v11);
    if ( v14 )
    {
      v16 = entity;
      if ( !entity )
        sub_1C942F0(v14, v15);
      if ( entity->fields.status )
      {
        if ( UserServantCollectionEntity__getLimitCountMax(entity, v15) == v16->fields.maxLimitCount )
          ++v9;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v19,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int32_t UserExchangeSvtMaster__GetExchangeSvtId(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  unsigned int *monitor; // x10
  __int64 v11; // x8
  __int64 v12; // x9
  int *v13; // x10
  int32_t v14; // w11
  int v15; // t1

  if ( (byte_4D2D714 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
    byte_4D2D714 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
      if ( list && LODWORD(list->fields.items) == eventId )
      {
        monitor = (unsigned int *)list[1].monitor;
        if ( !monitor )
          break;
        v11 = monitor[6];
        if ( v11 << 32 >= 1 )
        {
          v12 = (int)v11;
          v13 = (int *)(monitor + 8);
          do
          {
            if ( !v11 )
              sub_1C942F8(list);
            v15 = *v13++;
            v14 = v15;
            --v12;
            --v11;
            if ( v15 >= 0 )
              v8 = v14;
          }
          while ( v12 );
        }
      }
      if ( ++v9 == v7 )
        return v8;
    }
LABEL_21:
    sub_1C942F0(list, *(_QWORD *)&eventId);
  }
  return 0;
}


System_Collections_Generic_List_int__o *UserExchangeSvtMaster__GetExchangeSvtIdList(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D715 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor___78995296);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2D715 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_345B50C *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C942F0(v5, v6);
    v7 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&qword_20 + (_QWORD)entity);
    v8 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_59037412(
      v8,
      v7,
      (const MethodInfo_384D6E4 *)Method_System_Collections_Generic_List_int___ctor___78995296);
  }
  else
  {
    v8 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool UserExchangeSvtMaster__IsExchangeSvt(UserExchangeSvtMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w24
  _DWORD *monitor; // x8
  int v11; // w9
  int v12; // w10
  int v13; // w11

  if ( (byte_4D2D716 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
    byte_4D2D716 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1C942F0(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
      if ( list )
      {
        monitor = list[1].monitor;
        if ( !monitor )
          goto LABEL_20;
        v11 = monitor[6];
        if ( v11 >= 1 )
          break;
      }
LABEL_15:
      v9 = ++v8 < v7;
      if ( v8 == v7 )
        return v9;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v11 == v12 )
        sub_1C942F8(list);
      v13 = monitor[v12 + 8];
      if ( (v13 & 0x80000000) == 0 && v13 == svtId )
        break;
      if ( v11 == ++v12 )
        goto LABEL_15;
    }
  }
  return v9;
}