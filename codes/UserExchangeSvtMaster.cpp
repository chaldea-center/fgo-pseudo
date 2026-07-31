void UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939580 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
    byte_5939580 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    472,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
}


System_Collections_Generic_HashSet_int__o *UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // [xsp+18h] [xbp-48h]

  if ( (byte_5939581 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939581 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__GetEnumerator__);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v9);
  for ( i = Enumerator; ; i = v30 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v30 )
      sub_21FFECC(v15, v16);
    v17 = v30->klass;
    v18 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v30, System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v30,
            *(_QWORD *)(v20 + 8));
    v22 = v21;
    if ( v21 )
    {
      v23 = System_Linq_Enumerable__Contains_int_(
              *(System_Collections_Generic_IEnumerable_TSource__o **)(v21 + 32),
              svtId,
              (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( v23 )
      {
        if ( !v5 )
          sub_21FFECC(v23, v24);
        System_Collections_Generic_HashSet_int___Add(
          v5,
          *(_DWORD *)(v22 + 16),
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  if ( v30 )
  {
    v25 = v30->klass;
    v26 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_31;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_31:
      v28 = sub_2237E2C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  }
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  int32_t FriendShipRank; // w0
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_5939588 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939588 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0) )
  {
    sub_21FFECC(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v19 = v18;
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = &v19;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v19,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_21FFECC(v13, v10);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           v13->static_fields->userIdNumber,
           current,
           v11) )
    {
      if ( !entity )
        sub_21FFECC(0, v14);
      if ( entity->fields.status && UserServantCollectionEntity__getFriendShipRank(entity, v14) > v9 )
      {
        if ( !entity )
          sub_21FFECC(0, v15);
        FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, v15);
        if ( v9 <= FriendShipRank )
          v9 = FriendShipRank;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v19,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  if ( (byte_5939585 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939585 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0) )
  {
    sub_21FFECC(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  maxLv = 0;
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v18,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_21FFECC(v13, v10);
    v14 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v13->static_fields->userIdNumber,
            current,
            v11);
    if ( v14 )
    {
      if ( !entity )
        sub_21FFECC(v14, v15);
      if ( entity->fields.status )
      {
        if ( maxLv <= entity->fields.maxLv )
          maxLv = entity->fields.maxLv;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v18,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  const MethodInfo *v14; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v16; // x1
  __int64 max_length; // x8
  int32_t *m_Items; // x9
  int32_t v19; // w10
  int32_t v20; // t1
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_5939587 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939587 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0) )
  {
    sub_21FFECC(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_21FFECC(v13, v10);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           v13->static_fields->userIdNumber,
           current,
           v11) )
    {
      if ( !entity )
        sub_21FFECC(0, v14);
      if ( entity->fields.status )
      {
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, v14);
        if ( !SkillLevelList )
          sub_21FFECC(0, v16);
        if ( (int)SkillLevelList->max_length >= 1 )
        {
          max_length = (unsigned int)SkillLevelList->max_length;
          m_Items = SkillLevelList->m_Items;
          do
          {
            v20 = *m_Items++;
            v19 = v20;
            if ( v9 <= v20 )
              v9 = v19;
            --max_length;
          }
          while ( max_length );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  if ( (byte_5939586 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939586 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0) )
  {
    sub_21FFECC(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v19 = v18;
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = &v19;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v19,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_21FFECC(v13, v10);
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
        sub_21FFECC(v14, v15);
      if ( entity->fields.status )
      {
        if ( UserServantCollectionEntity__getLimitCountMax(entity, v15) == v16->fields.maxLimitCount )
          ++v9;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v19,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int32_t v7; // w21
  int32_t v8; // w22
  int32_t v9; // w23
  char *monitor; // x10
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  int32_t v15; // w11
  int v16; // t1

  if ( (byte_5939582 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
    byte_5939582 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
      if ( list && LODWORD(list->fields.items) == eventId )
      {
        monitor = (char *)list[1].monitor;
        if ( !monitor )
          break;
        v11 = *((_QWORD *)monitor + 3);
        if ( (int)v11 >= 1 )
        {
          v12 = (unsigned int)v11 & ~((int)v11 >> 31);
          v13 = (unsigned int)*((_QWORD *)monitor + 3);
          v14 = (int *)(monitor + 32);
          do
          {
            if ( !v13 )
              sub_21FFED4(list);
            v16 = *v14++;
            v15 = v16;
            --v12;
            --v13;
            if ( v16 >= 0 )
              v8 = v15;
          }
          while ( v12 );
        }
      }
      if ( ++v9 == v7 )
        return v8;
    }
LABEL_21:
    sub_21FFECC(list, *(_QWORD *)&eventId);
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

  if ( (byte_5939583 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5939583 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_21FFECC(v5, v6);
    v7 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&qword_20 + (_QWORD)entity);
    v8 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71510500(
      v8,
      v7,
      (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
  }
  else
  {
    v8 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
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
  int v12; // w11
  int v13; // w12

  if ( (byte_5939584 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
    byte_5939584 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_21FFECC(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
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
        sub_21FFED4(list);
      v13 = monitor[v12 + 8];
      if ( (v13 & 0x80000000) == 0 && v13 == svtId )
        break;
      if ( (v11 & ~(v11 >> 31)) == ++v12 )
        goto LABEL_15;
    }
  }
  return v9;
}