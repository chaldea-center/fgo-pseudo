void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBC15 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__, method);
    byte_49BBC15 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    470,
    (const MethodInfo_319B678 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_HashSet_int__o *__fastcall UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_HashSet_int__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_49BBC16 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v9);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo, v10);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v11);
    byte_49BBC16 = 1;
  }
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v12,
    (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_UserExchangeSvtEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v26 = v25;
    if ( v25 )
    {
      v27 = System_Linq_Enumerable__Contains_int_(
              *(System_Collections_Generic_IEnumerable_TSource__o **)(v25 + 32),
              svtId,
              (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
      if ( v27 )
      {
        if ( !v12 )
          sub_1B4D1EC(v27, v28);
        System_Collections_Generic_HashSet_int___Add(
          v12,
          *(_DWORD *)(v26 + 16),
          (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_26;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_26:
    v32 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w19
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  int32_t current; // w22
  NetworkManager_c *v19; // x0
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  int32_t FriendShipRank; // w0
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49BBC1D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49BBC1D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = 0;
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v16);
      byte_49B57A5 = 1;
    }
    v19 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_1B4D1EC(v19, v16);
    v20 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v19->static_fields->userIdNumber,
            current,
            v17);
    if ( v20 )
    {
      if ( !entity )
        sub_1B4D1EC(v20, v21);
      if ( entity->fields.status && UserServantCollectionEntity__getFriendShipRank(entity, v21) > v15 )
      {
        if ( !entity )
          sub_1B4D1EC(0LL, v22);
        FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, v22);
        if ( v15 <= FriendShipRank )
          v15 = FriendShipRank;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v14; // x2
  int32_t maxLv; // w19
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  int32_t current; // w22
  NetworkManager_c *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49BBC1A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49BBC1A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  maxLv = 0;
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v16);
      byte_49B57A5 = 1;
    }
    v19 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_1B4D1EC(v19, v16);
    v20 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v19->static_fields->userIdNumber,
            current,
            v17);
    if ( v20 )
    {
      if ( !entity )
        sub_1B4D1EC(v20, v21);
      if ( entity->fields.status )
      {
        if ( maxLv <= entity->fields.maxLv )
          maxLv = entity->fields.maxLv;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return maxLv;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w19
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  int32_t current; // w22
  NetworkManager_c *v19; // x0
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v23; // x1
  __int64 max_length; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  int32_t v27; // w11
  int32_t v28; // t1
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49BBC1C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49BBC1C = 1;
  }
  memset(&v31, 0, sizeof(v31));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = 0;
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v31,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v16);
      byte_49B57A5 = 1;
    }
    v19 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_1B4D1EC(v19, v16);
    v20 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v19->static_fields->userIdNumber,
            current,
            v17);
    if ( v20 )
    {
      if ( !entity )
        sub_1B4D1EC(v20, v21);
      if ( entity->fields.status )
      {
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, v21);
        if ( !SkillLevelList )
          sub_1B4D1EC(0LL, v23);
        max_length = SkillLevelList->max_length;
        if ( max_length << 32 >= 1 )
        {
          v25 = (int)max_length;
          v26 = &SkillLevelList->m_Items[1];
          do
          {
            if ( !max_length )
              sub_1B4D1F4(SkillLevelList, v23);
            v28 = *v26++;
            v27 = v28;
            --v25;
            --max_length;
            if ( v15 <= v28 )
              v15 = v27;
          }
          while ( v25 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v31,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantMaxLimitCount(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w19
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  int32_t current; // w22
  NetworkManager_c *v19; // x0
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  UserServantCollectionEntity_o *v22; // x22
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+20h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49BBC1B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49BBC1B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = 0;
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v16);
      byte_49B57A5 = 1;
    }
    v19 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19 = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      sub_1B4D1EC(v19, v16);
    v20 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            v19->static_fields->userIdNumber,
            current,
            v17);
    if ( v20 )
    {
      v22 = entity;
      if ( !entity )
        sub_1B4D1EC(v20, v21);
      if ( entity->fields.status )
      {
        if ( UserServantCollectionEntity__getLimitCountMax(entity, v21) == v22->fields.maxLimitCount )
          ++v15;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeSvtId(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w21
  int32_t v10; // w23
  unsigned int *monitor; // x10
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  int v15; // w11
  int v16; // t1

  if ( (byte_49BBC17 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__, v5);
    byte_49BBC17 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
      if ( list && LODWORD(list->fields.items) == eventId )
      {
        monitor = (unsigned int *)list[1].monitor;
        if ( !monitor )
          break;
        v12 = monitor[6];
        if ( v12 << 32 >= 1 )
        {
          v13 = (int)v12;
          v14 = (int *)(monitor + 8);
          do
          {
            if ( !v12 )
              sub_1B4D1F4(list, *(_QWORD *)&eventId);
            v16 = *v14++;
            v15 = v16;
            --v13;
            --v12;
            if ( v16 >= 0 )
              v9 = v15;
          }
          while ( v13 );
        }
      }
      if ( ++v10 == v8 )
        return v9;
    }
LABEL_21:
    sub_1B4D1EC(list, *(_QWORD *)&eventId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall UserExchangeSvtMaster__GetExchangeSvtIdList(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x20
  System_Collections_Generic_List_int__o *v11; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BBC18 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor___75443648, v6);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_49BBC18 = 1;
  }
  entity = 0LL;
  v8 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v8 )
  {
    if ( !entity )
      sub_1B4D1EC(v8, v9);
    klass = entity[2].klass;
    v11 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55978636(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)klass,
      (const MethodInfo_3562A8C *)Method_System_Collections_Generic_List_int___ctor___75443648);
  }
  else
  {
    v11 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserExchangeSvtMaster__IsExchangeSvt(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  bool v10; // w24
  _DWORD *monitor; // x8
  int v12; // w9
  int v13; // w10
  int v14; // w11

  if ( (byte_49BBC19 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__, v5);
    byte_49BBC19 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1B4D1EC(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Count__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v8 = Count;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_UserExchangeSvtEntity__get_Item__);
      if ( list )
      {
        monitor = list[1].monitor;
        if ( !monitor )
          goto LABEL_20;
        v12 = monitor[6];
        if ( v12 >= 1 )
          break;
      }
LABEL_15:
      v10 = ++v9 < v8;
      if ( v9 == v8 )
        return v10;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v12 == v13 )
        sub_1B4D1F4(list, *(_QWORD *)&svtId);
      v14 = monitor[v13 + 8];
      if ( (v14 & 0x80000000) == 0 && v14 == svtId )
        break;
      if ( v12 == ++v13 )
        goto LABEL_15;
    }
  }
  return v10;
}