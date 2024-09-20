void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE3B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
    byte_4A5BE3B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    464,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
}


System_Collections_Generic_HashSet_int__o *__fastcall UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v19; // x22
  __int64 methodPtr_low; // x10
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A5BE3C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UserExchangeSvtEntity_TypeInfo);
    byte_4A5BE3C = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( v18 )
    {
      methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*v18)[19].klass) >= (unsigned int)methodPtr_low
        && *((UserExchangeSvtEntity_c **)(*v18)[12].monitor + methodPtr_low - 1) == UserExchangeSvtEntity_TypeInfo )
      {
        v21 = System_Linq_Enumerable__Contains_int_(
                v18[4],
                svtId,
                (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( v21 )
        {
          if ( !v5 )
            sub_1B8880C(v21, v22);
          System_Collections_Generic_HashSet_int___Add(
            v5,
            *((_DWORD *)v19 + 4),
            (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v5;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t FriendShipRank; // w0
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A5BE43 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BE43 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v19,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B8880C(UserId, v12);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           UserId,
           current,
           0LL) )
    {
      if ( !entity )
        sub_1B8880C(0LL, v13);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_1B8880C(0LL, v14);
        if ( UserServantCollectionEntity__getFriendShipRank(entity, 0LL) > v9 )
        {
          if ( !entity )
            sub_1B8880C(0LL, v15);
          FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, 0LL);
          if ( v9 <= FriendShipRank )
            v9 = FriendShipRank;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v19,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x2
  int32_t maxLv; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  _BOOL8 IsFinded; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A5BE40 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BE40 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  maxLv = 0;
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v18,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B8880C(UserId, v12);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           UserId,
           current,
           0LL) )
    {
      if ( !entity )
        sub_1B8880C(0LL, v13);
      IsFinded = UserServantCollectionEntity__IsFinded(entity, 0LL);
      if ( IsFinded )
      {
        if ( !entity )
          sub_1B8880C(IsFinded, v15);
        if ( maxLv <= entity->fields.maxLv )
          maxLv = entity->fields.maxLv;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v18,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return maxLv;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v16; // x1
  __int64 max_length; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  int32_t v20; // w11
  int32_t v21; // t1
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A5BE42 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BE42 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B8880C(UserId, v12);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           UserId,
           current,
           0LL) )
    {
      if ( !entity )
        sub_1B8880C(0LL, v13);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_1B8880C(0LL, v14);
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, 0LL);
        if ( !SkillLevelList )
          sub_1B8880C(0LL, v16);
        max_length = SkillLevelList->max_length;
        if ( max_length << 32 >= 1 )
        {
          v18 = (int)max_length;
          v19 = &SkillLevelList->m_Items[1];
          do
          {
            if ( !max_length )
              sub_1B88814(SkillLevelList, v16);
            v21 = *v19++;
            v20 = v21;
            --v18;
            --max_length;
            if ( v9 <= v21 )
              v9 = v20;
          }
          while ( v18 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantMaxLimitCount(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A5BE41 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BE41 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0;
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v17,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1B8880C(UserId, v12);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           UserId,
           current,
           0LL) )
    {
      if ( !entity )
        sub_1B8880C(0LL, v13);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_1B8880C(0LL, v14);
        v9 += UserServantCollectionEntity__IsLimitCountMax(entity, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v17,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeSvtId(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  __int64 methodPtr_low; // x10
  unsigned int *monitor; // x10
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  int v15; // w11
  int v16; // t1

  if ( (byte_4A5BE3D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserExchangeSvtEntity_TypeInfo);
    byte_4A5BE3D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v12 = monitor[6];
          if ( v12 << 32 >= 1 )
          {
            v13 = (int)v12;
            v14 = (int *)(monitor + 8);
            do
            {
              if ( !v12 )
                sub_1B88814(list, *(_QWORD *)&eventId);
              v16 = *v14++;
              v15 = v16;
              --v13;
              --v12;
              if ( v16 >= 0 )
                v8 = v15;
            }
            while ( v13 );
          }
        }
      }
      if ( ++v9 == v7 )
        return v8;
    }
LABEL_22:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


System_Collections_Generic_List_int__o *__fastcall UserExchangeSvtMaster__GetExchangeSvtIdList(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppClass *klass; // x20
  System_Collections_Generic_List_int__o *v8; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BE3E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5BE3E = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1B8880C(v5, v6);
    klass = entity[2].klass;
    v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55443684(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)klass,
      (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  }
  else
  {
    v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserExchangeSvtMaster__IsExchangeSvt(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w25
  __int64 methodPtr_low; // x10
  _DWORD *monitor; // x8
  int v12; // w9
  int v13; // w10
  int v14; // w11

  if ( (byte_4A5BE3F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserExchangeSvtEntity_TypeInfo);
    byte_4A5BE3F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
        goto LABEL_22;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserExchangeSvtEntity_TypeInfo )
        {
          monitor = list[1].monitor;
          if ( !monitor )
            goto LABEL_22;
          v12 = monitor[6];
          if ( v12 >= 1 )
            break;
        }
      }
LABEL_10:
      v9 = ++v8 < v7;
      if ( v8 == v7 )
        return v9;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v12 == v13 )
        sub_1B88814(list, *(_QWORD *)&svtId);
      v14 = monitor[v13 + 8];
      if ( (v14 & 0x80000000) == 0 && v14 == svtId )
        break;
      if ( v12 == ++v13 )
        goto LABEL_10;
    }
  }
  return v9;
}