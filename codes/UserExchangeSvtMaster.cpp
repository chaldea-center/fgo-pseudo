void __fastcall UserExchangeSvtMaster___ctor(UserExchangeSvtMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70E7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E70E7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    463,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int___ctor__);
}


System_Collections_Generic_HashSet_int__o *__fastcall UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_HashSet_int__o *v30; // x19
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v46; // x22
  __int64 v47; // x10
  _BOOL8 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0

  if ( (byte_42E70E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UserExchangeSvtEntity_TypeInfo, v27, v28, v29);
    byte_42E70E8 = 1;
  }
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v31);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v40);
    }
    v45 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v44 + 8));
    v46 = v45;
    if ( v45 )
    {
      v47 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v45)[18].monitor) >= (unsigned int)v47
        && *((UserExchangeSvtEntity_c **)(*v45)[12].monitor + v47 - 1) == UserExchangeSvtEntity_TypeInfo )
      {
        v48 = System_Linq_Enumerable__Contains_int_(
                v45[4],
                svtId,
                (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( v48 )
        {
          if ( !v30 )
            sub_B5D69C(v48, v49);
          System_Collections_Generic_HashSet_int___Add(
            v30,
            *((_DWORD *)v46 + 4),
            (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
    }
  }
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_28:
    v53 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  return v30;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v27; // x2
  int32_t v28; // w0
  int32_t v29; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  int32_t FriendShipRank; // w1
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42E70EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E70EF = 1;
  }
  memset(&v39, 0, sizeof(v39));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v27)) == 0LL) )
  {
    sub_B5D69C(Instance, v25);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v39 = v38;
  v28 = 0;
LABEL_6:
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v39,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v39.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(UserId, v32);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B5D69C(0LL, v33);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B5D69C(0LL, v34);
        if ( UserServantCollectionEntity__getFriendShipRank(entity, 0LL) > v29 )
        {
          if ( !entity )
            sub_B5D69C(0LL, v35);
          FriendShipRank = UserServantCollectionEntity__getFriendShipRank(entity, 0LL);
          v28 = UnityEngine_Mathf__Max_41629432(v29, FriendShipRank, 0LL);
          goto LABEL_6;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v39,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v29;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v27; // x2
  int32_t v28; // w0
  int32_t v29; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  _BOOL8 IsFinded; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42E70EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E70EC = 1;
  }
  memset(&v38, 0, sizeof(v38));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v27)) == 0LL) )
  {
    sub_B5D69C(Instance, v25);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v38 = v37;
  v28 = 0;
LABEL_6:
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v38,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(UserId, v32);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B5D69C(0LL, v33);
      IsFinded = UserServantCollectionEntity__IsFinded(entity, 0LL);
      if ( IsFinded )
      {
        if ( !entity )
          sub_B5D69C(IsFinded, v35);
        v28 = UnityEngine_Mathf__Max_41629432(v29, entity->fields.maxLv, 0LL);
        goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v38,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v29;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v27; // x2
  int32_t v28; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v35; // x1
  System_Int32_array *v36; // x22
  __int64 v37; // x8
  unsigned __int64 v38; // x25
  int32_t v39; // w21
  __int64 v41; // x0
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+0h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E70EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E70EE = 1;
  }
  entity = 0LL;
  memset(&v44, 0, sizeof(v44));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v27)) == 0LL) )
  {
    sub_B5D69C(Instance, v25);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v44 = v42;
  v28 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v44,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(UserId, v31);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B5D69C(0LL, v32);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B5D69C(0LL, v33);
        SkillLevelList = UserServantCollectionEntity__getSkillLevelList(entity, 0LL);
        v36 = SkillLevelList;
        if ( !SkillLevelList )
          sub_B5D69C(0LL, v35);
        v37 = *(_QWORD *)&SkillLevelList->max_length;
        if ( (int)v37 >= 1 )
        {
          v38 = 0LL;
          v39 = v28;
          do
          {
            if ( v38 >= (unsigned int)v37 )
            {
              v41 = sub_B5D6C8(SkillLevelList);
              sub_B5D668(v41, 0LL);
            }
            SkillLevelList = (System_Int32_array *)UnityEngine_Mathf__Max_41629432(v39, v36->m_Items[v38 + 1], 0LL);
            LODWORD(v37) = v36->max_length;
            ++v38;
            v28 = (int)SkillLevelList;
            v39 = (int)SkillLevelList;
          }
          while ( (__int64)v38 < (int)v37 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v44,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v28;
}


int32_t __fastcall UserExchangeSvtMaster__GetExchangeServantMaxLimitCount(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v27; // x2
  int32_t v28; // w19
  int32_t current; // w21
  int64_t UserId; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+20h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42E70ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E70ED = 1;
  }
  memset(&v36, 0, sizeof(v36));
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                Instance,
                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = (DataManager_o *)UserExchangeSvtMaster__GetExchangeSvtIdList(this, eventId, v27)) == 0LL) )
  {
    sub_B5D69C(Instance, v25);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_int__o *)Instance,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v36 = v35;
  v28 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v36,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v36.fields.current;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(UserId, v31);
    if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, current, 0LL) )
    {
      if ( !entity )
        sub_B5D69C(0LL, v32);
      if ( UserServantCollectionEntity__IsFinded(entity, 0LL) )
      {
        if ( !entity )
          sub_B5D69C(0LL, v33);
        v28 += UserServantCollectionEntity__IsLimitCountMax(entity, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v36,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v28;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExchangeSvtMaster__GetExchangeSvtId(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w21
  int32_t v16; // w23
  __int64 v17; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x11
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v20; // x9
  Il2CppType *p_byval_arg; // x11
  int v22; // w12
  __int64 v24; // x0

  if ( (byte_42E70E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserExchangeSvtEntity_TypeInfo, v9, v10, v11);
    byte_42E70E9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == UserExchangeSvtEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          klass = list[1].klass;
          if ( !klass )
            break;
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)(namespaze_low << 32) >= 1 )
          {
            v20 = 0LL;
            p_byval_arg = &klass->_1.byval_arg;
            do
            {
              if ( v20 >= namespaze_low )
              {
                v24 = sub_B5D6C8(list);
                sub_B5D668(v24, 0LL);
              }
              v22 = *((_DWORD *)&p_byval_arg->data + v20++);
              if ( v22 >= 0 )
                v15 = v22;
            }
            while ( (__int64)v20 < (int)namespaze_low );
          }
        }
      }
      if ( ++v16 >= v14 )
        return v15;
    }
