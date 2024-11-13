void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__, method, v2);
    byte_4B16EF0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    464,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_HashSet_int__o *__fastcall UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_HashSet_int__o *v22; // x20
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v36; // x22
  __int64 methodPtr_low; // x10
  _BOOL8 v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B16EF1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v18, v19);
    sub_1BCA7E0(&UserExchangeSvtEntity_TypeInfo, v20, v21);
    byte_4B16EF1 = 1;
  }
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v23);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v34 + 8));
    v36 = v35;
    if ( v35 )
    {
      methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*v35)[19].klass) >= (unsigned int)methodPtr_low
        && *((UserExchangeSvtEntity_c **)(*v35)[12].monitor + methodPtr_low - 1) == UserExchangeSvtEntity_TypeInfo )
      {
        v38 = System_Linq_Enumerable__Contains_int_(
                v35[4],
                svtId,
                (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( v38 )
        {
          if ( !v22 )
            sub_1BCAA3C(v38, v39);
          System_Collections_Generic_HashSet_int___Add(
            v22,
            *((_DWORD *)v36 + 4),
            (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_28;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_28:
    v43 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return v22;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // w19
  __int64 v22; // x1
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  int32_t FriendShipRank; // w0
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B16EF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16EF8 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v20)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v18);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v21 = 0;
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v32,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1BCAA3C(UserId, v25);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           UserId,
           current,
           0LL) )
    {
      if ( !entity )
        sub_1BCAA3C(0LL, v26);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_1BCAA3C(0LL, v27);
        if ( UserServantCollectionEntity__getFriendShipRank(entity, 0LL) > v21 )
        {
          if ( !entity )
            sub_1BCAA3C(0LL, v28);
          FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, 0LL);
          if ( v21 <= FriendShipRank )
            v21 = FriendShipRank;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v32,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v21;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v20; // x2
  int32_t maxLv; // w19
  __int64 v22; // x1
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  _BOOL8 IsFinded; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B16EF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16EF5 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v20)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v18);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  maxLv = 0;
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v31,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1BCAA3C(UserId, v25);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           UserId,
           current,
           0LL) )
    {
      if ( !entity )
        sub_1BCAA3C(0LL, v26);
      IsFinded = UserServantCollectionEntity__IsFinded(entity, 0LL);
      if ( IsFinded )
      {
        if ( !entity )
          sub_1BCAA3C(IsFinded, v28);
        if ( maxLv <= entity->fields.maxLv )
          maxLv = entity->fields.maxLv;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v31,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return maxLv;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // w19
  __int64 v22; // x1
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v29; // x1
  __int64 max_length; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  int32_t v33; // w11
  int32_t v34; // t1
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B16EF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16EF7 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v20)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v18);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v21 = 0;
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v37,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v37.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1BCAA3C(UserId, v25);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           UserId,
           current,
           0LL) )
    {
      if ( !entity )
        sub_1BCAA3C(0LL, v26);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_1BCAA3C(0LL, v27);
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, 0LL);
        if ( !SkillLevelList )
          sub_1BCAA3C(0LL, v29);
        max_length = SkillLevelList->max_length;
        if ( max_length << 32 >= 1 )
        {
          v31 = (int)max_length;
          v32 = &SkillLevelList->m_Items[1];
          do
          {
            if ( !max_length )
              sub_1BCAA44(SkillLevelList, v29);
            v34 = *v32++;
            v33 = v34;
            --v31;
            --max_length;
            if ( v21 <= v34 )
              v21 = v33;
          }
          while ( v31 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v37,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v21;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantMaxLimitCount(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // w19
  __int64 v22; // x1
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B16EF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16EF6 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v20)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v18);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v21 = 0;
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      sub_1BCAA3C(UserId, v25);
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)MasterData_object,
           &entity,
           UserId,
           current,
           0LL) )
    {
      if ( !entity )
        sub_1BCAA3C(0LL, v26);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_1BCAA3C(0LL, v27);
        v21 += UserServantCollectionEntity__IsLimitCountMax(entity, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v21;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeSvtId(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w21
  int32_t v13; // w23
  __int64 methodPtr_low; // x10
  unsigned int *monitor; // x10
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  int v19; // w11
  int v20; // t1

  if ( (byte_4B16EF2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&UserExchangeSvtEntity_TypeInfo, v7, v8);
    byte_4B16EF2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v16 = monitor[6];
          if ( v16 << 32 >= 1 )
          {
            v17 = (int)v16;
            v18 = (int *)(monitor + 8);
            do
            {
              if ( !v16 )
                sub_1BCAA44(list, *(_QWORD *)&eventId);
              v20 = *v18++;
              v19 = v20;
              --v17;
              --v16;
              if ( v20 >= 0 )
                v12 = v19;
            }
            while ( v17 );
          }
        }
      }
      if ( ++v13 == v11 )
        return v12;
    }
LABEL_22:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  Il2CppClass *klass; // x20
  System_Collections_Generic_List_int__o *v16; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16EF3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B16EF3 = 1;
  }
  entity = 0LL;
  v11 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v11 )
  {
    if ( !entity )
      sub_1BCAA3C(v11, v12);
    klass = entity[2].klass;
    v16 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v12,
                                                      v13,
                                                      v14);
    System_Collections_Generic_List_int____ctor_56116492(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)klass,
      (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  }
  else
  {
    v16 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v12,
                                                      v13,
                                                      v14);
    System_Collections_Generic_List_int____ctor(
      v16,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserExchangeSvtMaster__IsExchangeSvt(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  bool v13; // w25
  __int64 methodPtr_low; // x10
  _DWORD *monitor; // x8
  int v16; // w9
  int v17; // w10
  int v18; // w11

  if ( (byte_4B16EF4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&UserExchangeSvtEntity_TypeInfo, v7, v8);
    byte_4B16EF4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v11 = Count;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_22;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(UserExchangeSvtEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserExchangeSvtEntity_TypeInfo )
        {
          monitor = list[1].monitor;
          if ( !monitor )
            goto LABEL_22;
          v16 = monitor[6];
          if ( v16 >= 1 )
            break;
        }
      }
LABEL_10:
      v13 = ++v12 < v11;
      if ( v12 == v11 )
        return v13;
    }
    v17 = 0;
    while ( 1 )
    {
      if ( v16 == v17 )
        sub_1BCAA44(list, *(_QWORD *)&svtId);
      v18 = monitor[v17 + 8];
      if ( (v18 & 0x80000000) == 0 && v18 == svtId )
        break;
      if ( v16 == ++v17 )
        goto LABEL_10;
    }
  }
  return v13;
}