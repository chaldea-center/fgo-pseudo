void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBBA1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, method);
    byte_49BBBA1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    356,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_49BBB9F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__, userId);
    byte_49BBB9F = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31A2454 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
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
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_49BBBA3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventMapEntity__GetEnumerator__, userId);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_UserEventMapEntity__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v12);
    byte_49BBBA3 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_UserEventMapEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v16);
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
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v25 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_UserEventMapEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v29 = v26;
    if ( v26 && *(_QWORD *)(v26 + 16) == userId && *(_DWORD *)(v26 + 24) == eventId )
    {
      if ( !v13 )
        sub_1B4D1EC(v26, v26);
      items = v13->fields._items;
      v31 = Method_System_Collections_Generic_List_UserEventMapEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B4D1EC(v26, v26);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 4), v29, v27, v28);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_30;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_30:
    v37 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_40682096(
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *v26; // x20
  __int64 v27; // x8
  void *v28; // x19
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__c **v30; // x10
  __int64 v31; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventMapEntity_o *v34; // [xsp+8h] [xbp-38h] BYREF
  int32_t v35; // [xsp+18h] [xbp-28h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-24h] BYREF

  v35 = mapId;
  v36 = eventId;
  if ( (byte_49BBBA2 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__get_lookup__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&string___TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_1468/*":"*/, v8);
    byte_49BBBA2 = 1;
  }
  v34 = 0LL;
  v10 = sub_1B4D038(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    byte_49B57A5 = 1;
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
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 32), (int32_t)lookup, v14, v15);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_25;
  v18 = StringLiteral_1468/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1468/*":"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 40), v18, v16, v17);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v36, 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = lookup,
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 48), (int32_t)lookup, v19, v20),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v23 = StringLiteral_1468/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1468/*":"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 56), v23, v21, v22),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v35, 0LL),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_25:
    sub_1B4D1F4(lookup, v13);
  }
  *(_QWORD *)(v10 + 64) = lookup;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 64), (int32_t)lookup, v24, v25);
  v26 = System_String__Concat_61133984((System_String_array *)v10, 0LL);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_31A0248 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1B4D1EC(lookup, v13);
  v27 = *lookup;
  v28 = lookup;
  v29 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v30 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__c **)(*(_QWORD *)(v27 + 176) + 8LL);
    while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_20;
    }
    v31 = v27 + 16LL * (*(_DWORD *)v30 + 1) + 312;
  }
  else
  {
LABEL_20:
    v31 = sub_1B9D724(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventMapEntity_o **, _QWORD))v31)(
          v28,
          v26,
          &v34,
          *(_QWORD *)(v31 + 8)) & 1) != 0 )
    return v34;
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

  if ( (byte_49BBBA0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__, entity);
    byte_49BBBA0 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}