LABEL_22:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


System_Collections_Generic_List_int__o *__fastcall UserExchangeSvtMaster__GetExchangeSvtIdList(
        UserExchangeSvtMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  _BOOL8 v15; // x0
  __int64 v16; // x1
  struct System_String_o *name; // x20
  System_Collections_Generic_List_int__o *v18; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E70EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    byte_42E70EA = 1;
  }
  entity = 0LL;
  v15 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_UserExchangeSvtMaster__UserExchangeSvtEntity__int__TryGetEntity__);
  if ( v15 )
  {
    if ( !entity )
      sub_B5D69C(v15, v16);
    name = entity->fields.name;
    v18 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50870440(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)name,
      (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  }
  return v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserExchangeSvtMaster__IsExchangeSvt(
        UserExchangeSvtMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x8
  int namespaze; // w9
  unsigned int v18; // w10
  int v19; // w11
  __int64 v20; // x10
  __int64 v22; // x0

  if ( (byte_42E70EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserExchangeSvtEntity_TypeInfo, v9, v10, v11);
    byte_42E70EB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v15,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v20 = *(&UserExchangeSvtEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (UserExchangeSvtEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] == UserExchangeSvtEntity_TypeInfo )
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
    if ( ++v15 >= v14 )
      return 0;
  }
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= namespaze )
    {
      v22 = sub_B5D6C8(list);
      sub_B5D668(v22, 0LL);
    }
    v19 = *((_DWORD *)&klass->_1.byval_arg.data + (int)v18);
    if ( (v19 & 0x80000000) == 0 && v19 == svtId )
      return 1;
    if ( (int)++v18 >= namespaze )
      goto LABEL_18;
  }
}