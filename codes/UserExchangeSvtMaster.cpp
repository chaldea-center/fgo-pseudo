void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186F92 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__, method);
    byte_4186F92 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    461,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
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
  System_Collections_Generic_HashSet_int__o *v13; // x19
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v29; // x22
  __int64 v30; // x10
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  if ( (byte_4186F93 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v7);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&UserExchangeSvtEntity_TypeInfo, v12);
    byte_4186F93 = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v27 + 8));
    v29 = v28;
    if ( v28 )
    {
      v30 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v28)[18].monitor) >= (unsigned int)v30
        && *((UserExchangeSvtEntity_c **)(*v28)[12].monitor + v30 - 1) == UserExchangeSvtEntity_TypeInfo )
      {
        v31 = System_Linq_Enumerable__Contains_int_(
                v28[4],
                svtId,
                (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( v31 )
        {
          if ( !v13 )
            sub_B2C434(v31, v32);
          System_Collections_Generic_HashSet_int___Add(
            v13,
            *((_DWORD *)v29 + 4),
            (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_28:
    v36 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w0
  int32_t v16; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t FriendShipRank; // w1
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4186F9A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4186F9A = 1;
  }
  memset(&v26, 0, sizeof(v26));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_B2C434(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v26 = v25;
  v15 = 0;
LABEL_6:
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(UserId, v19);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B2C434(0LL, v20);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B2C434(0LL, v21);
        if ( UserServantCollectionEntity__getFriendShipRank(entity, 0LL) > v16 )
        {
          if ( !entity )
            sub_B2C434(0LL, v22);
          FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, 0LL);
          v15 = UnityEngine_Mathf__Max_40694800(v16, FriendShipRank, 0LL);
          goto LABEL_6;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w0
  int32_t v16; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  _BOOL8 IsFinded; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4186F97 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4186F97 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_B2C434(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v25 = v24;
  v15 = 0;
LABEL_6:
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v25.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(UserId, v19);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B2C434(0LL, v20);
      IsFinded = UserServantCollectionEntity__IsFinded(entity, 0LL);
      if ( IsFinded )
      {
        if ( !entity )
          sub_B2C434(IsFinded, v22);
        v15 = UnityEngine_Mathf__Max_40694800(v16, entity->fields.maxLv, 0LL);
        goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v22; // x1
  System_Int32_array *v23; // x22
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  int32_t v26; // w21
  __int64 v28; // x0
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+0h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4186F99 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4186F99 = 1;
  }
  entity = 0LL;
  memset(&v31, 0, sizeof(v31));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_B2C434(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v31 = v29;
  v15 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v31,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v31.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(UserId, v18);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B2C434(0LL, v19);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B2C434(0LL, v20);
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, 0LL);
        v23 = SkillLevelList;
        if ( !SkillLevelList )
          sub_B2C434(0LL, v22);
        v24 = *(_QWORD *)&SkillLevelList->max_length;
        if ( (int)v24 >= 1 )
        {
          v25 = 0LL;
          v26 = v15;
          do
          {
            if ( v25 >= (unsigned int)v24 )
            {
              v28 = sub_B2C460(SkillLevelList);
              sub_B2C400(v28, 0LL);
            }
            SkillLevelList = (System_Int32_array *)UnityEngine_Mathf__Max_40694800(v26, v23->m_Items[v25 + 1], 0LL);
            LODWORD(v24) = v23->max_length;
            ++v25;
            v15 = (int)SkillLevelList;
            v26 = (int)SkillLevelList;
          }
          while ( (__int64)v25 < (int)v24 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v31,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4186F98 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4186F98 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v14)) == 0LL) )
  {
    sub_B2C434(Instance, v12);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  v15 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(UserId, v18);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B2C434(0LL, v19);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B2C434(0LL, v20);
        v15 += UserServantCollectionEntity__IsLimitCountMax(entity, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v12; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x11
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v15; // x9
  Il2CppType *p_byval_arg; // x11
  int v17; // w12
  __int64 v19; // x0

  if ( (byte_4186F94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserExchangeSvtEntity_TypeInfo, v6);
    byte_4186F94 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] == UserExchangeSvtEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          klass = list[1].klass;
          if ( !klass )
            break;
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)(namespaze_low << 32) >= 1 )
          {
            v15 = 0LL;
            p_byval_arg = &klass->_1.byval_arg;
            do
            {
              if ( v15 >= namespaze_low )
              {
                v19 = sub_B2C460(list);
                sub_B2C400(v19, 0LL);
              }
              v17 = *((_DWORD *)&p_byval_arg->data + v15++);
              if ( v17 >= 0 )
                v10 = v17;
            }
            while ( (__int64)v15 < (int)namespaze_low );
          }
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_22:
    sub_B2C434(list, *(_QWORD *)&eventId);
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
  struct System_String_o *name; // x20
  System_Collections_Generic_List_int__o *v11; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186F95 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4186F95 = 1;
  }
  entity = 0LL;
  v8 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v8 )
  {
    if ( !entity )
      sub_B2C434(v8, v9);
    name = entity->fields.name;
    v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_49702036(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)name,
      (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  }
  else
  {
    v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x8
  int namespaze; // w9
  unsigned int v13; // w10
  int v14; // w11
  __int64 v15; // x10
  __int64 v17; // x0

  if ( (byte_4186F96 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserExchangeSvtEntity_TypeInfo, v6);
    byte_4186F96 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_B2C434(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v15 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == UserExchangeSvtEntity_TypeInfo )
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
    if ( ++v10 >= v9 )
      return 0;
  }
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= namespaze )
    {
      v17 = sub_B2C460(list);
      sub_B2C400(v17, 0LL);
    }
    v14 = *((_DWORD *)&klass->_1.byval_arg.data + (int)v13);
    if ( (v14 & 0x80000000) == 0 && v14 == svtId )
      return 1;
    if ( (int)++v13 >= namespaze )
      goto LABEL_18;
  }
}