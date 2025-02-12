void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8775 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, method);
    byte_4BC8775 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    354,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_4BC8773 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__, userId);
    byte_4BC8773 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_324D130 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
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
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4BC8777 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserEventMapEntity__GetEnumerator__, userId);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_UserEventMapEntity__TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v12);
    byte_4BC8777 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_UserEventMapEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventMapEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_UserEventMapEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_UserEventMapEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v33 = v26;
    if ( v26 && *(_QWORD *)(v26 + 16) == userId && *(_DWORD *)(v26 + 24) == eventId )
    {
      if ( !v13 )
        sub_1C1AE30(v26, v26);
      items = v13->fields._items;
      v35 = Method_System_Collections_Generic_List_UserEventMapEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1C1AE30(v26, v26);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v33;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_30;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_30:
    v41 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_41303792(
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
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__c **v50; // x10
  __int64 v51; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventMapEntity_o *v54; // [xsp+8h] [xbp-38h] BYREF
  int32_t v55; // [xsp+18h] [xbp-28h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-24h] BYREF

  v55 = mapId;
  v56 = eventId;
  if ( (byte_4BC8776 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__get_lookup__,
      *(_QWORD *)&eventId);
    sub_1C1ABD4(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&string___TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_1546/*":"*/, v8);
    byte_4BC8776 = 1;
  }
  v54 = 0LL;
  v10 = sub_1C1AC7C(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC2585 = 1;
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
    goto LABEL_26;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v10 + 32) = lookup;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)lookup, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_25;
  v26 = StringLiteral_1546/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1546/*":"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 40), v26, v20, v21, v22, v23, v24, v25);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v56, 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = lookup,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)lookup, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v39 = StringLiteral_1546/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1546/*":"*/,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 56), v39, v33, v34, v35, v36, v37, v38),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v55, 0LL),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_25:
    sub_1C1AE38(lookup, v13);
  }
  *(_QWORD *)(v10 + 64) = lookup;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 64), (int64_t)lookup, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_63053896((System_String_array *)v10, 0LL);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_324AF24 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C1AE30(lookup, v13);
  v47 = *lookup;
  v48 = lookup;
  v49 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v50 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__c **)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo )
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
    v51 = sub_1C6CBB4(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventMapEntity_o **, _QWORD))v51)(
          v48,
          v46,
          &v54,
          *(_QWORD *)(v51 + 8)) & 1) != 0 )
    return v54;
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

  if ( (byte_4BC8774 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__, entity);
    byte_4BC8774 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}