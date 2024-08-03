void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD0C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__, method);
    byte_49FD0C2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    464,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v25; // x22
  __int64 methodPtr_low; // x10
  _BOOL8 v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_49FD0C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&UserExchangeSvtEntity_TypeInfo, v12);
    byte_49FD0C3 = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( v24 )
    {
      methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*v24)[19].klass) >= (unsigned int)methodPtr_low
        && *((UserExchangeSvtEntity_c **)(*v24)[12].monitor + methodPtr_low - 1) == UserExchangeSvtEntity_TypeInfo )
      {
        v27 = System_Linq_Enumerable__Contains_int_(
                v24[4],
                svtId,
                (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( v27 )
        {
          if ( !v13 )
            sub_1B64324(v27);
          System_Collections_Generic_HashSet_int___Add(
            v13,
            *((_DWORD *)v25 + 4),
            (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_28;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_28:
    v31 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x2
  int32_t v14; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  int32_t FriendShipRank; // w0
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FD0CA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FD0CA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v13)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v14 = 0;
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B64324(UserId);
    v17 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            UserId,
            current,
            0LL);
    if ( v17 )
    {
      if ( !entity )
        sub_1B64324(v17);
      if ( entity->fields.status && UserServantCollectionEntity__getFriendShipRank(entity, v18) > v14 )
      {
        if ( !entity )
          sub_1B64324(0LL);
        FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, v19);
        if ( v14 <= FriendShipRank )
          v14 = FriendShipRank;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v14;
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x2
  int32_t maxLv; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  _BOOL8 v17; // x0
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FD0C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FD0C7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v13)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  maxLv = 0;
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B64324(UserId);
    v17 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            UserId,
            current,
            0LL);
    if ( v17 )
    {
      if ( !entity )
        sub_1B64324(v17);
      if ( entity->fields.status )
      {
        if ( maxLv <= entity->fields.maxLv )
          maxLv = entity->fields.maxLv;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x2
  int32_t v14; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v20; // x1
  __int64 max_length; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  int32_t v24; // w11
  int32_t v25; // t1
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FD0C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FD0C9 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v13)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v14 = 0;
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v28,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B64324(UserId);
    v17 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            UserId,
            current,
            0LL);
    if ( v17 )
    {
      if ( !entity )
        sub_1B64324(v17);
      if ( entity->fields.status )
      {
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, v18);
        if ( !SkillLevelList )
          sub_1B64324(0LL);
        max_length = SkillLevelList->max_length;
        if ( max_length << 32 >= 1 )
        {
          v22 = (int)max_length;
          v23 = &SkillLevelList->m_Items[1];
          do
          {
            if ( !max_length )
              sub_1B6432C(SkillLevelList, v20);
            v25 = *v23++;
            v24 = v25;
            --v22;
            --max_length;
            if ( v14 <= v25 )
              v14 = v24;
          }
          while ( v22 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v28,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v14;
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x2
  int32_t v14; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  UserServantCollectionEntity_o *v19; // x21
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FD0C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FD0C8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v13)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v14 = 0;
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B64324(UserId);
    v17 = UserServantCollectionMaster__TryGetEntity(
            (UserServantCollectionMaster_o *)MasterData_object,
            &entity,
            UserId,
            current,
            0LL);
    if ( v17 )
    {
      v19 = entity;
      if ( !entity )
        sub_1B64324(v17);
      if ( entity->fields.status )
      {
        if ( UserServantCollectionEntity__getLimitCountMax(entity, v18) == v19->fields.maxLimitCount )
          ++v14;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v14;
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
  __int64 v12; // x1
  __int64 methodPtr_low; // x10
  unsigned int *monitor; // x10
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  int v18; // w11
  int v19; // t1

  if ( (byte_49FD0C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&UserExchangeSvtEntity_TypeInfo, v6);
    byte_49FD0C4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v15 = monitor[6];
          if ( v15 << 32 >= 1 )
          {
            v16 = (int)v15;
            v17 = (int *)(monitor + 8);
            do
            {
              if ( !v15 )
                sub_1B6432C(list, v12);
              v19 = *v17++;
              v18 = v19;
              --v16;
              --v15;
              if ( v19 >= 0 )
                v10 = v18;
            }
            while ( v16 );
          }
        }
      }
      if ( ++v11 == v9 )
        return v10;
    }
LABEL_22:
    sub_1B64324(list);
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
  __int64 v10; // x2
  Il2CppClass *klass; // x20
  System_Collections_Generic_List_int__o *v12; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FD0C5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_49FD0C5 = 1;
  }
  entity = 0LL;
  v8 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v8 )
  {
    if ( !entity )
      sub_1B64324(v8);
    klass = entity[2].klass;
    v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v9, v10);
    System_Collections_Generic_List_int____ctor_55113648(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)klass,
      (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  }
  else
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v9, v10);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  return v12;
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
  __int64 v12; // x1
  __int64 methodPtr_low; // x10
  _DWORD *monitor; // x8
  int v15; // w9
  int v16; // w10
  int v17; // w11

  if ( (byte_49FD0C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&UserExchangeSvtEntity_TypeInfo, v6);
    byte_49FD0C6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserExchangeSvtEntity_TypeInfo )
        {
          monitor = list[1].monitor;
          if ( !monitor )
            goto LABEL_22;
          v15 = monitor[6];
          if ( v15 >= 1 )
            break;
        }
      }
LABEL_10:
      v11 = ++v10 < v9;
      if ( v10 == v9 )
        return v11;
    }
    v16 = 0;
    while ( 1 )
    {
      if ( v15 == v16 )
        sub_1B6432C(list, v12);
      v17 = monitor[v16 + 8];
      if ( (v17 & 0x80000000) == 0 && v17 == svtId )
        break;
      if ( v15 == ++v16 )
        goto LABEL_10;
    }
  }
  return v11;
}