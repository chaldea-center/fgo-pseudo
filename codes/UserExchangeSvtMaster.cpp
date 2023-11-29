void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F969C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__, method);
    byte_40F969C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    461,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_HashSet_int__o *__fastcall UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_HashSet_int__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v27; // x22
  __int64 v28; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_40F969D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v9);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&UserExchangeSvtEntity_TypeInfo, v14);
    byte_40F969D = 1;
  }
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( v26 )
    {
      v28 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v26)[18].monitor) >= (unsigned int)v28
        && *((UserExchangeSvtEntity_c **)(*v26)[12].monitor + v28 - 1) == UserExchangeSvtEntity_TypeInfo
        && System_Linq_Enumerable__Contains_int_(
             v26[4],
             svtId,
             (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !v15 )
          sub_B170D4();
        System_Collections_Generic_HashSet_int___Add(
          v15,
          *((_DWORD *)v27 + 4),
          (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_28:
    v32 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return v15;
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_int__o *ExchangeSvtIdList; // x0
  int32_t v15; // w0
  int32_t v16; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  int32_t FriendShipRank; // w1
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_40F96A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F96A4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (ExchangeSvtIdList = UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v13)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    ExchangeSvtIdList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  v15 = 0;
LABEL_6:
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B170D4();
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B170D4();
        if ( UserServantCollectionEntity__getFriendShipRank(entity, 0LL) > v16 )
        {
          if ( !entity )
            sub_B170D4();
          FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, 0LL);
          v15 = UnityEngine_Mathf__Max_40727628(v16, FriendShipRank, 0LL);
          goto LABEL_6;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v16;
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_int__o *ExchangeSvtIdList; // x0
  int32_t v15; // w0
  int32_t v16; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_40F96A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F96A1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (ExchangeSvtIdList = UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v13)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    ExchangeSvtIdList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v21 = v20;
  v15 = 0;
LABEL_6:
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v21,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v21.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B170D4();
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B170D4();
        v15 = UnityEngine_Mathf__Max_40727628(v16, entity->fields.maxLv, 0LL);
        goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v21,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v16;
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_int__o *ExchangeSvtIdList; // x0
  int32_t v15; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  System_Int32_array *SkillLevelList; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Int32_array *v21; // x22
  __int64 v22; // x8
  unsigned __int64 v23; // x25
  int32_t v24; // w21
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+0h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F96A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F96A3 = 1;
  }
  entity = 0LL;
  memset(&v28, 0, sizeof(v28));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (ExchangeSvtIdList = UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v13)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    ExchangeSvtIdList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v28 = v26;
  v15 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v28,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v28.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B170D4();
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B170D4();
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, 0LL);
        v21 = SkillLevelList;
        if ( !SkillLevelList )
          sub_B170D4();
        v22 = *(_QWORD *)&SkillLevelList->max_length;
        if ( (int)v22 >= 1 )
        {
          v23 = 0LL;
          v24 = v15;
          do
          {
            if ( v23 >= (unsigned int)v22 )
            {
              sub_B17100(SkillLevelList, v19, v20);
              sub_B170A0();
            }
            SkillLevelList = (System_Int32_array *)UnityEngine_Mathf__Max_40727628(v24, v21->m_Items[v23 + 1], 0LL);
            LODWORD(v22) = v21->max_length;
            ++v23;
            v15 = (int)SkillLevelList;
            v24 = (int)SkillLevelList;
          }
          while ( (__int64)v23 < (int)v22 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v28,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_int__o *ExchangeSvtIdList; // x0
  int32_t v15; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_40F96A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F96A2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (ExchangeSvtIdList = UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v13)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    ExchangeSvtIdList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  v15 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B170D4();
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B170D4();
        v15 += UserServantCollectionEntity__IsLimitCountMax(entity, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w21
  int32_t v11; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x11
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v19; // x9
  Il2CppType *p_byval_arg; // x11
  int v21; // w12

  if ( (byte_40F969E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&UserExchangeSvtEntity_TypeInfo, v6);
    byte_40F969E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v12 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v12,
               v11,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (UserExchangeSvtEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == UserExchangeSvtEntity_TypeInfo
          && LODWORD(Item[1].klass) == eventId )
        {
          klass = Item[2].klass;
          if ( !klass )
            break;
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)(namespaze_low << 32) >= 1 )
          {
            v19 = 0LL;
            p_byval_arg = &klass->_1.byval_arg;
            do
            {
              if ( v19 >= namespaze_low )
              {
                sub_B17100(Item, v14, v15);
                sub_B170A0();
              }
              v21 = *((_DWORD *)&p_byval_arg->data + v19++);
              if ( v21 >= 0 )
                v10 = v21;
            }
            while ( (__int64)v19 < (int)namespaze_low );
          }
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_22:
    sub_B170D4();
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct System_String_o *name; // x20
  System_Collections_Generic_List_int__o *v13; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F969F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_40F969F = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B170D4();
    name = entity->fields.name;
    v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v8,
                                                      v9,
                                                      v10,
                                                      v11);
    System_Collections_Generic_List_int____ctor_49346956(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)name,
      (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  }
  else
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v8,
                                                      v9,
                                                      v10,
                                                      v11);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserExchangeSvtMaster__IsExchangeSvt(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  unsigned int v13; // w10
  int v14; // w11
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x10

  if ( (byte_40F96A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&UserExchangeSvtEntity_TypeInfo, v6);
    byte_40F96A0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v15 )
      goto LABEL_22;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v15,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (UserExchangeSvtEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == UserExchangeSvtEntity_TypeInfo )
      {
        klass = Item[2].klass;
        if ( !klass )
          goto LABEL_22;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
          break;
      }
    }
LABEL_18:
    if ( ++v10 >= v9 )
      return 0;
  }
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= namespaze )
    {
      sub_B17100(Item, v17, v18);
      sub_B170A0();
    }
    v14 = *((_DWORD *)&klass->_1.byval_arg.data + (int)v13);
    if ( (v14 & 0x80000000) == 0 && v14 == svtId )
      return 1;
    if ( (int)++v13 >= namespaze )
      goto LABEL_18;
  }
}