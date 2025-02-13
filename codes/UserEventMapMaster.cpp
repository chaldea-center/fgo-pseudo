void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD218 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
    byte_4BDD218 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    354,
    (const MethodInfo_325E55C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDD216 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
    byte_4BDD216 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3260880 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4BDD21A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEventMapEntity__GetEnumerator__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_UserEventMapEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
    byte_4BDD21A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C22094(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_UserEventMapEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventMapEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_UserEventMapEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_UserEventMapEntity__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v27 = v20;
    if ( v20 && *(_QWORD *)(v20 + 16) == userId && *(_DWORD *)(v20 + 24) == eventId )
    {
      if ( !v7 )
        sub_1C22094(v20, v20);
      items = v7->fields._items;
      v29 = Method_System_Collections_Generic_List_UserEventMapEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C22094(v20, v20);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v27;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 4), v27, v21, v22, v23, v24, v25, v26);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_30;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_30:
    v35 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v7;
}


UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_41355188(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  NetworkManager_c *v6; // x0
  __int64 *lookup; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *v41; // x20
  __int64 v42; // x8
  void *v43; // x19
  __int64 v44; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__c **v45; // x10
  __int64 v46; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventMapEntity_o *v49; // [xsp+8h] [xbp-38h] BYREF
  int32_t v50; // [xsp+18h] [xbp-28h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-24h] BYREF

  v50 = mapId;
  v51 = eventId;
  if ( (byte_4BDD219 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDD219 = 1;
  }
  v49 = 0LL;
  v5 = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  lookup = (__int64 *)System_Int64__ToString((int64_t)&userIdNumber, 0LL);
  if ( !v5 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v5 + 32) = lookup;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)lookup, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_25;
  v21 = StringLiteral_1546/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1546/*":"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), v21, v15, v16, v17, v18, v19, v20);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v51, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = lookup,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)lookup, v22, v23, v24, v25, v26, v27),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v34 = StringLiteral_1546/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1546/*":"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 56), v34, v28, v29, v30, v31, v32, v33),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v50, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_25:
    sub_1C2209C(lookup, v8);
  }
  *(_QWORD *)(v5 + 64) = lookup;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)lookup, v35, v36, v37, v38, v39, v40);
  v41 = System_String__Concat_63129004((System_String_array *)v5, 0LL);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_325E674 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C22094(lookup, v8);
  v42 = *lookup;
  v43 = lookup;
  v44 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v45 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__c **)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *(v45 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_20;
    }
    v46 = v42 + 16LL * (*(_DWORD *)v45 + 1) + 312;
  }
  else
  {
LABEL_20:
    v46 = sub_1C73E18(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventMapEntity_o **, _QWORD))v46)(
          v43,
          v41,
          &v49,
          *(_QWORD *)(v46 + 8)) & 1) != 0 )
    return v49;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventMapMaster__TryGetEntity(
        UserEventMapMaster_o *this,
        UserEventMapEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDD217 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
    byte_4BDD217 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}