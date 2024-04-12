void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEEEF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
    byte_42AEEEF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    462,
    (const MethodInfo_23E223C *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
}


System_Collections_Generic_HashSet_int__o *__fastcall UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v21; // x22
  __int64 v22; // x10
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_42AEEF0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UserExchangeSvtEntity_TypeInfo);
    byte_42AEEF0 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v19 + 8));
    v21 = v20;
    if ( v20 )
    {
      v22 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v20)[18].monitor) >= (unsigned int)v22
        && *((UserExchangeSvtEntity_c **)(*v20)[12].monitor + v22 - 1) == UserExchangeSvtEntity_TypeInfo )
      {
        v23 = System_Linq_Enumerable__Contains_int_(
                v20[4],
                svtId,
                (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( v23 )
        {
          if ( !v5 )
            sub_B52A5C(v23, v24);
          System_Collections_Generic_HashSet_int___Add(
            v5,
            *((_DWORD *)v21 + 4),
            (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_28:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v5;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w0
  int32_t v10; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t FriendShipRank; // w1
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42AEEF7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEEF7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0LL) )
  {
    sub_B52A5C(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  v9 = 0;
LABEL_6:
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(UserId, v13);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B52A5C(0LL, v14);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B52A5C(0LL, v15);
        if ( UserServantCollectionEntity__getFriendShipRank(entity, 0LL) > v10 )
        {
          if ( !entity )
            sub_B52A5C(0LL, v16);
          FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, 0LL);
          v9 = UnityEngine_Mathf__Max_41525284(v10, FriendShipRank, 0LL);
          goto LABEL_6;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v10;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w0
  int32_t v10; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  _BOOL8 IsFinded; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42AEEF4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEEF4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0LL) )
  {
    sub_B52A5C(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v19 = v18;
  v9 = 0;
LABEL_6:
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v19,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(UserId, v13);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B52A5C(0LL, v14);
      IsFinded = UserServantCollectionEntity__IsFinded(entity, 0LL);
      if ( IsFinded )
      {
        if ( !entity )
          sub_B52A5C(IsFinded, v16);
        v9 = UnityEngine_Mathf__Max_41525284(v10, entity->fields.maxLv, 0LL);
        goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v19,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v10;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v16; // x1
  System_Int32_array *v17; // x22
  __int64 v18; // x8
  unsigned __int64 v19; // x25
  int32_t v20; // w21
  __int64 v22; // x0
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+0h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42AEEF6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEEF6 = 1;
  }
  entity = 0LL;
  memset(&v25, 0, sizeof(v25));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0LL) )
  {
    sub_B52A5C(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v25 = v23;
  v9 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v25.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(UserId, v12);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B52A5C(0LL, v13);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B52A5C(0LL, v14);
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, 0LL);
        v17 = SkillLevelList;
        if ( !SkillLevelList )
          sub_B52A5C(0LL, v16);
        v18 = *(_QWORD *)&SkillLevelList->max_length;
        if ( (int)v18 >= 1 )
        {
          v19 = 0LL;
          v20 = v9;
          do
          {
            if ( v19 >= (unsigned int)v18 )
            {
              v22 = sub_B52A88(SkillLevelList);
              sub_B52A28(v22, 0LL);
            }
            SkillLevelList = (System_Int32_array *)UnityEngine_Mathf__Max_41525284(v20, v17->m_Items[v19 + 1], 0LL);
            LODWORD(v18) = v17->max_length;
            ++v19;
            v9 = (int)SkillLevelList;
            v20 = (int)SkillLevelList;
          }
          while ( (__int64)v19 < (int)v18 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantMaxLimitCount(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42AEEF5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEEF5 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v8)) == 0LL) )
  {
    sub_B52A5C(Instance, v6);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v17 = v16;
  v9 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v17,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v17.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(UserId, v12);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B52A5C(0LL, v13);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B52A5C(0LL, v14);
        v9 += UserServantCollectionEntity__IsLimitCountMax(entity, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v17,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeSvtId(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  __int64 v10; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x11
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v13; // x9
  Il2CppType *p_byval_arg; // x11
  int v15; // w12
  __int64 v17; // x0

  if ( (byte_42AEEF1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&UserExchangeSvtEntity_TypeInfo);
    byte_42AEEF1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == UserExchangeSvtEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          klass = list[1].klass;
          if ( !klass )
            break;
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)(namespaze_low << 32) >= 1 )
          {
            v13 = 0LL;
            p_byval_arg = &klass->_1.byval_arg;
            do
            {
              if ( v13 >= namespaze_low )
              {
                v17 = sub_B52A88(list);
                sub_B52A28(v17, 0LL);
              }
              v15 = *((_DWORD *)&p_byval_arg->data + v13++);
              if ( v15 >= 0 )
                v8 = v15;
            }
            while ( (__int64)v13 < (int)namespaze_low );
          }
        }
      }
      if ( ++v9 >= v7 )
        return v8;
    }
LABEL_22:
    sub_B52A5C(list, *(_QWORD *)&eventId);
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
  struct System_String_o *name; // x20
  System_Collections_Generic_List_int__o *v8; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEEF2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AEEF2 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_B52A5C(v5, v6);
    name = entity->fields.name;
    v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50685004(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)name,
      (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  }
  else
  {
    v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserExchangeSvtMaster__IsExchangeSvt(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x8
  int namespaze; // w9
  unsigned int v11; // w10
  int v12; // w11
  __int64 v13; // x10
  __int64 v15; // x0

  if ( (byte_42AEEF3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&UserExchangeSvtEntity_TypeInfo);
    byte_42AEEF3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_B52A5C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v13 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == UserExchangeSvtEntity_TypeInfo )
      {
        klass = list[1].klass;
        if ( !klass )
          goto LABEL_22;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
          break;
      }
    }
LABEL_18:
    if ( ++v8 >= v7 )
      return 0;
  }
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= namespaze )
    {
      v15 = sub_B52A88(list);
      sub_B52A28(v15, 0LL);
    }
    v12 = *((_DWORD *)&klass->_1.byval_arg.data + (int)v11);
    if ( (v12 & 0x80000000) == 0 && v12 == svtId )
      return 1;
    if ( (int)++v11 >= namespaze )
      goto LABEL_18;
  }
}