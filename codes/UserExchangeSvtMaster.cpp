void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7DB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__, method);
    byte_49FF7DB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    464,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
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
  __int64 v12; // x1
  System_Collections_Generic_HashSet_int__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v27; // x22
  __int64 methodPtr_low; // x10
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_49FF7DC & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B64A00(&System_IDisposable_TypeInfo, v9);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B64A00(&UserExchangeSvtEntity_TypeInfo, v12);
    byte_49FF7DC = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_1B64C4C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_33662A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64C5C(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( v26 )
    {
      methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*v26)[19].klass) >= (unsigned int)methodPtr_low
        && *((UserExchangeSvtEntity_c **)(*v26)[12].monitor + methodPtr_low - 1) == UserExchangeSvtEntity_TypeInfo )
      {
        v29 = System_Linq_Enumerable__Contains_int_(
                v26[4],
                svtId,
                (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( v29 )
        {
          if ( !v13 )
            sub_1B64C5C(v29, v30);
          System_Collections_Generic_HashSet_int___Add(
            v13,
            *((_DWORD *)v27 + 4),
            (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_28;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_28:
    v34 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return v13;
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
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  int32_t FriendShipRank; // w0
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FF7E3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B64A00(&NetworkManager_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FF7E3 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_1B64C5C(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3493344 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = 0;
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_32288D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B64C5C(UserId, v18);
    v19 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            UserId,
            current,
            0LL);
    if ( v19 )
    {
      if ( !entity )
        sub_1B64C5C(v19, v20);
      if ( entity->fields.status && UserServantCollectionEntity__getFriendShipRank(entity, v20) > v15 )
      {
        if ( !entity )
          sub_1B64C5C(0LL, v21);
        FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, v21);
        if ( v15 <= FriendShipRank )
          v15 = FriendShipRank;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FF7E0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B64A00(&NetworkManager_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FF7E0 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_1B64C5C(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3493344 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  maxLv = 0;
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_32288D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B64C5C(UserId, v18);
    v19 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            UserId,
            current,
            0LL);
    if ( v19 )
    {
      if ( !entity )
        sub_1B64C5C(v19, v20);
      if ( entity->fields.status )
      {
        if ( maxLv <= entity->fields.maxLv )
          maxLv = entity->fields.maxLv;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v22; // x1
  __int64 max_length; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  int32_t v26; // w11
  int32_t v27; // t1
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FF7E2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B64A00(&NetworkManager_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FF7E2 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_1B64C5C(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3493344 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = 0;
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_32288D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B64C5C(UserId, v18);
    v19 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            UserId,
            current,
            0LL);
    if ( v19 )
    {
      if ( !entity )
        sub_1B64C5C(v19, v20);
      if ( entity->fields.status )
      {
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, v20);
        if ( !SkillLevelList )
          sub_1B64C5C(0LL, v22);
        max_length = SkillLevelList->max_length;
        if ( max_length << 32 >= 1 )
        {
          v24 = (int)max_length;
          v25 = &SkillLevelList->m_Items[1];
          do
          {
            if ( !max_length )
              sub_1B64C64(SkillLevelList, v22);
            v27 = *v25++;
            v26 = v27;
            --v24;
            --max_length;
            if ( v15 <= v27 )
              v15 = v26;
          }
          while ( v24 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  UserServantCollectionEntity_o *v21; // x21
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FF7E1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B64A00(&NetworkManager_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FF7E1 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_1B64C5C(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3493344 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = 0;
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_32288D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B64C5C(UserId, v18);
    v19 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            UserId,
            current,
            0LL);
    if ( v19 )
    {
      v21 = entity;
      if ( !entity )
        sub_1B64C5C(v19, v20);
      if ( entity->fields.status )
      {
        if ( UserServantCollectionEntity__getLimitCountMax(entity, v20) == v21->fields.maxLimitCount )
          ++v15;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeSvtId(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w21
  int32_t v11; // w23
  __int64 methodPtr_low; // x10
  unsigned int *monitor; // x10
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  int v17; // w11
  int v18; // t1

  if ( (byte_49FF7DD & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&UserExchangeSvtEntity_TypeInfo, v6);
    byte_49FF7DD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserExchangeSvtEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          monitor = (unsigned int *)list[1].monitor;
          if ( !monitor )
            break;
          v14 = monitor[6];
          if ( v14 << 32 >= 1 )
          {
            v15 = (int)v14;
            v16 = (int *)(monitor + 8);
            do
            {
              if ( !v14 )
                sub_1B64C64(list, *(_QWORD *)&eventId);
              v18 = *v16++;
              v17 = v18;
              --v15;
              --v14;
              if ( v18 >= 0 )
                v10 = v17;
            }
            while ( v15 );
          }
        }
      }
      if ( ++v11 == v9 )
        return v10;
    }
LABEL_22:
    sub_1B64C5C(list, *(_QWORD *)&eventId);
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

  if ( (byte_49FF7DE & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor___75667208, v6);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_49FF7DE = 1;
  }
  entity = 0LL;
  v8 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_30D67EC *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v8 )
  {
    if ( !entity )
      sub_1B64C5C(v8, v9);
    klass = entity[2].klass;
    v11 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55124132(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)klass,
      (const MethodInfo_34920A4 *)Method_System_Collections_Generic_List_int___ctor___75667208);
  }
  else
  {
    v11 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
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
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  bool v11; // w25
  __int64 methodPtr_low; // x10
  _DWORD *monitor; // x8
  int v14; // w9
  int v15; // w10
  int v16; // w11

  if ( (byte_49FF7DF & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&UserExchangeSvtEntity_TypeInfo, v6);
    byte_49FF7DF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1B64C5C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_22;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserExchangeSvtEntity_TypeInfo )
        {
          monitor = list[1].monitor;
          if ( !monitor )
            goto LABEL_22;
          v14 = monitor[6];
          if ( v14 >= 1 )
            break;
        }
      }
LABEL_10:
      v11 = ++v10 < v9;
      if ( v10 == v9 )
        return v11;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v14 == v15 )
        sub_1B64C64(list, *(_QWORD *)&svtId);
      v16 = monitor[v15 + 8];
      if ( (v16 & 0x80000000) == 0 && v16 == svtId )
        break;
      if ( v14 == ++v15 )
        goto LABEL_10;
    }
  }
  return v11;
}