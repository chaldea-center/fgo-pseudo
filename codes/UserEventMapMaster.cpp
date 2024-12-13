void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37E33 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, method);
    byte_4B37E33 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    350,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_4B37E31 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__, userId);
    byte_4B37E31 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31D2248 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x8
  UserEventMapEntity_c *v35; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v38; // x10
  __int64 size; // x11
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4B37E35 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userId);
    sub_1BD3458(&System_IDisposable_TypeInfo, v7);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v12);
    sub_1BD3458(&UserEventMapEntity_TypeInfo, v13);
    byte_4B37E35 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BD36B4(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v34 = v27;
    if ( v27 )
    {
      v35 = UserEventMapEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserEventMapEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != UserEventMapEntity_TypeInfo )
      {
        sub_1BD3974(v27);
LABEL_36:
        sub_1BD36B4(v27, v35);
      }
      if ( *(_QWORD *)(v27 + 16) == userId && *(_DWORD *)(v27 + 24) == eventId )
      {
        if ( !v14 )
          sub_1BD36B4(v27, UserEventMapEntity_TypeInfo);
        items = v14->fields._items;
        v38 = Method_System_Collections_Generic_List_UserEventMapEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v27,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v34;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 4), v34, v28, v29, v30, v31, v32, v33);
        }
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_32;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_32:
    v44 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_40907128(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  NetworkManager_c *v11; // x0
  __int64 *lookup; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_o *v46; // x20
  __int64 v47; // x8
  void *v48; // x19
  __int64 v49; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v50; // x10
  __int64 v51; // x0
  __int64 methodPtr_low; // x11
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventMapEntity_o *v55; // [xsp+8h] [xbp-38h] BYREF
  int32_t v56; // [xsp+18h] [xbp-28h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-24h] BYREF

  v56 = mapId;
  v57 = eventId;
  if ( (byte_4B37E34 & 1) == 0 )
  {
    sub_1BD3458(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_1BD3458(&NetworkManager_TypeInfo, v5);
    sub_1BD3458(&string___TypeInfo, v6);
    sub_1BD3458(&UserEventMapEntity_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_1541/*":"*/, v8);
    byte_4B37E34 = 1;
  }
  v55 = 0LL;
  v10 = sub_1BD3500(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v9);
    byte_4B31D77 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  userIdNumber = v11->static_fields->userIdNumber;
  lookup = (__int64 *)System_Int64__ToString((int64_t)&userIdNumber, 0LL);
  if ( !v10 )
    goto LABEL_30;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_29;
  *(_QWORD *)(v10 + 32) = lookup;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)lookup, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_29;
  v26 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1541/*":"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 40), v26, v20, v21, v22, v23, v24, v25);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v57, 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = lookup,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)lookup, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v39 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1541/*":"*/,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 56), v39, v33, v34, v35, v36, v37, v38),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v56, 0LL),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_29:
    sub_1BD36BC(lookup, v13);
  }
  *(_QWORD *)(v10 + 64) = lookup;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 64), (int64_t)lookup, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_62538776((System_String_array *)v10, 0LL);
  lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_30:
    sub_1BD36B4(lookup, v13);
  v47 = *lookup;
  v48 = lookup;
  v49 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v50 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v49;
      v50 += 2;
      if ( !v49 )
        goto LABEL_20;
    }
    v51 = v47 + 16LL * (*(_DWORD *)v50 + 1) + 312;
  }
  else
  {
LABEL_20:
    v51 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventMapEntity_o **, _QWORD))v51)(
          v48,
          v46,
          &v55,
          *(_QWORD *)(v51 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v55 )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventMapEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v55->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventMapEntity_c *)v55->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventMapEntity_TypeInfo )
    return v55;
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

  if ( (byte_4B37E32 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__, entity);
    byte_4B37E32 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}