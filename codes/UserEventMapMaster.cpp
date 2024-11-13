void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, method, v2);
    byte_4B16E76 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    350,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_4B16E74 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16E74 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  UserEventMapEntity_c *v42; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4B16E78 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      userId,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&UserEventMapEntity_TypeInfo, v19, v20);
    byte_4B16E78 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEventMapEntity__TypeInfo,
                                                       userId,
                                                       *(_QWORD *)&eventId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
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
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8));
    v41 = v34;
    if ( v34 )
    {
      v42 = UserEventMapEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserEventMapEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)methodPtr_low
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * methodPtr_low - 8) != UserEventMapEntity_TypeInfo )
      {
        sub_1BCACFC(v34);
LABEL_36:
        sub_1BCAA3C(v34, v42);
      }
      if ( *(_QWORD *)(v34 + 16) == userId && *(_DWORD *)(v34 + 24) == eventId )
      {
        if ( !v21 )
          sub_1BCAA3C(v34, UserEventMapEntity_TypeInfo);
        items = v21->fields._items;
        v45 = Method_System_Collections_Generic_List_UserEventMapEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v34,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v41;
          sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v41, v35, v36, v37, v38, v39, v40);
        }
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_32;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_32:
    v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_40814760(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
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
  __int64 v14; // x20
  __int64 *lookup; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x20
  __int64 v50; // x8
  void *v51; // x19
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v53; // x10
  __int64 v54; // x0
  __int64 methodPtr_low; // x11
  int64_t UserId; // [xsp+0h] [xbp-40h] BYREF
  UserEventMapEntity_o *v58; // [xsp+8h] [xbp-38h] BYREF
  int32_t v59; // [xsp+18h] [xbp-28h] BYREF
  int32_t v60; // [xsp+1Ch] [xbp-24h] BYREF

  v59 = mapId;
  v60 = eventId;
  if ( (byte_4B16E77 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&eventId,
      *(_QWORD *)&mapId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&UserEventMapEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v11, v12);
    byte_4B16E77 = 1;
  }
  v58 = 0LL;
  v14 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (__int64 *)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v14 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v14 + 32) = lookup;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)lookup, v17, v18, v19, v20, v21, v22);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_25;
  v29 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 40), v29, v23, v24, v25, v26, v27, v28);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v60, 0LL);
  if ( *(_DWORD *)(v14 + 24) <= 2u
    || (*(_QWORD *)(v14 + 48) = lookup,
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 48), (int64_t)lookup, v30, v31, v32, v33, v34, v35),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (v42 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v14 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 56), v42, v36, v37, v38, v39, v40, v41),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v59, 0LL),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_25:
    sub_1BCAA44(lookup, v16);
  }
  *(_QWORD *)(v14 + 64) = lookup;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 64), (int64_t)lookup, v43, v44, v45, v46, v47, v48);
  v49 = System_String__Concat_62414748((System_String_array *)v14, 0LL);
  lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1BCAA3C(lookup, v16);
  v50 = *lookup;
  v51 = lookup;
  v52 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v53 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v52;
      v53 += 2;
      if ( !v52 )
        goto LABEL_16;
    }
    v54 = v50 + 16LL * (*(_DWORD *)v53 + 1) + 312;
  }
  else
  {
LABEL_16:
    v54 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventMapEntity_o **, _QWORD))v54)(
          v51,
          v49,
          &v58,
          *(_QWORD *)(v54 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v58 )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventMapEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v58->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventMapEntity_c *)v58->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventMapEntity_TypeInfo )
    return v58;
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

  if ( (byte_4B16E75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__, entity, userId);
    byte_4B16E75 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}